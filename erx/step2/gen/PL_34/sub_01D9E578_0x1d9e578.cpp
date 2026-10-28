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

// Function: sub_01D9E578
// Address: 0x1d9e578 - 0x1d9e6e0
void sub_01D9E578_0x1d9e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E578_0x1d9e578");
#endif

    switch (ctx->pc) {
        case 0x1d9e5a0u: goto label_1d9e5a0;
        case 0x1d9e5a4u: goto label_1d9e5a4;
        case 0x1d9e5c0u: goto label_1d9e5c0;
        case 0x1d9e5d0u: goto label_1d9e5d0;
        case 0x1d9e5d8u: goto label_1d9e5d8;
        case 0x1d9e5ecu: goto label_1d9e5ec;
        case 0x1d9e5f4u: goto label_1d9e5f4;
        case 0x1d9e624u: goto label_1d9e624;
        case 0x1d9e62cu: goto label_1d9e62c;
        case 0x1d9e658u: goto label_1d9e658;
        case 0x1d9e684u: goto label_1d9e684;
        case 0x1d9e690u: goto label_1d9e690;
        case 0x1d9e69cu: goto label_1d9e69c;
        case 0x1d9e6b0u: goto label_1d9e6b0;
        case 0x1d9e6c0u: goto label_1d9e6c0;
        default: break;
    }

    ctx->pc = 0x1d9e578u;

    // 0x1d9e578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9e580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9e584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9e588: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1d9e588u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d9e58c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D9E58Cu;
    {
        const bool branch_taken_0x1d9e58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E58Cu;
        // 0x1d9e590: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e58c) {
            ctx->pc = 0x1D9E5E0u;
            goto label_1d9e5e0;
        }
    }
    ctx->pc = 0x1D9E594u;
    // 0x1d9e594: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e598: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9E598u;
    {
        const bool branch_taken_0x1d9e598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9e598) {
            ctx->pc = 0x1D9E5B8u;
            goto label_1d9e5b8;
        }
    }
    ctx->pc = 0x1D9E5A0u;
label_1d9e5a0:
    // 0x1d9e5a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9e5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9e5a4:
    // 0x1d9e5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e5a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e5ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E5B0u;
        // 0x1d9e5b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E5B8u;
label_1d9e5b8:
    // 0x1d9e5b8: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E5B8u;
    SET_GPR_U32(ctx, 31, 0x1D9E5C0u);
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E5B8u, 0x1D9E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5C0u;
label_1d9e5c0:
    // 0x1d9e5c0: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9E5C0u;
    {
        const bool branch_taken_0x1d9e5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E5C0u;
        // 0x1d9e5c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e5c0) {
            ctx->pc = 0x1D9E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e5a0;
        }
    }
    ctx->pc = 0x1D9E5C8u;
    // 0x1d9e5c8: 0xc76726c  jal         func_1D9C9B0
    ctx->pc = 0x1D9E5C8u;
    SET_GPR_U32(ctx, 31, 0x1D9E5D0u);
    ctx->pc = 0x1D9C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C9B0u, 0x1D9E5C8u, 0x1D9E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5D0u;
label_1d9e5d0:
    // 0x1d9e5d0: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9E5D0u;
    SET_GPR_U32(ctx, 31, 0x1D9E5D8u);
    ctx->pc = 0x1D9E5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E5D0u;
    // 0x1d9e5d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9E5D0u, 0x1D9E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5D8u;
label_1d9e5d8:
    // 0x1d9e5d8: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1D9E5D8u;
    {
        const bool branch_taken_0x1d9e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E5D8u;
        // 0x1d9e5dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e5d8) {
            ctx->pc = 0x1D9E5A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e5a4;
        }
    }
    ctx->pc = 0x1D9E5E0u;
label_1d9e5e0:
    // 0x1d9e5e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e5e4: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E5E4u;
    SET_GPR_U32(ctx, 31, 0x1D9E5ECu);
    ctx->pc = 0x1D9E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E5E4u;
    // 0x1d9e5e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E5E4u, 0x1D9E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5ECu;
label_1d9e5ec:
    // 0x1d9e5ec: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E5ECu;
    SET_GPR_U32(ctx, 31, 0x1D9E5F4u);
    ctx->pc = 0x1D9E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E5ECu;
    // 0x1d9e5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E5ECu, 0x1D9E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E5F4u;
label_1d9e5f4:
    // 0x1d9e5f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d9e5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e5f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e5fc: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x1d9e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x1d9e600: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e604: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e608: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9e608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e60c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9e60cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e610: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e614: 0x144fffe2  bne         $v0, $t7, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D9E614u;
    {
        const bool branch_taken_0x1d9e614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E614u;
        // 0x1d9e618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e614) {
            ctx->pc = 0x1D9E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e5a0;
        }
    }
    ctx->pc = 0x1D9E61Cu;
    // 0x1d9e61c: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9E61Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E624u);
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9E61Cu, 0x1D9E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E624u;
label_1d9e624:
    // 0x1d9e624: 0xc76726c  jal         func_1D9C9B0
    ctx->pc = 0x1D9E624u;
    SET_GPR_U32(ctx, 31, 0x1D9E62Cu);
    ctx->pc = 0x1D9E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E624u;
    // 0x1d9e628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C9B0u, 0x1D9E624u, 0x1D9E62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E62Cu;
label_1d9e62c:
    // 0x1d9e62c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D9E62Cu;
    {
        const bool branch_taken_0x1d9e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E62Cu;
        // 0x1d9e630: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e62c) {
            ctx->pc = 0x1D9E5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e5a0;
        }
    }
    ctx->pc = 0x1D9E634u;
    // 0x1d9e634: 0x0  nop
    ctx->pc = 0x1d9e634u;
    // NOP
    // 0x1d9e638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e63c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9e640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9e644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9e644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9e648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9e648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e64c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9e650: 0xc767258  jal         func_1D9C960
    ctx->pc = 0x1D9E650u;
    SET_GPR_U32(ctx, 31, 0x1D9E658u);
    ctx->pc = 0x1D9E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E650u;
    // 0x1d9e654: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C960u, 0x1D9E650u, 0x1D9E658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E658u;
label_1d9e658:
    // 0x1d9e658: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9e658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9e65c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e660: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e664: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9e664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e668: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9e668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9e66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e670: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9e670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9e674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e67c: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9E67Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E684u);
    ctx->pc = 0x1D9E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E67Cu;
    // 0x1d9e680: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9E67Cu, 0x1D9E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E684u;
label_1d9e684:
    // 0x1d9e684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e688: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9E688u;
    SET_GPR_U32(ctx, 31, 0x1D9E690u);
    ctx->pc = 0x1D9E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E688u;
    // 0x1d9e68c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9E688u, 0x1D9E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E690u;
label_1d9e690:
    // 0x1d9e690: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9e690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e694: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E694u;
    SET_GPR_U32(ctx, 31, 0x1D9E69Cu);
    ctx->pc = 0x1D9E698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E694u;
    // 0x1d9e698: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E694u, 0x1D9E69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E69Cu;
label_1d9e69c:
    // 0x1d9e69c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d9e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d9e6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9e6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e6a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9e6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e6a8: 0xc76725c  jal         func_1D9C970
    ctx->pc = 0x1D9E6A8u;
    SET_GPR_U32(ctx, 31, 0x1D9E6B0u);
    ctx->pc = 0x1D9E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E6A8u;
    // 0x1d9e6ac: 0x2405010d  addiu       $a1, $zero, 0x10D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 269));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C970u, 0x1D9E6A8u, 0x1D9E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E6B0u;
label_1d9e6b0:
    // 0x1d9e6b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e6b8: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E6B8u;
    SET_GPR_U32(ctx, 31, 0x1D9E6C0u);
    ctx->pc = 0x1D9E6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E6B8u;
    // 0x1d9e6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E6B8u, 0x1D9E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E6C0u;
label_1d9e6c0:
    // 0x1d9e6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e6c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e6c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e6c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e6c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e6cc: 0x240500ab  addiu       $a1, $zero, 0xAB
    ctx->pc = 0x1d9e6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1d9e6d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e6d4: 0x876725e  j           func_1D9C978
    ctx->pc = 0x1D9E6D4u;
    ctx->pc = 0x1D9E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E6D4u;
    // 0x1d9e6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C978u;
    sub_01D9C978_0x1d9c978(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E6DCu;
    // 0x1d9e6dc: 0x0  nop
    ctx->pc = 0x1d9e6dcu;
    // NOP
    ctx->pc = 0x1d9e6e0u;
}
