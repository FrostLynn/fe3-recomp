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

// Function: sub_01CCE050
// Address: 0x1cce050 - 0x1cce0e0
void sub_01CCE050_0x1cce050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE050_0x1cce050");
#endif

    switch (ctx->pc) {
        case 0x1cce064u: goto label_1cce064;
        case 0x1cce078u: goto label_1cce078;
        case 0x1cce07cu: goto label_1cce07c;
        case 0x1cce0c4u: goto label_1cce0c4;
        default: break;
    }

    ctx->pc = 0x1cce050u;

    // 0x1cce050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cce058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cce05c: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCE05Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE064u);
    ctx->pc = 0x1CCE060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE05Cu;
    // 0x1cce060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCE05Cu, 0x1CCE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE064u;
label_1cce064:
    // 0x1cce064: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cce064u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce068: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCE068u;
    {
        const bool branch_taken_0x1cce068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE068u;
        // 0x1cce06c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce068) {
            ctx->pc = 0x1CCE08Cu;
            goto label_1cce08c;
        }
    }
    ctx->pc = 0x1CCE070u;
    // 0x1cce070: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCE070u;
    SET_GPR_U32(ctx, 31, 0x1CCE078u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCE070u, 0x1CCE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE078u;
label_1cce078:
    // 0x1cce078: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cce078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cce07c:
    // 0x1cce07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cce080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce084: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE084u;
        // 0x1cce088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE08Cu;
label_1cce08c:
    // 0x1cce08c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCE08Cu;
    {
        const bool branch_taken_0x1cce08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE08Cu;
        // 0x1cce090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce08c) {
            ctx->pc = 0x1CCE07Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce07c;
        }
    }
    ctx->pc = 0x1CCE094u;
    // 0x1cce094: 0x0  nop
    ctx->pc = 0x1cce094u;
    // NOP
    // 0x1cce098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cce09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce0a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cce0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cce0a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cce0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cce0ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cce0acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cce0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cce0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0b8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cce0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cce0bc: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCE0BCu;
    SET_GPR_U32(ctx, 31, 0x1CCE0C4u);
    ctx->pc = 0x1CCE0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE0BCu;
    // 0x1cce0c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCE0BCu, 0x1CCE0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE0C4u;
label_1cce0c4:
    // 0x1cce0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce0c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cce0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce0d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cce0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cce0d4: 0x873351a  j           func_1CCD468
    ctx->pc = 0x1CCE0D4u;
    ctx->pc = 0x1CCE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE0D4u;
    // 0x1cce0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    sub_01CCD468_0x1ccd468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE0DCu;
    // 0x1cce0dc: 0x0  nop
    ctx->pc = 0x1cce0dcu;
    // NOP
    ctx->pc = 0x1cce0e0u;
}
