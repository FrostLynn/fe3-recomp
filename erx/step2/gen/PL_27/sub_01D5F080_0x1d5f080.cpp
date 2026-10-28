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

// Function: sub_01D5F080
// Address: 0x1d5f080 - 0x1d5f190
void sub_01D5F080_0x1d5f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F080_0x1d5f080");
#endif

    switch (ctx->pc) {
        case 0x1d5f0a0u: goto label_1d5f0a0;
        case 0x1d5f0b4u: goto label_1d5f0b4;
        case 0x1d5f0b8u: goto label_1d5f0b8;
        case 0x1d5f0d4u: goto label_1d5f0d4;
        case 0x1d5f0e4u: goto label_1d5f0e4;
        case 0x1d5f130u: goto label_1d5f130;
        case 0x1d5f16cu: goto label_1d5f16c;
        case 0x1d5f178u: goto label_1d5f178;
        default: break;
    }

    ctx->pc = 0x1d5f080u;

    // 0x1d5f080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5f084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5f088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5f08c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5f090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5f090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f094: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5f094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5f098: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5F098u;
    SET_GPR_U32(ctx, 31, 0x1D5F0A0u);
    ctx->pc = 0x1D5F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F098u;
    // 0x1d5f09c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5F098u, 0x1D5F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F0A0u;
label_1d5f0a0:
    // 0x1d5f0a0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d5f0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5f0a4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5F0A4u;
    {
        const bool branch_taken_0x1d5f0a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F0A4u;
        // 0x1d5f0a8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f0a4) {
            ctx->pc = 0x1D5F0F0u;
            goto label_1d5f0f0;
        }
    }
    ctx->pc = 0x1D5F0ACu;
    // 0x1d5f0ac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5F0ACu;
    {
        const bool branch_taken_0x1d5f0ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5f0ac) {
            ctx->pc = 0x1D5F0CCu;
            goto label_1d5f0cc;
        }
    }
    ctx->pc = 0x1D5F0B4u;
label_1d5f0b4:
    // 0x1d5f0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5f0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5f0b8:
    // 0x1d5f0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5f0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f0bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5f0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5f0c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F0C4u;
        // 0x1d5f0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F0CCu;
label_1d5f0cc:
    // 0x1d5f0cc: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5F0CCu;
    SET_GPR_U32(ctx, 31, 0x1D5F0D4u);
    ctx->pc = 0x1D5F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F0CCu;
    // 0x1d5f0d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5F0CCu, 0x1D5F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F0D4u;
label_1d5f0d4:
    // 0x1d5f0d4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5F0D4u;
    {
        const bool branch_taken_0x1d5f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D5F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F0D4u;
        // 0x1d5f0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f0d4) {
            ctx->pc = 0x1D5F0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f0b4;
        }
    }
    ctx->pc = 0x1D5F0DCu;
    // 0x1d5f0dc: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5F0DCu;
    SET_GPR_U32(ctx, 31, 0x1D5F0E4u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5F0DCu, 0x1D5F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F0E4u;
label_1d5f0e4:
    // 0x1d5f0e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5F0E4u;
    {
        const bool branch_taken_0x1d5f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F0E4u;
        // 0x1d5f0e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f0e4) {
            ctx->pc = 0x1D5F0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f0b8;
        }
    }
    ctx->pc = 0x1D5F0ECu;
    // 0x1d5f0ec: 0x0  nop
    ctx->pc = 0x1d5f0ecu;
    // NOP
label_1d5f0f0:
    // 0x1d5f0f0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d5f0f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d5f0f4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D5F0F4u;
    {
        const bool branch_taken_0x1d5f0f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F0F4u;
        // 0x1d5f0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f0f4) {
            ctx->pc = 0x1D5F0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f0b8;
        }
    }
    ctx->pc = 0x1D5F0FCu;
    // 0x1d5f0fc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d5f0fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d5f100: 0x3c0e01d6  lui         $t6, 0x1D6
    ctx->pc = 0x1d5f100u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f104: 0x25ce0998  addiu       $t6, $t6, 0x998
    ctx->pc = 0x1d5f104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2456));
    // 0x1d5f108: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f10c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5f10cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5f110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5f110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f114: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5f114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d5f118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5f118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f11c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5f11cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5f120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5f120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f124: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5f124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f128: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5F128u;
    SET_GPR_U32(ctx, 31, 0x1D5F130u);
    ctx->pc = 0x1D5F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F128u;
    // 0x1d5f12c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5F128u, 0x1D5F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F130u;
label_1d5f130:
    // 0x1d5f130: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5f130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f134: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D5F134u;
    {
        const bool branch_taken_0x1d5f134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F134u;
        // 0x1d5f138: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f134) {
            ctx->pc = 0x1D5F0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5f0b4;
        }
    }
    ctx->pc = 0x1D5F13Cu;
    // 0x1d5f13c: 0x0  nop
    ctx->pc = 0x1d5f13cu;
    // NOP
    // 0x1d5f140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f144: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5f148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5f148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5f14c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5f14cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5f154: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5f154u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5f158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f15c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5f15cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5f160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f164: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5F164u;
    SET_GPR_U32(ctx, 31, 0x1D5F16Cu);
    ctx->pc = 0x1D5F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F164u;
    // 0x1d5f168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5F164u, 0x1D5F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F16Cu;
label_1d5f16c:
    // 0x1d5f16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f170: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5F170u;
    SET_GPR_U32(ctx, 31, 0x1D5F178u);
    ctx->pc = 0x1D5F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F170u;
    // 0x1d5f174: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5F170u, 0x1D5F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F178u;
label_1d5f178:
    // 0x1d5f178: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5f178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5f17c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5f17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5f180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5f180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f184: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F184u;
        // 0x1d5f188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F18Cu;
    // 0x1d5f18c: 0x0  nop
    ctx->pc = 0x1d5f18cu;
    // NOP
    ctx->pc = 0x1d5f190u;
}
