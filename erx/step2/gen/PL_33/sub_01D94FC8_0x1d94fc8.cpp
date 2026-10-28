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

// Function: sub_01D94FC8
// Address: 0x1d94fc8 - 0x1d94fe8
void sub_01D94FC8_0x1d94fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94FC8_0x1d94fc8");
#endif

    ctx->pc = 0x1d94fc8u;

    // 0x1d94fc8: 0x240e0018  addiu       $t6, $zero, 0x18
    ctx->pc = 0x1d94fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d94fcc: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d94fccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d94fd0: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x1d94fd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d94fd4: 0x25ef6970  addiu       $t7, $t7, 0x6970
    ctx->pc = 0x1d94fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 26992));
    // 0x1d94fd8: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d94fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d94fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94FDCu;
        // 0x1d94fe0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94FE4u;
    // 0x1d94fe4: 0x0  nop
    ctx->pc = 0x1d94fe4u;
    // NOP
    ctx->pc = 0x1d94fe8u;
}
