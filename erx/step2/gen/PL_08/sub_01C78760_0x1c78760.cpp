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

// Function: sub_01C78760
// Address: 0x1c78760 - 0x1c787f8
void sub_01C78760_0x1c78760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78760_0x1c78760");
#endif

    switch (ctx->pc) {
        case 0x1c78774u: goto label_1c78774;
        case 0x1c78788u: goto label_1c78788;
        case 0x1c7878cu: goto label_1c7878c;
        case 0x1c787d4u: goto label_1c787d4;
        case 0x1c787e0u: goto label_1c787e0;
        default: break;
    }

    ctx->pc = 0x1c78760u;

    // 0x1c78760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7876c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7876Cu;
    SET_GPR_U32(ctx, 31, 0x1C78774u);
    ctx->pc = 0x1C78770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7876Cu;
    // 0x1c78770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7876Cu, 0x1C78774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78774u;
label_1c78774:
    // 0x1c78774: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c78774u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78778: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C78778u;
    {
        const bool branch_taken_0x1c78778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78778u;
        // 0x1c7877c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78778) {
            ctx->pc = 0x1C7879Cu;
            goto label_1c7879c;
        }
    }
    ctx->pc = 0x1C78780u;
    // 0x1c78780: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C78780u;
    SET_GPR_U32(ctx, 31, 0x1C78788u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C78780u, 0x1C78788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78788u;
label_1c78788:
    // 0x1c78788: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c78788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7878c:
    // 0x1c7878c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7878cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78794: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78794u;
        // 0x1c78798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7879Cu;
label_1c7879c:
    // 0x1c7879c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7879Cu;
    {
        const bool branch_taken_0x1c7879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C787A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7879Cu;
        // 0x1c787a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7879c) {
            ctx->pc = 0x1C7878Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7878c;
        }
    }
    ctx->pc = 0x1C787A4u;
    // 0x1c787a4: 0x0  nop
    ctx->pc = 0x1c787a4u;
    // NOP
    // 0x1c787a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c787a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c787ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c787acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c787b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c787b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c787b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c787b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c787b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c787b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c787bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c787bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c787c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c787c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c787c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c787c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c787c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c787c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c787cc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C787CCu;
    SET_GPR_U32(ctx, 31, 0x1C787D4u);
    ctx->pc = 0x1C787D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C787CCu;
    // 0x1c787d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C787CCu, 0x1C787D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C787D4u;
label_1c787d4:
    // 0x1c787d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c787d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c787d8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C787D8u;
    SET_GPR_U32(ctx, 31, 0x1C787E0u);
    ctx->pc = 0x1C787DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C787D8u;
    // 0x1c787dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C787D8u, 0x1C787E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C787E0u;
label_1c787e0:
    // 0x1c787e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c787e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c787e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c787e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c787e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c787e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c787ec: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x1c787ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x1c787f0: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C787F0u;
    ctx->pc = 0x1C787F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C787F0u;
    // 0x1c787f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C787F8u;
}
