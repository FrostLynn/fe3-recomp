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

// Function: sub_01D46A08
// Address: 0x1d46a08 - 0x1d46ae8
void sub_01D46A08_0x1d46a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46A08_0x1d46a08");
#endif

    switch (ctx->pc) {
        case 0x1d46a1cu: goto label_1d46a1c;
        case 0x1d46a30u: goto label_1d46a30;
        case 0x1d46a34u: goto label_1d46a34;
        case 0x1d46a50u: goto label_1d46a50;
        case 0x1d46a5cu: goto label_1d46a5c;
        case 0x1d46a8cu: goto label_1d46a8c;
        case 0x1d46ab8u: goto label_1d46ab8;
        case 0x1d46ac4u: goto label_1d46ac4;
        default: break;
    }

    ctx->pc = 0x1d46a08u;

    // 0x1d46a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d46a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d46a14: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D46A14u;
    SET_GPR_U32(ctx, 31, 0x1D46A1Cu);
    ctx->pc = 0x1D46A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A14u;
    // 0x1d46a18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D46A14u, 0x1D46A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A1Cu;
label_1d46a1c:
    // 0x1d46a1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d46a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46a20: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D46A20u;
    {
        const bool branch_taken_0x1d46a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D46A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A20u;
        // 0x1d46a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a20) {
            ctx->pc = 0x1D46A44u;
            goto label_1d46a44;
        }
    }
    ctx->pc = 0x1D46A28u;
    // 0x1d46a28: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D46A28u;
    SET_GPR_U32(ctx, 31, 0x1D46A30u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D46A28u, 0x1D46A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A30u;
label_1d46a30:
    // 0x1d46a30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d46a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d46a34:
    // 0x1d46a34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46a38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d46a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A3Cu;
        // 0x1d46a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46A44u;
label_1d46a44:
    // 0x1d46a44: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d46a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d46a48: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46A48u;
    SET_GPR_U32(ctx, 31, 0x1D46A50u);
    ctx->pc = 0x1D46A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A48u;
    // 0x1d46a4c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46A48u, 0x1D46A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A50u;
label_1d46a50:
    // 0x1d46a50: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d46a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d46a54: 0xc751764  jal         func_1D45D90
    ctx->pc = 0x1D46A54u;
    SET_GPR_U32(ctx, 31, 0x1D46A5Cu);
    ctx->pc = 0x1D46A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A54u;
    // 0x1d46a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D90u, 0x1D46A54u, 0x1D46A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A5Cu;
label_1d46a5c:
    // 0x1d46a5c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D46A5Cu;
    {
        const bool branch_taken_0x1d46a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A5Cu;
        // 0x1d46a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a5c) {
            ctx->pc = 0x1D46A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46a34;
        }
    }
    ctx->pc = 0x1D46A64u;
    // 0x1d46a64: 0x0  nop
    ctx->pc = 0x1d46a64u;
    // NOP
    // 0x1d46a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d46a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d46a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46a70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d46a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d46a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d46a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46a7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d46a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46a80: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d46a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d46a84: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46A84u;
    SET_GPR_U32(ctx, 31, 0x1D46A8Cu);
    ctx->pc = 0x1D46A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A84u;
    // 0x1d46a88: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46A84u, 0x1D46A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A8Cu;
label_1d46a8c:
    // 0x1d46a8c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d46a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d46a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46a94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d46a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d46a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46a9c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d46a9cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d46aa0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d46aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46aa4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d46aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d46aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d46aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46aac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d46aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d46ab0: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D46AB0u;
    SET_GPR_U32(ctx, 31, 0x1D46AB8u);
    ctx->pc = 0x1D46AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46AB0u;
    // 0x1d46ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D46AB0u, 0x1D46AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46AB8u;
label_1d46ab8:
    // 0x1d46ab8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d46ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d46abc: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46ABCu;
    SET_GPR_U32(ctx, 31, 0x1D46AC4u);
    ctx->pc = 0x1D46AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46ABCu;
    // 0x1d46ac0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46ABCu, 0x1D46AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46AC4u;
label_1d46ac4:
    // 0x1d46ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d46ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46ad0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d46ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d46ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d46ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46ad8: 0x8751766  j           func_1D45D98
    ctx->pc = 0x1D46AD8u;
    ctx->pc = 0x1D46ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46AD8u;
    // 0x1d46adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D98u;
    sub_01D45D98_0x1d45d98(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46AE0u;
    // 0x1d46ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46AE8u;
}
