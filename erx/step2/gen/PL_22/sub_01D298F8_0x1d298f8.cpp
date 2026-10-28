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

// Function: sub_01D298F8
// Address: 0x1d298f8 - 0x1d29980
void sub_01D298F8_0x1d298f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D298F8_0x1d298f8");
#endif

    switch (ctx->pc) {
        case 0x1d2990cu: goto label_1d2990c;
        case 0x1d29918u: goto label_1d29918;
        default: break;
    }

    ctx->pc = 0x1d298f8u;

    // 0x1d298f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d298f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d298fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d298fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29900: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d29900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d29904: 0xc749da8  jal         func_1D276A0
    ctx->pc = 0x1D29904u;
    SET_GPR_U32(ctx, 31, 0x1D2990Cu);
    ctx->pc = 0x1D29908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29904u;
    // 0x1d29908: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276A0u, 0x1D29904u, 0x1D2990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2990Cu;
label_1d2990c:
    // 0x1d2990c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d2990cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d29910: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29910u;
    SET_GPR_U32(ctx, 31, 0x1D29918u);
    ctx->pc = 0x1D29914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29910u;
    // 0x1d29914: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29910u, 0x1D29918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29918u;
label_1d29918:
    // 0x1d29918: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29918u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d2991c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d2991cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d29920: 0x25ef33e4  addiu       $t7, $t7, 0x33E4
    ctx->pc = 0x1d29920u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13284));
    // 0x1d29924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29928: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1d29928u;
    { uint32_t bits = FAST_READ32(0x1D333E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d2992c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d2992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d29930: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1d29930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d29934: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29934u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2993c: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1d2993cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1d29940: 0x25ef33e8  addiu       $t7, $t7, 0x33E8
    ctx->pc = 0x1d29940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13288));
    // 0x1d29944: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1d29944u;
    { uint32_t bits = FAST_READ32(0x1D333E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d29948: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1d29948u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d2994c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1d2994cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d29950: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d29950u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d29954: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1d29954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1d29958: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1d29958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1d2995c: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1d2995cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1d29960: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1d29960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1d29964: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1d29964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1d29968: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1d29968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1d2996c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2996Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2996Cu;
        // 0x1d29970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2996Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29974u;
    // 0x1d29974: 0x0  nop
    ctx->pc = 0x1d29974u;
    // NOP
    // 0x1d29978: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29980u;
}
