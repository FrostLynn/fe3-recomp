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

// Function: sub_01C52DE0
// Address: 0x1c52de0 - 0x1c52f18
void sub_01C52DE0_0x1c52de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52DE0_0x1c52de0");
#endif

    switch (ctx->pc) {
        case 0x1c52e08u: goto label_1c52e08;
        case 0x1c52e1cu: goto label_1c52e1c;
        case 0x1c52e2cu: goto label_1c52e2c;
        case 0x1c52e34u: goto label_1c52e34;
        case 0x1c52e38u: goto label_1c52e38;
        case 0x1c52e5cu: goto label_1c52e5c;
        case 0x1c52e64u: goto label_1c52e64;
        case 0x1c52e7cu: goto label_1c52e7c;
        case 0x1c52e8cu: goto label_1c52e8c;
        case 0x1c52e94u: goto label_1c52e94;
        case 0x1c52ef0u: goto label_1c52ef0;
        default: break;
    }

    ctx->pc = 0x1c52de0u;

    // 0x1c52de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c52de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c52de4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c52de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c52de8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c52de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c52dec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c52decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c52df0: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1c52df0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c52df4: 0x15e00016  bnez        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C52DF4u;
    {
        const bool branch_taken_0x1c52df4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C52DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52DF4u;
        // 0x1c52df8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52df4) {
            ctx->pc = 0x1C52E50u;
            goto label_1c52e50;
        }
    }
    ctx->pc = 0x1C52DFCu;
    // 0x1c52dfc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c52dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c52e00: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52E00u;
    SET_GPR_U32(ctx, 31, 0x1C52E08u);
    ctx->pc = 0x1C52E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E00u;
    // 0x1c52e04: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52E00u, 0x1C52E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E08u;
label_1c52e08:
    // 0x1c52e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c52e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e0c: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x1c52e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1c52e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c52e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e14: 0xc714112  jal         func_1C50448
    ctx->pc = 0x1C52E14u;
    SET_GPR_U32(ctx, 31, 0x1C52E1Cu);
    ctx->pc = 0x1C52E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E14u;
    // 0x1c52e18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50448u, 0x1C52E14u, 0x1C52E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E1Cu;
label_1c52e1c:
    // 0x1c52e1c: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x1c52e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x1c52e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e24: 0xc714110  jal         func_1C50440
    ctx->pc = 0x1C52E24u;
    SET_GPR_U32(ctx, 31, 0x1C52E2Cu);
    ctx->pc = 0x1C52E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E24u;
    // 0x1c52e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50440u, 0x1C52E24u, 0x1C52E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E2Cu;
label_1c52e2c:
    // 0x1c52e2c: 0xc714226  jal         func_1C50898
    ctx->pc = 0x1C52E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C52E34u);
    ctx->pc = 0x1C52E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E2Cu;
    // 0x1c52e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50898u, 0x1C52E2Cu, 0x1C52E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E34u;
label_1c52e34:
    // 0x1c52e34: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1c52e34u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c52e38:
    // 0x1c52e38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c52e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52e3c: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x1c52e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c52e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c52e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c52e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c52e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52E48u;
        // 0x1c52e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52E50u;
label_1c52e50:
    // 0x1c52e50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c52e50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c52e54: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C52E54u;
    SET_GPR_U32(ctx, 31, 0x1C52E5Cu);
    ctx->pc = 0x1C52E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E54u;
    // 0x1c52e58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C52E54u, 0x1C52E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E5Cu;
label_1c52e5c:
    // 0x1c52e5c: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C52E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C52E64u);
    ctx->pc = 0x1C52E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E5Cu;
    // 0x1c52e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C52E5Cu, 0x1C52E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E64u;
label_1c52e64:
    // 0x1c52e64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52e64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52e68: 0x144ffff3  bne         $v0, $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C52E68u;
    {
        const bool branch_taken_0x1c52e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C52E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52E68u;
        // 0x1c52e6c: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52e68) {
            ctx->pc = 0x1C52E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52e38;
        }
    }
    ctx->pc = 0x1C52E70u;
    // 0x1c52e70: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1c52e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c52e74: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52E74u;
    SET_GPR_U32(ctx, 31, 0x1C52E7Cu);
    ctx->pc = 0x1C52E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E74u;
    // 0x1c52e78: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52E74u, 0x1C52E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E7Cu;
label_1c52e7c:
    // 0x1c52e7c: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1c52e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1c52e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e84: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C52E84u;
    SET_GPR_U32(ctx, 31, 0x1C52E8Cu);
    ctx->pc = 0x1C52E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E84u;
    // 0x1c52e88: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C52E84u, 0x1C52E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E8Cu;
label_1c52e8c:
    // 0x1c52e8c: 0xc713e78  jal         func_1C4F9E0
    ctx->pc = 0x1C52E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C52E94u);
    ctx->pc = 0x1C52E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52E8Cu;
    // 0x1c52e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9E0u, 0x1C52E8Cu, 0x1C52E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52E94u;
label_1c52e94:
    // 0x1c52e94: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C52E94u;
    {
        const bool branch_taken_0x1c52e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52E94u;
        // 0x1c52e98: 0x340effff  ori         $t6, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52e94) {
            ctx->pc = 0x1C52E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52e38;
        }
    }
    ctx->pc = 0x1C52E9Cu;
    // 0x1c52e9c: 0x0  nop
    ctx->pc = 0x1c52e9cu;
    // NOP
    // 0x1c52ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52ea8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52eac: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x1c52eacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c52eb0: 0x8dee0058  lw          $t6, 0x58($t7)
    ctx->pc = 0x1c52eb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 88)));
    // 0x1c52eb4: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C52EB4u;
    {
        const bool branch_taken_0x1c52eb4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52EB4u;
        // 0x1c52eb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52eb4) {
            ctx->pc = 0x1C52ED4u;
            goto label_1c52ed4;
        }
    }
    ctx->pc = 0x1C52EBCu;
    // 0x1c52ebc: 0x91cf0020  lbu         $t7, 0x20($t6)
    ctx->pc = 0x1c52ebcu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x1c52ec0: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C52EC0u;
    {
        const bool branch_taken_0x1c52ec0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c52ec0) {
            ctx->pc = 0x1C52EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52EC0u;
            // 0x1c52ec4: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52ED8u;
            goto label_1c52ed8;
        }
    }
    ctx->pc = 0x1C52EC8u;
    // 0x1c52ec8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52ecc: 0xa1cf0020  sb          $t7, 0x20($t6)
    ctx->pc = 0x1c52eccu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 32), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c52ed0: 0xa1cf0021  sb          $t7, 0x21($t6)
    ctx->pc = 0x1c52ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 33), (uint8_t)GPR_U32(ctx, 15));
label_1c52ed4:
    // 0x1c52ed4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c52ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c52ed8:
    // 0x1c52ed8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1c52ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52edc: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1c52edcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c52ee0: 0x15a00008  bnez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C52EE0u;
    {
        const bool branch_taken_0x1c52ee0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C52EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52EE0u;
        // 0x1c52ee4: 0xa1ee003c  sb          $t6, 0x3C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 60), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52ee0) {
            ctx->pc = 0x1C52F04u;
            goto label_1c52f04;
        }
    }
    ctx->pc = 0x1C52EE8u;
    // 0x1c52ee8: 0xc714274  jal         func_1C509D0
    ctx->pc = 0x1C52EE8u;
    SET_GPR_U32(ctx, 31, 0x1C52EF0u);
    ctx->pc = 0x1C509D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C509D0u, 0x1C52EE8u, 0x1C52EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52EF0u;
label_1c52ef0:
    // 0x1c52ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52efc: 0x8713e78  j           func_1C4F9E0
    ctx->pc = 0x1C52EFCu;
    ctx->pc = 0x1C52F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52EFCu;
    // 0x1c52f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9E0u;
    sub_01C4F9E0_0x1c4f9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52F04u;
label_1c52f04:
    // 0x1c52f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52f08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52f10: 0x8714546  j           func_1C51518
    ctx->pc = 0x1C52F10u;
    ctx->pc = 0x1C52F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52F10u;
    // 0x1c52f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C51518u;
    sub_01C51518_0x1c51518(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52F18u;
}
