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

// Function: sub_01D7FDE0
// Address: 0x1d7fde0 - 0x1d7fe38
void sub_01D7FDE0_0x1d7fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FDE0_0x1d7fde0");
#endif

    ctx->pc = 0x1d7fde0u;

    // 0x1d7fde0: 0x248c0200  addiu       $t4, $a0, 0x200
    ctx->pc = 0x1d7fde0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1d7fde4: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1d7fde4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d7fde8: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1d7fde8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d7fdec: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1d7fdecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d7fdf0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fdf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fdf4: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d7fdf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d7fdf8: 0xa1cf0436  sb          $t7, 0x436($t6)
    ctx->pc = 0x1d7fdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1078), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d7fdfc: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1d7fdfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d7fe00: 0x8d8d004c  lw          $t5, 0x4C($t4)
    ctx->pc = 0x1d7fe00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d7fe04: 0xac8f0d1c  sw          $t7, 0xD1C($a0)
    ctx->pc = 0x1d7fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
    // 0x1d7fe08: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1d7fe08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d7fe0c: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1d7fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1d7fe10: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d7fe10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d7fe14: 0x25ef87f8  addiu       $t7, $t7, -0x7808
    ctx->pc = 0x1d7fe14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294936568));
    // 0x1d7fe18: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d7fe18u;
    { uint32_t bits = FAST_READ32(0x1D887F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7fe1c: 0x240f007f  addiu       $t7, $zero, 0x7F
    ctx->pc = 0x1d7fe1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7fe20: 0xe5a04604  swc1        $f0, 0x4604($t5)
    ctx->pc = 0x1d7fe20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 17924), bits); }
    // 0x1d7fe24: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1d7fe24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1d7fe28: 0x240f0147  addiu       $t7, $zero, 0x147
    ctx->pc = 0x1d7fe28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d7fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FE2Cu;
        // 0x1d7fe30: 0xac8f0d18  sw          $t7, 0xD18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FE34u;
    // 0x1d7fe34: 0x0  nop
    ctx->pc = 0x1d7fe34u;
    // NOP
    ctx->pc = 0x1d7fe38u;
}
