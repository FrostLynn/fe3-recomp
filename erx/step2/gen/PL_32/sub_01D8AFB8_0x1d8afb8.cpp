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

// Function: sub_01D8AFB8
// Address: 0x1d8afb8 - 0x1d8b038
void sub_01D8AFB8_0x1d8afb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AFB8_0x1d8afb8");
#endif

    switch (ctx->pc) {
        case 0x1d8aff8u: goto label_1d8aff8;
        case 0x1d8affcu: goto label_1d8affc;
        case 0x1d8b018u: goto label_1d8b018;
        case 0x1d8b02cu: goto label_1d8b02c;
        default: break;
    }

    ctx->pc = 0x1d8afb8u;

    // 0x1d8afb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8afb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8afbc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1d8afbcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8afc0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1d8afc0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8afc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8afc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d8afc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8afcc: 0x240f013f  addiu       $t7, $zero, 0x13F
    ctx->pc = 0x1d8afccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    // 0x1d8afd0: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8AFD0u;
    {
        const bool branch_taken_0x1d8afd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D8AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AFD0u;
        // 0x1d8afd4: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8afd0) {
            ctx->pc = 0x1D8B020u;
            goto label_1d8b020;
        }
    }
    ctx->pc = 0x1D8AFD8u;
    // 0x1d8afd8: 0x240f0141  addiu       $t7, $zero, 0x141
    ctx->pc = 0x1d8afd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
    // 0x1d8afdc: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8AFDCu;
    {
        const bool branch_taken_0x1d8afdc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D8AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AFDCu;
        // 0x1d8afe0: 0x3c0401d9  lui         $a0, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8afdc) {
            ctx->pc = 0x1D8B008u;
            goto label_1d8b008;
        }
    }
    ctx->pc = 0x1D8AFE4u;
    // 0x1d8afe4: 0x3c0501d9  lui         $a1, 0x1D9
    ctx->pc = 0x1d8afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)473 << 16));
    // 0x1d8afe8: 0x248489b8  addiu       $a0, $a0, -0x7648
    ctx->pc = 0x1d8afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937016));
    // 0x1d8afec: 0x24a5bb48  addiu       $a1, $a1, -0x44B8
    ctx->pc = 0x1d8afecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949704));
    // 0x1d8aff0: 0xc762270  jal         func_1D889C0
    ctx->pc = 0x1D8AFF0u;
    SET_GPR_U32(ctx, 31, 0x1D8AFF8u);
    ctx->pc = 0x1D8AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AFF0u;
    // 0x1d8aff4: 0x2406035b  addiu       $a2, $zero, 0x35B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 859));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D889C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D889C0u, 0x1D8AFF0u, 0x1D8AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AFF8u;
label_1d8aff8:
    // 0x1d8aff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8aff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8affc:
    // 0x1d8affc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8affcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8b000: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B000u;
        // 0x1d8b004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B008u;
label_1d8b008:
    // 0x1d8b008: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1d8b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b00c: 0x3c0601d9  lui         $a2, 0x1D9
    ctx->pc = 0x1d8b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)473 << 16));
    // 0x1d8b010: 0xc76279c  jal         func_1D89E70
    ctx->pc = 0x1D8B010u;
    SET_GPR_U32(ctx, 31, 0x1D8B018u);
    ctx->pc = 0x1D8B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B010u;
    // 0x1d8b014: 0x24c6e870  addiu       $a2, $a2, -0x1790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89E70u, 0x1D8B010u, 0x1D8B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B018u;
label_1d8b018:
    // 0x1d8b018: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D8B018u;
    {
        const bool branch_taken_0x1d8b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B018u;
        // 0x1d8b01c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b018) {
            ctx->pc = 0x1D8AFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8affc;
        }
    }
    ctx->pc = 0x1D8B020u;
label_1d8b020:
    // 0x1d8b020: 0x3c0601d9  lui         $a2, 0x1D9
    ctx->pc = 0x1d8b020u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)473 << 16));
    // 0x1d8b024: 0xc762664  jal         func_1D89990
    ctx->pc = 0x1D8B024u;
    SET_GPR_U32(ctx, 31, 0x1D8B02Cu);
    ctx->pc = 0x1D8B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B024u;
    // 0x1d8b028: 0x24c6e840  addiu       $a2, $a2, -0x17C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89990u, 0x1D8B024u, 0x1D8B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8B02Cu;
label_1d8b02c:
    // 0x1d8b02c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D8B02Cu;
    {
        const bool branch_taken_0x1d8b02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B02Cu;
        // 0x1d8b030: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b02c) {
            ctx->pc = 0x1D8AFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8affc;
        }
    }
    ctx->pc = 0x1D8B034u;
    // 0x1d8b034: 0x0  nop
    ctx->pc = 0x1d8b034u;
    // NOP
    ctx->pc = 0x1d8b038u;
}
