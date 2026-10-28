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

// Function: sub_01D9EA00
// Address: 0x1d9ea00 - 0x1d9eae8
void sub_01D9EA00_0x1d9ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EA00_0x1d9ea00");
#endif

    switch (ctx->pc) {
        case 0x1d9ea14u: goto label_1d9ea14;
        case 0x1d9ea28u: goto label_1d9ea28;
        case 0x1d9ea2cu: goto label_1d9ea2c;
        case 0x1d9ea48u: goto label_1d9ea48;
        case 0x1d9ea54u: goto label_1d9ea54;
        case 0x1d9ea94u: goto label_1d9ea94;
        case 0x1d9eac0u: goto label_1d9eac0;
        case 0x1d9eaccu: goto label_1d9eacc;
        case 0x1d9ead8u: goto label_1d9ead8;
        default: break;
    }

    ctx->pc = 0x1d9ea00u;

    // 0x1d9ea00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9ea04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ea08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9ea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9ea0c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9EA0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EA14u);
    ctx->pc = 0x1D9EA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA0Cu;
    // 0x1d9ea10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9EA0Cu, 0x1D9EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EA14u;
label_1d9ea14:
    // 0x1d9ea14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9ea14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ea18: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9EA18u;
    {
        const bool branch_taken_0x1d9ea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA18u;
        // 0x1d9ea1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ea18) {
            ctx->pc = 0x1D9EA3Cu;
            goto label_1d9ea3c;
        }
    }
    ctx->pc = 0x1D9EA20u;
    // 0x1d9ea20: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9EA20u;
    SET_GPR_U32(ctx, 31, 0x1D9EA28u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9EA20u, 0x1D9EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EA28u;
label_1d9ea28:
    // 0x1d9ea28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9ea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9ea2c:
    // 0x1d9ea2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ea2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ea30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9ea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA34u;
        // 0x1d9ea38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EA3Cu;
label_1d9ea3c:
    // 0x1d9ea3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9ea40: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EA40u;
    SET_GPR_U32(ctx, 31, 0x1D9EA48u);
    ctx->pc = 0x1D9EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA40u;
    // 0x1d9ea44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EA40u, 0x1D9EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EA48u;
label_1d9ea48:
    // 0x1d9ea48: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d9ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9ea4c: 0xc767264  jal         func_1D9C990
    ctx->pc = 0x1D9EA4Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EA54u);
    ctx->pc = 0x1D9EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA4Cu;
    // 0x1d9ea50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C990u, 0x1D9EA4Cu, 0x1D9EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EA54u;
label_1d9ea54:
    // 0x1d9ea54: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9EA54u;
    {
        const bool branch_taken_0x1d9ea54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EA54u;
        // 0x1d9ea58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ea54) {
            ctx->pc = 0x1D9EA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ea2c;
        }
    }
    ctx->pc = 0x1D9EA5Cu;
    // 0x1d9ea5c: 0x0  nop
    ctx->pc = 0x1d9ea5cu;
    // NOP
    // 0x1d9ea60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9ea64: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d9ea64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d9ea68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9ea6c: 0x25ee6cf8  addiu       $t6, $t7, 0x6CF8
    ctx->pc = 0x1d9ea6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 27896));
    // 0x1d9ea70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d9ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d9ea74: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d9ea74u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DA6CFCu));
    // 0x1d9ea78: 0x8ded6cf8  lw          $t5, 0x6CF8($t7)
    ctx->pc = 0x1d9ea78u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DA6CF8u));
    // 0x1d9ea7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9ea7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea80: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d9ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d9ea84: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d9ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d9ea88: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d9ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9ea8c: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EA8Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EA94u);
    ctx->pc = 0x1D9EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA8Cu;
    // 0x1d9ea90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EA8Cu, 0x1D9EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EA94u;
label_1d9ea94:
    // 0x1d9ea94: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d9ea94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d9ea98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9ea98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ea9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9ea9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eaa0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9eaa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9eaa4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9eaa4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9eaa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9eaa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eaac: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d9eaacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d9eab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9eab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eab4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9eab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9eab8: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9EAB8u;
    SET_GPR_U32(ctx, 31, 0x1D9EAC0u);
    ctx->pc = 0x1D9EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EAB8u;
    // 0x1d9eabc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9EAB8u, 0x1D9EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EAC0u;
label_1d9eac0:
    // 0x1d9eac0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9eac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9eac4: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EAC4u;
    SET_GPR_U32(ctx, 31, 0x1D9EACCu);
    ctx->pc = 0x1D9EAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EAC4u;
    // 0x1d9eac8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EAC4u, 0x1D9EACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EACCu;
label_1d9eacc:
    // 0x1d9eacc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9eaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ead0: 0xc767266  jal         func_1D9C998
    ctx->pc = 0x1D9EAD0u;
    SET_GPR_U32(ctx, 31, 0x1D9EAD8u);
    ctx->pc = 0x1D9EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EAD0u;
    // 0x1d9ead4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C998u, 0x1D9EAD0u, 0x1D9EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EAD8u;
label_1d9ead8:
    // 0x1d9ead8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d9ead8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9eadc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9eadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EAE0u;
        // 0x1d9eae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EAE8u;
}
