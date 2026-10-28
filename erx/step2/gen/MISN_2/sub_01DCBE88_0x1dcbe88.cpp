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

// Function: sub_01DCBE88
// Address: 0x1dcbe88 - 0x1dcbf80
void sub_01DCBE88_0x1dcbe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBE88_0x1dcbe88");
#endif

    switch (ctx->pc) {
        case 0x1dcbed0u: goto label_1dcbed0;
        case 0x1dcbeecu: goto label_1dcbeec;
        case 0x1dcbf14u: goto label_1dcbf14;
        case 0x1dcbf74u: goto label_1dcbf74;
        default: break;
    }

    ctx->pc = 0x1dcbe88u;

    // 0x1dcbe88: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbe88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbe8c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1dcbe8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1dcbe90: 0x8c8a0760  lw          $t2, 0x760($a0)
    ctx->pc = 0x1dcbe90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1888)));
    // 0x1dcbe94: 0x8dec00f0  lw          $t4, 0xF0($t7)
    ctx->pc = 0x1dcbe94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
    // 0x1dcbe98: 0x14e7018  mult        $t6, $t2, $t6
    ctx->pc = 0x1dcbe98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1dcbe9c: 0x8d8f002c  lw          $t7, 0x2C($t4)
    ctx->pc = 0x1dcbe9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 44)));
    // 0x1dcbea0: 0x8ded001c  lw          $t5, 0x1C($t7)
    ctx->pc = 0x1dcbea0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1dcbea4: 0x8dad0048  lw          $t5, 0x48($t5)
    ctx->pc = 0x1dcbea4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1dcbea8: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1dcbea8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1dcbeac: 0x91cf0066  lbu         $t7, 0x66($t6)
    ctx->pc = 0x1dcbeacu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 102)));
    // 0x1dcbeb0: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DCBEB0u;
    {
        const bool branch_taken_0x1dcbeb0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBEB0u;
        // 0x1dcbeb4: 0x3c0f01dd  lui         $t7, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbeb0) {
            ctx->pc = 0x1DCBF38u;
            goto label_1dcbf38;
        }
    }
    ctx->pc = 0x1DCBEB8u;
    // 0x1dcbeb8: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dcbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbebc: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x1dcbebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbec0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dcbec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcbec4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcbec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcbec8: 0x24060390  addiu       $a2, $zero, 0x390
    ctx->pc = 0x1dcbec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1dcbecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dcbeccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dcbed0:
    // 0x1dcbed0: 0x8deeccb0  lw          $t6, -0x3350($t7)
    ctx->pc = 0x1dcbed0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954160)));
    // 0x1dcbed4: 0x11c5000f  beq         $t6, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCBED4u;
    {
        const bool branch_taken_0x1dcbed4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DCBED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBED4u;
        // 0x1dcbed8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbed4) {
            ctx->pc = 0x1DCBF14u;
            goto label_1dcbf14;
        }
    }
    ctx->pc = 0x1DCBEDCu;
    // 0x1dcbedc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1dcbedcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbee0: 0x246bccb0  addiu       $t3, $v1, -0x3350
    ctx->pc = 0x1dcbee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954160));
    // 0x1dcbee4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1dcbee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcbee8: 0x1ab7021  addu        $t6, $t5, $t3
    ctx->pc = 0x1dcbee8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_1dcbeec:
    // 0x1dcbeec: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1dcbeecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1dcbef0: 0x514f0013  beql        $t2, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DCBEF0u;
    {
        const bool branch_taken_0x1dcbef0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        if (branch_taken_0x1dcbef0) {
            ctx->pc = 0x1DCBEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCBEF0u;
            // 0x1dcbef4: 0x8dcf0004  lw          $t7, 0x4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCBF40u;
            goto label_1dcbf40;
        }
    }
    ctx->pc = 0x1DCBEF8u;
    // 0x1dcbef8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1dcbef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1dcbefc: 0xc7880  sll         $t7, $t4, 2
    ctx->pc = 0x1dcbefcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1dcbf00: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x1dcbf00u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbf04: 0x1eb7021  addu        $t6, $t7, $t3
    ctx->pc = 0x1dcbf04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1dcbf08: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1dcbf08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1dcbf0c: 0x15e9fff7  bne         $t7, $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DCBF0Cu;
    {
        const bool branch_taken_0x1dcbf0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 9));
        ctx->pc = 0x1DCBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF0Cu;
        // 0x1dcbf10: 0x1ab7021  addu        $t6, $t5, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbf0c) {
            ctx->pc = 0x1DCBEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbeec;
        }
    }
    ctx->pc = 0x1DCBF14u;
label_1dcbf14:
    // 0x1dcbf14: 0x15470004  bne         $t2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCBF14u;
    {
        const bool branch_taken_0x1dcbf14 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1DCBF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF14u;
        // 0x1dcbf18: 0x1467818  mult        $t7, $t2, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbf14) {
            ctx->pc = 0x1DCBF28u;
            goto label_1dcbf28;
        }
    }
    ctx->pc = 0x1DCBF1Cu;
    // 0x1dcbf1c: 0x8c4fccb0  lw          $t7, -0x3350($v0)
    ctx->pc = 0x1dcbf1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954160)));
    // 0x1dcbf20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF20u;
        // 0x1dcbf24: 0xac8f0760  sw          $t7, 0x760($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1888), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF28u;
label_1dcbf28:
    // 0x1dcbf28: 0x1e87821  addu        $t7, $t7, $t0
    ctx->pc = 0x1dcbf28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 8)));
    // 0x1dcbf2c: 0x91ee0066  lbu         $t6, 0x66($t7)
    ctx->pc = 0x1dcbf2cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 102)));
    // 0x1dcbf30: 0x11c0ffe7  beqz        $t6, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1DCBF30u;
    {
        const bool branch_taken_0x1dcbf30 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF30u;
        // 0x1dcbf34: 0x3c0f01dd  lui         $t7, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbf30) {
            ctx->pc = 0x1DCBED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbed0;
        }
    }
    ctx->pc = 0x1DCBF38u;
label_1dcbf38:
    // 0x1dcbf38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF40u;
label_1dcbf40:
    // 0x1dcbf40: 0xac8f0760  sw          $t7, 0x760($a0)
    ctx->pc = 0x1dcbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1888), GPR_U32(ctx, 15));
    // 0x1dcbf44: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DCBF44u;
    {
        const bool branch_taken_0x1dcbf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF44u;
        // 0x1dcbf48: 0x1e0502d  daddu       $t2, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbf44) {
            ctx->pc = 0x1DCBF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbf14;
        }
    }
    ctx->pc = 0x1DCBF4Cu;
    // 0x1dcbf4c: 0x0  nop
    ctx->pc = 0x1dcbf4cu;
    // NOP
    // 0x1dcbf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcbf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcbf54: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbf54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcbf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcbf5c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcbf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcbf60: 0x2484c9b0  addiu       $a0, $a0, -0x3650
    ctx->pc = 0x1dcbf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953392));
    // 0x1dcbf64: 0x95ee056e  lhu         $t6, 0x56E($t7)
    ctx->pc = 0x1dcbf64u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 1390)));
    // 0x1dcbf68: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x1dcbf68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x1dcbf6c: 0xc772eea  jal         func_1DCBBA8
    ctx->pc = 0x1DCBF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCBF74u);
    ctx->pc = 0x1DCBF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBF6Cu;
    // 0x1dcbf70: 0xa5ee056e  sh          $t6, 0x56E($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 1390), (uint16_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBBA8u, 0x1DCBF6Cu, 0x1DCBF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBF74u;
label_1dcbf74:
    // 0x1dcbf74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcbf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbf78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF78u;
        // 0x1dcbf7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF80u;
}
