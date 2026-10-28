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

// Function: sub_01D680B0
// Address: 0x1d680b0 - 0x1d680f0
void sub_01D680B0_0x1d680b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D680B0_0x1d680b0");
#endif

    ctx->pc = 0x1d680b0u;

    // 0x1d680b0: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d680b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d680b4: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1d680b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1d680b8: 0x25efff84  addiu       $t7, $t7, -0x7C
    ctx->pc = 0x1d680b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967172));
    // 0x1d680bc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d680bcu;
    { uint32_t bits = FAST_READ32(0x1D6FF84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d680c0: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1d680c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d680c4: 0xe5c04604  swc1        $f0, 0x4604($t6)
    ctx->pc = 0x1d680c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17924), bits); }
    // 0x1d680c8: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1d680c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1d680cc: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d680ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d680d0: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1d680d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d680d4: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d680d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d680d8: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1d680d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1d680dc: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1d680dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d680e0: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1d680e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d680e4: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1d680e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1d680e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D680E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D680ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D680E8u;
        // 0x1d680ec: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D680E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D680F0u;
}
