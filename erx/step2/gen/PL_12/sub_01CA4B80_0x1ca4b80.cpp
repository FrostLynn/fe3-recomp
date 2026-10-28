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

// Function: sub_01CA4B80
// Address: 0x1ca4b80 - 0x1ca4c90
void sub_01CA4B80_0x1ca4b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4B80_0x1ca4b80");
#endif

    switch (ctx->pc) {
        case 0x1ca4ba0u: goto label_1ca4ba0;
        case 0x1ca4bb4u: goto label_1ca4bb4;
        case 0x1ca4bb8u: goto label_1ca4bb8;
        case 0x1ca4bd4u: goto label_1ca4bd4;
        case 0x1ca4be4u: goto label_1ca4be4;
        case 0x1ca4c30u: goto label_1ca4c30;
        case 0x1ca4c6cu: goto label_1ca4c6c;
        case 0x1ca4c78u: goto label_1ca4c78;
        default: break;
    }

    ctx->pc = 0x1ca4b80u;

    // 0x1ca4b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca4b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca4b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca4b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca4b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca4b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca4b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4b94: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca4b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca4b98: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4B98u;
    SET_GPR_U32(ctx, 31, 0x1CA4BA0u);
    ctx->pc = 0x1CA4B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B98u;
    // 0x1ca4b9c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4B98u, 0x1CA4BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4BA0u;
label_1ca4ba0:
    // 0x1ca4ba0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ca4ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ca4ba4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA4BA4u;
    {
        const bool branch_taken_0x1ca4ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4BA4u;
        // 0x1ca4ba8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ba4) {
            ctx->pc = 0x1CA4BF0u;
            goto label_1ca4bf0;
        }
    }
    ctx->pc = 0x1CA4BACu;
    // 0x1ca4bac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA4BACu;
    {
        const bool branch_taken_0x1ca4bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ca4bac) {
            ctx->pc = 0x1CA4BCCu;
            goto label_1ca4bcc;
        }
    }
    ctx->pc = 0x1CA4BB4u;
label_1ca4bb4:
    // 0x1ca4bb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca4bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4bb8:
    // 0x1ca4bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca4bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca4bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca4bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4BC4u;
        // 0x1ca4bc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4BCCu;
label_1ca4bcc:
    // 0x1ca4bcc: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA4BCCu;
    SET_GPR_U32(ctx, 31, 0x1CA4BD4u);
    ctx->pc = 0x1CA4BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4BCCu;
    // 0x1ca4bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA4BCCu, 0x1CA4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4BD4u;
label_1ca4bd4:
    // 0x1ca4bd4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA4BD4u;
    {
        const bool branch_taken_0x1ca4bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CA4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4BD4u;
        // 0x1ca4bd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4bd4) {
            ctx->pc = 0x1CA4BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4bb4;
        }
    }
    ctx->pc = 0x1CA4BDCu;
    // 0x1ca4bdc: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4BDCu;
    SET_GPR_U32(ctx, 31, 0x1CA4BE4u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4BDCu, 0x1CA4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4BE4u;
label_1ca4be4:
    // 0x1ca4be4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CA4BE4u;
    {
        const bool branch_taken_0x1ca4be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4BE4u;
        // 0x1ca4be8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4be4) {
            ctx->pc = 0x1CA4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4bb8;
        }
    }
    ctx->pc = 0x1CA4BECu;
    // 0x1ca4bec: 0x0  nop
    ctx->pc = 0x1ca4becu;
    // NOP
label_1ca4bf0:
    // 0x1ca4bf0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ca4bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ca4bf4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CA4BF4u;
    {
        const bool branch_taken_0x1ca4bf4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4BF4u;
        // 0x1ca4bf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4bf4) {
            ctx->pc = 0x1CA4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4bb8;
        }
    }
    ctx->pc = 0x1CA4BFCu;
    // 0x1ca4bfc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ca4bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ca4c00: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1ca4c00u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1ca4c04: 0x25ce6d20  addiu       $t6, $t6, 0x6D20
    ctx->pc = 0x1ca4c04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27936));
    // 0x1ca4c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca4c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c0c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca4c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca4c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c14: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ca4c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ca4c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c1c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca4c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca4c20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c24: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca4c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4c28: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4C28u;
    SET_GPR_U32(ctx, 31, 0x1CA4C30u);
    ctx->pc = 0x1CA4C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C28u;
    // 0x1ca4c2c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4C28u, 0x1CA4C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4C30u;
label_1ca4c30:
    // 0x1ca4c30: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4c30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4c34: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CA4C34u;
    {
        const bool branch_taken_0x1ca4c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C34u;
        // 0x1ca4c38: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4c34) {
            ctx->pc = 0x1CA4BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4bb4;
        }
    }
    ctx->pc = 0x1CA4C3Cu;
    // 0x1ca4c3c: 0x0  nop
    ctx->pc = 0x1ca4c3cu;
    // NOP
    // 0x1ca4c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4c44: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca4c54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4c54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca4c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4c60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca4c60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c64: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4C64u;
    SET_GPR_U32(ctx, 31, 0x1CA4C6Cu);
    ctx->pc = 0x1CA4C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C64u;
    // 0x1ca4c68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4C64u, 0x1CA4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4C6Cu;
label_1ca4c6c:
    // 0x1ca4c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4c70: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA4C70u;
    SET_GPR_U32(ctx, 31, 0x1CA4C78u);
    ctx->pc = 0x1CA4C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C70u;
    // 0x1ca4c74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA4C70u, 0x1CA4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4C78u;
label_1ca4c78:
    // 0x1ca4c78: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca4c7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4C84u;
        // 0x1ca4c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4C8Cu;
    // 0x1ca4c8c: 0x0  nop
    ctx->pc = 0x1ca4c8cu;
    // NOP
    ctx->pc = 0x1ca4c90u;
}
