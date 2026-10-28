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

// Function: sub_01C43FE4
// Address: 0x1c43fe4 - 0x1c4429c
void sub_01C43FE4_0x1c43fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43FE4_0x1c43fe4");
#endif

    switch (ctx->pc) {
        case 0x1c43fecu: goto label_1c43fec;
        case 0x1c4402cu: goto label_1c4402c;
        case 0x1c4404cu: goto label_1c4404c;
        case 0x1c4406cu: goto label_1c4406c;
        case 0x1c44074u: goto label_1c44074;
        case 0x1c440b4u: goto label_1c440b4;
        case 0x1c440d8u: goto label_1c440d8;
        case 0x1c440e0u: goto label_1c440e0;
        case 0x1c44120u: goto label_1c44120;
        case 0x1c44144u: goto label_1c44144;
        case 0x1c4414cu: goto label_1c4414c;
        case 0x1c44160u: goto label_1c44160;
        case 0x1c44168u: goto label_1c44168;
        case 0x1c44190u: goto label_1c44190;
        case 0x1c441d0u: goto label_1c441d0;
        case 0x1c441e4u: goto label_1c441e4;
        case 0x1c441f0u: goto label_1c441f0;
        case 0x1c441fcu: goto label_1c441fc;
        case 0x1c44210u: goto label_1c44210;
        case 0x1c44220u: goto label_1c44220;
        case 0x1c4422cu: goto label_1c4422c;
        case 0x1c4424cu: goto label_1c4424c;
        default: break;
    }

    ctx->pc = 0x1c43fe4u;

    // 0x1c43fe4: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C43FE4u;
    SET_GPR_U32(ctx, 31, 0x1C43FECu);
    ctx->pc = 0x1C43FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43FE4u;
    // 0x1c43fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C43FE4u, 0x1C43FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43FECu;
label_1c43fec:
    // 0x1c43fec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c43fecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c43ff0: 0x144ffff6  bne         $v0, $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C43FF0u;
    {
        const bool branch_taken_0x1c43ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C43FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43FF0u;
        // 0x1c43ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43ff0) {
            ctx->pc = 0x1C43FCCu;
            return;
        }
    }
    ctx->pc = 0x1C43FF8u;
    // 0x1c43ff8: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c43ff8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c43ffc: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c43ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44000: 0x25ef9910  addiu       $t7, $t7, -0x66F0
    ctx->pc = 0x1c44000u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940944));
    // 0x1c44004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44008: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1c44008u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c4400c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4400cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44010: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c44010u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c44014: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c44014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44018: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x1c44018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c4401c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4401cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c44020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44024: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C44024u;
    SET_GPR_U32(ctx, 31, 0x1C4402Cu);
    ctx->pc = 0x1C44028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44024u;
    // 0x1c44028: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C44024u, 0x1C4402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4402Cu;
label_1c4402c:
    // 0x1c4402c: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x1c4402cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c44030: 0x262407d4  addiu       $a0, $s1, 0x7D4
    ctx->pc = 0x1c44030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
    // 0x1c44034: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x1c44034u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c44038: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1c44038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1c4403c: 0x8e0c000c  lw          $t4, 0xC($s0)
    ctx->pc = 0x1c4403cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c44040: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c44040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44044: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1c44044u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c44048: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c44048u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c4404c:
    // 0x1c4404c: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1c4404cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c44050: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1c44050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
    // 0x1c44054: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x1c44054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x1c44058: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c44058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c4405c: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x1c4405cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x1c44060: 0xafae000c  sw          $t6, 0xC($sp)
    ctx->pc = 0x1c44060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 14));
    // 0x1c44064: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C44064u;
    {
        const bool branch_taken_0x1c44064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44064u;
        // 0x1c44068: 0xafaa0010  sw          $t2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44064) {
            ctx->pc = 0x1C43FC0u;
            return;
        }
    }
    ctx->pc = 0x1C4406Cu;
label_1c4406c:
    // 0x1c4406c: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C4406Cu;
    SET_GPR_U32(ctx, 31, 0x1C44074u);
    ctx->pc = 0x1C44070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4406Cu;
    // 0x1c44070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C4406Cu, 0x1C44074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44074u;
label_1c44074:
    // 0x1c44074: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44078: 0x144fffd4  bne         $v0, $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C44078u;
    {
        const bool branch_taken_0x1c44078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C4407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44078u;
        // 0x1c4407c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44078) {
            ctx->pc = 0x1C43FCCu;
            return;
        }
    }
    ctx->pc = 0x1C44080u;
    // 0x1c44080: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c44080u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c44084: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44084u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44088: 0x25ef9910  addiu       $t7, $t7, -0x66F0
    ctx->pc = 0x1c44088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940944));
    // 0x1c4408c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44090: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1c44090u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c44094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44098: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c44098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c4409c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c4409cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c440a0: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x1c440a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c440a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c440a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c440a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c440a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c440ac: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C440ACu;
    SET_GPR_U32(ctx, 31, 0x1C440B4u);
    ctx->pc = 0x1C440B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C440ACu;
    // 0x1c440b0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C440ACu, 0x1C440B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C440B4u;
label_1c440b4:
    // 0x1c440b4: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x1c440b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c440b8: 0x262407d4  addiu       $a0, $s1, 0x7D4
    ctx->pc = 0x1c440b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
    // 0x1c440bc: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x1c440bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c440c0: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x1c440c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x1c440c4: 0x8e0c000c  lw          $t4, 0xC($s0)
    ctx->pc = 0x1c440c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c440c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c440c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c440cc: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1c440ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c440d0: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C440D0u;
    {
        const bool branch_taken_0x1c440d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C440D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C440D0u;
        // 0x1c440d4: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c440d0) {
            ctx->pc = 0x1C4404Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4404c;
        }
    }
    ctx->pc = 0x1C440D8u;
label_1c440d8:
    // 0x1c440d8: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C440D8u;
    SET_GPR_U32(ctx, 31, 0x1C440E0u);
    ctx->pc = 0x1C440DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C440D8u;
    // 0x1c440dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C440D8u, 0x1C440E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C440E0u;
label_1c440e0:
    // 0x1c440e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c440e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c440e4: 0x144fffb9  bne         $v0, $t7, . + 4 + (-0x47 << 2)
    ctx->pc = 0x1C440E4u;
    {
        const bool branch_taken_0x1c440e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C440E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C440E4u;
        // 0x1c440e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c440e4) {
            ctx->pc = 0x1C43FCCu;
            return;
        }
    }
    ctx->pc = 0x1C440ECu;
    // 0x1c440ec: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c440ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c440f0: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c440f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c440f4: 0x25ef9910  addiu       $t7, $t7, -0x66F0
    ctx->pc = 0x1c440f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940944));
    // 0x1c440f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c440f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c440fc: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1c440fcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c44100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44104: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c44104u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c44108: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c44108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4410c: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x1c4410cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c44110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c44110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c44114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44118: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C44118u;
    SET_GPR_U32(ctx, 31, 0x1C44120u);
    ctx->pc = 0x1C4411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44118u;
    // 0x1c4411c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C44118u, 0x1C44120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44120u;
label_1c44120:
    // 0x1c44120: 0x8e0a0010  lw          $t2, 0x10($s0)
    ctx->pc = 0x1c44120u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c44124: 0x262407d4  addiu       $a0, $s1, 0x7D4
    ctx->pc = 0x1c44124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
    // 0x1c44128: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x1c44128u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4412c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x1c4412cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1c44130: 0x8e0c000c  lw          $t4, 0xC($s0)
    ctx->pc = 0x1c44130u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c44134: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c44134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44138: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1c44138u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4413c: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1C4413Cu;
    {
        const bool branch_taken_0x1c4413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4413Cu;
        // 0x1c44140: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4413c) {
            ctx->pc = 0x1C4404Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4404c;
        }
    }
    ctx->pc = 0x1C44144u;
label_1c44144:
    // 0x1c44144: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C44144u;
    SET_GPR_U32(ctx, 31, 0x1C4414Cu);
    ctx->pc = 0x1C44148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44144u;
    // 0x1c44148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C44144u, 0x1C4414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4414Cu;
label_1c4414c:
    // 0x1c4414c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c4414cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44150: 0x544fff9e  bnel        $v0, $t7, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1C44150u;
    {
        const bool branch_taken_0x1c44150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c44150) {
            ctx->pc = 0x1C44154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44150u;
            // 0x1c44154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43FCCu;
            return;
        }
    }
    ctx->pc = 0x1C44158u;
    // 0x1c44158: 0xc71092c  jal         func_1C424B0
    ctx->pc = 0x1C44158u;
    SET_GPR_U32(ctx, 31, 0x1C44160u);
    ctx->pc = 0x1C4415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44158u;
    // 0x1c4415c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C424B0u, 0x1C44158u, 0x1C44160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44160u;
label_1c44160:
    // 0x1c44160: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C44160u;
    SET_GPR_U32(ctx, 31, 0x1C44168u);
    ctx->pc = 0x1C44164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44160u;
    // 0x1c44164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C44160u, 0x1C44168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44168u;
label_1c44168:
    // 0x1c44168: 0x1000ff98  b           . + 4 + (-0x68 << 2)
    ctx->pc = 0x1C44168u;
    {
        const bool branch_taken_0x1c44168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44168u;
        // 0x1c4416c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44168) {
            ctx->pc = 0x1C43FCCu;
            return;
        }
    }
    ctx->pc = 0x1C44170u;
    // 0x1c44170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c44174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c44178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4417c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4417cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c44180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44184: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c44184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c44188: 0xc710918  jal         func_1C42460
    ctx->pc = 0x1C44188u;
    SET_GPR_U32(ctx, 31, 0x1C44190u);
    ctx->pc = 0x1C4418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44188u;
    // 0x1c4418c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42460u, 0x1C44188u, 0x1C44190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44190u;
label_1c44190:
    // 0x1c44190: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c44190u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c44194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c44194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44198: 0x25cefff3  addiu       $t6, $t6, -0xD
    ctx->pc = 0x1c44198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967283));
    // 0x1c4419c: 0x2dcf0013  sltiu       $t7, $t6, 0x13
    ctx->pc = 0x1c4419cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1c441a0: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C441A0u;
    {
        const bool branch_taken_0x1c441a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C441A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C441A0u;
        // 0x1c441a4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c441a0) {
            ctx->pc = 0x1C4429Cu;
            return;
        }
    }
    ctx->pc = 0x1C441A8u;
    // 0x1c441a8: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c441a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c441ac: 0x3c0e01c4  lui         $t6, 0x1C4
    ctx->pc = 0x1c441acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
    // 0x1c441b0: 0x25ce5be4  addiu       $t6, $t6, 0x5BE4
    ctx->pc = 0x1c441b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23524));
    // 0x1c441b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c441b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c441b8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c441b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c441bc: 0x1a00008  jr          $t5
    ctx->pc = 0x1C441BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C441C4u: goto label_1c441c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C441BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C441C4u;
label_1c441c4:
    // 0x1c441c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c441c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c441c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c441c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c441cc: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c441ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c441d0:
    // 0x1c441d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c441d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c441d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c441d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c441d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c441d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c441dc: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C441DCu;
    SET_GPR_U32(ctx, 31, 0x1C441E4u);
    ctx->pc = 0x1C441E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C441DCu;
    // 0x1c441e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C441DCu, 0x1C441E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C441E4u;
label_1c441e4:
    // 0x1c441e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c441e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c441e8: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C441E8u;
    SET_GPR_U32(ctx, 31, 0x1C441F0u);
    ctx->pc = 0x1C441ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C441E8u;
    // 0x1c441ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C441E8u, 0x1C441F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C441F0u;
label_1c441f0:
    // 0x1c441f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c441f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c441f4: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C441F4u;
    SET_GPR_U32(ctx, 31, 0x1C441FCu);
    ctx->pc = 0x1C441F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C441F4u;
    // 0x1c441f8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C441F4u, 0x1C441FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C441FCu;
label_1c441fc:
    // 0x1c441fc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c441fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c44200: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c44200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44204: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c44204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c44208: 0xc71091c  jal         func_1C42470
    ctx->pc = 0x1C44208u;
    SET_GPR_U32(ctx, 31, 0x1C44210u);
    ctx->pc = 0x1C4420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44208u;
    // 0x1c4420c: 0x240500ad  addiu       $a1, $zero, 0xAD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42470u, 0x1C44208u, 0x1C44210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44210u;
label_1c44210:
    // 0x1c44210: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44218: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C44218u;
    SET_GPR_U32(ctx, 31, 0x1C44220u);
    ctx->pc = 0x1C4421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44218u;
    // 0x1c4421c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C44218u, 0x1C44220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44220u;
label_1c44220:
    // 0x1c44220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44224: 0xc71091e  jal         func_1C42478
    ctx->pc = 0x1C44224u;
    SET_GPR_U32(ctx, 31, 0x1C4422Cu);
    ctx->pc = 0x1C44228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44224u;
    // 0x1c44228: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42478u, 0x1C44224u, 0x1C4422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4422Cu;
label_1c4422c:
    // 0x1c4422c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c4422cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c44230: 0x8de4002c  lw          $a0, 0x2C($t7)
    ctx->pc = 0x1c44230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c44234: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1c44234u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c44238: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c44238u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c4423c: 0x19e00012  blez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C4423Cu;
    {
        const bool branch_taken_0x1c4423c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C44240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4423Cu;
        // 0x1c44240: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4423c) {
            ctx->pc = 0x1C44288u;
            goto label_1c44288;
        }
    }
    ctx->pc = 0x1C44244u;
    // 0x1c44244: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c44244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44248: 0x8c8e001c  lw          $t6, 0x1C($a0)
    ctx->pc = 0x1c44248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1c4424c:
    // 0x1c4424c: 0xc7a00  sll         $t7, $t4, 8
    ctx->pc = 0x1c4424cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1c44250: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c44250u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c44254: 0x51c00008  beql        $t6, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44254u;
    {
        const bool branch_taken_0x1c44254 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44254) {
            ctx->pc = 0x1C44258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44254u;
            // 0x1c44258: 0x8d6f0000  lw          $t7, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44278u;
            goto label_1c44278;
        }
    }
    ctx->pc = 0x1C4425Cu;
    // 0x1c4425c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1c4425cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c44260: 0x55aa0005  bnel        $t5, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C44260u;
    {
        const bool branch_taken_0x1c44260 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 10));
        if (branch_taken_0x1c44260) {
            ctx->pc = 0x1C44264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44260u;
            // 0x1c44264: 0x8d6f0000  lw          $t7, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44278u;
            goto label_1c44278;
        }
    }
    ctx->pc = 0x1C44268u;
    // 0x1c44268: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c44268u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c4426c: 0xa1ed0069  sb          $t5, 0x69($t7)
    ctx->pc = 0x1c4426cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 13));
    // 0x1c44270: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x1c44270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c44274: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c44274u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c44278:
    // 0x1c44278: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1c44278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1c4427c: 0x18f782a  slt         $t7, $t4, $t7
    ctx->pc = 0x1c4427cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c44280: 0x55e0fff2  bnel        $t7, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C44280u;
    {
        const bool branch_taken_0x1c44280 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c44280) {
            ctx->pc = 0x1C44284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44280u;
            // 0x1c44284: 0x8c8e001c  lw          $t6, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4424Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4424c;
        }
    }
    ctx->pc = 0x1C44288u;
label_1c44288:
    // 0x1c44288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4428c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4428cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c44290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c44294: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44294u;
        // 0x1c44298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4429Cu;
}
