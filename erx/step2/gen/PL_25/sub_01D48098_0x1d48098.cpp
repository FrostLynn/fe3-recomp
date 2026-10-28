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

// Function: sub_01D48098
// Address: 0x1d48098 - 0x1d481d0
void sub_01D48098_0x1d48098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48098_0x1d48098");
#endif

    switch (ctx->pc) {
        case 0x1d480b8u: goto label_1d480b8;
        case 0x1d480ccu: goto label_1d480cc;
        case 0x1d480d0u: goto label_1d480d0;
        case 0x1d480ecu: goto label_1d480ec;
        case 0x1d480fcu: goto label_1d480fc;
        case 0x1d48148u: goto label_1d48148;
        case 0x1d48184u: goto label_1d48184;
        case 0x1d48190u: goto label_1d48190;
        case 0x1d481a0u: goto label_1d481a0;
        case 0x1d481b8u: goto label_1d481b8;
        default: break;
    }

    ctx->pc = 0x1d48098u;

    // 0x1d48098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d48098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4809c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d480a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d480a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d480a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d480a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d480a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d480a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d480ac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d480acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d480b0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D480B0u;
    SET_GPR_U32(ctx, 31, 0x1D480B8u);
    ctx->pc = 0x1D480B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D480B0u;
    // 0x1d480b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D480B0u, 0x1D480B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D480B8u;
label_1d480b8:
    // 0x1d480b8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d480b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d480bc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D480BCu;
    {
        const bool branch_taken_0x1d480bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D480C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D480BCu;
        // 0x1d480c0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d480bc) {
            ctx->pc = 0x1D48108u;
            goto label_1d48108;
        }
    }
    ctx->pc = 0x1D480C4u;
    // 0x1d480c4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D480C4u;
    {
        const bool branch_taken_0x1d480c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d480c4) {
            ctx->pc = 0x1D480E4u;
            goto label_1d480e4;
        }
    }
    ctx->pc = 0x1D480CCu;
label_1d480cc:
    // 0x1d480cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d480ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d480d0:
    // 0x1d480d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d480d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d480d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d480d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d480d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d480d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d480dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D480DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D480E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D480DCu;
        // 0x1d480e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D480DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D480E4u;
label_1d480e4:
    // 0x1d480e4: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D480E4u;
    SET_GPR_U32(ctx, 31, 0x1D480ECu);
    ctx->pc = 0x1D480E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D480E4u;
    // 0x1d480e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D480E4u, 0x1D480ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D480ECu;
label_1d480ec:
    // 0x1d480ec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D480ECu;
    {
        const bool branch_taken_0x1d480ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D480F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D480ECu;
        // 0x1d480f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d480ec) {
            ctx->pc = 0x1D480CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d480cc;
        }
    }
    ctx->pc = 0x1D480F4u;
    // 0x1d480f4: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D480F4u;
    SET_GPR_U32(ctx, 31, 0x1D480FCu);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D480F4u, 0x1D480FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D480FCu;
label_1d480fc:
    // 0x1d480fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D480FCu;
    {
        const bool branch_taken_0x1d480fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D480FCu;
        // 0x1d48100: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d480fc) {
            ctx->pc = 0x1D480D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d480d0;
        }
    }
    ctx->pc = 0x1D48104u;
    // 0x1d48104: 0x0  nop
    ctx->pc = 0x1d48104u;
    // NOP
label_1d48108:
    // 0x1d48108: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d48108u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d4810c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D4810Cu;
    {
        const bool branch_taken_0x1d4810c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4810Cu;
        // 0x1d48110: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4810c) {
            ctx->pc = 0x1D480D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d480d0;
        }
    }
    ctx->pc = 0x1D48114u;
    // 0x1d48114: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d48114u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d48118: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d48118u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d4811c: 0x25ceaef0  addiu       $t6, $t6, -0x5110
    ctx->pc = 0x1d4811cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946544));
    // 0x1d48120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48124: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d48124u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d48128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4812c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d4812cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d48130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d48130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48134: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d48134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d48138: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d48138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4813c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d4813cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48140: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D48140u;
    SET_GPR_U32(ctx, 31, 0x1D48148u);
    ctx->pc = 0x1D48144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48140u;
    // 0x1d48144: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D48140u, 0x1D48148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48148u;
label_1d48148:
    // 0x1d48148: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d48148u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4814c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D4814Cu;
    {
        const bool branch_taken_0x1d4814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4814Cu;
        // 0x1d48150: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4814c) {
            ctx->pc = 0x1D480CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d480cc;
        }
    }
    ctx->pc = 0x1D48154u;
    // 0x1d48154: 0x0  nop
    ctx->pc = 0x1d48154u;
    // NOP
    // 0x1d48158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4815c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d4815cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d48160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d48160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d48164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d48164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48168: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d48168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4816c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4816cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d48170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48174: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d48174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48178: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d48178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4817c: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D4817Cu;
    SET_GPR_U32(ctx, 31, 0x1D48184u);
    ctx->pc = 0x1D48180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4817Cu;
    // 0x1d48180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D4817Cu, 0x1D48184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48184u;
label_1d48184:
    // 0x1d48184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d48184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48188: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D48188u;
    SET_GPR_U32(ctx, 31, 0x1D48190u);
    ctx->pc = 0x1D4818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48188u;
    // 0x1d4818c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D48188u, 0x1D48190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48190u;
label_1d48190:
    // 0x1d48190: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d48190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d48194: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d48194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d48198: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D48198u;
    SET_GPR_U32(ctx, 31, 0x1D481A0u);
    ctx->pc = 0x1D4819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48198u;
    // 0x1d4819c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D48198u, 0x1D481A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D481A0u;
label_1d481a0:
    // 0x1d481a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d481a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d481a4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d481a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d481a8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d481a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d481ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d481acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d481b0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D481B0u;
    SET_GPR_U32(ctx, 31, 0x1D481B8u);
    ctx->pc = 0x1D481B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D481B0u;
    // 0x1d481b4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D481B0u, 0x1D481B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D481B8u;
label_1d481b8:
    // 0x1d481b8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d481b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d481bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d481bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d481c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d481c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d481c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D481C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D481C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D481C4u;
        // 0x1d481c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D481C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D481CCu;
    // 0x1d481cc: 0x0  nop
    ctx->pc = 0x1d481ccu;
    // NOP
    ctx->pc = 0x1d481d0u;
}
