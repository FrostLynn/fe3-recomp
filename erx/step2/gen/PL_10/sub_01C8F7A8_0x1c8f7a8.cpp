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

// Function: sub_01C8F7A8
// Address: 0x1c8f7a8 - 0x1c8f7d4
void sub_01C8F7A8_0x1c8f7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F7A8_0x1c8f7a8");
#endif

    ctx->pc = 0x1c8f7a8u;

    // 0x1c8f7a8: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c8f7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c8f7ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c8f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8f7b0: 0x25ef8480  addiu       $t7, $t7, -0x7B80
    ctx->pc = 0x1c8f7b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935680));
    // 0x1c8f7b4: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c8f7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c8f7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F7B8u;
        // 0x1c8f7bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F7C0u;
    // 0x1c8f7c0: 0x0  nop
    ctx->pc = 0x1c8f7c0u;
    // NOP
    // 0x1c8f7c4: 0x0  nop
    ctx->pc = 0x1c8f7c4u;
    // NOP
    // 0x1c8f7c8: 0x0  nop
    ctx->pc = 0x1c8f7c8u;
    // NOP
    // 0x1c8f7cc: 0x0  nop
    ctx->pc = 0x1c8f7ccu;
    // NOP
    // 0x1c8f7d0: 0x0  nop
    ctx->pc = 0x1c8f7d0u;
    // NOP
    ctx->pc = 0x1c8f7d4u;
}
