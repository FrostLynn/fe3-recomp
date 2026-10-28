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

// Function: sub_01C8E9C0
// Address: 0x1c8e9c0 - 0x1c8eaec
void sub_01C8E9C0_0x1c8e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8E9C0_0x1c8e9c0");
#endif

    switch (ctx->pc) {
        case 0x1c8e9dcu: goto label_1c8e9dc;
        case 0x1c8e9e4u: goto label_1c8e9e4;
        case 0x1c8e9f8u: goto label_1c8e9f8;
        case 0x1c8ea00u: goto label_1c8ea00;
        case 0x1c8ea04u: goto label_1c8ea04;
        case 0x1c8ea40u: goto label_1c8ea40;
        case 0x1c8ea80u: goto label_1c8ea80;
        case 0x1c8ea94u: goto label_1c8ea94;
        case 0x1c8eaa0u: goto label_1c8eaa0;
        case 0x1c8eaacu: goto label_1c8eaac;
        case 0x1c8eac0u: goto label_1c8eac0;
        case 0x1c8ead0u: goto label_1c8ead0;
        default: break;
    }

    ctx->pc = 0x1c8e9c0u;

    // 0x1c8e9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8e9c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8e9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8e9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8e9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8e9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e9d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8e9d4: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8E9D4u;
    SET_GPR_U32(ctx, 31, 0x1C8E9DCu);
    ctx->pc = 0x1C8E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E9D4u;
    // 0x1c8e9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8E9D4u, 0x1C8E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E9DCu;
label_1c8e9dc:
    // 0x1c8e9dc: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8E9DCu;
    SET_GPR_U32(ctx, 31, 0x1C8E9E4u);
    ctx->pc = 0x1C8E9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E9DCu;
    // 0x1c8e9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8E9DCu, 0x1C8E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E9E4u;
label_1c8e9e4:
    // 0x1c8e9e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8e9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e9e8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8E9E8u;
    {
        const bool branch_taken_0x1c8e9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E9E8u;
        // 0x1c8e9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e9e8) {
            ctx->pc = 0x1C8EA14u;
            goto label_1c8ea14;
        }
    }
    ctx->pc = 0x1C8E9F0u;
    // 0x1c8e9f0: 0xc7233ec  jal         func_1C8CFB0
    ctx->pc = 0x1C8E9F0u;
    SET_GPR_U32(ctx, 31, 0x1C8E9F8u);
    ctx->pc = 0x1C8CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFB0u, 0x1C8E9F0u, 0x1C8E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E9F8u;
label_1c8e9f8:
    // 0x1c8e9f8: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8E9F8u;
    SET_GPR_U32(ctx, 31, 0x1C8EA00u);
    ctx->pc = 0x1C8E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E9F8u;
    // 0x1c8e9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8E9F8u, 0x1C8EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EA00u;
label_1c8ea00:
    // 0x1c8ea00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8ea04:
    // 0x1c8ea04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ea04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ea08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8ea08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ea0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA0Cu;
        // 0x1c8ea10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EA14u;
label_1c8ea14:
    // 0x1c8ea14: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8EA14u;
    {
        const bool branch_taken_0x1c8ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA14u;
        // 0x1c8ea18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ea14) {
            ctx->pc = 0x1C8EA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ea04;
        }
    }
    ctx->pc = 0x1C8EA1Cu;
    // 0x1c8ea1c: 0x0  nop
    ctx->pc = 0x1c8ea1cu;
    // NOP
    // 0x1c8ea20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8ea24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ea28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8ea2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8ea30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ea30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea34: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c8ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8ea38: 0xc7233d8  jal         func_1C8CF60
    ctx->pc = 0x1C8EA38u;
    SET_GPR_U32(ctx, 31, 0x1C8EA40u);
    ctx->pc = 0x1C8EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EA38u;
    // 0x1c8ea3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF60u, 0x1C8EA38u, 0x1C8EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EA40u;
label_1c8ea40:
    // 0x1c8ea40: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c8ea40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8ea44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c8ea44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea48: 0x25cefff3  addiu       $t6, $t6, -0xD
    ctx->pc = 0x1c8ea48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967283));
    // 0x1c8ea4c: 0x2dcf0013  sltiu       $t7, $t6, 0x13
    ctx->pc = 0x1c8ea4cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1c8ea50: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C8EA50u;
    {
        const bool branch_taken_0x1c8ea50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EA50u;
        // 0x1c8ea54: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ea50) {
            ctx->pc = 0x1C8EB0Cu;
            return;
        }
    }
    ctx->pc = 0x1C8EA58u;
    // 0x1c8ea58: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c8ea58u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c8ea5c: 0x3c0e01c9  lui         $t6, 0x1C9
    ctx->pc = 0x1c8ea5cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
    // 0x1c8ea60: 0x25ce01b0  addiu       $t6, $t6, 0x1B0
    ctx->pc = 0x1c8ea60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 432));
    // 0x1c8ea64: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8ea64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8ea68: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c8ea68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8ea6c: 0x1a00008  jr          $t5
    ctx->pc = 0x1C8EA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8EA74u: goto label_1c8ea74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EA6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C8EA74u;
label_1c8ea74:
    // 0x1c8ea74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8ea78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea7c: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1c8ea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1c8ea80:
    // 0x1c8ea80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8ea80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ea84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8ea84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8ea88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ea8c: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8EA8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EA94u);
    ctx->pc = 0x1C8EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EA8Cu;
    // 0x1c8ea90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8EA8Cu, 0x1C8EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EA94u;
label_1c8ea94:
    // 0x1c8ea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ea98: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8EA98u;
    SET_GPR_U32(ctx, 31, 0x1C8EAA0u);
    ctx->pc = 0x1C8EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EA98u;
    // 0x1c8ea9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8EA98u, 0x1C8EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EAA0u;
label_1c8eaa0:
    // 0x1c8eaa0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8eaa4: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EAA4u;
    SET_GPR_U32(ctx, 31, 0x1C8EAACu);
    ctx->pc = 0x1C8EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EAA4u;
    // 0x1c8eaa8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EAA4u, 0x1C8EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EAACu;
label_1c8eaac:
    // 0x1c8eaac: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c8eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c8eab0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c8eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c8eab4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c8eab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8eab8: 0xc7233dc  jal         func_1C8CF70
    ctx->pc = 0x1C8EAB8u;
    SET_GPR_U32(ctx, 31, 0x1C8EAC0u);
    ctx->pc = 0x1C8EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EAB8u;
    // 0x1c8eabc: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF70u, 0x1C8EAB8u, 0x1C8EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EAC0u;
label_1c8eac0:
    // 0x1c8eac0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8eac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8eac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eac8: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8EAC8u;
    SET_GPR_U32(ctx, 31, 0x1C8EAD0u);
    ctx->pc = 0x1C8EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EAC8u;
    // 0x1c8eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8EAC8u, 0x1C8EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EAD0u;
label_1c8ead0:
    // 0x1c8ead0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ead4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8ead4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ead8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ead8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8eadc: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x1c8eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1c8eae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8eae4: 0x87233de  j           func_1C8CF78
    ctx->pc = 0x1C8EAE4u;
    ctx->pc = 0x1C8EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EAE4u;
    // 0x1c8eae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF78u;
    sub_01C8CF78_0x1c8cf78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EAECu;
}
