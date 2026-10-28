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

// Function: sub_01D71888
// Address: 0x1d71888 - 0x1d718b4
void sub_01D71888_0x1d71888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71888_0x1d71888");
#endif

    ctx->pc = 0x1d71888u;

    // 0x1d71888: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d71888u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d7188c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d7188cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d71890: 0x25ef7580  addiu       $t7, $t7, 0x7580
    ctx->pc = 0x1d71890u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30080));
    // 0x1d71894: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d71894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d71898: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71898u;
        // 0x1d7189c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D718A0u;
    // 0x1d718a0: 0x0  nop
    ctx->pc = 0x1d718a0u;
    // NOP
    // 0x1d718a4: 0x0  nop
    ctx->pc = 0x1d718a4u;
    // NOP
    // 0x1d718a8: 0x0  nop
    ctx->pc = 0x1d718a8u;
    // NOP
    // 0x1d718ac: 0x0  nop
    ctx->pc = 0x1d718acu;
    // NOP
    // 0x1d718b0: 0x0  nop
    ctx->pc = 0x1d718b0u;
    // NOP
    ctx->pc = 0x1d718b4u;
}
