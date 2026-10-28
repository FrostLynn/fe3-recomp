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

// Function: sub_01CDD650
// Address: 0x1cdd650 - 0x1cdd6d0
void sub_01CDD650_0x1cdd650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD650_0x1cdd650");
#endif

    ctx->pc = 0x1cdd650u;

    // 0x1cdd650: 0x8c8e03a4  lw          $t6, 0x3A4($a0)
    ctx->pc = 0x1cdd650u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x1cdd654: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1cdd654u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd658: 0x240f015b  addiu       $t7, $zero, 0x15B
    ctx->pc = 0x1cdd658u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x1cdd65c: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDD65Cu;
    {
        const bool branch_taken_0x1cdd65c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD65Cu;
        // 0x1cdd660: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd65c) {
            ctx->pc = 0x1CDD678u;
            goto label_1cdd678;
        }
    }
    ctx->pc = 0x1CDD664u;
    // 0x1cdd664: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x1cdd664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1cdd668: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD668u;
    {
        const bool branch_taken_0x1cdd668 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD668u;
        // 0x1cdd66c: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd668) {
            ctx->pc = 0x1CDD678u;
            goto label_1cdd678;
        }
    }
    ctx->pc = 0x1CDD670u;
    // 0x1cdd670: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD670u;
        // 0x1cdd674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD678u;
label_1cdd678:
    // 0x1cdd678: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1cdd678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdd67c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cdd67cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd680: 0x108e0010  beq         $a0, $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CDD680u;
    {
        const bool branch_taken_0x1cdd680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x1CDD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD680u;
        // 0x1cdd684: 0x288f0002  slti        $t7, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd680) {
            ctx->pc = 0x1CDD6C4u;
            goto label_1cdd6c4;
        }
    }
    ctx->pc = 0x1CDD688u;
    // 0x1cdd688: 0x51e00008  beql        $t7, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDD688u;
    {
        const bool branch_taken_0x1cdd688 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd688) {
            ctx->pc = 0x1CDD68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD688u;
            // 0x1cdd68c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD6ACu;
            goto label_1cdd6ac;
        }
    }
    ctx->pc = 0x1CDD690u;
    // 0x1cdd690: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD690u;
    {
        const bool branch_taken_0x1cdd690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd690) {
            ctx->pc = 0x1CDD694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD690u;
            // 0x1cdd694: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD6A0u;
            goto label_1cdd6a0;
        }
    }
    ctx->pc = 0x1CDD698u;
    // 0x1cdd698: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD6A0u;
label_1cdd6a0:
    // 0x1cdd6a0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdd6a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdd6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD6A4u;
        // 0x1cdd6a8: 0x1ed100a  movz        $v0, $t7, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD6ACu;
label_1cdd6ac:
    // 0x1cdd6ac: 0x108f0003  beq         $a0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD6ACu;
    {
        const bool branch_taken_0x1cdd6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdd6ac) {
            ctx->pc = 0x1CDD6BCu;
            goto label_1cdd6bc;
        }
    }
    ctx->pc = 0x1CDD6B4u;
    // 0x1cdd6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD6BCu;
label_1cdd6bc:
    // 0x1cdd6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD6BCu;
        // 0x1cdd6c0: 0x2da20001  sltiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD6C4u;
label_1cdd6c4:
    // 0x1cdd6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD6C4u;
        // 0x1cdd6c8: 0xd1040  sll         $v0, $t5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD6CCu;
    // 0x1cdd6cc: 0x0  nop
    ctx->pc = 0x1cdd6ccu;
    // NOP
    ctx->pc = 0x1cdd6d0u;
}
