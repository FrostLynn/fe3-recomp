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

// Function: sub_01C31B38
// Address: 0x1c31b38 - 0x1c31c58
void sub_01C31B38_0x1c31b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31B38_0x1c31b38");
#endif

    switch (ctx->pc) {
        case 0x1c31b58u: goto label_1c31b58;
        case 0x1c31b6cu: goto label_1c31b6c;
        case 0x1c31b70u: goto label_1c31b70;
        case 0x1c31b8cu: goto label_1c31b8c;
        case 0x1c31b9cu: goto label_1c31b9c;
        case 0x1c31bd4u: goto label_1c31bd4;
        case 0x1c31c0cu: goto label_1c31c0c;
        case 0x1c31c18u: goto label_1c31c18;
        case 0x1c31c28u: goto label_1c31c28;
        case 0x1c31c40u: goto label_1c31c40;
        default: break;
    }

    ctx->pc = 0x1c31b38u;

    // 0x1c31b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c31b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c31b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c31b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c31b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c31b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31b4c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c31b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c31b50: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31B50u;
    SET_GPR_U32(ctx, 31, 0x1C31B58u);
    ctx->pc = 0x1C31B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B50u;
    // 0x1c31b54: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31B50u, 0x1C31B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B58u;
label_1c31b58:
    // 0x1c31b58: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c31b58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c31b5c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C31B5Cu;
    {
        const bool branch_taken_0x1c31b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B5Cu;
        // 0x1c31b60: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31b5c) {
            ctx->pc = 0x1C31BA8u;
            goto label_1c31ba8;
        }
    }
    ctx->pc = 0x1C31B64u;
    // 0x1c31b64: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C31B64u;
    {
        const bool branch_taken_0x1c31b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c31b64) {
            ctx->pc = 0x1C31B84u;
            goto label_1c31b84;
        }
    }
    ctx->pc = 0x1C31B6Cu;
label_1c31b6c:
    // 0x1c31b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c31b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c31b70:
    // 0x1c31b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c31b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c31b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B7Cu;
        // 0x1c31b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31B84u;
label_1c31b84:
    // 0x1c31b84: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C31B84u;
    SET_GPR_U32(ctx, 31, 0x1C31B8Cu);
    ctx->pc = 0x1C31B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B84u;
    // 0x1c31b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C31B84u, 0x1C31B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B8Cu;
label_1c31b8c:
    // 0x1c31b8c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C31B8Cu;
    {
        const bool branch_taken_0x1c31b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C31B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B8Cu;
        // 0x1c31b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31b8c) {
            ctx->pc = 0x1C31B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31b6c;
        }
    }
    ctx->pc = 0x1C31B94u;
    // 0x1c31b94: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C31B94u;
    SET_GPR_U32(ctx, 31, 0x1C31B9Cu);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C31B94u, 0x1C31B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B9Cu;
label_1c31b9c:
    // 0x1c31b9c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C31B9Cu;
    {
        const bool branch_taken_0x1c31b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B9Cu;
        // 0x1c31ba0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31b9c) {
            ctx->pc = 0x1C31B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31b70;
        }
    }
    ctx->pc = 0x1C31BA4u;
    // 0x1c31ba4: 0x0  nop
    ctx->pc = 0x1c31ba4u;
    // NOP
label_1c31ba8:
    // 0x1c31ba8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c31ba8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c31bac: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C31BACu;
    {
        const bool branch_taken_0x1c31bac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31BACu;
        // 0x1c31bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31bac) {
            ctx->pc = 0x1C31B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31b70;
        }
    }
    ctx->pc = 0x1C31BB4u;
    // 0x1c31bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c31bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bbc: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x1c31bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c31bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c31bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31bcc: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31BCCu;
    SET_GPR_U32(ctx, 31, 0x1C31BD4u);
    ctx->pc = 0x1C31BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31BCCu;
    // 0x1c31bd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31BCCu, 0x1C31BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31BD4u;
label_1c31bd4:
    // 0x1c31bd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31bd8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C31BD8u;
    {
        const bool branch_taken_0x1c31bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31BD8u;
        // 0x1c31bdc: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31bd8) {
            ctx->pc = 0x1C31B6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31b6c;
        }
    }
    ctx->pc = 0x1C31BE0u;
    // 0x1c31be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31be4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c31be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c31be8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31bec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c31bf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31bfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c31bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31c00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c31c00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c04: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31C04u;
    SET_GPR_U32(ctx, 31, 0x1C31C0Cu);
    ctx->pc = 0x1C31C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C04u;
    // 0x1c31c08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31C04u, 0x1C31C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C0Cu;
label_1c31c0c:
    // 0x1c31c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31c10: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31C10u;
    SET_GPR_U32(ctx, 31, 0x1C31C18u);
    ctx->pc = 0x1C31C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C10u;
    // 0x1c31c14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31C10u, 0x1C31C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C18u;
label_1c31c18:
    // 0x1c31c18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c31c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31c1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c31c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c31c20: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31C20u;
    SET_GPR_U32(ctx, 31, 0x1C31C28u);
    ctx->pc = 0x1C31C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C20u;
    // 0x1c31c24: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31C20u, 0x1C31C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C28u;
label_1c31c28:
    // 0x1c31c28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31c28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31c2c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c31c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c31c30: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c31c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c31c34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c31c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31c38: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31C38u;
    SET_GPR_U32(ctx, 31, 0x1C31C40u);
    ctx->pc = 0x1C31C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31C38u;
    // 0x1c31c3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31C38u, 0x1C31C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31C40u;
label_1c31c40:
    // 0x1c31c40: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c31c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c31c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31c48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31C4Cu;
        // 0x1c31c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31C54u;
    // 0x1c31c54: 0x0  nop
    ctx->pc = 0x1c31c54u;
    // NOP
    ctx->pc = 0x1c31c58u;
}
