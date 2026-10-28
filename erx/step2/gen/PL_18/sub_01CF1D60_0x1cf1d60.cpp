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

// Function: sub_01CF1D60
// Address: 0x1cf1d60 - 0x1cf1dd0
void sub_01CF1D60_0x1cf1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1D60_0x1cf1d60");
#endif

    switch (ctx->pc) {
        case 0x1cf1d74u: goto label_1cf1d74;
        case 0x1cf1d80u: goto label_1cf1d80;
        default: break;
    }

    ctx->pc = 0x1cf1d60u;

    // 0x1cf1d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1d68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1d6c: 0xc73bfe6  jal         func_1CEFF98
    ctx->pc = 0x1CF1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1D74u);
    ctx->pc = 0x1CF1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1D6Cu;
    // 0x1cf1d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEFF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEFF98u, 0x1CF1D6Cu, 0x1CF1D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D74u;
label_1cf1d74:
    // 0x1cf1d74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1d78: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1D78u;
    SET_GPR_U32(ctx, 31, 0x1CF1D80u);
    ctx->pc = 0x1CF1D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1D78u;
    // 0x1cf1d7c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1D78u, 0x1CF1D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1D80u;
label_1cf1d80:
    // 0x1cf1d80: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf1d80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf1d84: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cf1d84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1d88: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cf1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cf1d8c: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cf1d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cf1d90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cf1d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cf1d94: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1cf1d94u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1cf1d98: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1cf1d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1cf1d9c: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1cf1d9cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1da0: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1cf1da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1cf1da4: 0x25ced104  addiu       $t6, $t6, -0x2EFC
    ctx->pc = 0x1cf1da4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955268));
    // 0x1cf1da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1dac: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cf1dacu;
    { uint32_t bits = FAST_READ32(0x1CFD104u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1db0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1db4: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1cf1db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1cf1db8: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1cf1db8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1dbc: 0x25ced108  addiu       $t6, $t6, -0x2EF8
    ctx->pc = 0x1cf1dbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955272));
    // 0x1cf1dc0: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cf1dc0u;
    { uint32_t bits = FAST_READ32(0x1CFD108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1dc4: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1cf1dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1cf1dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1DC8u;
        // 0x1cf1dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1DD0u;
}
