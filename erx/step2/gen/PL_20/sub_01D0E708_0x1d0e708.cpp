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

// Function: sub_01D0E708
// Address: 0x1d0e708 - 0x1d0e778
void sub_01D0E708_0x1d0e708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E708_0x1d0e708");
#endif

    switch (ctx->pc) {
        case 0x1d0e71cu: goto label_1d0e71c;
        case 0x1d0e728u: goto label_1d0e728;
        default: break;
    }

    ctx->pc = 0x1d0e708u;

    // 0x1d0e708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e714: 0xc7431e2  jal         func_1D0C788
    ctx->pc = 0x1D0E714u;
    SET_GPR_U32(ctx, 31, 0x1D0E71Cu);
    ctx->pc = 0x1D0E718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E714u;
    // 0x1d0e718: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C788u, 0x1D0E714u, 0x1D0E71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E71Cu;
label_1d0e71c:
    // 0x1d0e71c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0e71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0e720: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E720u;
    SET_GPR_U32(ctx, 31, 0x1D0E728u);
    ctx->pc = 0x1D0E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E720u;
    // 0x1d0e724: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E720u, 0x1D0E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E728u;
label_1d0e728:
    // 0x1d0e728: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0e728u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0e72c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d0e72cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e730: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d0e730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d0e734: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1d0e734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1d0e738: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0e738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d0e73c: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1d0e73cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1d0e740: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1d0e740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1d0e744: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d0e744u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e748: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1d0e748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1d0e74c: 0x25ce8fa4  addiu       $t6, $t6, -0x705C
    ctx->pc = 0x1d0e74cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294938532));
    // 0x1d0e750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e754: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d0e754u;
    { uint32_t bits = FAST_READ32(0x1D18FA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e758: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e75c: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1d0e75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1d0e760: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d0e760u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e764: 0x25ce8fa8  addiu       $t6, $t6, -0x7058
    ctx->pc = 0x1d0e764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294938536));
    // 0x1d0e768: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d0e768u;
    { uint32_t bits = FAST_READ32(0x1D18FA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e76c: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1d0e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1d0e770: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E770u;
        // 0x1d0e774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E778u;
}
