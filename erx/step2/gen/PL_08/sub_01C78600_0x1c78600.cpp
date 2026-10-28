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

// Function: sub_01C78600
// Address: 0x1c78600 - 0x1c78698
void sub_01C78600_0x1c78600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78600_0x1c78600");
#endif

    switch (ctx->pc) {
        case 0x1c78614u: goto label_1c78614;
        case 0x1c78628u: goto label_1c78628;
        case 0x1c7862cu: goto label_1c7862c;
        case 0x1c78674u: goto label_1c78674;
        case 0x1c78680u: goto label_1c78680;
        default: break;
    }

    ctx->pc = 0x1c78600u;

    // 0x1c78600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7860c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7860Cu;
    SET_GPR_U32(ctx, 31, 0x1C78614u);
    ctx->pc = 0x1C78610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7860Cu;
    // 0x1c78610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7860Cu, 0x1C78614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78614u;
label_1c78614:
    // 0x1c78614: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c78614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78618: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C78618u;
    {
        const bool branch_taken_0x1c78618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78618u;
        // 0x1c7861c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78618) {
            ctx->pc = 0x1C7863Cu;
            goto label_1c7863c;
        }
    }
    ctx->pc = 0x1C78620u;
    // 0x1c78620: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C78620u;
    SET_GPR_U32(ctx, 31, 0x1C78628u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C78620u, 0x1C78628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78628u;
label_1c78628:
    // 0x1c78628: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c78628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7862c:
    // 0x1c7862c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7862cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78634: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78634u;
        // 0x1c78638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7863Cu;
label_1c7863c:
    // 0x1c7863c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7863Cu;
    {
        const bool branch_taken_0x1c7863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7863Cu;
        // 0x1c78640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7863c) {
            ctx->pc = 0x1C7862Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7862c;
        }
    }
    ctx->pc = 0x1C78644u;
    // 0x1c78644: 0x0  nop
    ctx->pc = 0x1c78644u;
    // NOP
    // 0x1c78648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7864c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7864cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78654: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c78654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7865c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7865cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78664: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7866c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7866Cu;
    SET_GPR_U32(ctx, 31, 0x1C78674u);
    ctx->pc = 0x1C78670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7866Cu;
    // 0x1c78670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7866Cu, 0x1C78674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78674u;
label_1c78674:
    // 0x1c78674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78678: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78678u;
    SET_GPR_U32(ctx, 31, 0x1C78680u);
    ctx->pc = 0x1C7867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78678u;
    // 0x1c7867c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78678u, 0x1C78680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78680u;
label_1c78680:
    // 0x1c78680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78684: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7868c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1c7868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c78690: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C78690u;
    ctx->pc = 0x1C78694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78690u;
    // 0x1c78694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78698u;
}
