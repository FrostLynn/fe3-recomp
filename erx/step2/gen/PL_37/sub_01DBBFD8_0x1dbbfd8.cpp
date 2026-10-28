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

// Function: sub_01DBBFD8
// Address: 0x1dbbfd8 - 0x1dbc100
void sub_01DBBFD8_0x1dbbfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBFD8_0x1dbbfd8");
#endif

    switch (ctx->pc) {
        case 0x1dbc000u: goto label_1dbc000;
        case 0x1dbc014u: goto label_1dbc014;
        case 0x1dbc018u: goto label_1dbc018;
        case 0x1dbc038u: goto label_1dbc038;
        case 0x1dbc048u: goto label_1dbc048;
        case 0x1dbc07cu: goto label_1dbc07c;
        case 0x1dbc0b4u: goto label_1dbc0b4;
        case 0x1dbc0c0u: goto label_1dbc0c0;
        case 0x1dbc0d0u: goto label_1dbc0d0;
        case 0x1dbc0e8u: goto label_1dbc0e8;
        default: break;
    }

    ctx->pc = 0x1dbbfd8u;

    // 0x1dbbfd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbbfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbbfdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbbfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbbfe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbfe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbbfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbbfe8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dbbfe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbfec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbbfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbbff0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbbff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbff4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbbff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbbff8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBBFF8u;
    SET_GPR_U32(ctx, 31, 0x1DBC000u);
    ctx->pc = 0x1DBBFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBFF8u;
    // 0x1dbbffc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBBFF8u, 0x1DBC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC000u;
label_1dbc000:
    // 0x1dbc000: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1dbc000u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1dbc004: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DBC004u;
    {
        const bool branch_taken_0x1dbc004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC004u;
        // 0x1dbc008: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc004) {
            ctx->pc = 0x1DBC050u;
            goto label_1dbc050;
        }
    }
    ctx->pc = 0x1DBC00Cu;
    // 0x1dbc00c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBC00Cu;
    {
        const bool branch_taken_0x1dbc00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1dbc00c) {
            ctx->pc = 0x1DBC030u;
            goto label_1dbc030;
        }
    }
    ctx->pc = 0x1DBC014u;
label_1dbc014:
    // 0x1dbc014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbc014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbc018:
    // 0x1dbc018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc01c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc020: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbc020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc024: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbc024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbc028: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC028u;
        // 0x1dbc02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC030u;
label_1dbc030:
    // 0x1dbc030: 0xc76ee54  jal         func_1DBB950
    ctx->pc = 0x1DBC030u;
    SET_GPR_U32(ctx, 31, 0x1DBC038u);
    ctx->pc = 0x1DBC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC030u;
    // 0x1dbc034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB950u, 0x1DBC030u, 0x1DBC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC038u;
label_1dbc038:
    // 0x1dbc038: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DBC038u;
    {
        const bool branch_taken_0x1dbc038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DBC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC038u;
        // 0x1dbc03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc038) {
            ctx->pc = 0x1DBC014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc014;
        }
    }
    ctx->pc = 0x1DBC040u;
    // 0x1dbc040: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBC040u;
    SET_GPR_U32(ctx, 31, 0x1DBC048u);
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBC040u, 0x1DBC048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC048u;
label_1dbc048:
    // 0x1dbc048: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DBC048u;
    {
        const bool branch_taken_0x1dbc048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC048u;
        // 0x1dbc04c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc048) {
            ctx->pc = 0x1DBC018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc018;
        }
    }
    ctx->pc = 0x1DBC050u;
label_1dbc050:
    // 0x1dbc050: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1dbc050u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1dbc054: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DBC054u;
    {
        const bool branch_taken_0x1dbc054 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC054u;
        // 0x1dbc058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc054) {
            ctx->pc = 0x1DBC018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc018;
        }
    }
    ctx->pc = 0x1DBC05Cu;
    // 0x1dbc05c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dbc05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbc064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbc068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc06c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbc06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc070: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dbc070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc074: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBC074u;
    SET_GPR_U32(ctx, 31, 0x1DBC07Cu);
    ctx->pc = 0x1DBC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC074u;
    // 0x1dbc078: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBC074u, 0x1DBC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC07Cu;
label_1dbc07c:
    // 0x1dbc07c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbc07cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc080: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DBC080u;
    {
        const bool branch_taken_0x1dbc080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC080u;
        // 0x1dbc084: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc080) {
            ctx->pc = 0x1DBC014u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbc014;
        }
    }
    ctx->pc = 0x1DBC088u;
    // 0x1dbc088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbc088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbc08c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbc08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbc090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbc094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbc09c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbc09cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbc0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc0a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dbc0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc0a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbc0a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc0ac: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBC0ACu;
    SET_GPR_U32(ctx, 31, 0x1DBC0B4u);
    ctx->pc = 0x1DBC0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC0ACu;
    // 0x1dbc0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBC0ACu, 0x1DBC0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC0B4u;
label_1dbc0b4:
    // 0x1dbc0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbc0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc0b8: 0xc76ee5c  jal         func_1DBB970
    ctx->pc = 0x1DBC0B8u;
    SET_GPR_U32(ctx, 31, 0x1DBC0C0u);
    ctx->pc = 0x1DBC0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC0B8u;
    // 0x1dbc0bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB970u, 0x1DBC0B8u, 0x1DBC0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC0C0u;
label_1dbc0c0:
    // 0x1dbc0c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dbc0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbc0c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbc0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbc0c8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC0C8u;
    SET_GPR_U32(ctx, 31, 0x1DBC0D0u);
    ctx->pc = 0x1DBC0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC0C8u;
    // 0x1dbc0cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC0C8u, 0x1DBC0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC0D0u;
label_1dbc0d0:
    // 0x1dbc0d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbc0d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc0d4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1dbc0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1dbc0d8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1dbc0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1dbc0dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dbc0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbc0e0: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC0E0u;
    SET_GPR_U32(ctx, 31, 0x1DBC0E8u);
    ctx->pc = 0x1DBC0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC0E0u;
    // 0x1dbc0e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC0E0u, 0x1DBC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC0E8u;
label_1dbc0e8:
    // 0x1dbc0e8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1dbc0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1dbc0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc0f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbc0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC0F4u;
        // 0x1dbc0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC0FCu;
    // 0x1dbc0fc: 0x0  nop
    ctx->pc = 0x1dbc0fcu;
    // NOP
    ctx->pc = 0x1dbc100u;
}
