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

// Function: sub_01D00240
// Address: 0x1d00240 - 0x1d00260
void sub_01D00240_0x1d00240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00240_0x1d00240");
#endif

    ctx->pc = 0x1d00240u;

    // 0x1d00240: 0x240e0018  addiu       $t6, $zero, 0x18
    ctx->pc = 0x1d00240u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d00244: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1d00244u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1d00248: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x1d00248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d0024c: 0x25ef5e40  addiu       $t7, $t7, 0x5E40
    ctx->pc = 0x1d0024cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24128));
    // 0x1d00250: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d00250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d00254: 0x3e00008  jr          $ra
    ctx->pc = 0x1D00254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D00258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D00254u;
        // 0x1d00258: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D00254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0025Cu;
    // 0x1d0025c: 0x0  nop
    ctx->pc = 0x1d0025cu;
    // NOP
    ctx->pc = 0x1d00260u;
}
