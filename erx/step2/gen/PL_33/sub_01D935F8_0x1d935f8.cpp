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

// Function: sub_01D935F8
// Address: 0x1d935f8 - 0x1d93720
void sub_01D935F8_0x1d935f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D935F8_0x1d935f8");
#endif

    switch (ctx->pc) {
        case 0x1d93620u: goto label_1d93620;
        case 0x1d93634u: goto label_1d93634;
        case 0x1d93638u: goto label_1d93638;
        case 0x1d93658u: goto label_1d93658;
        case 0x1d93668u: goto label_1d93668;
        case 0x1d9369cu: goto label_1d9369c;
        case 0x1d936d4u: goto label_1d936d4;
        case 0x1d936e0u: goto label_1d936e0;
        case 0x1d936f0u: goto label_1d936f0;
        case 0x1d93708u: goto label_1d93708;
        default: break;
    }

    ctx->pc = 0x1d935f8u;

    // 0x1d935f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d935f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d935fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d935fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d93600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d93604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d93608: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d93608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9360c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d93610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d93610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93614: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d93618: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93618u;
    SET_GPR_U32(ctx, 31, 0x1D93620u);
    ctx->pc = 0x1D9361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93618u;
    // 0x1d9361c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93618u, 0x1D93620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93620u;
label_1d93620:
    // 0x1d93620: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d93620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d93624: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D93624u;
    {
        const bool branch_taken_0x1d93624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93624u;
        // 0x1d93628: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93624) {
            ctx->pc = 0x1D93670u;
            goto label_1d93670;
        }
    }
    ctx->pc = 0x1D9362Cu;
    // 0x1d9362c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9362Cu;
    {
        const bool branch_taken_0x1d9362c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9362c) {
            ctx->pc = 0x1D93650u;
            goto label_1d93650;
        }
    }
    ctx->pc = 0x1D93634u;
label_1d93634:
    // 0x1d93634: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d93634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d93638:
    // 0x1d93638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9363c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9363cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93640: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d93640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93644: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d93644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d93648: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93648u;
        // 0x1d9364c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93650u;
label_1d93650:
    // 0x1d93650: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D93650u;
    SET_GPR_U32(ctx, 31, 0x1D93658u);
    ctx->pc = 0x1D93654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93650u;
    // 0x1d93654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D93650u, 0x1D93658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93658u;
label_1d93658:
    // 0x1d93658: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D93658u;
    {
        const bool branch_taken_0x1d93658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93658u;
        // 0x1d9365c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93658) {
            ctx->pc = 0x1D93634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93634;
        }
    }
    ctx->pc = 0x1D93660u;
    // 0x1d93660: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D93660u;
    SET_GPR_U32(ctx, 31, 0x1D93668u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D93660u, 0x1D93668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93668u;
label_1d93668:
    // 0x1d93668: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D93668u;
    {
        const bool branch_taken_0x1d93668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93668u;
        // 0x1d9366c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93668) {
            ctx->pc = 0x1D93638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93638;
        }
    }
    ctx->pc = 0x1D93670u;
label_1d93670:
    // 0x1d93670: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d93670u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d93674: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D93674u;
    {
        const bool branch_taken_0x1d93674 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D93678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93674u;
        // 0x1d93678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93674) {
            ctx->pc = 0x1D93638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93638;
        }
    }
    ctx->pc = 0x1D9367Cu;
    // 0x1d9367c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d9367cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d93684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93688: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d93688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9368c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9368cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93690: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d93690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93694: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D93694u;
    SET_GPR_U32(ctx, 31, 0x1D9369Cu);
    ctx->pc = 0x1D93698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93694u;
    // 0x1d93698: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D93694u, 0x1D9369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9369Cu;
label_1d9369c:
    // 0x1d9369c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9369cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d936a0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D936A0u;
    {
        const bool branch_taken_0x1d936a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D936A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D936A0u;
        // 0x1d936a4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d936a0) {
            ctx->pc = 0x1D93634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93634;
        }
    }
    ctx->pc = 0x1D936A8u;
    // 0x1d936a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d936a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d936ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d936acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d936b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d936b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d936b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d936b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d936b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d936bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d936bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d936c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d936c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d936c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d936c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936cc: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D936CCu;
    SET_GPR_U32(ctx, 31, 0x1D936D4u);
    ctx->pc = 0x1D936D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D936CCu;
    // 0x1d936d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D936CCu, 0x1D936D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D936D4u;
label_1d936d4:
    // 0x1d936d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d936d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d936d8: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D936D8u;
    SET_GPR_U32(ctx, 31, 0x1D936E0u);
    ctx->pc = 0x1D936DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D936D8u;
    // 0x1d936dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D936D8u, 0x1D936E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D936E0u;
label_1d936e0:
    // 0x1d936e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d936e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d936e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d936e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d936e8: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D936E8u;
    SET_GPR_U32(ctx, 31, 0x1D936F0u);
    ctx->pc = 0x1D936ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D936E8u;
    // 0x1d936ec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D936E8u, 0x1D936F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D936F0u;
label_1d936f0:
    // 0x1d936f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d936f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d936f4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d936f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d936f8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d936f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d936fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d936fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d93700: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93700u;
    SET_GPR_U32(ctx, 31, 0x1D93708u);
    ctx->pc = 0x1D93704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93700u;
    // 0x1d93704: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93700u, 0x1D93708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93708u;
label_1d93708:
    // 0x1d93708: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d93708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9370c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9370cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93710: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d93710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93714: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93714u;
        // 0x1d93718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9371Cu;
    // 0x1d9371c: 0x0  nop
    ctx->pc = 0x1d9371cu;
    // NOP
    ctx->pc = 0x1d93720u;
}
