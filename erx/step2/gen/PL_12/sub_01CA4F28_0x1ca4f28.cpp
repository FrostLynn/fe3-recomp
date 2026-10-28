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

// Function: sub_01CA4F28
// Address: 0x1ca4f28 - 0x1ca4fa8
void sub_01CA4F28_0x1ca4f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4F28_0x1ca4f28");
#endif

    switch (ctx->pc) {
        case 0x1ca4f68u: goto label_1ca4f68;
        case 0x1ca4f6cu: goto label_1ca4f6c;
        case 0x1ca4f88u: goto label_1ca4f88;
        case 0x1ca4f9cu: goto label_1ca4f9c;
        default: break;
    }

    ctx->pc = 0x1ca4f28u;

    // 0x1ca4f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4f2c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1ca4f2cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f30: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1ca4f30u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca4f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4f38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ca4f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f3c: 0x240f0021  addiu       $t7, $zero, 0x21
    ctx->pc = 0x1ca4f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1ca4f40: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CA4F40u;
    {
        const bool branch_taken_0x1ca4f40 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CA4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F40u;
        // 0x1ca4f44: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f40) {
            ctx->pc = 0x1CA4F90u;
            goto label_1ca4f90;
        }
    }
    ctx->pc = 0x1CA4F48u;
    // 0x1ca4f48: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x1ca4f48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1ca4f4c: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA4F4Cu;
    {
        const bool branch_taken_0x1ca4f4c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CA4F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F4Cu;
        // 0x1ca4f50: 0x3c0401ca  lui         $a0, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)458 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f4c) {
            ctx->pc = 0x1CA4F78u;
            goto label_1ca4f78;
        }
    }
    ctx->pc = 0x1CA4F54u;
    // 0x1ca4f54: 0x3c0501ca  lui         $a1, 0x1CA
    ctx->pc = 0x1ca4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)458 << 16));
    // 0x1ca4f58: 0x248427b8  addiu       $a0, $a0, 0x27B8
    ctx->pc = 0x1ca4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10168));
    // 0x1ca4f5c: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x1ca4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
    // 0x1ca4f60: 0xc7289f0  jal         func_1CA27C0
    ctx->pc = 0x1CA4F60u;
    SET_GPR_U32(ctx, 31, 0x1CA4F68u);
    ctx->pc = 0x1CA4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4F60u;
    // 0x1ca4f64: 0x24060315  addiu       $a2, $zero, 0x315 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 789));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA27C0u, 0x1CA4F60u, 0x1CA4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4F68u;
label_1ca4f68:
    // 0x1ca4f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca4f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4f6c:
    // 0x1ca4f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F70u;
        // 0x1ca4f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4F78u;
label_1ca4f78:
    // 0x1ca4f78: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1ca4f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f7c: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x1ca4f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
    // 0x1ca4f80: 0xc728f94  jal         func_1CA3E50
    ctx->pc = 0x1CA4F80u;
    SET_GPR_U32(ctx, 31, 0x1CA4F88u);
    ctx->pc = 0x1CA4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4F80u;
    // 0x1ca4f84: 0x24c68d60  addiu       $a2, $a2, -0x72A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3E50u, 0x1CA4F80u, 0x1CA4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4F88u;
label_1ca4f88:
    // 0x1ca4f88: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CA4F88u;
    {
        const bool branch_taken_0x1ca4f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F88u;
        // 0x1ca4f8c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f88) {
            ctx->pc = 0x1CA4F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4f6c;
        }
    }
    ctx->pc = 0x1CA4F90u;
label_1ca4f90:
    // 0x1ca4f90: 0x3c0601cb  lui         $a2, 0x1CB
    ctx->pc = 0x1ca4f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)459 << 16));
    // 0x1ca4f94: 0xc72904e  jal         func_1CA4138
    ctx->pc = 0x1CA4F94u;
    SET_GPR_U32(ctx, 31, 0x1CA4F9Cu);
    ctx->pc = 0x1CA4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4F94u;
    // 0x1ca4f98: 0x24c68d30  addiu       $a2, $a2, -0x72D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA4138u, 0x1CA4F94u, 0x1CA4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4F9Cu;
label_1ca4f9c:
    // 0x1ca4f9c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CA4F9Cu;
    {
        const bool branch_taken_0x1ca4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4F9Cu;
        // 0x1ca4fa0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f9c) {
            ctx->pc = 0x1CA4F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4f6c;
        }
    }
    ctx->pc = 0x1CA4FA4u;
    // 0x1ca4fa4: 0x0  nop
    ctx->pc = 0x1ca4fa4u;
    // NOP
    ctx->pc = 0x1ca4fa8u;
}
