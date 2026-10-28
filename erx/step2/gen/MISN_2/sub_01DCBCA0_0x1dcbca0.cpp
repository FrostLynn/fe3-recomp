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

// Function: sub_01DCBCA0
// Address: 0x1dcbca0 - 0x1dcbcf8
void sub_01DCBCA0_0x1dcbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBCA0_0x1dcbca0");
#endif

    switch (ctx->pc) {
        case 0x1dcbcc0u: goto label_1dcbcc0;
        case 0x1dcbce8u: goto label_1dcbce8;
        default: break;
    }

    ctx->pc = 0x1dcbca0u;

    // 0x1dcbca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcbca4: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbca4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcbca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcbcac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcbcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbcb0: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dcbcb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcbcb4: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1dcbcb4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1dcbcb8: 0xc772ede  jal         func_1DCBB78
    ctx->pc = 0x1DCBCB8u;
    SET_GPR_U32(ctx, 31, 0x1DCBCC0u);
    ctx->pc = 0x1DCBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBCB8u;
    // 0x1dcbcbc: 0x8da4002c  lw          $a0, 0x2C($t5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB78u, 0x1DCBCB8u, 0x1DCBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBCC0u;
label_1dcbcc0:
    // 0x1dcbcc0: 0x3c0e01dd  lui         $t6, 0x1DD
    ctx->pc = 0x1dcbcc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbcc4: 0x8c4f0048  lw          $t7, 0x48($v0)
    ctx->pc = 0x1dcbcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dcbcc8: 0x25ced770  addiu       $t6, $t6, -0x2890
    ctx->pc = 0x1dcbcc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294956912));
    // 0x1dcbccc: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbcd0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1dcbcd0u;
    { uint32_t bits = FAST_READ32(0x1DCD770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcbcd4: 0x2484c6b0  addiu       $a0, $a0, -0x3950
    ctx->pc = 0x1dcbcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952624));
    // 0x1dcbcd8: 0xe5e003d8  swc1        $f0, 0x3D8($t7)
    ctx->pc = 0x1dcbcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 984), bits); }
    // 0x1dcbcdc: 0xe5e003d0  swc1        $f0, 0x3D0($t7)
    ctx->pc = 0x1dcbcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 976), bits); }
    // 0x1dcbce0: 0xc772eea  jal         func_1DCBBA8
    ctx->pc = 0x1DCBCE0u;
    SET_GPR_U32(ctx, 31, 0x1DCBCE8u);
    ctx->pc = 0x1DCBCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBCE0u;
    // 0x1dcbce4: 0xe5e003d4  swc1        $f0, 0x3D4($t7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 980), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBBA8u, 0x1DCBCE0u, 0x1DCBCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBCE8u;
label_1dcbce8:
    // 0x1dcbce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcbce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbcec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBCECu;
        // 0x1dcbcf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBCF4u;
    // 0x1dcbcf4: 0x0  nop
    ctx->pc = 0x1dcbcf4u;
    // NOP
    ctx->pc = 0x1dcbcf8u;
}
