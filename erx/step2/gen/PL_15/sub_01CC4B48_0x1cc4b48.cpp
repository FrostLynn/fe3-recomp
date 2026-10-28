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

// Function: sub_01CC4B48
// Address: 0x1cc4b48 - 0x1cc4bd0
void sub_01CC4B48_0x1cc4b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4B48_0x1cc4b48");
#endif

    ctx->pc = 0x1cc4b48u;

    // 0x1cc4b48: 0x248c0200  addiu       $t4, $a0, 0x200
    ctx->pc = 0x1cc4b48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1cc4b4c: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1cc4b4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4b50: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1cc4b50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cc4b54: 0xa1c055e6  sb          $zero, 0x55E6($t6)
    ctx->pc = 0x1cc4b54u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 21990), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc4b58: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1cc4b58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4b5c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1cc4b5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cc4b60: 0xa1c05976  sb          $zero, 0x5976($t6)
    ctx->pc = 0x1cc4b60u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 22902), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc4b64: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1cc4b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4b68: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cc4b68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4b6c: 0x8ded0084  lw          $t5, 0x84($t7)
    ctx->pc = 0x1cc4b6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cc4b70: 0xa1ae6426  sb          $t6, 0x6426($t5)
    ctx->pc = 0x1cc4b70u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 25638), (uint8_t)GPR_U32(ctx, 14));
    // 0x1cc4b74: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1cc4b74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4b78: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1cc4b78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cc4b7c: 0xa1c067b6  sb          $zero, 0x67B6($t6)
    ctx->pc = 0x1cc4b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 26550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc4b80: 0x8d8f004c  lw          $t7, 0x4C($t4)
    ctx->pc = 0x1cc4b80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4b84: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1cc4b84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cc4b88: 0xa1c06b46  sb          $zero, 0x6B46($t6)
    ctx->pc = 0x1cc4b88u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 27462), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc4b8c: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1cc4b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1cc4b90: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1cc4b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1cc4b94: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1cc4b94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1cc4b98: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1cc4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1cc4b9c: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc4b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4ba0: 0x8d8d004c  lw          $t5, 0x4C($t4)
    ctx->pc = 0x1cc4ba0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cc4ba4: 0x25efd3d0  addiu       $t7, $t7, -0x2C30
    ctx->pc = 0x1cc4ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955984));
    // 0x1cc4ba8: 0x240e0149  addiu       $t6, $zero, 0x149
    ctx->pc = 0x1cc4ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1cc4bac: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cc4bacu;
    { uint32_t bits = FAST_READ32(0x1CCD3D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4bb0: 0xac8e0d1c  sw          $t6, 0xD1C($a0)
    ctx->pc = 0x1cc4bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 14));
    // 0x1cc4bb4: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1cc4bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cc4bb8: 0xe5a04604  swc1        $f0, 0x4604($t5)
    ctx->pc = 0x1cc4bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 17924), bits); }
    // 0x1cc4bbc: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1cc4bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1cc4bc0: 0x240f0147  addiu       $t7, $zero, 0x147
    ctx->pc = 0x1cc4bc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1cc4bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4BC4u;
        // 0x1cc4bc8: 0xac8f0d18  sw          $t7, 0xD18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4BCCu;
    // 0x1cc4bcc: 0x0  nop
    ctx->pc = 0x1cc4bccu;
    // NOP
    ctx->pc = 0x1cc4bd0u;
}
