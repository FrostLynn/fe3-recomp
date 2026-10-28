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

// Function: sub_01D46AE8
// Address: 0x1d46ae8 - 0x1d46c10
void sub_01D46AE8_0x1d46ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46AE8_0x1d46ae8");
#endif

    switch (ctx->pc) {
        case 0x1d46b10u: goto label_1d46b10;
        case 0x1d46b24u: goto label_1d46b24;
        case 0x1d46b28u: goto label_1d46b28;
        case 0x1d46b48u: goto label_1d46b48;
        case 0x1d46b58u: goto label_1d46b58;
        case 0x1d46b8cu: goto label_1d46b8c;
        case 0x1d46bc4u: goto label_1d46bc4;
        case 0x1d46bd0u: goto label_1d46bd0;
        case 0x1d46be0u: goto label_1d46be0;
        case 0x1d46bf8u: goto label_1d46bf8;
        default: break;
    }

    ctx->pc = 0x1d46ae8u;

    // 0x1d46ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d46ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d46aec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d46aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d46af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46af4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46af8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d46af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46afc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d46afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d46b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d46b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46b08: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46B08u;
    SET_GPR_U32(ctx, 31, 0x1D46B10u);
    ctx->pc = 0x1D46B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46B08u;
    // 0x1d46b0c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46B08u, 0x1D46B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46B10u;
label_1d46b10:
    // 0x1d46b10: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d46b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d46b14: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D46B14u;
    {
        const bool branch_taken_0x1d46b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B14u;
        // 0x1d46b18: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b14) {
            ctx->pc = 0x1D46B60u;
            goto label_1d46b60;
        }
    }
    ctx->pc = 0x1D46B1Cu;
    // 0x1d46b1c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D46B1Cu;
    {
        const bool branch_taken_0x1d46b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d46b1c) {
            ctx->pc = 0x1D46B40u;
            goto label_1d46b40;
        }
    }
    ctx->pc = 0x1D46B24u;
label_1d46b24:
    // 0x1d46b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d46b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d46b28:
    // 0x1d46b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d46b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d46b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d46b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B38u;
        // 0x1d46b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46B40u;
label_1d46b40:
    // 0x1d46b40: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D46B40u;
    SET_GPR_U32(ctx, 31, 0x1D46B48u);
    ctx->pc = 0x1D46B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46B40u;
    // 0x1d46b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D46B40u, 0x1D46B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46B48u;
label_1d46b48:
    // 0x1d46b48: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D46B48u;
    {
        const bool branch_taken_0x1d46b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D46B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B48u;
        // 0x1d46b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b48) {
            ctx->pc = 0x1D46B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46b24;
        }
    }
    ctx->pc = 0x1D46B50u;
    // 0x1d46b50: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D46B50u;
    SET_GPR_U32(ctx, 31, 0x1D46B58u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D46B50u, 0x1D46B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46B58u;
label_1d46b58:
    // 0x1d46b58: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D46B58u;
    {
        const bool branch_taken_0x1d46b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B58u;
        // 0x1d46b5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b58) {
            ctx->pc = 0x1D46B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46b28;
        }
    }
    ctx->pc = 0x1D46B60u;
label_1d46b60:
    // 0x1d46b60: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d46b60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d46b64: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D46B64u;
    {
        const bool branch_taken_0x1d46b64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D46B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B64u;
        // 0x1d46b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b64) {
            ctx->pc = 0x1D46B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46b28;
        }
    }
    ctx->pc = 0x1D46B6Cu;
    // 0x1d46b6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d46b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d46b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d46b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d46b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46b80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d46b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46b84: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D46B84u;
    SET_GPR_U32(ctx, 31, 0x1D46B8Cu);
    ctx->pc = 0x1D46B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46B84u;
    // 0x1d46b88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D46B84u, 0x1D46B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46B8Cu;
label_1d46b8c:
    // 0x1d46b8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d46b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46b90: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D46B90u;
    {
        const bool branch_taken_0x1d46b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46B90u;
        // 0x1d46b94: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46b90) {
            ctx->pc = 0x1D46B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46b24;
        }
    }
    ctx->pc = 0x1D46B98u;
    // 0x1d46b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d46b9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d46b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d46ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46ba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d46ba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d46bac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d46bacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d46bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46bb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d46bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46bb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d46bb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46bbc: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D46BBCu;
    SET_GPR_U32(ctx, 31, 0x1D46BC4u);
    ctx->pc = 0x1D46BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46BBCu;
    // 0x1d46bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D46BBCu, 0x1D46BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46BC4u;
label_1d46bc4:
    // 0x1d46bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46bc8: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D46BC8u;
    SET_GPR_U32(ctx, 31, 0x1D46BD0u);
    ctx->pc = 0x1D46BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46BC8u;
    // 0x1d46bcc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D46BC8u, 0x1D46BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46BD0u;
label_1d46bd0:
    // 0x1d46bd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d46bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d46bd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d46bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d46bd8: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46BD8u;
    SET_GPR_U32(ctx, 31, 0x1D46BE0u);
    ctx->pc = 0x1D46BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46BD8u;
    // 0x1d46bdc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46BD8u, 0x1D46BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46BE0u;
label_1d46be0:
    // 0x1d46be0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d46be0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46be4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d46be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d46be8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d46be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d46bec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d46becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d46bf0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46BF0u;
    SET_GPR_U32(ctx, 31, 0x1D46BF8u);
    ctx->pc = 0x1D46BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46BF0u;
    // 0x1d46bf4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46BF0u, 0x1D46BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46BF8u;
label_1d46bf8:
    // 0x1d46bf8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d46bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d46bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46c00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d46c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46C04u;
        // 0x1d46c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46C0Cu;
    // 0x1d46c0c: 0x0  nop
    ctx->pc = 0x1d46c0cu;
    // NOP
    ctx->pc = 0x1d46c10u;
}
