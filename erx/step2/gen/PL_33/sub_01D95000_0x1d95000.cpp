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

// Function: sub_01D95000
// Address: 0x1d95000 - 0x1d95060
void sub_01D95000_0x1d95000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D95000_0x1d95000");
#endif

    switch (ctx->pc) {
        case 0x1d95030u: goto label_1d95030;
        case 0x1d95034u: goto label_1d95034;
        case 0x1d95054u: goto label_1d95054;
        default: break;
    }

    ctx->pc = 0x1d95000u;

    // 0x1d95000: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1d95000u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d95004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d95008: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d95008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9500c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d95010: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1d95010u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95014: 0x24060337  addiu       $a2, $zero, 0x337
    ctx->pc = 0x1d95014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 823));
    // 0x1d95018: 0x240f0142  addiu       $t7, $zero, 0x142
    ctx->pc = 0x1d95018u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x1d9501c: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9501Cu;
    {
        const bool branch_taken_0x1d9501c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D95020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9501Cu;
        // 0x1d95020: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9501c) {
            ctx->pc = 0x1D95040u;
            goto label_1d95040;
        }
    }
    ctx->pc = 0x1D95024u;
    // 0x1d95024: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x1d95024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x1d95028: 0xc764e2a  jal         func_1D938A8
    ctx->pc = 0x1D95028u;
    SET_GPR_U32(ctx, 31, 0x1D95030u);
    ctx->pc = 0x1D9502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95028u;
    // 0x1d9502c: 0x24c68920  addiu       $a2, $a2, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D938A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D938A8u, 0x1D95028u, 0x1D95030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95030u;
label_1d95030:
    // 0x1d95030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d95030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d95034:
    // 0x1d95034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d95034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95038: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95038u;
        // 0x1d9503c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D95040u;
label_1d95040:
    // 0x1d95040: 0x3c0501d9  lui         $a1, 0x1D9
    ctx->pc = 0x1d95040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)473 << 16));
    // 0x1d95044: 0x3c0401d9  lui         $a0, 0x1D9
    ctx->pc = 0x1d95044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)473 << 16));
    // 0x1d95048: 0x24a55b20  addiu       $a1, $a1, 0x5B20
    ctx->pc = 0x1d95048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23328));
    // 0x1d9504c: 0xc764a32  jal         func_1D928C8
    ctx->pc = 0x1D9504Cu;
    SET_GPR_U32(ctx, 31, 0x1D95054u);
    ctx->pc = 0x1D95050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9504Cu;
    // 0x1d95050: 0x248428c0  addiu       $a0, $a0, 0x28C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D928C8u, 0x1D9504Cu, 0x1D95054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95054u;
label_1d95054:
    // 0x1d95054: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D95054u;
    {
        const bool branch_taken_0x1d95054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D95058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95054u;
        // 0x1d95058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95054) {
            ctx->pc = 0x1D95034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d95034;
        }
    }
    ctx->pc = 0x1D9505Cu;
    // 0x1d9505c: 0x0  nop
    ctx->pc = 0x1d9505cu;
    // NOP
    ctx->pc = 0x1d95060u;
}
