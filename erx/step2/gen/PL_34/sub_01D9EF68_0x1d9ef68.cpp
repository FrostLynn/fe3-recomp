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

// Function: sub_01D9EF68
// Address: 0x1d9ef68 - 0x1d9ef98
void sub_01D9EF68_0x1d9ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EF68_0x1d9ef68");
#endif

    ctx->pc = 0x1d9ef68u;

    // 0x1d9ef68: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1d9ef68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d9ef6c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d9ef6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d9ef70: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1d9ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1d9ef74: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d9ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d9ef78: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1d9ef78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d9ef7c: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1d9ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1d9ef80: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1d9ef80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d9ef84: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1d9ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1d9ef88: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1d9ef88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d9ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF8Cu;
        // 0x1d9ef90: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EF94u;
    // 0x1d9ef94: 0x0  nop
    ctx->pc = 0x1d9ef94u;
    // NOP
    ctx->pc = 0x1d9ef98u;
}
