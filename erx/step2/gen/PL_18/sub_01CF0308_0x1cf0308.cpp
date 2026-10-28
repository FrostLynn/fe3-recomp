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

// Function: sub_01CF0308
// Address: 0x1cf0308 - 0x1cf03b8
void sub_01CF0308_0x1cf0308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0308_0x1cf0308");
#endif

    switch (ctx->pc) {
        case 0x1cf0330u: goto label_1cf0330;
        case 0x1cf0344u: goto label_1cf0344;
        case 0x1cf0348u: goto label_1cf0348;
        case 0x1cf0368u: goto label_1cf0368;
        case 0x1cf0378u: goto label_1cf0378;
        case 0x1cf03acu: goto label_1cf03ac;
        default: break;
    }

    ctx->pc = 0x1cf0308u;

    // 0x1cf0308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf0308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf030c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf0310: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf0314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf0318: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf0318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf031c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cf031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cf0320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf0320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0324: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf0328: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0328u;
    SET_GPR_U32(ctx, 31, 0x1CF0330u);
    ctx->pc = 0x1CF032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0328u;
    // 0x1cf032c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0328u, 0x1CF0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0330u;
label_1cf0330:
    // 0x1cf0330: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cf0330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cf0334: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CF0334u;
    {
        const bool branch_taken_0x1cf0334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0334u;
        // 0x1cf0338: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0334) {
            ctx->pc = 0x1CF0380u;
            goto label_1cf0380;
        }
    }
    ctx->pc = 0x1CF033Cu;
    // 0x1cf033c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF033Cu;
    {
        const bool branch_taken_0x1cf033c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cf033c) {
            ctx->pc = 0x1CF0360u;
            goto label_1cf0360;
        }
    }
    ctx->pc = 0x1CF0344u;
label_1cf0344:
    // 0x1cf0344: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf0344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0348:
    // 0x1cf0348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf034c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf034cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf0350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf0358: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0358u;
        // 0x1cf035c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0360u;
label_1cf0360:
    // 0x1cf0360: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF0360u;
    SET_GPR_U32(ctx, 31, 0x1CF0368u);
    ctx->pc = 0x1CF0364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0360u;
    // 0x1cf0364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF0360u, 0x1CF0368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0368u;
label_1cf0368:
    // 0x1cf0368: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CF0368u;
    {
        const bool branch_taken_0x1cf0368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CF036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0368u;
        // 0x1cf036c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0368) {
            ctx->pc = 0x1CF0344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0344;
        }
    }
    ctx->pc = 0x1CF0370u;
    // 0x1cf0370: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF0370u;
    SET_GPR_U32(ctx, 31, 0x1CF0378u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF0370u, 0x1CF0378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0378u;
label_1cf0378:
    // 0x1cf0378: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CF0378u;
    {
        const bool branch_taken_0x1cf0378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0378u;
        // 0x1cf037c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0378) {
            ctx->pc = 0x1CF0348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0348;
        }
    }
    ctx->pc = 0x1CF0380u;
label_1cf0380:
    // 0x1cf0380: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cf0380u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cf0384: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF0384u;
    {
        const bool branch_taken_0x1cf0384 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0384u;
        // 0x1cf0388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0384) {
            ctx->pc = 0x1CF0348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0348;
        }
    }
    ctx->pc = 0x1CF038Cu;
    // 0x1cf038c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cf038cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf0390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf0394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0398: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf0398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf039c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf039cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf03a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf03a4: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF03A4u;
    SET_GPR_U32(ctx, 31, 0x1CF03ACu);
    ctx->pc = 0x1CF03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF03A4u;
    // 0x1cf03a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF03A4u, 0x1CF03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF03ACu;
label_1cf03ac:
    // 0x1cf03ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf03acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf03b0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CF03B0u;
    {
        const bool branch_taken_0x1cf03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF03B0u;
        // 0x1cf03b4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf03b0) {
            ctx->pc = 0x1CF0344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0344;
        }
    }
    ctx->pc = 0x1CF03B8u;
}
