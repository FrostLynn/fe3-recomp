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

// Function: sub_01D342E0
// Address: 0x1d342e0 - 0x1d34390
void sub_01D342E0_0x1d342e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D342E0_0x1d342e0");
#endif

    switch (ctx->pc) {
        case 0x1d34308u: goto label_1d34308;
        case 0x1d3431cu: goto label_1d3431c;
        case 0x1d34320u: goto label_1d34320;
        case 0x1d34340u: goto label_1d34340;
        case 0x1d34350u: goto label_1d34350;
        case 0x1d34384u: goto label_1d34384;
        default: break;
    }

    ctx->pc = 0x1d342e0u;

    // 0x1d342e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d342e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d342e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d342e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d342e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d342e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d342ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d342ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d342f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d342f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d342f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d342f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d342f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d342f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d342fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d342fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d34300: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34300u;
    SET_GPR_U32(ctx, 31, 0x1D34308u);
    ctx->pc = 0x1D34304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34300u;
    // 0x1d34304: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34300u, 0x1D34308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34308u;
label_1d34308:
    // 0x1d34308: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d34308u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d3430c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3430Cu;
    {
        const bool branch_taken_0x1d3430c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3430Cu;
        // 0x1d34310: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3430c) {
            ctx->pc = 0x1D34358u;
            goto label_1d34358;
        }
    }
    ctx->pc = 0x1D34314u;
    // 0x1d34314: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34314u;
    {
        const bool branch_taken_0x1d34314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d34314) {
            ctx->pc = 0x1D34338u;
            goto label_1d34338;
        }
    }
    ctx->pc = 0x1D3431Cu;
label_1d3431c:
    // 0x1d3431c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3431cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d34320:
    // 0x1d34320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d34324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d34328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3432c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3432cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d34330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34330u;
        // 0x1d34334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34338u;
label_1d34338:
    // 0x1d34338: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D34338u;
    SET_GPR_U32(ctx, 31, 0x1D34340u);
    ctx->pc = 0x1D3433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34338u;
    // 0x1d3433c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D34338u, 0x1D34340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34340u;
label_1d34340:
    // 0x1d34340: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D34340u;
    {
        const bool branch_taken_0x1d34340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D34344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34340u;
        // 0x1d34344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34340) {
            ctx->pc = 0x1D3431Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3431c;
        }
    }
    ctx->pc = 0x1D34348u;
    // 0x1d34348: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D34348u;
    SET_GPR_U32(ctx, 31, 0x1D34350u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D34348u, 0x1D34350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34350u;
label_1d34350:
    // 0x1d34350: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D34350u;
    {
        const bool branch_taken_0x1d34350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34350u;
        // 0x1d34354: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34350) {
            ctx->pc = 0x1D34320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34320;
        }
    }
    ctx->pc = 0x1D34358u;
label_1d34358:
    // 0x1d34358: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d34358u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d3435c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3435Cu;
    {
        const bool branch_taken_0x1d3435c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3435Cu;
        // 0x1d34360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3435c) {
            ctx->pc = 0x1D34320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34320;
        }
    }
    ctx->pc = 0x1D34364u;
    // 0x1d34364: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d34364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d34368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3436c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d34370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34378: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d34378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3437c: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D3437Cu;
    SET_GPR_U32(ctx, 31, 0x1D34384u);
    ctx->pc = 0x1D34380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3437Cu;
    // 0x1d34380: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D3437Cu, 0x1D34384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34384u;
label_1d34384:
    // 0x1d34384: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d34384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34388: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D34388u;
    {
        const bool branch_taken_0x1d34388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34388u;
        // 0x1d3438c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34388) {
            ctx->pc = 0x1D3431Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3431c;
        }
    }
    ctx->pc = 0x1D34390u;
}
