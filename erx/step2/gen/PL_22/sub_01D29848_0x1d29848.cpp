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

// Function: sub_01D29848
// Address: 0x1d29848 - 0x1d298b8
void sub_01D29848_0x1d29848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29848_0x1d29848");
#endif

    switch (ctx->pc) {
        case 0x1d2985cu: goto label_1d2985c;
        case 0x1d29868u: goto label_1d29868;
        default: break;
    }

    ctx->pc = 0x1d29848u;

    // 0x1d29848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2984c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d29850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d29854: 0xc749da6  jal         func_1D27698
    ctx->pc = 0x1D29854u;
    SET_GPR_U32(ctx, 31, 0x1D2985Cu);
    ctx->pc = 0x1D29858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29854u;
    // 0x1d29858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27698u, 0x1D29854u, 0x1D2985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2985Cu;
label_1d2985c:
    // 0x1d2985c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d2985cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d29860: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29860u;
    SET_GPR_U32(ctx, 31, 0x1D29868u);
    ctx->pc = 0x1D29864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29860u;
    // 0x1d29864: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29860u, 0x1D29868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29868u;
label_1d29868:
    // 0x1d29868: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d29868u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d2986c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d2986cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29870: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d29870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d29874: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1d29874u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1d29878: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d29878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2987c: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1d2987cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1d29880: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1d29880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1d29884: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d29884u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d29888: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1d29888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1d2988c: 0x25ce33dc  addiu       $t6, $t6, 0x33DC
    ctx->pc = 0x1d2988cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13276));
    // 0x1d29890: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29890u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29894: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d29894u;
    { uint32_t bits = FAST_READ32(0x1D333DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2989c: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1d2989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1d298a0: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d298a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d298a4: 0x25ce33e0  addiu       $t6, $t6, 0x33E0
    ctx->pc = 0x1d298a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13280));
    // 0x1d298a8: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d298a8u;
    { uint32_t bits = FAST_READ32(0x1D333E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d298ac: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1d298acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1d298b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D298B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D298B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D298B0u;
        // 0x1d298b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D298B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D298B8u;
}
