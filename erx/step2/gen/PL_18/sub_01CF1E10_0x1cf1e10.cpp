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

// Function: sub_01CF1E10
// Address: 0x1cf1e10 - 0x1cf1e98
void sub_01CF1E10_0x1cf1e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1E10_0x1cf1e10");
#endif

    switch (ctx->pc) {
        case 0x1cf1e24u: goto label_1cf1e24;
        case 0x1cf1e30u: goto label_1cf1e30;
        default: break;
    }

    ctx->pc = 0x1cf1e10u;

    // 0x1cf1e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1e1c: 0xc73bfe8  jal         func_1CEFFA0
    ctx->pc = 0x1CF1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1E24u);
    ctx->pc = 0x1CF1E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1E1Cu;
    // 0x1cf1e20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEFFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEFFA0u, 0x1CF1E1Cu, 0x1CF1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1E24u;
label_1cf1e24:
    // 0x1cf1e24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf1e28: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1E28u;
    SET_GPR_U32(ctx, 31, 0x1CF1E30u);
    ctx->pc = 0x1CF1E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1E28u;
    // 0x1cf1e2c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1E28u, 0x1CF1E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1E30u;
label_1cf1e30:
    // 0x1cf1e30: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1e30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf1e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf1e38: 0x25efd10c  addiu       $t7, $t7, -0x2EF4
    ctx->pc = 0x1cf1e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955276));
    // 0x1cf1e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1e40: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1cf1e40u;
    { uint32_t bits = FAST_READ32(0x1CFD10Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cf1e44: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cf1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cf1e48: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1cf1e48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cf1e4c: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1e50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1e54: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1cf1e54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1cf1e58: 0x25efd110  addiu       $t7, $t7, -0x2EF0
    ctx->pc = 0x1cf1e58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955280));
    // 0x1cf1e5c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cf1e5cu;
    { uint32_t bits = FAST_READ32(0x1CFD110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1e60: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1cf1e60u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf1e64: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cf1e64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cf1e68: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1cf1e68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1cf1e6c: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1cf1e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1cf1e70: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1cf1e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1cf1e74: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1cf1e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1cf1e78: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1cf1e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1cf1e7c: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1cf1e7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1cf1e80: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1cf1e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1cf1e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1E84u;
        // 0x1cf1e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1E8Cu;
    // 0x1cf1e8c: 0x0  nop
    ctx->pc = 0x1cf1e8cu;
    // NOP
    // 0x1cf1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1E98u;
}
