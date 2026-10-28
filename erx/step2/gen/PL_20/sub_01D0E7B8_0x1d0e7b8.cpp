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

// Function: sub_01D0E7B8
// Address: 0x1d0e7b8 - 0x1d0e838
void sub_01D0E7B8_0x1d0e7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E7B8_0x1d0e7b8");
#endif

    switch (ctx->pc) {
        case 0x1d0e7ccu: goto label_1d0e7cc;
        case 0x1d0e7d8u: goto label_1d0e7d8;
        default: break;
    }

    ctx->pc = 0x1d0e7b8u;

    // 0x1d0e7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e7c4: 0xc7431e4  jal         func_1D0C790
    ctx->pc = 0x1D0E7C4u;
    SET_GPR_U32(ctx, 31, 0x1D0E7CCu);
    ctx->pc = 0x1D0E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E7C4u;
    // 0x1d0e7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C790u, 0x1D0E7C4u, 0x1D0E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E7CCu;
label_1d0e7cc:
    // 0x1d0e7cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0e7d0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E7D0u;
    SET_GPR_U32(ctx, 31, 0x1D0E7D8u);
    ctx->pc = 0x1D0E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E7D0u;
    // 0x1d0e7d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E7D0u, 0x1D0E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E7D8u;
label_1d0e7d8:
    // 0x1d0e7d8: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e7dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0e7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0e7e0: 0x25ef8fac  addiu       $t7, $t7, -0x7054
    ctx->pc = 0x1d0e7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938540));
    // 0x1d0e7e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e7e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e7e8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1d0e7e8u;
    { uint32_t bits = FAST_READ32(0x1D18FACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d0e7ec: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d0e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d0e7f0: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1d0e7f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d0e7f4: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e7f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e7f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e7fc: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1d0e7fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1d0e800: 0x25ef8fb0  addiu       $t7, $t7, -0x7050
    ctx->pc = 0x1d0e800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938544));
    // 0x1d0e804: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1d0e804u;
    { uint32_t bits = FAST_READ32(0x1D18FB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0e808: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1d0e808u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0e80c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1d0e80cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d0e810: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d0e810u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d0e814: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1d0e814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1d0e818: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1d0e818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1d0e81c: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1d0e81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1d0e820: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1d0e820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1d0e824: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1d0e824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1d0e828: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1d0e828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1d0e82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E82Cu;
        // 0x1d0e830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E834u;
    // 0x1d0e834: 0x0  nop
    ctx->pc = 0x1d0e834u;
    // NOP
    ctx->pc = 0x1d0e838u;
}
