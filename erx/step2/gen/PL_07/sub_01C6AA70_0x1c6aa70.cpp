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

// Function: sub_01C6AA70
// Address: 0x1c6aa70 - 0x1c6ab00
void sub_01C6AA70_0x1c6aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6AA70_0x1c6aa70");
#endif

    switch (ctx->pc) {
        case 0x1c6aa84u: goto label_1c6aa84;
        case 0x1c6aa98u: goto label_1c6aa98;
        case 0x1c6aa9cu: goto label_1c6aa9c;
        case 0x1c6aae4u: goto label_1c6aae4;
        default: break;
    }

    ctx->pc = 0x1c6aa70u;

    // 0x1c6aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6aa74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6aa78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6aa7c: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6AA7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AA84u);
    ctx->pc = 0x1C6AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA7Cu;
    // 0x1c6aa80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6AA7Cu, 0x1C6AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA84u;
label_1c6aa84:
    // 0x1c6aa84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6aa84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6aa88: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AA88u;
    {
        const bool branch_taken_0x1c6aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AA88u;
        // 0x1c6aa8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aa88) {
            ctx->pc = 0x1C6AAACu;
            goto label_1c6aaac;
        }
    }
    ctx->pc = 0x1C6AA90u;
    // 0x1c6aa90: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6AA90u;
    SET_GPR_U32(ctx, 31, 0x1C6AA98u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6AA90u, 0x1C6AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AA98u;
label_1c6aa98:
    // 0x1c6aa98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6aa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6aa9c:
    // 0x1c6aa9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6aa9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6aaa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6aaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6aaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AAA4u;
        // 0x1c6aaa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AAACu;
label_1c6aaac:
    // 0x1c6aaac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6AAACu;
    {
        const bool branch_taken_0x1c6aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AAACu;
        // 0x1c6aab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aaac) {
            ctx->pc = 0x1C6AA9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6aa9c;
        }
    }
    ctx->pc = 0x1C6AAB4u;
    // 0x1c6aab4: 0x0  nop
    ctx->pc = 0x1c6aab4u;
    // NOP
    // 0x1c6aab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6aabc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6aabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6aac4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6aac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6aac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6aacc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6aaccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6aad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aad8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6aad8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6aadc: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6AADCu;
    SET_GPR_U32(ctx, 31, 0x1C6AAE4u);
    ctx->pc = 0x1C6AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AADCu;
    // 0x1c6aae0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6AADCu, 0x1C6AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AAE4u;
label_1c6aae4:
    // 0x1c6aae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aae8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6aaec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6aaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6aaf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c6aaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6aaf4: 0x871a79c  j           func_1C69E70
    ctx->pc = 0x1C6AAF4u;
    ctx->pc = 0x1C6AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AAF4u;
    // 0x1c6aaf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    sub_01C69E70_0x1c69e70(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6AAFCu;
    // 0x1c6aafc: 0x0  nop
    ctx->pc = 0x1c6aafcu;
    // NOP
    ctx->pc = 0x1c6ab00u;
}
