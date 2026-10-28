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

// Function: sub_01C43210
// Address: 0x1c43210 - 0x1c432c0
void sub_01C43210_0x1c43210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43210_0x1c43210");
#endif

    switch (ctx->pc) {
        case 0x1c43238u: goto label_1c43238;
        case 0x1c4324cu: goto label_1c4324c;
        case 0x1c43250u: goto label_1c43250;
        case 0x1c43270u: goto label_1c43270;
        case 0x1c43280u: goto label_1c43280;
        case 0x1c432b4u: goto label_1c432b4;
        default: break;
    }

    ctx->pc = 0x1c43210u;

    // 0x1c43210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c43210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c43214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c43214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c43218: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4321c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c43220: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c43220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43224: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c43224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c43228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c43228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4322c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c4322cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c43230: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43230u;
    SET_GPR_U32(ctx, 31, 0x1C43238u);
    ctx->pc = 0x1C43234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43230u;
    // 0x1c43234: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43230u, 0x1C43238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43238u;
label_1c43238:
    // 0x1c43238: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c43238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c4323c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4323Cu;
    {
        const bool branch_taken_0x1c4323c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4323Cu;
        // 0x1c43240: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4323c) {
            ctx->pc = 0x1C43288u;
            goto label_1c43288;
        }
    }
    ctx->pc = 0x1C43244u;
    // 0x1c43244: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C43244u;
    {
        const bool branch_taken_0x1c43244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c43244) {
            ctx->pc = 0x1C43268u;
            goto label_1c43268;
        }
    }
    ctx->pc = 0x1C4324Cu;
label_1c4324c:
    // 0x1c4324c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4324cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c43250:
    // 0x1c43250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c43254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c43258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4325c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c4325cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c43260: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43260u;
        // 0x1c43264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43268u;
label_1c43268:
    // 0x1c43268: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C43268u;
    SET_GPR_U32(ctx, 31, 0x1C43270u);
    ctx->pc = 0x1C4326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43268u;
    // 0x1c4326c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C43268u, 0x1C43270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43270u;
label_1c43270:
    // 0x1c43270: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C43270u;
    {
        const bool branch_taken_0x1c43270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C43274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43270u;
        // 0x1c43274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43270) {
            ctx->pc = 0x1C4324Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4324c;
        }
    }
    ctx->pc = 0x1C43278u;
    // 0x1c43278: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C43278u;
    SET_GPR_U32(ctx, 31, 0x1C43280u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C43278u, 0x1C43280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43280u;
label_1c43280:
    // 0x1c43280: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C43280u;
    {
        const bool branch_taken_0x1c43280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43280u;
        // 0x1c43284: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43280) {
            ctx->pc = 0x1C43250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c43250;
        }
    }
    ctx->pc = 0x1C43288u;
label_1c43288:
    // 0x1c43288: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c43288u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c4328c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C4328Cu;
    {
        const bool branch_taken_0x1c4328c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C43290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4328Cu;
        // 0x1c43290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4328c) {
            ctx->pc = 0x1C43250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c43250;
        }
    }
    ctx->pc = 0x1C43294u;
    // 0x1c43294: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c43294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c43298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4329c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4329cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c432a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c432a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c432a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c432ac: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C432ACu;
    SET_GPR_U32(ctx, 31, 0x1C432B4u);
    ctx->pc = 0x1C432B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C432ACu;
    // 0x1c432b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C432ACu, 0x1C432B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C432B4u;
label_1c432b4:
    // 0x1c432b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c432b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c432b8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C432B8u;
    {
        const bool branch_taken_0x1c432b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C432BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C432B8u;
        // 0x1c432bc: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c432b8) {
            ctx->pc = 0x1C4324Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4324c;
        }
    }
    ctx->pc = 0x1C432C0u;
}
