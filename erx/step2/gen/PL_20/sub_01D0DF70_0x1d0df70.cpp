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

// Function: sub_01D0DF70
// Address: 0x1d0df70 - 0x1d0e080
void sub_01D0DF70_0x1d0df70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DF70_0x1d0df70");
#endif

    switch (ctx->pc) {
        case 0x1d0df90u: goto label_1d0df90;
        case 0x1d0dfa4u: goto label_1d0dfa4;
        case 0x1d0dfa8u: goto label_1d0dfa8;
        case 0x1d0dfc4u: goto label_1d0dfc4;
        case 0x1d0dfd4u: goto label_1d0dfd4;
        case 0x1d0e020u: goto label_1d0e020;
        case 0x1d0e05cu: goto label_1d0e05c;
        case 0x1d0e068u: goto label_1d0e068;
        default: break;
    }

    ctx->pc = 0x1d0df70u;

    // 0x1d0df70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0df70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0df74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0df74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0df78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0df7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0df80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0df80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df84: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0df84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0df88: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DF88u;
    SET_GPR_U32(ctx, 31, 0x1D0DF90u);
    ctx->pc = 0x1D0DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF88u;
    // 0x1d0df8c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DF88u, 0x1D0DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DF90u;
label_1d0df90:
    // 0x1d0df90: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d0df90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0df94: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0DF94u;
    {
        const bool branch_taken_0x1d0df94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DF94u;
        // 0x1d0df98: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0df94) {
            ctx->pc = 0x1D0DFE0u;
            goto label_1d0dfe0;
        }
    }
    ctx->pc = 0x1D0DF9Cu;
    // 0x1d0df9c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0DF9Cu;
    {
        const bool branch_taken_0x1d0df9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d0df9c) {
            ctx->pc = 0x1D0DFBCu;
            goto label_1d0dfbc;
        }
    }
    ctx->pc = 0x1D0DFA4u;
label_1d0dfa4:
    // 0x1d0dfa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0dfa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0dfa8:
    // 0x1d0dfa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0dfa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dfac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0dfacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0dfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0dfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DFB4u;
        // 0x1d0dfb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DFBCu;
label_1d0dfbc:
    // 0x1d0dfbc: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0DFBCu;
    SET_GPR_U32(ctx, 31, 0x1D0DFC4u);
    ctx->pc = 0x1D0DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DFBCu;
    // 0x1d0dfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0DFBCu, 0x1D0DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DFC4u;
label_1d0dfc4:
    // 0x1d0dfc4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0DFC4u;
    {
        const bool branch_taken_0x1d0dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D0DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DFC4u;
        // 0x1d0dfc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dfc4) {
            ctx->pc = 0x1D0DFA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dfa4;
        }
    }
    ctx->pc = 0x1D0DFCCu;
    // 0x1d0dfcc: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0DFCCu;
    SET_GPR_U32(ctx, 31, 0x1D0DFD4u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0DFCCu, 0x1D0DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DFD4u;
label_1d0dfd4:
    // 0x1d0dfd4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D0DFD4u;
    {
        const bool branch_taken_0x1d0dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DFD4u;
        // 0x1d0dfd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dfd4) {
            ctx->pc = 0x1D0DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dfa8;
        }
    }
    ctx->pc = 0x1D0DFDCu;
    // 0x1d0dfdc: 0x0  nop
    ctx->pc = 0x1d0dfdcu;
    // NOP
label_1d0dfe0:
    // 0x1d0dfe0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d0dfe0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d0dfe4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0DFE4u;
    {
        const bool branch_taken_0x1d0dfe4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DFE4u;
        // 0x1d0dfe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dfe4) {
            ctx->pc = 0x1D0DFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dfa8;
        }
    }
    ctx->pc = 0x1D0DFECu;
    // 0x1d0dfec: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d0dfecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d0dff0: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0dff0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0dff4: 0x25ce3210  addiu       $t6, $t6, 0x3210
    ctx->pc = 0x1d0dff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12816));
    // 0x1d0dff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0dff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dffc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0dffcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0e000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e004: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0e004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0e008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e00c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0e00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0e010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e014: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e018: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E018u;
    SET_GPR_U32(ctx, 31, 0x1D0E020u);
    ctx->pc = 0x1D0E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E018u;
    // 0x1d0e01c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E018u, 0x1D0E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E020u;
label_1d0e020:
    // 0x1d0e020: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e024: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D0E024u;
    {
        const bool branch_taken_0x1d0e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E024u;
        // 0x1d0e028: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e024) {
            ctx->pc = 0x1D0DFA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dfa4;
        }
    }
    ctx->pc = 0x1D0E02Cu;
    // 0x1d0e02c: 0x0  nop
    ctx->pc = 0x1d0e02cu;
    // NOP
    // 0x1d0e030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e034: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e03c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e03cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e04c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e04cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e050: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0e050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e054: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E054u;
    SET_GPR_U32(ctx, 31, 0x1D0E05Cu);
    ctx->pc = 0x1D0E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E054u;
    // 0x1d0e058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E054u, 0x1D0E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E05Cu;
label_1d0e05c:
    // 0x1d0e05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e060: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0E060u;
    SET_GPR_U32(ctx, 31, 0x1D0E068u);
    ctx->pc = 0x1D0E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E060u;
    // 0x1d0e064: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0E060u, 0x1D0E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E068u;
label_1d0e068:
    // 0x1d0e068: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0e068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d0e06c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e074: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E074u;
        // 0x1d0e078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E07Cu;
    // 0x1d0e07c: 0x0  nop
    ctx->pc = 0x1d0e07cu;
    // NOP
    ctx->pc = 0x1d0e080u;
}
