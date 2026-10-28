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

// Function: sub_01CFFCC8
// Address: 0x1cffcc8 - 0x1cffd48
void sub_01CFFCC8_0x1cffcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFCC8_0x1cffcc8");
#endif

    switch (ctx->pc) {
        case 0x1cffcdcu: goto label_1cffcdc;
        case 0x1cffce8u: goto label_1cffce8;
        default: break;
    }

    ctx->pc = 0x1cffcc8u;

    // 0x1cffcc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffcd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffcd4: 0xc73f728  jal         func_1CFDCA0
    ctx->pc = 0x1CFFCD4u;
    SET_GPR_U32(ctx, 31, 0x1CFFCDCu);
    ctx->pc = 0x1CFFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFCD4u;
    // 0x1cffcd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDCA0u, 0x1CFFCD4u, 0x1CFFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFCDCu;
label_1cffcdc:
    // 0x1cffcdc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cffcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cffce0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFCE0u;
    SET_GPR_U32(ctx, 31, 0x1CFFCE8u);
    ctx->pc = 0x1CFFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFCE0u;
    // 0x1cffce4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFCE0u, 0x1CFFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFCE8u;
label_1cffce8:
    // 0x1cffce8: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffce8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffcec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffcf0: 0x25efbc60  addiu       $t7, $t7, -0x43A0
    ctx->pc = 0x1cffcf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949984));
    // 0x1cffcf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffcf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffcf8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1cffcf8u;
    { uint32_t bits = FAST_READ32(0x1D0BC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cffcfc: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cffcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cffd00: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1cffd00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cffd04: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffd04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffd08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffd0c: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1cffd0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1cffd10: 0x25efbc64  addiu       $t7, $t7, -0x439C
    ctx->pc = 0x1cffd10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949988));
    // 0x1cffd14: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cffd14u;
    { uint32_t bits = FAST_READ32(0x1D0BC64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cffd18: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1cffd18u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cffd1c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cffd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cffd20: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1cffd20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1cffd24: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1cffd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1cffd28: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1cffd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1cffd2c: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1cffd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1cffd30: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1cffd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1cffd34: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1cffd34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1cffd38: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1cffd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1cffd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFD3Cu;
        // 0x1cffd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFD44u;
    // 0x1cffd44: 0x0  nop
    ctx->pc = 0x1cffd44u;
    // NOP
    ctx->pc = 0x1cffd48u;
}
