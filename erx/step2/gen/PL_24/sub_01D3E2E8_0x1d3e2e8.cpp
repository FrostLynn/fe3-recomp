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

// Function: sub_01D3E2E8
// Address: 0x1d3e2e8 - 0x1d3e328
void sub_01D3E2E8_0x1d3e2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E2E8_0x1d3e2e8");
#endif

    ctx->pc = 0x1d3e2e8u;

    // 0x1d3e2e8: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3e2e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e2ec: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1d3e2ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1d3e2f0: 0x25ef5c50  addiu       $t7, $t7, 0x5C50
    ctx->pc = 0x1d3e2f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 23632));
    // 0x1d3e2f4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d3e2f4u;
    { uint32_t bits = FAST_READ32(0x1D45C50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3e2f8: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1d3e2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d3e2fc: 0xe5c04604  swc1        $f0, 0x4604($t6)
    ctx->pc = 0x1d3e2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17924), bits); }
    // 0x1d3e300: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1d3e300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1d3e304: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d3e304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3e308: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1d3e308u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d3e30c: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d3e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d3e310: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1d3e310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1d3e314: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1d3e314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d3e318: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1d3e318u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d3e31c: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1d3e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1d3e320: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E320u;
        // 0x1d3e324: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E328u;
}
