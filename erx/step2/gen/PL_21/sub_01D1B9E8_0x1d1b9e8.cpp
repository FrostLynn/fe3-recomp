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

// Function: sub_01D1B9E8
// Address: 0x1d1b9e8 - 0x1d1bc98
void sub_01D1B9E8_0x1d1b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B9E8_0x1d1b9e8");
#endif

    switch (ctx->pc) {
        case 0x1d1ba10u: goto label_1d1ba10;
        case 0x1d1ba30u: goto label_1d1ba30;
        case 0x1d1ba34u: goto label_1d1ba34;
        case 0x1d1ba54u: goto label_1d1ba54;
        case 0x1d1ba7cu: goto label_1d1ba7c;
        case 0x1d1bab8u: goto label_1d1bab8;
        case 0x1d1bac8u: goto label_1d1bac8;
        case 0x1d1bae0u: goto label_1d1bae0;
        case 0x1d1baf0u: goto label_1d1baf0;
        case 0x1d1bb08u: goto label_1d1bb08;
        case 0x1d1bb1cu: goto label_1d1bb1c;
        case 0x1d1bb50u: goto label_1d1bb50;
        case 0x1d1bb5cu: goto label_1d1bb5c;
        case 0x1d1bb60u: goto label_1d1bb60;
        case 0x1d1bb9cu: goto label_1d1bb9c;
        case 0x1d1bba4u: goto label_1d1bba4;
        case 0x1d1bbacu: goto label_1d1bbac;
        case 0x1d1bbb8u: goto label_1d1bbb8;
        case 0x1d1bbc8u: goto label_1d1bbc8;
        case 0x1d1bbe8u: goto label_1d1bbe8;
        case 0x1d1bc2cu: goto label_1d1bc2c;
        case 0x1d1bc74u: goto label_1d1bc74;
        default: break;
    }

    ctx->pc = 0x1d1b9e8u;

    // 0x1d1b9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b9f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1b9f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1b9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b9fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1b9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1ba00: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d1ba00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ba04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1ba08: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BA08u;
    SET_GPR_U32(ctx, 31, 0x1D1BA10u);
    ctx->pc = 0x1D1BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BA08u;
    // 0x1d1ba0c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BA08u, 0x1D1BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA10u;
label_1d1ba10:
    // 0x1d1ba10: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1d1ba10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d1ba14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1ba14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ba18: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1d1ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1d1ba1c: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1d1ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1d1ba20: 0x15f2000a  bne         $t7, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1D1BA20u;
    {
        const bool branch_taken_0x1d1ba20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 18));
        ctx->pc = 0x1D1BA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA20u;
        // 0x1d1ba24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba20) {
            ctx->pc = 0x1D1BA4Cu;
            goto label_1d1ba4c;
        }
    }
    ctx->pc = 0x1D1BA28u;
    // 0x1d1ba28: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D1BA28u;
    SET_GPR_U32(ctx, 31, 0x1D1BA30u);
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D1BA28u, 0x1D1BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA30u;
label_1d1ba30:
    // 0x1d1ba30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1ba34:
    // 0x1d1ba34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ba34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ba38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1ba38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ba3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1ba3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ba40: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA44u;
        // 0x1d1ba48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BA4Cu;
label_1d1ba4c:
    // 0x1d1ba4c: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1BA4Cu;
    SET_GPR_U32(ctx, 31, 0x1D1BA54u);
    ctx->pc = 0x1D1BA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BA4Cu;
    // 0x1d1ba50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1BA4Cu, 0x1D1BA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA54u;
label_1d1ba54:
    // 0x1d1ba54: 0x10520007  beq         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1BA54u;
    {
        const bool branch_taken_0x1d1ba54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D1BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA54u;
        // 0x1d1ba58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba54) {
            ctx->pc = 0x1D1BA74u;
            goto label_1d1ba74;
        }
    }
    ctx->pc = 0x1D1BA5Cu;
    // 0x1d1ba5c: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1d1ba5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1d1ba60: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1d1ba60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d1ba64: 0x8dee4834  lw          $t6, 0x4834($t7)
    ctx->pc = 0x1d1ba64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18484)));
    // 0x1d1ba68: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x1d1ba68u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1d1ba6c: 0x55c00005  bnel        $t6, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1BA6Cu;
    {
        const bool branch_taken_0x1d1ba6c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ba6c) {
            ctx->pc = 0x1D1BA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1BA6Cu;
            // 0x1d1ba70: 0x8e0f0000  lw          $t7, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BA84u;
            goto label_1d1ba84;
        }
    }
    ctx->pc = 0x1D1BA74u;
label_1d1ba74:
    // 0x1d1ba74: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1BA74u;
    SET_GPR_U32(ctx, 31, 0x1D1BA7Cu);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1BA74u, 0x1D1BA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA7Cu;
label_1d1ba7c:
    // 0x1d1ba7c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D1BA7Cu;
    {
        const bool branch_taken_0x1d1ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA7Cu;
        // 0x1d1ba80: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba7c) {
            ctx->pc = 0x1D1BA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ba34;
        }
    }
    ctx->pc = 0x1D1BA84u;
label_1d1ba84:
    // 0x1d1ba84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1ba84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ba88: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D1BA88u;
    {
        const bool branch_taken_0x1d1ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BA88u;
        // 0x1d1ba8c: 0xa1f2039c  sb          $s2, 0x39C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ba88) {
            ctx->pc = 0x1D1BA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ba34;
        }
    }
    ctx->pc = 0x1D1BA90u;
    // 0x1d1ba90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d1ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d1ba94: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1d1ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1d1ba98: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1d1ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1d1ba9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d1ba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d1baa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1baa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1baa4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1d1baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1d1baa8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1d1baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1d1baac: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1baacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1bab0: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BAB0u;
    SET_GPR_U32(ctx, 31, 0x1D1BAB8u);
    ctx->pc = 0x1D1BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BAB0u;
    // 0x1d1bab4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BAB0u, 0x1D1BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BAB8u;
label_1d1bab8:
    // 0x1d1bab8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d1bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1babc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d1babcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bac0: 0xc7466b8  jal         func_1D19AE0
    ctx->pc = 0x1D1BAC0u;
    SET_GPR_U32(ctx, 31, 0x1D1BAC8u);
    ctx->pc = 0x1D1BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BAC0u;
    // 0x1d1bac4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AE0u, 0x1D1BAC0u, 0x1D1BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BAC8u;
label_1d1bac8:
    // 0x1d1bac8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d1bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1bacc: 0x8c8f0058  lw          $t7, 0x58($a0)
    ctx->pc = 0x1d1baccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1d1bad0: 0x144f0005  bne         $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1BAD0u;
    {
        const bool branch_taken_0x1d1bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BAD0u;
        // 0x1d1bad4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bad0) {
            ctx->pc = 0x1D1BAE8u;
            goto label_1d1bae8;
        }
    }
    ctx->pc = 0x1D1BAD8u;
    // 0x1d1bad8: 0xc7466ba  jal         func_1D19AE8
    ctx->pc = 0x1D1BAD8u;
    SET_GPR_U32(ctx, 31, 0x1D1BAE0u);
    ctx->pc = 0x1D19AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AE8u, 0x1D1BAD8u, 0x1D1BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BAE0u;
label_1d1bae0:
    // 0x1d1bae0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d1bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d1bae4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1d1bae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d1bae8:
    // 0x1d1bae8: 0xc74641c  jal         func_1D19070
    ctx->pc = 0x1D1BAE8u;
    SET_GPR_U32(ctx, 31, 0x1D1BAF0u);
    ctx->pc = 0x1D1BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BAE8u;
    // 0x1d1baec: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19070u, 0x1D1BAE8u, 0x1D1BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BAF0u;
label_1d1baf0:
    // 0x1d1baf0: 0x8e6f024c  lw          $t7, 0x24C($s3)
    ctx->pc = 0x1d1baf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x1d1baf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d1baf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1baf8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d1baf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bafc: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1d1bafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d1bb00: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1BB00u;
    SET_GPR_U32(ctx, 31, 0x1D1BB08u);
    ctx->pc = 0x1D1BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BB00u;
    // 0x1d1bb04: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1BB00u, 0x1D1BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB08u;
label_1d1bb08:
    // 0x1d1bb08: 0x8e4f024c  lw          $t7, 0x24C($s2)
    ctx->pc = 0x1d1bb08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 588)));
    // 0x1d1bb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1bb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb10: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1d1bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d1bb14: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1BB14u;
    SET_GPR_U32(ctx, 31, 0x1D1BB1Cu);
    ctx->pc = 0x1D1BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BB14u;
    // 0x1d1bb18: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1BB14u, 0x1D1BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB1Cu;
label_1d1bb1c:
    // 0x1d1bb1c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1bb1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bb20: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1d1bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1d1bb24: 0x25ef6b00  addiu       $t7, $t7, 0x6B00
    ctx->pc = 0x1d1bb24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27392));
    // 0x1d1bb28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d1bb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb2c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d1bb2cu;
    { uint32_t bits = FAST_READ32(0x1D26B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bb30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d1bb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb34: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1d1bb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1bb38: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x1d1bb38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1d1bb3c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d1bb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d1bb40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1d1bb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d1bb44: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1d1bb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d1bb48: 0xc7466bc  jal         func_1D19AF0
    ctx->pc = 0x1D1BB48u;
    SET_GPR_U32(ctx, 31, 0x1D1BB50u);
    ctx->pc = 0x1D1BB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BB48u;
    // 0x1d1bb4c: 0x8de4002c  lw          $a0, 0x2C($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AF0u, 0x1D1BB48u, 0x1D1BB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB50u;
label_1d1bb50:
    // 0x1d1bb50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1BB50u;
    {
        const bool branch_taken_0x1d1bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB50u;
        // 0x1d1bb54: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bb50) {
            ctx->pc = 0x1D1BB78u;
            goto label_1d1bb78;
        }
    }
    ctx->pc = 0x1D1BB58u;
    // 0x1d1bb58: 0xae2f0024  sw          $t7, 0x24($s1)
    ctx->pc = 0x1d1bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
label_1d1bb5c:
    // 0x1d1bb5c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1d1bb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1bb60:
    // 0x1d1bb60: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1d1bb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d1bb64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1d1bb64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1bb68: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1d1bb68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d1bb6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1bb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1BB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BB70u;
        // 0x1d1bb74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1BB78u;
label_1d1bb78:
    // 0x1d1bb78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1bb78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1bb7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1bb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb80: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1d1bb80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1bb84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1bb84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb88: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1bb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1bb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bb94: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1BB94u;
    SET_GPR_U32(ctx, 31, 0x1D1BB9Cu);
    ctx->pc = 0x1D1BB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BB94u;
    // 0x1d1bb98: 0x265003f0  addiu       $s0, $s2, 0x3F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1BB94u, 0x1D1BB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BB9Cu;
label_1d1bb9c:
    // 0x1d1bb9c: 0xc7466be  jal         func_1D19AF8
    ctx->pc = 0x1D1BB9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1BBA4u);
    ctx->pc = 0x1D1BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BB9Cu;
    // 0x1d1bba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AF8u, 0x1D1BB9Cu, 0x1D1BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BBA4u;
label_1d1bba4:
    // 0x1d1bba4: 0xc7466c0  jal         func_1D19B00
    ctx->pc = 0x1D1BBA4u;
    SET_GPR_U32(ctx, 31, 0x1D1BBACu);
    ctx->pc = 0x1D1BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BBA4u;
    // 0x1d1bba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B00u, 0x1D1BBA4u, 0x1D1BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BBACu;
label_1d1bbac:
    // 0x1d1bbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bbb0: 0xc7466c2  jal         func_1D19B08
    ctx->pc = 0x1D1BBB0u;
    SET_GPR_U32(ctx, 31, 0x1D1BBB8u);
    ctx->pc = 0x1D1BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BBB0u;
    // 0x1d1bbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B08u, 0x1D1BBB0u, 0x1D1BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BBB8u;
label_1d1bbb8:
    // 0x1d1bbb8: 0x26440390  addiu       $a0, $s2, 0x390
    ctx->pc = 0x1d1bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    // 0x1d1bbbc: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x1d1bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d1bbc0: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D1BBC0u;
    SET_GPR_U32(ctx, 31, 0x1D1BBC8u);
    ctx->pc = 0x1D1BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BBC0u;
    // 0x1d1bbc4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D1BBC0u, 0x1D1BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BBC8u;
label_1d1bbc8:
    // 0x1d1bbc8: 0x240f03e7  addiu       $t7, $zero, 0x3E7
    ctx->pc = 0x1d1bbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1d1bbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bbd0: 0xae2f0018  sw          $t7, 0x18($s1)
    ctx->pc = 0x1d1bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
    // 0x1d1bbd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bbd8: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1bbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bbdc: 0x25ef6b04  addiu       $t7, $t7, 0x6B04
    ctx->pc = 0x1d1bbdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27396));
    // 0x1d1bbe0: 0xc7466b6  jal         func_1D19AD8
    ctx->pc = 0x1D1BBE0u;
    SET_GPR_U32(ctx, 31, 0x1D1BBE8u);
    ctx->pc = 0x1D1BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BBE0u;
    // 0x1d1bbe4: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AD8u, 0x1D1BBE0u, 0x1D1BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BBE8u;
label_1d1bbe8:
    // 0x1d1bbe8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1d1bbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1bbec: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d1bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bbf0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d1bbf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d1bbf4: 0x4503ffda  bc1tl       . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D1BBF4u;
    {
        const bool branch_taken_0x1d1bbf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d1bbf4) {
            ctx->pc = 0x1D1BBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1BBF4u;
            // 0x1d1bbf8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bb60;
        }
    }
    ctx->pc = 0x1D1BBFCu;
    // 0x1d1bbfc: 0x8e6f03a4  lw          $t7, 0x3A4($s3)
    ctx->pc = 0x1d1bbfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 932)));
    // 0x1d1bc00: 0x25e2fea7  addiu       $v0, $t7, -0x159
    ctx->pc = 0x1d1bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966951));
    // 0x1d1bc04: 0x2c4e0006  sltiu       $t6, $v0, 0x6
    ctx->pc = 0x1d1bc04u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d1bc08: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D1BC08u;
    {
        const bool branch_taken_0x1d1bc08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC08u;
        // 0x1d1bc0c: 0x3c0e01d2  lui         $t6, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc08) {
            ctx->pc = 0x1D1BC5Cu;
            goto label_1d1bc5c;
        }
    }
    ctx->pc = 0x1D1BC10u;
    // 0x1d1bc10: 0x27880  sll         $t7, $v0, 2
    ctx->pc = 0x1d1bc10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d1bc14: 0x25cece3c  addiu       $t6, $t6, -0x31C4
    ctx->pc = 0x1d1bc14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954556));
    // 0x1d1bc18: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1bc18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1bc1c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d1bc1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1bc20: 0x1a00008  jr          $t5
    ctx->pc = 0x1D1BC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1BC28u: goto label_1d1bc28;
            case 0x1D1BC34u: goto label_1d1bc34;
            case 0x1D1BC3Cu: goto label_1d1bc3c;
            case 0x1D1BC44u: goto label_1d1bc44;
            case 0x1D1BC4Cu: goto label_1d1bc4c;
            case 0x1D1BC54u: goto label_1d1bc54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1BC20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1BC28u;
label_1d1bc28:
    // 0x1d1bc28: 0x240f0041  addiu       $t7, $zero, 0x41
    ctx->pc = 0x1d1bc28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1d1bc2c:
    // 0x1d1bc2c: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x1D1BC2Cu;
    {
        const bool branch_taken_0x1d1bc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC2Cu;
        // 0x1d1bc30: 0xae2f0018  sw          $t7, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc2c) {
            ctx->pc = 0x1D1BB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bb5c;
        }
    }
    ctx->pc = 0x1D1BC34u;
label_1d1bc34:
    // 0x1d1bc34: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1D1BC34u;
    {
        const bool branch_taken_0x1d1bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC34u;
        // 0x1d1bc38: 0x240f0044  addiu       $t7, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc34) {
            ctx->pc = 0x1D1BC2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bc2c;
        }
    }
    ctx->pc = 0x1D1BC3Cu;
label_1d1bc3c:
    // 0x1d1bc3c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1BC3Cu;
    {
        const bool branch_taken_0x1d1bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC3Cu;
        // 0x1d1bc40: 0x240f0048  addiu       $t7, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc3c) {
            ctx->pc = 0x1D1BC2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bc2c;
        }
    }
    ctx->pc = 0x1D1BC44u;
label_1d1bc44:
    // 0x1d1bc44: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D1BC44u;
    {
        const bool branch_taken_0x1d1bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC44u;
        // 0x1d1bc48: 0x240f0038  addiu       $t7, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc44) {
            ctx->pc = 0x1D1BC2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bc2c;
        }
    }
    ctx->pc = 0x1D1BC4Cu;
label_1d1bc4c:
    // 0x1d1bc4c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1BC4Cu;
    {
        const bool branch_taken_0x1d1bc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC4Cu;
        // 0x1d1bc50: 0x240f003a  addiu       $t7, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc4c) {
            ctx->pc = 0x1D1BC2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bc2c;
        }
    }
    ctx->pc = 0x1D1BC54u;
label_1d1bc54:
    // 0x1d1bc54: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1BC54u;
    {
        const bool branch_taken_0x1d1bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC54u;
        // 0x1d1bc58: 0x240f0046  addiu       $t7, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc54) {
            ctx->pc = 0x1D1BC2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bc2c;
        }
    }
    ctx->pc = 0x1D1BC5Cu;
label_1d1bc5c:
    // 0x1d1bc5c: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x1d1bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bc60: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x1d1bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bc64: 0x248490d0  addiu       $a0, $a0, -0x6F30
    ctx->pc = 0x1d1bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938832));
    // 0x1d1bc68: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x1d1bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
    // 0x1d1bc6c: 0xc746436  jal         func_1D190D8
    ctx->pc = 0x1D1BC6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1BC74u);
    ctx->pc = 0x1D1BC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BC6Cu;
    // 0x1d1bc70: 0x2406033a  addiu       $a2, $zero, 0x33A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 826));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190D8u, 0x1D1BC6Cu, 0x1D1BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BC74u;
label_1d1bc74:
    // 0x1d1bc74: 0x1000ffba  b           . + 4 + (-0x46 << 2)
    ctx->pc = 0x1D1BC74u;
    {
        const bool branch_taken_0x1d1bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC74u;
        // 0x1d1bc78: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc74) {
            ctx->pc = 0x1D1BB60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1bb60;
        }
    }
    ctx->pc = 0x1D1BC7Cu;
    // 0x1d1bc7c: 0x0  nop
    ctx->pc = 0x1d1bc7cu;
    // NOP
    // 0x1d1bc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1bc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1bc84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1bc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1bc88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1bc8c: 0x87466be  j           func_1D19AF8
    ctx->pc = 0x1D1BC8Cu;
    ctx->pc = 0x1D1BC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BC8Cu;
    // 0x1d1bc90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AF8u;
    sub_01D19AF8_0x1d19af8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1BC94u;
    // 0x1d1bc94: 0x0  nop
    ctx->pc = 0x1d1bc94u;
    // NOP
    ctx->pc = 0x1d1bc98u;
}
