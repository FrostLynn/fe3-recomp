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

// Function: sub_01CCFB18
// Address: 0x1ccfb18 - 0x1ccfb60
void sub_01CCFB18_0x1ccfb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFB18_0x1ccfb18");
#endif

    switch (ctx->pc) {
        case 0x1ccfb50u: goto label_1ccfb50;
        default: break;
    }

    ctx->pc = 0x1ccfb18u;

    // 0x1ccfb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfb1c: 0x3c0e01ce  lui         $t6, 0x1CE
    ctx->pc = 0x1ccfb1cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)462 << 16));
    // 0x1ccfb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfb24: 0x25cea180  addiu       $t6, $t6, -0x5E80
    ctx->pc = 0x1ccfb24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294943104));
    // 0x1ccfb28: 0xc5c20000  lwc1        $f2, 0x0($t6)
    ctx->pc = 0x1ccfb28u;
    { uint32_t bits = FAST_READ32(0x1CDA180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ccfb2c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1ccfb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccfb30: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1ccfb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccfb34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ccfb34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ccfb38: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ccfb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccfb3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCFB3Cu;
    {
        const bool branch_taken_0x1ccfb3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CCFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFB3Cu;
        // 0x1ccfb40: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfb3c) {
            ctx->pc = 0x1CCFB50u;
            goto label_1ccfb50;
        }
    }
    ctx->pc = 0x1CCFB44u;
    // 0x1ccfb44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccfb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccfb48: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCFB48u;
    SET_GPR_U32(ctx, 31, 0x1CCFB50u);
    ctx->pc = 0x1CCFB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFB48u;
    // 0x1ccfb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCFB48u, 0x1CCFB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFB50u;
label_1ccfb50:
    // 0x1ccfb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfb54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccfb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfb58: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFB58u;
        // 0x1ccfb5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFB60u;
}
