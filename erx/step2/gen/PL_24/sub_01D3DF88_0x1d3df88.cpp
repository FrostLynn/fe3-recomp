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

// Function: sub_01D3DF88
// Address: 0x1d3df88 - 0x1d3e098
void sub_01D3DF88_0x1d3df88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DF88_0x1d3df88");
#endif

    switch (ctx->pc) {
        case 0x1d3dfa8u: goto label_1d3dfa8;
        case 0x1d3dfbcu: goto label_1d3dfbc;
        case 0x1d3dfc0u: goto label_1d3dfc0;
        case 0x1d3dfdcu: goto label_1d3dfdc;
        case 0x1d3dfecu: goto label_1d3dfec;
        case 0x1d3e038u: goto label_1d3e038;
        case 0x1d3e074u: goto label_1d3e074;
        case 0x1d3e080u: goto label_1d3e080;
        default: break;
    }

    ctx->pc = 0x1d3df88u;

    // 0x1d3df88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3df88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3df8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3df8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3df90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3df94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3df98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3df98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3df9c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3df9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3dfa0: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DFA0u;
    SET_GPR_U32(ctx, 31, 0x1D3DFA8u);
    ctx->pc = 0x1D3DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DFA0u;
    // 0x1d3dfa4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DFA0u, 0x1D3DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DFA8u;
label_1d3dfa8:
    // 0x1d3dfa8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d3dfa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d3dfac: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3DFACu;
    {
        const bool branch_taken_0x1d3dfac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DFACu;
        // 0x1d3dfb0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dfac) {
            ctx->pc = 0x1D3DFF8u;
            goto label_1d3dff8;
        }
    }
    ctx->pc = 0x1D3DFB4u;
    // 0x1d3dfb4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3DFB4u;
    {
        const bool branch_taken_0x1d3dfb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d3dfb4) {
            ctx->pc = 0x1D3DFD4u;
            goto label_1d3dfd4;
        }
    }
    ctx->pc = 0x1D3DFBCu;
label_1d3dfbc:
    // 0x1d3dfbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3dfbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3dfc0:
    // 0x1d3dfc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3dfc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dfc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3dfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3dfc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3dfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DFCCu;
        // 0x1d3dfd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DFD4u;
label_1d3dfd4:
    // 0x1d3dfd4: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3DFD4u;
    SET_GPR_U32(ctx, 31, 0x1D3DFDCu);
    ctx->pc = 0x1D3DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DFD4u;
    // 0x1d3dfd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3DFD4u, 0x1D3DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DFDCu;
label_1d3dfdc:
    // 0x1d3dfdc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3DFDCu;
    {
        const bool branch_taken_0x1d3dfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D3DFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DFDCu;
        // 0x1d3dfe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dfdc) {
            ctx->pc = 0x1D3DFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dfbc;
        }
    }
    ctx->pc = 0x1D3DFE4u;
    // 0x1d3dfe4: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3DFE4u;
    SET_GPR_U32(ctx, 31, 0x1D3DFECu);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3DFE4u, 0x1D3DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DFECu;
label_1d3dfec:
    // 0x1d3dfec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D3DFECu;
    {
        const bool branch_taken_0x1d3dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DFECu;
        // 0x1d3dff0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dfec) {
            ctx->pc = 0x1D3DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dfc0;
        }
    }
    ctx->pc = 0x1D3DFF4u;
    // 0x1d3dff4: 0x0  nop
    ctx->pc = 0x1d3dff4u;
    // NOP
label_1d3dff8:
    // 0x1d3dff8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d3dff8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d3dffc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3DFFCu;
    {
        const bool branch_taken_0x1d3dffc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DFFCu;
        // 0x1d3e000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dffc) {
            ctx->pc = 0x1D3DFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dfc0;
        }
    }
    ctx->pc = 0x1D3E004u;
    // 0x1d3e004: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d3e004u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d3e008: 0x3c0e01d4  lui         $t6, 0x1D4
    ctx->pc = 0x1d3e008u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e00c: 0x25ce0000  addiu       $t6, $t6, 0x0
    ctx->pc = 0x1d3e00cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 0));
    // 0x1d3e010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e014: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3e014u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3e018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3e018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e01c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d3e01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d3e020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3e020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e024: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3e024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3e028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3e028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e02c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3e02cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3e030: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3E030u;
    SET_GPR_U32(ctx, 31, 0x1D3E038u);
    ctx->pc = 0x1D3E034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E030u;
    // 0x1d3e034: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3E030u, 0x1D3E038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E038u;
label_1d3e038:
    // 0x1d3e038: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3e038u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3e03c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D3E03Cu;
    {
        const bool branch_taken_0x1d3e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E03Cu;
        // 0x1d3e040: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e03c) {
            ctx->pc = 0x1D3DFBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dfbc;
        }
    }
    ctx->pc = 0x1D3E044u;
    // 0x1d3e044: 0x0  nop
    ctx->pc = 0x1d3e044u;
    // NOP
    // 0x1d3e048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e04c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3e050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3e054: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3e054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3e05c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3e05cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e064: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3e064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3e068: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3e068u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e06c: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3E06Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E074u);
    ctx->pc = 0x1D3E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E06Cu;
    // 0x1d3e070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3E06Cu, 0x1D3E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E074u;
label_1d3e074:
    // 0x1d3e074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e078: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3E078u;
    SET_GPR_U32(ctx, 31, 0x1D3E080u);
    ctx->pc = 0x1D3E07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E078u;
    // 0x1d3e07c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3E078u, 0x1D3E080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E080u;
label_1d3e080:
    // 0x1d3e080: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3e080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3e084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3e084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3e088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3e088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E08Cu;
        // 0x1d3e090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E094u;
    // 0x1d3e094: 0x0  nop
    ctx->pc = 0x1d3e094u;
    // NOP
    ctx->pc = 0x1d3e098u;
}
