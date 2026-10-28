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

// Function: sub_01D00468
// Address: 0x1d00468 - 0x1d00494
void sub_01D00468_0x1d00468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00468_0x1d00468");
#endif

    ctx->pc = 0x1d00468u;

    // 0x1d00468: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d00468u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d0046c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d0046cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d00470: 0x25efb698  addiu       $t7, $t7, -0x4968
    ctx->pc = 0x1d00470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948504));
    // 0x1d00474: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d00474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d00478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D00478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00478u;
        // 0x1d0047c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D00478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D00480u;
    // 0x1d00480: 0x0  nop
    ctx->pc = 0x1d00480u;
    // NOP
    // 0x1d00484: 0x0  nop
    ctx->pc = 0x1d00484u;
    // NOP
    // 0x1d00488: 0x0  nop
    ctx->pc = 0x1d00488u;
    // NOP
    // 0x1d0048c: 0x0  nop
    ctx->pc = 0x1d0048cu;
    // NOP
    // 0x1d00490: 0x0  nop
    ctx->pc = 0x1d00490u;
    // NOP
    ctx->pc = 0x1d00494u;
}
