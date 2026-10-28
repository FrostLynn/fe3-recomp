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

// Function: sub_01C8F670
// Address: 0x1c8f670 - 0x1c8f690
void sub_01C8F670_0x1c8f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F670_0x1c8f670");
#endif

    ctx->pc = 0x1c8f670u;

    // 0x1c8f670: 0x240e0018  addiu       $t6, $zero, 0x18
    ctx->pc = 0x1c8f670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c8f674: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c8f674u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f678: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x1c8f678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c8f67c: 0x25ef2920  addiu       $t7, $t7, 0x2920
    ctx->pc = 0x1c8f67cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 10528));
    // 0x1c8f680: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c8f680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c8f684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F684u;
        // 0x1c8f688: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F68Cu;
    // 0x1c8f68c: 0x0  nop
    ctx->pc = 0x1c8f68cu;
    // NOP
    ctx->pc = 0x1c8f690u;
}
