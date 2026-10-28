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

// Function: sub_01DBE038
// Address: 0x1dbe038 - 0x1dbe098
void sub_01DBE038_0x1dbe038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBE038_0x1dbe038");
#endif

    switch (ctx->pc) {
        case 0x1dbe068u: goto label_1dbe068;
        case 0x1dbe06cu: goto label_1dbe06c;
        case 0x1dbe08cu: goto label_1dbe08c;
        default: break;
    }

    ctx->pc = 0x1dbe038u;

    // 0x1dbe038: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1dbe038u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe03c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbe03cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbe040: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dbe040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbe044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbe048: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1dbe048u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe04c: 0x2406041c  addiu       $a2, $zero, 0x41C
    ctx->pc = 0x1dbe04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
    // 0x1dbe050: 0x240f0157  addiu       $t7, $zero, 0x157
    ctx->pc = 0x1dbe050u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1dbe054: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBE054u;
    {
        const bool branch_taken_0x1dbe054 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE054u;
        // 0x1dbe058: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe054) {
            ctx->pc = 0x1DBE078u;
            goto label_1dbe078;
        }
    }
    ctx->pc = 0x1DBE05Cu;
    // 0x1dbe05c: 0x3c0601dc  lui         $a2, 0x1DC
    ctx->pc = 0x1dbe05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)476 << 16));
    // 0x1dbe060: 0xc76f166  jal         func_1DBC598
    ctx->pc = 0x1DBE060u;
    SET_GPR_U32(ctx, 31, 0x1DBE068u);
    ctx->pc = 0x1DBE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE060u;
    // 0x1dbe064: 0x24c62270  addiu       $a2, $a2, 0x2270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC598u, 0x1DBE060u, 0x1DBE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE068u;
label_1dbe068:
    // 0x1dbe068: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dbe068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dbe06c:
    // 0x1dbe06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbe06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe070: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE070u;
        // 0x1dbe074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE078u;
label_1dbe078:
    // 0x1dbe078: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x1dbe078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x1dbe07c: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x1dbe07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x1dbe080: 0x24a5f270  addiu       $a1, $a1, -0xD90
    ctx->pc = 0x1dbe080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963824));
    // 0x1dbe084: 0xc76ee72  jal         func_1DBB9C8
    ctx->pc = 0x1DBE084u;
    SET_GPR_U32(ctx, 31, 0x1DBE08Cu);
    ctx->pc = 0x1DBE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE084u;
    // 0x1dbe088: 0x2484b9c0  addiu       $a0, $a0, -0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB9C8u, 0x1DBE084u, 0x1DBE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE08Cu;
label_1dbe08c:
    // 0x1dbe08c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DBE08Cu;
    {
        const bool branch_taken_0x1dbe08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE08Cu;
        // 0x1dbe090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe08c) {
            ctx->pc = 0x1DBE06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbe06c;
        }
    }
    ctx->pc = 0x1DBE094u;
    // 0x1dbe094: 0x0  nop
    ctx->pc = 0x1dbe094u;
    // NOP
    ctx->pc = 0x1dbe098u;
}
