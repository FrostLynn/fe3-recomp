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

// Function: sub_01D94AE8
// Address: 0x1d94ae8 - 0x1d94c20
void sub_01D94AE8_0x1d94ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94AE8_0x1d94ae8");
#endif

    switch (ctx->pc) {
        case 0x1d94b08u: goto label_1d94b08;
        case 0x1d94b1cu: goto label_1d94b1c;
        case 0x1d94b20u: goto label_1d94b20;
        case 0x1d94b3cu: goto label_1d94b3c;
        case 0x1d94b4cu: goto label_1d94b4c;
        case 0x1d94b98u: goto label_1d94b98;
        case 0x1d94bd4u: goto label_1d94bd4;
        case 0x1d94be0u: goto label_1d94be0;
        case 0x1d94bf0u: goto label_1d94bf0;
        case 0x1d94c08u: goto label_1d94c08;
        default: break;
    }

    ctx->pc = 0x1d94ae8u;

    // 0x1d94ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d94af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d94af8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d94af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94afc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94b00: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94B00u;
    SET_GPR_U32(ctx, 31, 0x1D94B08u);
    ctx->pc = 0x1D94B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B00u;
    // 0x1d94b04: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94B00u, 0x1D94B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B08u;
label_1d94b08:
    // 0x1d94b08: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d94b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d94b0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D94B0Cu;
    {
        const bool branch_taken_0x1d94b0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B0Cu;
        // 0x1d94b10: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b0c) {
            ctx->pc = 0x1D94B58u;
            goto label_1d94b58;
        }
    }
    ctx->pc = 0x1D94B14u;
    // 0x1d94b14: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D94B14u;
    {
        const bool branch_taken_0x1d94b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d94b14) {
            ctx->pc = 0x1D94B34u;
            goto label_1d94b34;
        }
    }
    ctx->pc = 0x1D94B1Cu;
label_1d94b1c:
    // 0x1d94b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d94b20:
    // 0x1d94b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94b24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d94b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94b28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d94b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B2Cu;
        // 0x1d94b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94B34u;
label_1d94b34:
    // 0x1d94b34: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D94B34u;
    SET_GPR_U32(ctx, 31, 0x1D94B3Cu);
    ctx->pc = 0x1D94B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B34u;
    // 0x1d94b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D94B34u, 0x1D94B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B3Cu;
label_1d94b3c:
    // 0x1d94b3c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D94B3Cu;
    {
        const bool branch_taken_0x1d94b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D94B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B3Cu;
        // 0x1d94b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b3c) {
            ctx->pc = 0x1D94B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94b1c;
        }
    }
    ctx->pc = 0x1D94B44u;
    // 0x1d94b44: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94B44u;
    SET_GPR_U32(ctx, 31, 0x1D94B4Cu);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94B44u, 0x1D94B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B4Cu;
label_1d94b4c:
    // 0x1d94b4c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D94B4Cu;
    {
        const bool branch_taken_0x1d94b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B4Cu;
        // 0x1d94b50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b4c) {
            ctx->pc = 0x1D94B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94b20;
        }
    }
    ctx->pc = 0x1D94B54u;
    // 0x1d94b54: 0x0  nop
    ctx->pc = 0x1d94b54u;
    // NOP
label_1d94b58:
    // 0x1d94b58: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d94b58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d94b5c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D94B5Cu;
    {
        const bool branch_taken_0x1d94b5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D94B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B5Cu;
        // 0x1d94b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b5c) {
            ctx->pc = 0x1D94B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94b20;
        }
    }
    ctx->pc = 0x1D94B64u;
    // 0x1d94b64: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d94b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d94b68: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d94b68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d94b6c: 0x25ce8900  addiu       $t6, $t6, -0x7700
    ctx->pc = 0x1d94b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936832));
    // 0x1d94b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d94b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94b74: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d94b74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d94b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94b7c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d94b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d94b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94b84: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d94b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d94b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94b8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94b90: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94B90u;
    SET_GPR_U32(ctx, 31, 0x1D94B98u);
    ctx->pc = 0x1D94B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B90u;
    // 0x1d94b94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94B90u, 0x1D94B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B98u;
label_1d94b98:
    // 0x1d94b98: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94b98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94b9c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D94B9Cu;
    {
        const bool branch_taken_0x1d94b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B9Cu;
        // 0x1d94ba0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b9c) {
            ctx->pc = 0x1D94B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94b1c;
        }
    }
    ctx->pc = 0x1D94BA4u;
    // 0x1d94ba4: 0x0  nop
    ctx->pc = 0x1d94ba4u;
    // NOP
    // 0x1d94ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94bac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94bb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94bbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94bc4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94bc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94bcc: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94BCCu;
    SET_GPR_U32(ctx, 31, 0x1D94BD4u);
    ctx->pc = 0x1D94BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94BCCu;
    // 0x1d94bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94BCCu, 0x1D94BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94BD4u;
label_1d94bd4:
    // 0x1d94bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94bd8: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D94BD8u;
    SET_GPR_U32(ctx, 31, 0x1D94BE0u);
    ctx->pc = 0x1D94BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94BD8u;
    // 0x1d94bdc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D94BD8u, 0x1D94BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94BE0u;
label_1d94be0:
    // 0x1d94be0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94be4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d94be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94be8: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94BE8u;
    SET_GPR_U32(ctx, 31, 0x1D94BF0u);
    ctx->pc = 0x1D94BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94BE8u;
    // 0x1d94bec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94BE8u, 0x1D94BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94BF0u;
label_1d94bf0:
    // 0x1d94bf0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94bf4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d94bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d94bf8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d94bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d94bfc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94c00: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94C00u;
    SET_GPR_U32(ctx, 31, 0x1D94C08u);
    ctx->pc = 0x1D94C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94C00u;
    // 0x1d94c04: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94C00u, 0x1D94C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94C08u;
label_1d94c08:
    // 0x1d94c08: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d94c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d94c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94c10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C14u;
        // 0x1d94c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94C1Cu;
    // 0x1d94c1c: 0x0  nop
    ctx->pc = 0x1d94c1cu;
    // NOP
    ctx->pc = 0x1d94c20u;
}
