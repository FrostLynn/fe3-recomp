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

// Function: sub_01C44B38
// Address: 0x1c44b38 - 0x1c44b80
void sub_01C44B38_0x1c44b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44B38_0x1c44b38");
#endif

    switch (ctx->pc) {
        case 0x1c44b70u: goto label_1c44b70;
        default: break;
    }

    ctx->pc = 0x1c44b38u;

    // 0x1c44b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44b3c: 0x3c0e01c5  lui         $t6, 0x1C5
    ctx->pc = 0x1c44b3cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)453 << 16));
    // 0x1c44b40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44b44: 0x25cef810  addiu       $t6, $t6, -0x7F0
    ctx->pc = 0x1c44b44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965264));
    // 0x1c44b48: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1c44b48u;
    { uint32_t bits = FAST_READ32(0x1C4F810u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c44b4c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1c44b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c44b50: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1c44b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c44b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c44b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c44b58: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c44b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c44b5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C44B5Cu;
    {
        const bool branch_taken_0x1c44b5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C44B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44B5Cu;
        // 0x1c44b60: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44b5c) {
            ctx->pc = 0x1C44B70u;
            goto label_1c44b70;
        }
    }
    ctx->pc = 0x1C44B64u;
    // 0x1c44b64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44b64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44b68: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C44B68u;
    SET_GPR_U32(ctx, 31, 0x1C44B70u);
    ctx->pc = 0x1C44B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44B68u;
    // 0x1c44b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C44B68u, 0x1C44B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44B70u;
label_1c44b70:
    // 0x1c44b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c44b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44B78u;
        // 0x1c44b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44B80u;
}
