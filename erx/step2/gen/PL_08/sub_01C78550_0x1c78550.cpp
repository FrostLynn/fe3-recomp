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

// Function: sub_01C78550
// Address: 0x1c78550 - 0x1c785e8
void sub_01C78550_0x1c78550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78550_0x1c78550");
#endif

    switch (ctx->pc) {
        case 0x1c78564u: goto label_1c78564;
        case 0x1c78578u: goto label_1c78578;
        case 0x1c7857cu: goto label_1c7857c;
        case 0x1c785c4u: goto label_1c785c4;
        case 0x1c785d0u: goto label_1c785d0;
        default: break;
    }

    ctx->pc = 0x1c78550u;

    // 0x1c78550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7855c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7855Cu;
    SET_GPR_U32(ctx, 31, 0x1C78564u);
    ctx->pc = 0x1C78560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7855Cu;
    // 0x1c78560: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7855Cu, 0x1C78564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78564u;
label_1c78564:
    // 0x1c78564: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c78564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78568: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C78568u;
    {
        const bool branch_taken_0x1c78568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78568u;
        // 0x1c7856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78568) {
            ctx->pc = 0x1C7858Cu;
            goto label_1c7858c;
        }
    }
    ctx->pc = 0x1C78570u;
    // 0x1c78570: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C78570u;
    SET_GPR_U32(ctx, 31, 0x1C78578u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C78570u, 0x1C78578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78578u;
label_1c78578:
    // 0x1c78578: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c78578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7857c:
    // 0x1c7857c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7857cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78584: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78584u;
        // 0x1c78588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7858Cu;
label_1c7858c:
    // 0x1c7858c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7858Cu;
    {
        const bool branch_taken_0x1c7858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7858Cu;
        // 0x1c78590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7858c) {
            ctx->pc = 0x1C7857Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7857c;
        }
    }
    ctx->pc = 0x1C78594u;
    // 0x1c78594: 0x0  nop
    ctx->pc = 0x1c78594u;
    // NOP
    // 0x1c78598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7859c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7859cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c785a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c785a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c785a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c785a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c785a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c785a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c785ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c785acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c785b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c785b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c785b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c785b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785bc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C785BCu;
    SET_GPR_U32(ctx, 31, 0x1C785C4u);
    ctx->pc = 0x1C785C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C785BCu;
    // 0x1c785c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C785BCu, 0x1C785C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C785C4u;
label_1c785c4:
    // 0x1c785c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c785c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785c8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C785C8u;
    SET_GPR_U32(ctx, 31, 0x1C785D0u);
    ctx->pc = 0x1C785CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C785C8u;
    // 0x1c785cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C785C8u, 0x1C785D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C785D0u;
label_1c785d0:
    // 0x1c785d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c785d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c785d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c785d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c785d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c785d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c785dc: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x1c785dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1c785e0: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C785E0u;
    ctx->pc = 0x1C785E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C785E0u;
    // 0x1c785e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C785E8u;
}
