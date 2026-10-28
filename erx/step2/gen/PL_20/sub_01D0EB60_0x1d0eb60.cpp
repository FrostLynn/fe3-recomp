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

// Function: sub_01D0EB60
// Address: 0x1d0eb60 - 0x1d0ebc8
void sub_01D0EB60_0x1d0eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EB60_0x1d0eb60");
#endif

    ctx->pc = 0x1d0eb60u;

    // 0x1d0eb60: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0eb60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0eb64: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1d0eb64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1d0eb68: 0x25ef8fb4  addiu       $t7, $t7, -0x704C
    ctx->pc = 0x1d0eb68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938548));
    // 0x1d0eb6c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1d0eb6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0eb70: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0eb70u;
    { uint32_t bits = FAST_READ32(0x1D18FB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0eb74: 0x25ce0070  addiu       $t6, $t6, 0x70
    ctx->pc = 0x1d0eb74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 112));
    // 0x1d0eb78: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x1d0eb78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d0eb7c: 0x24090147  addiu       $t1, $zero, 0x147
    ctx->pc = 0x1d0eb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d0eb80: 0xe5c04594  swc1        $f0, 0x4594($t6)
    ctx->pc = 0x1d0eb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17812), bits); }
    // 0x1d0eb84: 0x240c0149  addiu       $t4, $zero, 0x149
    ctx->pc = 0x1d0eb84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d0eb88: 0x8dcf0014  lw          $t7, 0x14($t6)
    ctx->pc = 0x1d0eb88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x1d0eb8c: 0x240d0148  addiu       $t5, $zero, 0x148
    ctx->pc = 0x1d0eb8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d0eb90: 0xa1e05d06  sb          $zero, 0x5D06($t7)
    ctx->pc = 0x1d0eb90u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 23814), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0eb94: 0xac8d0d2c  sw          $t5, 0xD2C($a0)
    ctx->pc = 0x1d0eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 13));
    // 0x1d0eb98: 0xac8b0d08  sw          $t3, 0xD08($a0)
    ctx->pc = 0x1d0eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 11));
    // 0x1d0eb9c: 0xac8a0d0c  sw          $t2, 0xD0C($a0)
    ctx->pc = 0x1d0eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 10));
    // 0x1d0eba0: 0xac890d24  sw          $t1, 0xD24($a0)
    ctx->pc = 0x1d0eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 9));
    // 0x1d0eba4: 0xac8c0d28  sw          $t4, 0xD28($a0)
    ctx->pc = 0x1d0eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 12));
    // 0x1d0eba8: 0xac8b0d00  sw          $t3, 0xD00($a0)
    ctx->pc = 0x1d0eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 11));
    // 0x1d0ebac: 0xac8a0d04  sw          $t2, 0xD04($a0)
    ctx->pc = 0x1d0ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 10));
    // 0x1d0ebb0: 0xac890d18  sw          $t1, 0xD18($a0)
    ctx->pc = 0x1d0ebb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 9));
    // 0x1d0ebb4: 0xac8c0d1c  sw          $t4, 0xD1C($a0)
    ctx->pc = 0x1d0ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 12));
    // 0x1d0ebb8: 0xac8d0d20  sw          $t5, 0xD20($a0)
    ctx->pc = 0x1d0ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 13));
    // 0x1d0ebbc: 0xaf80807c  sw          $zero, -0x7F84($gp)
    ctx->pc = 0x1d0ebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934652), GPR_U32(ctx, 0));
    // 0x1d0ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EBC0u;
        // 0x1d0ebc4: 0xaf808080  sw          $zero, -0x7F80($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EBC8u;
}
