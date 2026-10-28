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

// Function: sub_01CFFF10
// Address: 0x1cfff10 - 0x1cfff80
void sub_01CFFF10_0x1cfff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFF10_0x1cfff10");
#endif

    switch (ctx->pc) {
        case 0x1cfff24u: goto label_1cfff24;
        case 0x1cfff34u: goto label_1cfff34;
        case 0x1cfff50u: goto label_1cfff50;
        default: break;
    }

    ctx->pc = 0x1cfff10u;

    // 0x1cfff10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfff14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfff18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfff1c: 0xc73ff52  jal         func_1CFFD48
    ctx->pc = 0x1CFFF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFFF24u);
    ctx->pc = 0x1CFFF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFF1Cu;
    // 0x1cfff20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFFD48u, 0x1CFFF1Cu, 0x1CFFF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFF24u;
label_1cfff24:
    // 0x1cfff24: 0x8f8f80ac  lw          $t7, -0x7F54($gp)
    ctx->pc = 0x1cfff24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1cfff28: 0x1de00006  bgtz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFFF28u;
    {
        const bool branch_taken_0x1cfff28 = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x1CFFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFF28u;
        // 0x1cfff2c: 0x25ee0001  addiu       $t6, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfff28) {
            ctx->pc = 0x1CFFF44u;
            goto label_1cfff44;
        }
    }
    ctx->pc = 0x1CFFF30u;
    // 0x1cfff30: 0xaf8e80ac  sw          $t6, -0x7F54($gp)
    ctx->pc = 0x1cfff30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 14));
label_1cfff34:
    // 0x1cfff34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfff34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfff38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfff3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFF3Cu;
        // 0x1cfff40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFF44u;
label_1cfff44:
    // 0x1cfff44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfff44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfff48: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFF48u;
    SET_GPR_U32(ctx, 31, 0x1CFFF50u);
    ctx->pc = 0x1CFFF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFF48u;
    // 0x1cfff4c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFF48u, 0x1CFFF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFF50u;
label_1cfff50:
    // 0x1cfff50: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cfff50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cfff54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cfff54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfff58: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cfff58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cfff5c: 0xe5e0003c  swc1        $f0, 0x3C($t7)
    ctx->pc = 0x1cfff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1cfff60: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CFFF60u;
    {
        const bool branch_taken_0x1cfff60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFF60u;
        // 0x1cfff64: 0xe5e00044  swc1        $f0, 0x44($t7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfff60) {
            ctx->pc = 0x1CFFF34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfff34;
        }
    }
    ctx->pc = 0x1CFFF68u;
    // 0x1cfff68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfff6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfff70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfff70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfff74: 0x873ff7c  j           func_1CFFDF0
    ctx->pc = 0x1CFFF74u;
    ctx->pc = 0x1CFFF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFF74u;
    // 0x1cfff78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFDF0u;
    sub_01CFFDF0_0x1cffdf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFF7Cu;
    // 0x1cfff7c: 0x0  nop
    ctx->pc = 0x1cfff7cu;
    // NOP
    ctx->pc = 0x1cfff80u;
}
