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

// Function: sub_01D3E328
// Address: 0x1d3e328 - 0x1d3e348
void sub_01D3E328_0x1d3e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E328_0x1d3e328");
#endif

    ctx->pc = 0x1d3e328u;

    // 0x1d3e328: 0x240e0018  addiu       $t6, $zero, 0x18
    ctx->pc = 0x1d3e328u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d3e32c: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3e32cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e330: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x1d3e330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d3e334: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x1d3e334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1d3e338: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d3e338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d3e33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E33Cu;
        // 0x1d3e340: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E344u;
    // 0x1d3e344: 0x0  nop
    ctx->pc = 0x1d3e344u;
    // NOP
    ctx->pc = 0x1d3e348u;
}
