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

// Function: sub_01CADC10
// Address: 0x1cadc10 - 0x1cadcf8
void sub_01CADC10_0x1cadc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADC10_0x1cadc10");
#endif

    switch (ctx->pc) {
        case 0x1cadc24u: goto label_1cadc24;
        case 0x1cadc38u: goto label_1cadc38;
        case 0x1cadc3cu: goto label_1cadc3c;
        case 0x1cadc74u: goto label_1cadc74;
        case 0x1cadcccu: goto label_1cadccc;
        case 0x1cadcd8u: goto label_1cadcd8;
        default: break;
    }

    ctx->pc = 0x1cadc10u;

    // 0x1cadc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cadc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cadc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadc18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cadc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cadc1c: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CADC1Cu;
    SET_GPR_U32(ctx, 31, 0x1CADC24u);
    ctx->pc = 0x1CADC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADC1Cu;
    // 0x1cadc20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CADC1Cu, 0x1CADC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC24u;
label_1cadc24:
    // 0x1cadc24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cadc24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cadc28: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CADC28u;
    {
        const bool branch_taken_0x1cadc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CADC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADC28u;
        // 0x1cadc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadc28) {
            ctx->pc = 0x1CADC4Cu;
            goto label_1cadc4c;
        }
    }
    ctx->pc = 0x1CADC30u;
    // 0x1cadc30: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CADC30u;
    SET_GPR_U32(ctx, 31, 0x1CADC38u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CADC30u, 0x1CADC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC38u;
label_1cadc38:
    // 0x1cadc38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cadc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cadc3c:
    // 0x1cadc3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadc3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadc40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cadc40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadc44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADC44u;
        // 0x1cadc48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADC4Cu;
label_1cadc4c:
    // 0x1cadc4c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CADC4Cu;
    {
        const bool branch_taken_0x1cadc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADC4Cu;
        // 0x1cadc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadc4c) {
            ctx->pc = 0x1CADC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cadc3c;
        }
    }
    ctx->pc = 0x1CADC54u;
    // 0x1cadc54: 0x0  nop
    ctx->pc = 0x1cadc54u;
    // NOP
    // 0x1cadc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cadc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cadc5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadc60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cadc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cadc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cadc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadc68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cadc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cadc6c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CADC6Cu;
    SET_GPR_U32(ctx, 31, 0x1CADC74u);
    ctx->pc = 0x1CADC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADC6Cu;
    // 0x1cadc70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CADC6Cu, 0x1CADC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC74u;
label_1cadc74:
    // 0x1cadc74: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cadc74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cadc78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadc80: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cadc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cadc84: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1cadc84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1cadc88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cadc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cadc8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cadc8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadc90: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cadc90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cadc94: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1cadc94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1cadc98: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1cadc98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1cadc9c: 0x91cf1606  lbu         $t7, 0x1606($t6)
    ctx->pc = 0x1cadc9cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5638)));
    // 0x1cadca0: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CADCA0u;
    {
        const bool branch_taken_0x1cadca0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CADCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADCA0u;
        // 0x1cadca4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadca0) {
            ctx->pc = 0x1CADCC4u;
            goto label_1cadcc4;
        }
    }
    ctx->pc = 0x1CADCA8u;
    // 0x1cadca8: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x1cadca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x1cadcac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cadcacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cadcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cadcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcb4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cadcb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cadcb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cadcb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cadcc4:
    // 0x1cadcc4: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CADCC4u;
    SET_GPR_U32(ctx, 31, 0x1CADCCCu);
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CADCC4u, 0x1CADCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADCCCu;
label_1cadccc:
    // 0x1cadccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcd0: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CADCD0u;
    SET_GPR_U32(ctx, 31, 0x1CADCD8u);
    ctx->pc = 0x1CADCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADCD0u;
    // 0x1cadcd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CADCD0u, 0x1CADCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADCD8u;
label_1cadcd8:
    // 0x1cadcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadcdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cadcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cadce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadce8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cadce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadcec: 0x872b446  j           func_1CAD118
    ctx->pc = 0x1CADCECu;
    ctx->pc = 0x1CADCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADCECu;
    // 0x1cadcf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    sub_01CAD118_0x1cad118(rdram, ctx, runtime); return;
    ctx->pc = 0x1CADCF4u;
    // 0x1cadcf4: 0x0  nop
    ctx->pc = 0x1cadcf4u;
    // NOP
    ctx->pc = 0x1cadcf8u;
}
