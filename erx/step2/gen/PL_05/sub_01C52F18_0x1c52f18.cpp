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

// Function: sub_01C52F18
// Address: 0x1c52f18 - 0x1c52f88
void sub_01C52F18_0x1c52f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52F18_0x1c52f18");
#endif

    switch (ctx->pc) {
        case 0x1c52f2cu: goto label_1c52f2c;
        case 0x1c52f38u: goto label_1c52f38;
        default: break;
    }

    ctx->pc = 0x1c52f18u;

    // 0x1c52f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52f24: 0xc7140e6  jal         func_1C50398
    ctx->pc = 0x1C52F24u;
    SET_GPR_U32(ctx, 31, 0x1C52F2Cu);
    ctx->pc = 0x1C52F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52F24u;
    // 0x1c52f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50398u, 0x1C52F24u, 0x1C52F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52F2Cu;
label_1c52f2c:
    // 0x1c52f2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c52f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c52f30: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52F30u;
    SET_GPR_U32(ctx, 31, 0x1C52F38u);
    ctx->pc = 0x1C52F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52F30u;
    // 0x1c52f34: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52F30u, 0x1C52F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52F38u;
label_1c52f38:
    // 0x1c52f38: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c52f38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c52f3c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1c52f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52f40: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c52f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c52f44: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1c52f44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1c52f48: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c52f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c52f4c: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1c52f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1c52f50: 0xe5e1003c  swc1        $f1, 0x3C($t7)
    ctx->pc = 0x1c52f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1c52f54: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c52f54u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c52f58: 0xe5e10044  swc1        $f1, 0x44($t7)
    ctx->pc = 0x1c52f58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1c52f5c: 0x25cef4a4  addiu       $t6, $t6, -0xB5C
    ctx->pc = 0x1c52f5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964388));
    // 0x1c52f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52f64: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1c52f64u;
    { uint32_t bits = FAST_READ32(0x1C5F4A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c52f68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52f6c: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1c52f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1c52f70: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c52f70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c52f74: 0x25cef4a8  addiu       $t6, $t6, -0xB58
    ctx->pc = 0x1c52f74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964392));
    // 0x1c52f78: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1c52f78u;
    { uint32_t bits = FAST_READ32(0x1C5F4A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c52f7c: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1c52f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1c52f80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52F80u;
        // 0x1c52f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52F88u;
}
