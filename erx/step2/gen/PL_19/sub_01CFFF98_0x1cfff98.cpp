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

// Function: sub_01CFFF98
// Address: 0x1cfff98 - 0x1d00000
void sub_01CFFF98_0x1cfff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFF98_0x1cfff98");
#endif

    switch (ctx->pc) {
        case 0x1cfffacu: goto label_1cfffac;
        case 0x1cfffbcu: goto label_1cfffbc;
        case 0x1cfffd8u: goto label_1cfffd8;
        default: break;
    }

    ctx->pc = 0x1cfff98u;

    // 0x1cfff98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfff98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfff9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfffa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfffa4: 0xc73ff52  jal         func_1CFFD48
    ctx->pc = 0x1CFFFA4u;
    SET_GPR_U32(ctx, 31, 0x1CFFFACu);
    ctx->pc = 0x1CFFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFFA4u;
    // 0x1cfffa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFD48u, 0x1CFFFA4u, 0x1CFFFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFFACu;
label_1cfffac:
    // 0x1cfffac: 0x8f8f80ac  lw          $t7, -0x7F54($gp)
    ctx->pc = 0x1cfffacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1cfffb0: 0x5e00006  bltz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFFFB0u;
    {
        const bool branch_taken_0x1cfffb0 = (GPR_S32(ctx, 15) < 0);
        ctx->pc = 0x1CFFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFFB0u;
        // 0x1cfffb4: 0x25eeffff  addiu       $t6, $t7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfffb0) {
            ctx->pc = 0x1CFFFCCu;
            goto label_1cfffcc;
        }
    }
    ctx->pc = 0x1CFFFB8u;
    // 0x1cfffb8: 0xaf8e80ac  sw          $t6, -0x7F54($gp)
    ctx->pc = 0x1cfffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 14));
label_1cfffbc:
    // 0x1cfffbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfffbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfffc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfffc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfffc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFFC4u;
        // 0x1cfffc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFFCCu;
label_1cfffcc:
    // 0x1cfffcc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfffccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfffd0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFFD0u;
    SET_GPR_U32(ctx, 31, 0x1CFFFD8u);
    ctx->pc = 0x1CFFFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFFD0u;
    // 0x1cfffd4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFFD0u, 0x1CFFFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFFD8u;
label_1cfffd8:
    // 0x1cfffd8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfffd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfffdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfffdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfffe0: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cfffe0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cfffe4: 0xe5e0003c  swc1        $f0, 0x3C($t7)
    ctx->pc = 0x1cfffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1cfffe8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CFFFE8u;
    {
        const bool branch_taken_0x1cfffe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFFE8u;
        // 0x1cfffec: 0xe5e00044  swc1        $f0, 0x44($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfffe8) {
            ctx->pc = 0x1CFFFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfffbc;
        }
    }
    ctx->pc = 0x1CFFFF0u;
    // 0x1cffff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffffc: 0x873ff7c  j           func_1CFFDF0
    ctx->pc = 0x1CFFFFCu;
    ctx->pc = 0x1D00000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFFFCu;
    // 0x1d00000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFDF0u;
    sub_01CFFDF0_0x1cffdf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D00004u;
}
