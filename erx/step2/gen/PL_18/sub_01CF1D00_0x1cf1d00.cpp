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

// Function: sub_01CF1D00
// Address: 0x1cf1d00 - 0x1cf1d48
void sub_01CF1D00_0x1cf1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1D00_0x1cf1d00");
#endif

    ctx->pc = 0x1cf1d00u;

    // 0x1cf1d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf1d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf1d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1d0c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1cf1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1d10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf1d10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cf1d14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF1D14u;
    {
        const bool branch_taken_0x1cf1d14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1D14u;
        // 0x1cf1d18: 0x3c0e01d0  lui         $t6, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1d14) {
            ctx->pc = 0x1CF1D28u;
            goto label_1cf1d28;
        }
    }
    ctx->pc = 0x1CF1D1Cu;
    // 0x1cf1d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1d20: 0x873c116  j           func_1CF0458
    ctx->pc = 0x1CF1D20u;
    ctx->pc = 0x1CF1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1D20u;
    // 0x1cf1d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0458u;
    sub_01CF0458_0x1cf0458(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1D28u;
label_1cf1d28:
    // 0x1cf1d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1d2c: 0x25ced100  addiu       $t6, $t6, -0x2F00
    ctx->pc = 0x1cf1d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955264));
    // 0x1cf1d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf1d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1d34: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cf1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1d38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cf1d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cf1d3c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cf1d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1cf1d40: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1D40u;
        // 0x1cf1d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1D48u;
}
