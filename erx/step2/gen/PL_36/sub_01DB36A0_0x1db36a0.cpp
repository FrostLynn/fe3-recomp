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

// Function: sub_01DB36A0
// Address: 0x1db36a0 - 0x1db3710
void sub_01DB36A0_0x1db36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB36A0_0x1db36a0");
#endif

    ctx->pc = 0x1db36a0u;

    // 0x1db36a0: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1db36a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1db36a4: 0x240e0148  addiu       $t6, $zero, 0x148
    ctx->pc = 0x1db36a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1db36a8: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1db36a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1db36ac: 0x248b0200  addiu       $t3, $a0, 0x200
    ctx->pc = 0x1db36acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1db36b0: 0xac8e0d20  sw          $t6, 0xD20($a0)
    ctx->pc = 0x1db36b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 14));
    // 0x1db36b4: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1db36b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1db36b8: 0x8d6d004c  lw          $t5, 0x4C($t3)
    ctx->pc = 0x1db36b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
    // 0x1db36bc: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1db36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1db36c0: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1db36c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1db36c4: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1db36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1db36c8: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1db36c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1db36cc: 0x8d6c0048  lw          $t4, 0x48($t3)
    ctx->pc = 0x1db36ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x1db36d0: 0xac8f0d1c  sw          $t7, 0xD1C($a0)
    ctx->pc = 0x1db36d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
    // 0x1db36d4: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x1db36d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1db36d8: 0x240f0024  addiu       $t7, $zero, 0x24
    ctx->pc = 0x1db36d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1db36dc: 0xadaf0070  sw          $t7, 0x70($t5)
    ctx->pc = 0x1db36dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 112), GPR_U32(ctx, 15));
    // 0x1db36e0: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db36e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db36e4: 0xad8e4930  sw          $t6, 0x4930($t4)
    ctx->pc = 0x1db36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 18736), GPR_U32(ctx, 14));
    // 0x1db36e8: 0x25efb7e4  addiu       $t7, $t7, -0x481C
    ctx->pc = 0x1db36e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948836));
    // 0x1db36ec: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1db36ecu;
    { uint32_t bits = FAST_READ32(0x1DBB7E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db36f0: 0x8d8f4944  lw          $t7, 0x4944($t4)
    ctx->pc = 0x1db36f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 18756)));
    // 0x1db36f4: 0xe5a04604  swc1        $f0, 0x4604($t5)
    ctx->pc = 0x1db36f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 17924), bits); }
    // 0x1db36f8: 0xa1e06426  sb          $zero, 0x6426($t7)
    ctx->pc = 0x1db36f8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 25638), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db36fc: 0x8d6e0048  lw          $t6, 0x48($t3)
    ctx->pc = 0x1db36fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x1db3700: 0x8dcf4944  lw          $t7, 0x4944($t6)
    ctx->pc = 0x1db3700u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18756)));
    // 0x1db3704: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3704u;
        // 0x1db3708: 0xa1e067b6  sb          $zero, 0x67B6($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 26550), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB370Cu;
    // 0x1db370c: 0x0  nop
    ctx->pc = 0x1db370cu;
    // NOP
    ctx->pc = 0x1db3710u;
}
