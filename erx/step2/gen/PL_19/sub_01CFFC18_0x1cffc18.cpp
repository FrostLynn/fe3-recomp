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

// Function: sub_01CFFC18
// Address: 0x1cffc18 - 0x1cffc88
void sub_01CFFC18_0x1cffc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFC18_0x1cffc18");
#endif

    switch (ctx->pc) {
        case 0x1cffc2cu: goto label_1cffc2c;
        case 0x1cffc38u: goto label_1cffc38;
        default: break;
    }

    ctx->pc = 0x1cffc18u;

    // 0x1cffc18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffc1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffc20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffc24: 0xc73f726  jal         func_1CFDC98
    ctx->pc = 0x1CFFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFFC2Cu);
    ctx->pc = 0x1CFFC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFC24u;
    // 0x1cffc28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDC98u, 0x1CFFC24u, 0x1CFFC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFC2Cu;
label_1cffc2c:
    // 0x1cffc2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cffc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cffc30: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFC30u;
    SET_GPR_U32(ctx, 31, 0x1CFFC38u);
    ctx->pc = 0x1CFFC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFC30u;
    // 0x1cffc34: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFC30u, 0x1CFFC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFC38u;
label_1cffc38:
    // 0x1cffc38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cffc38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cffc3c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cffc3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffc40: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cffc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cffc44: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cffc44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cffc48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cffc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cffc4c: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1cffc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1cffc50: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1cffc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1cffc54: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1cffc54u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1cffc58: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1cffc58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1cffc5c: 0x25cebc58  addiu       $t6, $t6, -0x43A8
    ctx->pc = 0x1cffc5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949976));
    // 0x1cffc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffc64: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cffc64u;
    { uint32_t bits = FAST_READ32(0x1D0BC58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffc68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffc6c: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1cffc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1cffc70: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1cffc70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1cffc74: 0x25cebc5c  addiu       $t6, $t6, -0x43A4
    ctx->pc = 0x1cffc74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949980));
    // 0x1cffc78: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1cffc78u;
    { uint32_t bits = FAST_READ32(0x1D0BC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffc7c: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1cffc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1cffc80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFC80u;
        // 0x1cffc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFC88u;
}
