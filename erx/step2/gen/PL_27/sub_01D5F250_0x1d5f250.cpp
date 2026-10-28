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

// Function: sub_01D5F250
// Address: 0x1d5f250 - 0x1d5f290
void sub_01D5F250_0x1d5f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F250_0x1d5f250");
#endif

    ctx->pc = 0x1d5f250u;

    // 0x1d5f250: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5f250u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f254: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1d5f254u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1d5f258: 0x25ef66a8  addiu       $t7, $t7, 0x66A8
    ctx->pc = 0x1d5f258u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 26280));
    // 0x1d5f25c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d5f25cu;
    { uint32_t bits = FAST_READ32(0x1D666A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5f260: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1d5f260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d5f264: 0xe5c04604  swc1        $f0, 0x4604($t6)
    ctx->pc = 0x1d5f264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17924), bits); }
    // 0x1d5f268: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1d5f268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1d5f26c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d5f26cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d5f270: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1d5f270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d5f274: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d5f274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d5f278: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1d5f278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1d5f27c: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1d5f27cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d5f280: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1d5f280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d5f284: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1d5f284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1d5f288: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F288u;
        // 0x1d5f28c: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F290u;
}
