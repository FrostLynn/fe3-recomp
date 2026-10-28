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

// Function: sub_01C00C78
// Address: 0x1c00c78 - 0x1c00cc0
void sub_01C00C78_0x1c00c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00C78_0x1c00c78");
#endif

    switch (ctx->pc) {
        case 0x1c00c8cu: goto label_1c00c8c;
        case 0x1c00ca0u: goto label_1c00ca0;
        case 0x1c00ca4u: goto label_1c00ca4;
        default: break;
    }

    ctx->pc = 0x1c00c78u;

    // 0x1c00c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00c80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00c84: 0xc700014  jal         func_1C00050
    ctx->pc = 0x1C00C84u;
    SET_GPR_U32(ctx, 31, 0x1C00C8Cu);
    ctx->pc = 0x1C00C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00C84u;
    // 0x1c00c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00050u, 0x1C00C84u, 0x1C00C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00C8Cu;
label_1c00c8c:
    // 0x1c00c8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00c90: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C00C90u;
    {
        const bool branch_taken_0x1c00c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C00C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00C90u;
        // 0x1c00c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00c90) {
            ctx->pc = 0x1C00CB4u;
            goto label_1c00cb4;
        }
    }
    ctx->pc = 0x1C00C98u;
    // 0x1c00c98: 0xc700016  jal         func_1C00058
    ctx->pc = 0x1C00C98u;
    SET_GPR_U32(ctx, 31, 0x1C00CA0u);
    ctx->pc = 0x1C00058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00058u, 0x1C00C98u, 0x1C00CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00CA0u;
label_1c00ca0:
    // 0x1c00ca0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c00ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c00ca4:
    // 0x1c00ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00ca8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c00ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00CACu;
        // 0x1c00cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00CB4u;
label_1c00cb4:
    // 0x1c00cb4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C00CB4u;
    {
        const bool branch_taken_0x1c00cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00CB4u;
        // 0x1c00cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00cb4) {
            ctx->pc = 0x1C00CA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00ca4;
        }
    }
    ctx->pc = 0x1C00CBCu;
    // 0x1c00cbc: 0x0  nop
    ctx->pc = 0x1c00cbcu;
    // NOP
    ctx->pc = 0x1c00cc0u;
}
