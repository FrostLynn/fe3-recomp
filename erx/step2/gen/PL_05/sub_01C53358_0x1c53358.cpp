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

// Function: sub_01C53358
// Address: 0x1c53358 - 0x1c53384
void sub_01C53358_0x1c53358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C53358_0x1c53358");
#endif

    ctx->pc = 0x1c53358u;

    // 0x1c53358: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c53358u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c5335c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c5335cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c53360: 0x25efeed8  addiu       $t7, $t7, -0x1128
    ctx->pc = 0x1c53360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962904));
    // 0x1c53364: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c53364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c53368: 0x3e00008  jr          $ra
    ctx->pc = 0x1C53368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53368u;
        // 0x1c5336c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C53368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C53370u;
    // 0x1c53370: 0x0  nop
    ctx->pc = 0x1c53370u;
    // NOP
    // 0x1c53374: 0x0  nop
    ctx->pc = 0x1c53374u;
    // NOP
    // 0x1c53378: 0x0  nop
    ctx->pc = 0x1c53378u;
    // NOP
    // 0x1c5337c: 0x0  nop
    ctx->pc = 0x1c5337cu;
    // NOP
    // 0x1c53380: 0x0  nop
    ctx->pc = 0x1c53380u;
    // NOP
    ctx->pc = 0x1c53384u;
}
