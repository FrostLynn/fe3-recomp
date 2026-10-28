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

// Function: sub_01CDBFA0
// Address: 0x1cdbfa0 - 0x1cdc088
void sub_01CDBFA0_0x1cdbfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBFA0_0x1cdbfa0");
#endif

    switch (ctx->pc) {
        case 0x1cdbfb4u: goto label_1cdbfb4;
        case 0x1cdbfc8u: goto label_1cdbfc8;
        case 0x1cdbfccu: goto label_1cdbfcc;
        case 0x1cdbfe8u: goto label_1cdbfe8;
        case 0x1cdbff4u: goto label_1cdbff4;
        case 0x1cdc034u: goto label_1cdc034;
        case 0x1cdc060u: goto label_1cdc060;
        case 0x1cdc06cu: goto label_1cdc06c;
        case 0x1cdc078u: goto label_1cdc078;
        default: break;
    }

    ctx->pc = 0x1cdbfa0u;

    // 0x1cdbfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbfa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdbfac: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDBFACu;
    SET_GPR_U32(ctx, 31, 0x1CDBFB4u);
    ctx->pc = 0x1CDBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBFACu;
    // 0x1cdbfb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDBFACu, 0x1CDBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBFB4u;
label_1cdbfb4:
    // 0x1cdbfb4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdbfb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdbfb8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDBFB8u;
    {
        const bool branch_taken_0x1cdbfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBFB8u;
        // 0x1cdbfbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbfb8) {
            ctx->pc = 0x1CDBFDCu;
            goto label_1cdbfdc;
        }
    }
    ctx->pc = 0x1CDBFC0u;
    // 0x1cdbfc0: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDBFC0u;
    SET_GPR_U32(ctx, 31, 0x1CDBFC8u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDBFC0u, 0x1CDBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBFC8u;
label_1cdbfc8:
    // 0x1cdbfc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdbfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdbfcc:
    // 0x1cdbfcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbfd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdbfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDBFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBFD4u;
        // 0x1cdbfd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBFDCu;
label_1cdbfdc:
    // 0x1cdbfdc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdbfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdbfe0: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDBFE0u;
    SET_GPR_U32(ctx, 31, 0x1CDBFE8u);
    ctx->pc = 0x1CDBFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBFE0u;
    // 0x1cdbfe4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDBFE0u, 0x1CDBFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBFE8u;
label_1cdbfe8:
    // 0x1cdbfe8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cdbfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cdbfec: 0xc7368a4  jal         func_1CDA290
    ctx->pc = 0x1CDBFECu;
    SET_GPR_U32(ctx, 31, 0x1CDBFF4u);
    ctx->pc = 0x1CDBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBFECu;
    // 0x1cdbff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA290u, 0x1CDBFECu, 0x1CDBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBFF4u;
label_1cdbff4:
    // 0x1cdbff4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CDBFF4u;
    {
        const bool branch_taken_0x1cdbff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBFF4u;
        // 0x1cdbff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbff4) {
            ctx->pc = 0x1CDBFCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdbfcc;
        }
    }
    ctx->pc = 0x1CDBFFCu;
    // 0x1cdbffc: 0x0  nop
    ctx->pc = 0x1cdbffcu;
    // NOP
    // 0x1cdc000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc004: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc004u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc008: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdc008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdc00c: 0x25eef3b0  addiu       $t6, $t7, -0xC50
    ctx->pc = 0x1cdc00cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964144));
    // 0x1cdc010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cdc010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cdc014: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cdc014u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CEF3B4u));
    // 0x1cdc018: 0x8dedf3b0  lw          $t5, -0xC50($t7)
    ctx->pc = 0x1cdc018u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CEF3B0u));
    // 0x1cdc01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc020: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cdc020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cdc024: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cdc024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cdc028: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdc028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdc02c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC02Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC034u);
    ctx->pc = 0x1CDC030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC02Cu;
    // 0x1cdc030: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC02Cu, 0x1CDC034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC034u;
label_1cdc034:
    // 0x1cdc034: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cdc034u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cdc038: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdc038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc03c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc040: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc044: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cdc044u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cdc048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdc048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc04c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cdc04cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cdc050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc054: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cdc054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdc058: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC058u;
    SET_GPR_U32(ctx, 31, 0x1CDC060u);
    ctx->pc = 0x1CDC05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC058u;
    // 0x1cdc05c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC058u, 0x1CDC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC060u;
label_1cdc060:
    // 0x1cdc060: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc064: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC064u;
    SET_GPR_U32(ctx, 31, 0x1CDC06Cu);
    ctx->pc = 0x1CDC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC064u;
    // 0x1cdc068: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC064u, 0x1CDC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC06Cu;
label_1cdc06c:
    // 0x1cdc06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdc06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc070: 0xc7368a6  jal         func_1CDA298
    ctx->pc = 0x1CDC070u;
    SET_GPR_U32(ctx, 31, 0x1CDC078u);
    ctx->pc = 0x1CDC074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC070u;
    // 0x1cdc074: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA298u, 0x1CDC070u, 0x1CDC078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC078u;
label_1cdc078:
    // 0x1cdc078: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cdc078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc07c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdc07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdc080: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC080u;
        // 0x1cdc084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC088u;
}
