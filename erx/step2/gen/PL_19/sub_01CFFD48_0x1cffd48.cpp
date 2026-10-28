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

// Function: sub_01CFFD48
// Address: 0x1cffd48 - 0x1cffdf0
void sub_01CFFD48_0x1cffd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFD48_0x1cffd48");
#endif

    switch (ctx->pc) {
        case 0x1cffd68u: goto label_1cffd68;
        case 0x1cffd74u: goto label_1cffd74;
        case 0x1cffdbcu: goto label_1cffdbc;
        default: break;
    }

    ctx->pc = 0x1cffd48u;

    // 0x1cffd48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cffd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cffd4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cffd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cffd50: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cffd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1cffd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cffd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cffd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cffd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffd5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cffd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cffd60: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFD60u;
    SET_GPR_U32(ctx, 31, 0x1CFFD68u);
    ctx->pc = 0x1CFFD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFD60u;
    // 0x1cffd64: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFD60u, 0x1CFFD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFD68u;
label_1cffd68:
    // 0x1cffd68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cffd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffd6c: 0xc73f50a  jal         func_1CFD428
    ctx->pc = 0x1CFFD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CFFD74u);
    ctx->pc = 0x1CFFD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFD6Cu;
    // 0x1cffd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD428u, 0x1CFFD6Cu, 0x1CFFD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFD74u;
label_1cffd74:
    // 0x1cffd74: 0x8f8f80ac  lw          $t7, -0x7F54($gp)
    ctx->pc = 0x1cffd74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1cffd78: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1cffd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1cffd7c: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFFD7Cu;
    {
        const bool branch_taken_0x1cffd7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFD7Cu;
        // 0x1cffd80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffd7c) {
            ctx->pc = 0x1CFFDBCu;
            goto label_1cffdbc;
        }
    }
    ctx->pc = 0x1CFFD84u;
    // 0x1cffd84: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffd84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffd88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1cffd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1cffd8c: 0x25efbc68  addiu       $t7, $t7, -0x4398
    ctx->pc = 0x1cffd8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949992));
    // 0x1cffd90: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cffd90u;
    { uint32_t bits = FAST_READ32(0x1D0BC68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffd94: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffd94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffd98: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cffd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cffd9c: 0x25efbc6c  addiu       $t7, $t7, -0x4394
    ctx->pc = 0x1cffd9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949996));
    // 0x1cffda0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cffda0u;
    { uint32_t bits = FAST_READ32(0x1D0BC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cffda4: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cffda4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cffda8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1cffda8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cffdac: 0x25efbc70  addiu       $t7, $t7, -0x4390
    ctx->pc = 0x1cffdacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950000));
    // 0x1cffdb0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cffdb0u;
    { uint32_t bits = FAST_READ32(0x1D0BC70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffdb4: 0xc73f74c  jal         func_1CFDD30
    ctx->pc = 0x1CFFDB4u;
    SET_GPR_U32(ctx, 31, 0x1CFFDBCu);
    ctx->pc = 0x1CFFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFDB4u;
    // 0x1cffdb8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD30u, 0x1CFFDB4u, 0x1CFFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFDBCu;
label_1cffdbc:
    // 0x1cffdbc: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1cffdbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1cffdc0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cffdc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cffdc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffdc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffdc8: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cffdc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cffdcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cffdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cffdd0: 0xe5e00040  swc1        $f0, 0x40($t7)
    ctx->pc = 0x1cffdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 64), bits); }
    // 0x1cffdd4: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1cffdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1cffdd8: 0xe5e00048  swc1        $f0, 0x48($t7)
    ctx->pc = 0x1cffdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 72), bits); }
    // 0x1cffddc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cffddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cffde0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cffde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cffde4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFDE4u;
        // 0x1cffde8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFDECu;
    // 0x1cffdec: 0x0  nop
    ctx->pc = 0x1cffdecu;
    // NOP
    ctx->pc = 0x1cffdf0u;
}
