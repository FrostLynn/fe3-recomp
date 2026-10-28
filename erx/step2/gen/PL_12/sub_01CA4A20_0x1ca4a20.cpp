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

// Function: sub_01CA4A20
// Address: 0x1ca4a20 - 0x1ca4b58
void sub_01CA4A20_0x1ca4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4A20_0x1ca4a20");
#endif

    switch (ctx->pc) {
        case 0x1ca4a40u: goto label_1ca4a40;
        case 0x1ca4a54u: goto label_1ca4a54;
        case 0x1ca4a58u: goto label_1ca4a58;
        case 0x1ca4a74u: goto label_1ca4a74;
        case 0x1ca4a84u: goto label_1ca4a84;
        case 0x1ca4ad0u: goto label_1ca4ad0;
        case 0x1ca4b0cu: goto label_1ca4b0c;
        case 0x1ca4b18u: goto label_1ca4b18;
        case 0x1ca4b28u: goto label_1ca4b28;
        case 0x1ca4b40u: goto label_1ca4b40;
        default: break;
    }

    ctx->pc = 0x1ca4a20u;

    // 0x1ca4a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca4a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca4a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca4a2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca4a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca4a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca4a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4a34: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca4a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca4a38: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4A38u;
    SET_GPR_U32(ctx, 31, 0x1CA4A40u);
    ctx->pc = 0x1CA4A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4A38u;
    // 0x1ca4a3c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4A38u, 0x1CA4A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A40u;
label_1ca4a40:
    // 0x1ca4a40: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1ca4a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ca4a44: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CA4A44u;
    {
        const bool branch_taken_0x1ca4a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A44u;
        // 0x1ca4a48: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a44) {
            ctx->pc = 0x1CA4A90u;
            goto label_1ca4a90;
        }
    }
    ctx->pc = 0x1CA4A4Cu;
    // 0x1ca4a4c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA4A4Cu;
    {
        const bool branch_taken_0x1ca4a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1ca4a4c) {
            ctx->pc = 0x1CA4A6Cu;
            goto label_1ca4a6c;
        }
    }
    ctx->pc = 0x1CA4A54u;
label_1ca4a54:
    // 0x1ca4a54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca4a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4a58:
    // 0x1ca4a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca4a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca4a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca4a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A64u;
        // 0x1ca4a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4A6Cu;
label_1ca4a6c:
    // 0x1ca4a6c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA4A6Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4A74u);
    ctx->pc = 0x1CA4A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4A6Cu;
    // 0x1ca4a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA4A6Cu, 0x1CA4A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A74u;
label_1ca4a74:
    // 0x1ca4a74: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CA4A74u;
    {
        const bool branch_taken_0x1ca4a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CA4A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A74u;
        // 0x1ca4a78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a74) {
            ctx->pc = 0x1CA4A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4a54;
        }
    }
    ctx->pc = 0x1CA4A7Cu;
    // 0x1ca4a7c: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4A7Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4A84u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4A7Cu, 0x1CA4A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A84u;
label_1ca4a84:
    // 0x1ca4a84: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CA4A84u;
    {
        const bool branch_taken_0x1ca4a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A84u;
        // 0x1ca4a88: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a84) {
            ctx->pc = 0x1CA4A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4a58;
        }
    }
    ctx->pc = 0x1CA4A8Cu;
    // 0x1ca4a8c: 0x0  nop
    ctx->pc = 0x1ca4a8cu;
    // NOP
label_1ca4a90:
    // 0x1ca4a90: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1ca4a90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1ca4a94: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CA4A94u;
    {
        const bool branch_taken_0x1ca4a94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A94u;
        // 0x1ca4a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a94) {
            ctx->pc = 0x1CA4A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4a58;
        }
    }
    ctx->pc = 0x1CA4A9Cu;
    // 0x1ca4a9c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1ca4a9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ca4aa0: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1ca4aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1ca4aa4: 0x25ce6d10  addiu       $t6, $t6, 0x6D10
    ctx->pc = 0x1ca4aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27920));
    // 0x1ca4aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4aac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ca4aacu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ca4ab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4ab4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ca4ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ca4ab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4abc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ca4abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca4ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4ac4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca4ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4ac8: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4AC8u;
    SET_GPR_U32(ctx, 31, 0x1CA4AD0u);
    ctx->pc = 0x1CA4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4AC8u;
    // 0x1ca4acc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4AC8u, 0x1CA4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4AD0u;
label_1ca4ad0:
    // 0x1ca4ad0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4ad4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CA4AD4u;
    {
        const bool branch_taken_0x1ca4ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4AD4u;
        // 0x1ca4ad8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4ad4) {
            ctx->pc = 0x1CA4A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca4a54;
        }
    }
    ctx->pc = 0x1CA4ADCu;
    // 0x1ca4adc: 0x0  nop
    ctx->pc = 0x1ca4adcu;
    // NOP
    // 0x1ca4ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4ae4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca4aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca4af4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4af4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4afc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ca4afcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4b00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca4b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4b04: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4B04u;
    SET_GPR_U32(ctx, 31, 0x1CA4B0Cu);
    ctx->pc = 0x1CA4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B04u;
    // 0x1ca4b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4B04u, 0x1CA4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B0Cu;
label_1ca4b0c:
    // 0x1ca4b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4b10: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA4B10u;
    SET_GPR_U32(ctx, 31, 0x1CA4B18u);
    ctx->pc = 0x1CA4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B10u;
    // 0x1ca4b14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA4B10u, 0x1CA4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B18u;
label_1ca4b18:
    // 0x1ca4b18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4b1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca4b20: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4B20u;
    SET_GPR_U32(ctx, 31, 0x1CA4B28u);
    ctx->pc = 0x1CA4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B20u;
    // 0x1ca4b24: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4B20u, 0x1CA4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B28u;
label_1ca4b28:
    // 0x1ca4b28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4b28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4b2c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ca4b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ca4b30: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1ca4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1ca4b34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca4b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4b38: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4B38u;
    SET_GPR_U32(ctx, 31, 0x1CA4B40u);
    ctx->pc = 0x1CA4B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4B38u;
    // 0x1ca4b3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4B38u, 0x1CA4B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B40u;
label_1ca4b40:
    // 0x1ca4b40: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ca4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ca4b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4b48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4B4Cu;
        // 0x1ca4b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4B54u;
    // 0x1ca4b54: 0x0  nop
    ctx->pc = 0x1ca4b54u;
    // NOP
    ctx->pc = 0x1ca4b58u;
}
