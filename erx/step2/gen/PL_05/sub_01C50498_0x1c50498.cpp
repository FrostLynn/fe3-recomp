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

// Function: sub_01C50498
// Address: 0x1c50498 - 0x1c504f0
void sub_01C50498_0x1c50498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50498_0x1c50498");
#endif

    switch (ctx->pc) {
        case 0x1c504b4u: goto label_1c504b4;
        case 0x1c504bcu: goto label_1c504bc;
        case 0x1c504d0u: goto label_1c504d0;
        case 0x1c504d4u: goto label_1c504d4;
        default: break;
    }

    ctx->pc = 0x1c50498u;

    // 0x1c50498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c50498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5049c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5049cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c504a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c504a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c504a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c504a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c504a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c504a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c504ac: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C504ACu;
    SET_GPR_U32(ctx, 31, 0x1C504B4u);
    ctx->pc = 0x1C504B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C504ACu;
    // 0x1c504b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C504ACu, 0x1C504B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504B4u;
label_1c504b4:
    // 0x1c504b4: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C504B4u;
    SET_GPR_U32(ctx, 31, 0x1C504BCu);
    ctx->pc = 0x1C504B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C504B4u;
    // 0x1c504b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C504B4u, 0x1C504BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504BCu;
label_1c504bc:
    // 0x1c504bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c504bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c504c0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C504C0u;
    {
        const bool branch_taken_0x1c504c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C504C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C504C0u;
        // 0x1c504c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c504c0) {
            ctx->pc = 0x1C504E4u;
            goto label_1c504e4;
        }
    }
    ctx->pc = 0x1C504C8u;
    // 0x1c504c8: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C504C8u;
    SET_GPR_U32(ctx, 31, 0x1C504D0u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C504C8u, 0x1C504D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C504D0u;
label_1c504d0:
    // 0x1c504d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c504d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c504d4:
    // 0x1c504d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c504d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c504d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c504d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c504dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C504DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C504E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C504DCu;
        // 0x1c504e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C504DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C504E4u;
label_1c504e4:
    // 0x1c504e4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C504E4u;
    {
        const bool branch_taken_0x1c504e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C504E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C504E4u;
        // 0x1c504e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c504e4) {
            ctx->pc = 0x1C504D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c504d4;
        }
    }
    ctx->pc = 0x1C504ECu;
    // 0x1c504ec: 0x0  nop
    ctx->pc = 0x1c504ecu;
    // NOP
    ctx->pc = 0x1c504f0u;
}
