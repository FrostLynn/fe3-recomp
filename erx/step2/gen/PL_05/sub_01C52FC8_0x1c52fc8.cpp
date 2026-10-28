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

// Function: sub_01C52FC8
// Address: 0x1c52fc8 - 0x1c53050
void sub_01C52FC8_0x1c52fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52FC8_0x1c52fc8");
#endif

    switch (ctx->pc) {
        case 0x1c52fdcu: goto label_1c52fdc;
        case 0x1c52fe8u: goto label_1c52fe8;
        default: break;
    }

    ctx->pc = 0x1c52fc8u;

    // 0x1c52fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52fd4: 0xc7140e8  jal         func_1C503A0
    ctx->pc = 0x1C52FD4u;
    SET_GPR_U32(ctx, 31, 0x1C52FDCu);
    ctx->pc = 0x1C52FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52FD4u;
    // 0x1c52fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503A0u, 0x1C52FD4u, 0x1C52FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52FDCu;
label_1c52fdc:
    // 0x1c52fdc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c52fe0: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52FE0u;
    SET_GPR_U32(ctx, 31, 0x1C52FE8u);
    ctx->pc = 0x1C52FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52FE0u;
    // 0x1c52fe4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52FE0u, 0x1C52FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52FE8u;
label_1c52fe8:
    // 0x1c52fe8: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52fe8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c52fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c52ff0: 0x25eff4ac  addiu       $t7, $t7, -0xB54
    ctx->pc = 0x1c52ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964396));
    // 0x1c52ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52ff8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1c52ff8u;
    { uint32_t bits = FAST_READ32(0x1C5F4ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c52ffc: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c52ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c53000: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c53000u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c53004: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c53004u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c53008: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c53008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5300c: 0x25ce47e0  addiu       $t6, $t6, 0x47E0
    ctx->pc = 0x1c5300cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18400));
    // 0x1c53010: 0x25eff4b0  addiu       $t7, $t7, -0xB50
    ctx->pc = 0x1c53010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964400));
    // 0x1c53014: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c53014u;
    { uint32_t bits = FAST_READ32(0x1C5F4B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c53018: 0xa1c00009  sb          $zero, 0x9($t6)
    ctx->pc = 0x1c53018u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5301c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1c5301cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c53020: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c53020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c53024: 0xe5e04590  swc1        $f0, 0x4590($t7)
    ctx->pc = 0x1c53024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17808), bits); }
    // 0x1c53028: 0xe5e04598  swc1        $f0, 0x4598($t7)
    ctx->pc = 0x1c53028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17816), bits); }
    // 0x1c5302c: 0xe5c10044  swc1        $f1, 0x44($t6)
    ctx->pc = 0x1c5302cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 68), bits); }
    // 0x1c53030: 0xe5c2003c  swc1        $f2, 0x3C($t6)
    ctx->pc = 0x1c53030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 60), bits); }
    // 0x1c53034: 0xe5c20040  swc1        $f2, 0x40($t6)
    ctx->pc = 0x1c53034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 64), bits); }
    // 0x1c53038: 0xe5c10048  swc1        $f1, 0x48($t6)
    ctx->pc = 0x1c53038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 72), bits); }
    // 0x1c5303c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C53040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5303Cu;
        // 0x1c53040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C53044u;
    // 0x1c53044: 0x0  nop
    ctx->pc = 0x1c53044u;
    // NOP
    // 0x1c53048: 0x3e00008  jr          $ra
    ctx->pc = 0x1C53048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C53048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C53050u;
}
