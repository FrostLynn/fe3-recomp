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

// Function: sub_01C9A5C0
// Address: 0x1c9a5c0 - 0x1c9a6c8
void sub_01C9A5C0_0x1c9a5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A5C0_0x1c9a5c0");
#endif

    switch (ctx->pc) {
        case 0x1c9a5dcu: goto label_1c9a5dc;
        case 0x1c9a5e4u: goto label_1c9a5e4;
        case 0x1c9a5f8u: goto label_1c9a5f8;
        case 0x1c9a600u: goto label_1c9a600;
        case 0x1c9a604u: goto label_1c9a604;
        case 0x1c9a640u: goto label_1c9a640;
        case 0x1c9a66cu: goto label_1c9a66c;
        case 0x1c9a678u: goto label_1c9a678;
        case 0x1c9a684u: goto label_1c9a684;
        case 0x1c9a698u: goto label_1c9a698;
        case 0x1c9a6a8u: goto label_1c9a6a8;
        default: break;
    }

    ctx->pc = 0x1c9a5c0u;

    // 0x1c9a5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a5c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a5c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a5c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a5cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a5d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9a5d4: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A5D4u;
    SET_GPR_U32(ctx, 31, 0x1C9A5DCu);
    ctx->pc = 0x1C9A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A5D4u;
    // 0x1c9a5d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A5D4u, 0x1C9A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5DCu;
label_1c9a5dc:
    // 0x1c9a5dc: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9A5DCu;
    SET_GPR_U32(ctx, 31, 0x1C9A5E4u);
    ctx->pc = 0x1C9A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A5DCu;
    // 0x1c9a5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9A5DCu, 0x1C9A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5E4u;
label_1c9a5e4:
    // 0x1c9a5e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9a5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a5e8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9A5E8u;
    {
        const bool branch_taken_0x1c9a5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A5E8u;
        // 0x1c9a5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a5e8) {
            ctx->pc = 0x1C9A614u;
            goto label_1c9a614;
        }
    }
    ctx->pc = 0x1C9A5F0u;
    // 0x1c9a5f0: 0xc7262ec  jal         func_1C98BB0
    ctx->pc = 0x1C9A5F0u;
    SET_GPR_U32(ctx, 31, 0x1C9A5F8u);
    ctx->pc = 0x1C98BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BB0u, 0x1C9A5F0u, 0x1C9A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A5F8u;
label_1c9a5f8:
    // 0x1c9a5f8: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9A5F8u;
    SET_GPR_U32(ctx, 31, 0x1C9A600u);
    ctx->pc = 0x1C9A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A5F8u;
    // 0x1c9a5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9A5F8u, 0x1C9A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A600u;
label_1c9a600:
    // 0x1c9a600: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9a604:
    // 0x1c9a604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A60Cu;
        // 0x1c9a610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A614u;
label_1c9a614:
    // 0x1c9a614: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9A614u;
    {
        const bool branch_taken_0x1c9a614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A614u;
        // 0x1c9a618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a614) {
            ctx->pc = 0x1C9A604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9a604;
        }
    }
    ctx->pc = 0x1C9A61Cu;
    // 0x1c9a61c: 0x0  nop
    ctx->pc = 0x1c9a61cu;
    // NOP
    // 0x1c9a620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a62c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9a630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a634: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9a634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9a638: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9A638u;
    SET_GPR_U32(ctx, 31, 0x1C9A640u);
    ctx->pc = 0x1C9A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A638u;
    // 0x1c9a63c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9A638u, 0x1C9A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A640u;
label_1c9a640:
    // 0x1c9a640: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9a640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9a644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9a644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9a648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a64c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9a64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9a650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9a654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9a658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9a65c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a664: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9A664u;
    SET_GPR_U32(ctx, 31, 0x1C9A66Cu);
    ctx->pc = 0x1C9A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A664u;
    // 0x1c9a668: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9A664u, 0x1C9A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A66Cu;
label_1c9a66c:
    // 0x1c9a66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a670: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9A670u;
    SET_GPR_U32(ctx, 31, 0x1C9A678u);
    ctx->pc = 0x1C9A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A670u;
    // 0x1c9a674: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9A670u, 0x1C9A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A678u;
label_1c9a678:
    // 0x1c9a678: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9a67c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A67Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A684u);
    ctx->pc = 0x1C9A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A67Cu;
    // 0x1c9a680: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A67Cu, 0x1C9A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A684u;
label_1c9a684:
    // 0x1c9a684: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c9a684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c9a688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a68c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c9a68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a690: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9A690u;
    SET_GPR_U32(ctx, 31, 0x1C9A698u);
    ctx->pc = 0x1C9A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A690u;
    // 0x1c9a694: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9A690u, 0x1C9A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A698u;
label_1c9a698:
    // 0x1c9a698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a69c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a6a0: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A6A0u;
    SET_GPR_U32(ctx, 31, 0x1C9A6A8u);
    ctx->pc = 0x1C9A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A6A0u;
    // 0x1c9a6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A6A0u, 0x1C9A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A6A8u;
label_1c9a6a8:
    // 0x1c9a6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a6ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9a6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a6b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a6b4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1c9a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c9a6b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9a6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9a6bc: 0x87262de  j           func_1C98B78
    ctx->pc = 0x1C9A6BCu;
    ctx->pc = 0x1C9A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A6BCu;
    // 0x1c9a6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B78u;
    sub_01C98B78_0x1c98b78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9A6C4u;
    // 0x1c9a6c4: 0x0  nop
    ctx->pc = 0x1c9a6c4u;
    // NOP
    ctx->pc = 0x1c9a6c8u;
}
