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

// Function: sub_01D67B00
// Address: 0x1d67b00 - 0x1d67c10
void sub_01D67B00_0x1d67b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67B00_0x1d67b00");
#endif

    switch (ctx->pc) {
        case 0x1d67b20u: goto label_1d67b20;
        case 0x1d67b34u: goto label_1d67b34;
        case 0x1d67b38u: goto label_1d67b38;
        case 0x1d67b54u: goto label_1d67b54;
        case 0x1d67b64u: goto label_1d67b64;
        case 0x1d67bb0u: goto label_1d67bb0;
        case 0x1d67becu: goto label_1d67bec;
        case 0x1d67bf8u: goto label_1d67bf8;
        default: break;
    }

    ctx->pc = 0x1d67b00u;

    // 0x1d67b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d67b04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67b08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d67b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d67b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d67b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d67b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d67b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67b14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67b18: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67B18u;
    SET_GPR_U32(ctx, 31, 0x1D67B20u);
    ctx->pc = 0x1D67B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67B18u;
    // 0x1d67b1c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67B18u, 0x1D67B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67B20u;
label_1d67b20:
    // 0x1d67b20: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d67b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d67b24: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D67B24u;
    {
        const bool branch_taken_0x1d67b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B24u;
        // 0x1d67b28: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b24) {
            ctx->pc = 0x1D67B70u;
            goto label_1d67b70;
        }
    }
    ctx->pc = 0x1D67B2Cu;
    // 0x1d67b2c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D67B2Cu;
    {
        const bool branch_taken_0x1d67b2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d67b2c) {
            ctx->pc = 0x1D67B4Cu;
            goto label_1d67b4c;
        }
    }
    ctx->pc = 0x1D67B34u;
label_1d67b34:
    // 0x1d67b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d67b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d67b38:
    // 0x1d67b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d67b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d67b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B44u;
        // 0x1d67b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67B4Cu;
label_1d67b4c:
    // 0x1d67b4c: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D67B54u);
    ctx->pc = 0x1D67B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67B4Cu;
    // 0x1d67b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67B4Cu, 0x1D67B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67B54u;
label_1d67b54:
    // 0x1d67b54: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D67B54u;
    {
        const bool branch_taken_0x1d67b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D67B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B54u;
        // 0x1d67b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b54) {
            ctx->pc = 0x1D67B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67b34;
        }
    }
    ctx->pc = 0x1D67B5Cu;
    // 0x1d67b5c: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67B5Cu;
    SET_GPR_U32(ctx, 31, 0x1D67B64u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67B5Cu, 0x1D67B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67B64u;
label_1d67b64:
    // 0x1d67b64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D67B64u;
    {
        const bool branch_taken_0x1d67b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B64u;
        // 0x1d67b68: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b64) {
            ctx->pc = 0x1D67B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67b38;
        }
    }
    ctx->pc = 0x1D67B6Cu;
    // 0x1d67b6c: 0x0  nop
    ctx->pc = 0x1d67b6cu;
    // NOP
label_1d67b70:
    // 0x1d67b70: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d67b70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d67b74: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D67B74u;
    {
        const bool branch_taken_0x1d67b74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67B74u;
        // 0x1d67b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67b74) {
            ctx->pc = 0x1D67B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67b38;
        }
    }
    ctx->pc = 0x1D67B7Cu;
    // 0x1d67b7c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d67b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d67b80: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d67b80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d67b84: 0x25ce8b30  addiu       $t6, $t6, -0x74D0
    ctx->pc = 0x1d67b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294937392));
    // 0x1d67b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67b8c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d67b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d67b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67b94: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d67b94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d67b98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67b9c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d67b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d67ba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67ba4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67ba8: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67BA8u;
    SET_GPR_U32(ctx, 31, 0x1D67BB0u);
    ctx->pc = 0x1D67BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67BA8u;
    // 0x1d67bac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67BA8u, 0x1D67BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67BB0u;
label_1d67bb0:
    // 0x1d67bb0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d67bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67bb4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D67BB4u;
    {
        const bool branch_taken_0x1d67bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67BB4u;
        // 0x1d67bb8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67bb4) {
            ctx->pc = 0x1D67B34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67b34;
        }
    }
    ctx->pc = 0x1D67BBCu;
    // 0x1d67bbc: 0x0  nop
    ctx->pc = 0x1d67bbcu;
    // NOP
    // 0x1d67bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67bc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67bcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67bdc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67be0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67be0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67be4: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67BE4u;
    SET_GPR_U32(ctx, 31, 0x1D67BECu);
    ctx->pc = 0x1D67BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67BE4u;
    // 0x1d67be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67BE4u, 0x1D67BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67BECu;
label_1d67bec:
    // 0x1d67bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67bf0: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D67BF0u;
    SET_GPR_U32(ctx, 31, 0x1D67BF8u);
    ctx->pc = 0x1D67BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67BF0u;
    // 0x1d67bf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D67BF0u, 0x1D67BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67BF8u;
label_1d67bf8:
    // 0x1d67bf8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d67bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d67bfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67c04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67C04u;
        // 0x1d67c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67C0Cu;
    // 0x1d67c0c: 0x0  nop
    ctx->pc = 0x1d67c0cu;
    // NOP
    ctx->pc = 0x1d67c10u;
}
