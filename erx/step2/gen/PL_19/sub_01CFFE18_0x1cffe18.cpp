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

// Function: sub_01CFFE18
// Address: 0x1cffe18 - 0x1cffe98
void sub_01CFFE18_0x1cffe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFE18_0x1cffe18");
#endif

    switch (ctx->pc) {
        case 0x1cffe2cu: goto label_1cffe2c;
        case 0x1cffe38u: goto label_1cffe38;
        default: break;
    }

    ctx->pc = 0x1cffe18u;

    // 0x1cffe18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffe1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffe20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffe24: 0xc73f50c  jal         func_1CFD430
    ctx->pc = 0x1CFFE24u;
    SET_GPR_U32(ctx, 31, 0x1CFFE2Cu);
    ctx->pc = 0x1CFFE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFE24u;
    // 0x1cffe28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD430u, 0x1CFFE24u, 0x1CFFE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFE2Cu;
label_1cffe2c:
    // 0x1cffe2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cffe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cffe30: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFE30u;
    SET_GPR_U32(ctx, 31, 0x1CFFE38u);
    ctx->pc = 0x1CFFE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFE30u;
    // 0x1cffe34: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFE30u, 0x1CFFE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFE38u;
label_1cffe38:
    // 0x1cffe38: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffe38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffe3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffe3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffe40: 0x25efbc74  addiu       $t7, $t7, -0x438C
    ctx->pc = 0x1cffe40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950004));
    // 0x1cffe44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffe44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffe48: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1cffe48u;
    { uint32_t bits = FAST_READ32(0x1D0BC74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cffe4c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cffe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cffe50: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1cffe50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cffe54: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffe54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffe58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffe58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffe5c: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1cffe5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1cffe60: 0x25efbc78  addiu       $t7, $t7, -0x4388
    ctx->pc = 0x1cffe60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950008));
    // 0x1cffe64: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cffe64u;
    { uint32_t bits = FAST_READ32(0x1D0BC78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cffe68: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1cffe68u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cffe6c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cffe6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cffe70: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1cffe70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1cffe74: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1cffe74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1cffe78: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1cffe78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1cffe7c: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1cffe7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1cffe80: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1cffe80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1cffe84: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1cffe84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1cffe88: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1cffe88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1cffe8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFE8Cu;
        // 0x1cffe90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFE94u;
    // 0x1cffe94: 0x0  nop
    ctx->pc = 0x1cffe94u;
    // NOP
    ctx->pc = 0x1cffe98u;
}
