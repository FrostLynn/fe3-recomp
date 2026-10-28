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

// Function: sub_01DCF648
// Address: 0x1dcf648 - 0x1dcf680
void sub_01DCF648_0x1dcf648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF648_0x1dcf648");
#endif

    switch (ctx->pc) {
        case 0x1dcf65cu: goto label_1dcf65c;
        default: break;
    }

    ctx->pc = 0x1dcf648u;

    // 0x1dcf648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcf648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcf64c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcf64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcf650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcf650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcf654: 0xc773d22  jal         func_1DCF488
    ctx->pc = 0x1DCF654u;
    SET_GPR_U32(ctx, 31, 0x1DCF65Cu);
    ctx->pc = 0x1DCF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF654u;
    // 0x1dcf658: 0x24840170  addiu       $a0, $a0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF488u, 0x1DCF654u, 0x1DCF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF65Cu;
label_1dcf65c:
    // 0x1dcf65c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF65Cu;
    {
        const bool branch_taken_0x1dcf65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF65Cu;
        // 0x1dcf660: 0x2702b  sltu        $t6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf65c) {
            ctx->pc = 0x1DCF66Cu;
            goto label_1dcf66c;
        }
    }
    ctx->pc = 0x1DCF664u;
    // 0x1dcf664: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf668: 0xa1e00429  sb          $zero, 0x429($t7)
    ctx->pc = 0x1dcf668u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1065), (uint8_t)GPR_U32(ctx, 0));
label_1dcf66c:
    // 0x1dcf66c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcf66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf670: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x1dcf670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf674: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF674u;
        // 0x1dcf678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF67Cu;
    // 0x1dcf67c: 0x0  nop
    ctx->pc = 0x1dcf67cu;
    // NOP
    ctx->pc = 0x1dcf680u;
}
