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

// Function: sub_01C83A98
// Address: 0x1c83a98 - 0x1c83ae0
void sub_01C83A98_0x1c83a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83A98_0x1c83a98");
#endif

    ctx->pc = 0x1c83a98u;

    // 0x1c83a98: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1c83a98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c83a9c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1c83a9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c83aa0: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1c83aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1c83aa4: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1c83aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1c83aa8: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1c83aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c83aac: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1c83aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1c83ab0: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1c83ab0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c83ab4: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1c83ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1c83ab8: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1c83ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1c83abc: 0xac8f0d1c  sw          $t7, 0xD1C($a0)
    ctx->pc = 0x1c83abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
    // 0x1c83ac0: 0x8c8e024c  lw          $t6, 0x24C($a0)
    ctx->pc = 0x1c83ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1c83ac4: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x1c83ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c83ac8: 0xadcf0070  sw          $t7, 0x70($t6)
    ctx->pc = 0x1c83ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 112), GPR_U32(ctx, 15));
    // 0x1c83acc: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c83accu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c83ad0: 0x25efcec0  addiu       $t7, $t7, -0x3140
    ctx->pc = 0x1c83ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954688));
    // 0x1c83ad4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c83ad4u;
    { uint32_t bits = FAST_READ32(0x1C8CEC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c83ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83AD8u;
        // 0x1c83adc: 0xe5c04604  swc1        $f0, 0x4604($t6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17924), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83AE0u;
}
