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

// Function: sub_01CB9250
// Address: 0x1cb9250 - 0x1cb9298
void sub_01CB9250_0x1cb9250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9250_0x1cb9250");
#endif

    ctx->pc = 0x1cb9250u;

    // 0x1cb9250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb9250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb9254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb9254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb9258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb9258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb925c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1cb925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb9260: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb9260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb9264: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9264u;
    {
        const bool branch_taken_0x1cb9264 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB9268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9264u;
        // 0x1cb9268: 0x3c0e01cc  lui         $t6, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9264) {
            ctx->pc = 0x1CB9278u;
            goto label_1cb9278;
        }
    }
    ctx->pc = 0x1CB926Cu;
    // 0x1cb926c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb926cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb9270: 0x872dd8e  j           func_1CB7638
    ctx->pc = 0x1CB9270u;
    ctx->pc = 0x1CB9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9270u;
    // 0x1cb9274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7638u;
    sub_01CB7638_0x1cb7638(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB9278u;
label_1cb9278:
    // 0x1cb9278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb927c: 0x25ce23a4  addiu       $t6, $t6, 0x23A4
    ctx->pc = 0x1cb927cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 9124));
    // 0x1cb9280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb9280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9284: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cb9284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb9288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb9288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb928c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cb928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1cb9290: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9290u;
        // 0x1cb9294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9298u;
}
