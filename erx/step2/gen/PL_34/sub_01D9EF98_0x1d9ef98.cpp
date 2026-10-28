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

// Function: sub_01D9EF98
// Address: 0x1d9ef98 - 0x1d9efb8
void sub_01D9EF98_0x1d9ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EF98_0x1d9ef98");
#endif

    ctx->pc = 0x1d9ef98u;

    // 0x1d9ef98: 0x240e0018  addiu       $t6, $zero, 0x18
    ctx->pc = 0x1d9ef98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d9ef9c: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d9ef9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d9efa0: 0x8e2018  mult        $a0, $a0, $t6
    ctx->pc = 0x1d9efa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d9efa4: 0x25ef0910  addiu       $t7, $t7, 0x910
    ctx->pc = 0x1d9efa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2320));
    // 0x1d9efa8: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d9efa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d9efac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFACu;
        // 0x1d9efb0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EFB4u;
    // 0x1d9efb4: 0x0  nop
    ctx->pc = 0x1d9efb4u;
    // NOP
    ctx->pc = 0x1d9efb8u;
}
