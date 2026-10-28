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

// Function: sub_01CA4548
// Address: 0x1ca4548 - 0x1ca45c8
void sub_01CA4548_0x1ca4548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4548_0x1ca4548");
#endif

    switch (ctx->pc) {
        case 0x1ca455cu: goto label_1ca455c;
        case 0x1ca4570u: goto label_1ca4570;
        case 0x1ca4578u: goto label_1ca4578;
        case 0x1ca457cu: goto label_1ca457c;
        default: break;
    }

    ctx->pc = 0x1ca4548u;

    // 0x1ca4548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca454c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca454cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca4554: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA4554u;
    SET_GPR_U32(ctx, 31, 0x1CA455Cu);
    ctx->pc = 0x1CA4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4554u;
    // 0x1ca4558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA4554u, 0x1CA455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA455Cu;
label_1ca455c:
    // 0x1ca455c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca455cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4560: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA4560u;
    {
        const bool branch_taken_0x1ca4560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA4564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4560u;
        // 0x1ca4564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4560) {
            ctx->pc = 0x1CA458Cu;
            goto label_1ca458c;
        }
    }
    ctx->pc = 0x1CA4568u;
    // 0x1ca4568: 0xc7289ec  jal         func_1CA27B0
    ctx->pc = 0x1CA4568u;
    SET_GPR_U32(ctx, 31, 0x1CA4570u);
    ctx->pc = 0x1CA27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA27B0u, 0x1CA4568u, 0x1CA4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4570u;
label_1ca4570:
    // 0x1ca4570: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4570u;
    SET_GPR_U32(ctx, 31, 0x1CA4578u);
    ctx->pc = 0x1CA4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4570u;
    // 0x1ca4574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4570u, 0x1CA4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4578u;
label_1ca4578:
    // 0x1ca4578: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca457c:
    // 0x1ca457c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca457cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4584: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4584u;
        // 0x1ca4588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA458Cu;
label_1ca458c:
    // 0x1ca458c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA458Cu;
    {
        const bool branch_taken_0x1ca458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA458Cu;
        // 0x1ca4590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca458c) {
            ctx->pc = 0x1CA457Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca457c;
        }
    }
    ctx->pc = 0x1CA4594u;
    // 0x1ca4594: 0x0  nop
    ctx->pc = 0x1ca4594u;
    // NOP
    // 0x1ca4598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca459c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca459cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca45a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca45a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca45a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca45a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca45a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca45a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca45ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca45acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca45b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca45b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca45b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca45b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca45b8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1ca45b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca45bc: 0x87289e2  j           func_1CA2788
    ctx->pc = 0x1CA45BCu;
    ctx->pc = 0x1CA45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA45BCu;
    // 0x1ca45c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    sub_01CA2788_0x1ca2788(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA45C4u;
    // 0x1ca45c4: 0x0  nop
    ctx->pc = 0x1ca45c4u;
    // NOP
    ctx->pc = 0x1ca45c8u;
}
