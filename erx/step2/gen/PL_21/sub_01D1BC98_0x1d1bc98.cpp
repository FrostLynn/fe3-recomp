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

// Function: sub_01D1BC98
// Address: 0x1d1bc98 - 0x1d1bd08
void sub_01D1BC98_0x1d1bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BC98_0x1d1bc98");
#endif

    switch (ctx->pc) {
        case 0x1d1bcacu: goto label_1d1bcac;
        case 0x1d1bcb8u: goto label_1d1bcb8;
        default: break;
    }

    ctx->pc = 0x1d1bc98u;

    // 0x1d1bc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1bc9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1bca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1bca4: 0xc7466a6  jal         func_1D19A98
    ctx->pc = 0x1D1BCA4u;
    SET_GPR_U32(ctx, 31, 0x1D1BCACu);
    ctx->pc = 0x1D1BCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BCA4u;
    // 0x1d1bca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19A98u, 0x1D1BCA4u, 0x1D1BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BCACu;
label_1d1bcac:
    // 0x1d1bcac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1bcb0: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BCB0u;
    SET_GPR_U32(ctx, 31, 0x1D1BCB8u);
    ctx->pc = 0x1D1BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BCB0u;
    // 0x1d1bcb4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BCB0u, 0x1D1BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BCB8u;
label_1d1bcb8:
    // 0x1d1bcb8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d1bcb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d1bcbc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d1bcbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1bcc0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d1bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d1bcc4: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1d1bcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1d1bcc8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d1bcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d1bccc: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1d1bcccu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1d1bcd0: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1d1bcd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1d1bcd4: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1bcd4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bcd8: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1d1bcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1d1bcdc: 0x25ce6b08  addiu       $t6, $t6, 0x6B08
    ctx->pc = 0x1d1bcdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27400));
    // 0x1d1bce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1bce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1bce4: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d1bce4u;
    { uint32_t bits = FAST_READ32(0x1D26B08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bce8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1bce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1bcec: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1d1bcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1d1bcf0: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1bcf0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bcf4: 0x25ce6b0c  addiu       $t6, $t6, 0x6B0C
    ctx->pc = 0x1d1bcf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27404));
    // 0x1d1bcf8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d1bcf8u;
    { uint32_t bits = FAST_READ32(0x1D26B0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bcfc: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1d1bcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1d1bd00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BD00u;
        // 0x1d1bd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BD08u;
}
