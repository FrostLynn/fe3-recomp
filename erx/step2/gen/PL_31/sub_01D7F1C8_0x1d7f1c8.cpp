#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D7F1C8
// Address: 0x1d7f1c8 - 0x1d7f268
void sub_01D7F1C8_0x1d7f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F1C8_0x1d7f1c8");
#endif

    switch (ctx->pc) {
        case 0x1d7f1dcu: goto label_1d7f1dc;
        case 0x1d7f1f0u: goto label_1d7f1f0;
        case 0x1d7f1f4u: goto label_1d7f1f4;
        case 0x1d7f23cu: goto label_1d7f23c;
        case 0x1d7f248u: goto label_1d7f248;
        default: break;
    }

    ctx->pc = 0x1d7f1c8u;

    // 0x1d7f1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f1d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f1d4: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F1D4u;
    SET_GPR_U32(ctx, 31, 0x1D7F1DCu);
    ctx->pc = 0x1D7F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F1D4u;
    // 0x1d7f1d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F1D4u, 0x1D7F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F1DCu;
label_1d7f1dc:
    // 0x1d7f1dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f1e0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7F1E0u;
    {
        const bool branch_taken_0x1d7f1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F1E0u;
        // 0x1d7f1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f1e0) {
            ctx->pc = 0x1D7F204u;
            goto label_1d7f204;
        }
    }
    ctx->pc = 0x1D7F1E8u;
    // 0x1d7f1e8: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F1E8u;
    SET_GPR_U32(ctx, 31, 0x1D7F1F0u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F1E8u, 0x1D7F1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F1F0u;
label_1d7f1f0:
    // 0x1d7f1f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f1f4:
    // 0x1d7f1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f1f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F1FCu;
        // 0x1d7f200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F204u;
label_1d7f204:
    // 0x1d7f204: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7F204u;
    {
        const bool branch_taken_0x1d7f204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F204u;
        // 0x1d7f208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f204) {
            ctx->pc = 0x1D7F1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f1f4;
        }
    }
    ctx->pc = 0x1D7F20Cu;
    // 0x1d7f20c: 0x0  nop
    ctx->pc = 0x1d7f20cu;
    // NOP
    // 0x1d7f210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f214: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7f214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f21c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f220: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f22c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7f22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f234: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F234u;
    SET_GPR_U32(ctx, 31, 0x1D7F23Cu);
    ctx->pc = 0x1D7F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F234u;
    // 0x1d7f238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F234u, 0x1D7F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F23Cu;
label_1d7f23c:
    // 0x1d7f23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f240: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7F240u;
    SET_GPR_U32(ctx, 31, 0x1D7F248u);
    ctx->pc = 0x1D7F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F240u;
    // 0x1d7f244: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7F240u, 0x1D7F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F248u;
label_1d7f248:
    // 0x1d7f248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f24c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f25c: 0x875f5d0  j           func_1D7D740
    ctx->pc = 0x1D7F25Cu;
    ctx->pc = 0x1D7F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F25Cu;
    // 0x1d7f260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    sub_01D7D740_0x1d7d740(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F264u;
    // 0x1d7f264: 0x0  nop
    ctx->pc = 0x1d7f264u;
    // NOP
    ctx->pc = 0x1d7f268u;
}
