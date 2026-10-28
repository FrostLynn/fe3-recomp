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

// Function: sub_01DBD820
// Address: 0x1dbd820 - 0x1dbd868
void sub_01DBD820_0x1dbd820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD820_0x1dbd820");
#endif

    switch (ctx->pc) {
        case 0x1dbd834u: goto label_1dbd834;
        case 0x1dbd848u: goto label_1dbd848;
        case 0x1dbd84cu: goto label_1dbd84c;
        default: break;
    }

    ctx->pc = 0x1dbd820u;

    // 0x1dbd820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbd828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbd82c: 0xc76f55a  jal         func_1DBD568
    ctx->pc = 0x1DBD82Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD834u);
    ctx->pc = 0x1DBD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD82Cu;
    // 0x1dbd830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBD568u, 0x1DBD82Cu, 0x1DBD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD834u;
label_1dbd834:
    // 0x1dbd834: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbd834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbd838: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBD838u;
    {
        const bool branch_taken_0x1dbd838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD838u;
        // 0x1dbd83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd838) {
            ctx->pc = 0x1DBD85Cu;
            goto label_1dbd85c;
        }
    }
    ctx->pc = 0x1DBD840u;
    // 0x1dbd840: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBD840u;
    SET_GPR_U32(ctx, 31, 0x1DBD848u);
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBD840u, 0x1DBD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD848u;
label_1dbd848:
    // 0x1dbd848: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dbd848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dbd84c:
    // 0x1dbd84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbd850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd854: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD854u;
        // 0x1dbd858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD85Cu;
label_1dbd85c:
    // 0x1dbd85c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DBD85Cu;
    {
        const bool branch_taken_0x1dbd85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD85Cu;
        // 0x1dbd860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd85c) {
            ctx->pc = 0x1DBD84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd84c;
        }
    }
    ctx->pc = 0x1DBD864u;
    // 0x1dbd864: 0x0  nop
    ctx->pc = 0x1dbd864u;
    // NOP
    ctx->pc = 0x1dbd868u;
}
