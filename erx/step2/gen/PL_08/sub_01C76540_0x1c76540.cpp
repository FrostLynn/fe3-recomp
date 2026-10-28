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

// Function: sub_01C76540
// Address: 0x1c76540 - 0x1c765d0
void sub_01C76540_0x1c76540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76540_0x1c76540");
#endif

    switch (ctx->pc) {
        case 0x1c76554u: goto label_1c76554;
        case 0x1c76568u: goto label_1c76568;
        case 0x1c7656cu: goto label_1c7656c;
        case 0x1c765b4u: goto label_1c765b4;
        default: break;
    }

    ctx->pc = 0x1c76540u;

    // 0x1c76540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c76540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c76544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76548: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c76548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7654c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7654Cu;
    SET_GPR_U32(ctx, 31, 0x1C76554u);
    ctx->pc = 0x1C76550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7654Cu;
    // 0x1c76550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7654Cu, 0x1C76554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76554u;
label_1c76554:
    // 0x1c76554: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c76554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76558: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C76558u;
    {
        const bool branch_taken_0x1c76558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76558u;
        // 0x1c7655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76558) {
            ctx->pc = 0x1C7657Cu;
            goto label_1c7657c;
        }
    }
    ctx->pc = 0x1C76560u;
    // 0x1c76560: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C76560u;
    SET_GPR_U32(ctx, 31, 0x1C76568u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C76560u, 0x1C76568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76568u;
label_1c76568:
    // 0x1c76568: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c76568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7656c:
    // 0x1c7656c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7656cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c76570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76574: 0x3e00008  jr          $ra
    ctx->pc = 0x1C76574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76574u;
        // 0x1c76578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7657Cu;
label_1c7657c:
    // 0x1c7657c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7657Cu;
    {
        const bool branch_taken_0x1c7657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7657Cu;
        // 0x1c76580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7657c) {
            ctx->pc = 0x1C7656Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7656c;
        }
    }
    ctx->pc = 0x1C76584u;
    // 0x1c76584: 0x0  nop
    ctx->pc = 0x1c76584u;
    // NOP
    // 0x1c76588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c76588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7658c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c7658cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76594: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c76594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c76598: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c76598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7659c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c7659cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c765a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c765a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c765a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c765a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c765a8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c765a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c765ac: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C765ACu;
    SET_GPR_U32(ctx, 31, 0x1C765B4u);
    ctx->pc = 0x1C765B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C765ACu;
    // 0x1c765b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C765ACu, 0x1C765B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C765B4u;
label_1c765b4:
    // 0x1c765b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c765b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c765b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c765b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c765bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c765bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c765c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c765c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c765c4: 0x871d65a  j           func_1C75968
    ctx->pc = 0x1C765C4u;
    ctx->pc = 0x1C765C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C765C4u;
    // 0x1c765c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    sub_01C75968_0x1c75968(rdram, ctx, runtime); return;
    ctx->pc = 0x1C765CCu;
    // 0x1c765cc: 0x0  nop
    ctx->pc = 0x1c765ccu;
    // NOP
    ctx->pc = 0x1c765d0u;
}
