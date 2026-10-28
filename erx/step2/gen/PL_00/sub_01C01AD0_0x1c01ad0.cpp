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

// Function: sub_01C01AD0
// Address: 0x1c01ad0 - 0x1c01ba8
void sub_01C01AD0_0x1c01ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01AD0_0x1c01ad0");
#endif

    switch (ctx->pc) {
        case 0x1c01ae4u: goto label_1c01ae4;
        case 0x1c01af4u: goto label_1c01af4;
        case 0x1c01af8u: goto label_1c01af8;
        case 0x1c01b2cu: goto label_1c01b2c;
        case 0x1c01b58u: goto label_1c01b58;
        case 0x1c01b80u: goto label_1c01b80;
        default: break;
    }

    ctx->pc = 0x1c01ad0u;

    // 0x1c01ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01ad8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c01ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c01adc: 0xc7002d4  jal         func_1C00B50
    ctx->pc = 0x1C01ADCu;
    SET_GPR_U32(ctx, 31, 0x1C01AE4u);
    ctx->pc = 0x1C01AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01ADCu;
    // 0x1c01ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B50u, 0x1C01ADCu, 0x1C01AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01AE4u;
label_1c01ae4:
    // 0x1c01ae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C01AE4u;
    {
        const bool branch_taken_0x1c01ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01AE4u;
        // 0x1c01ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01ae4) {
            ctx->pc = 0x1C01B08u;
            goto label_1c01b08;
        }
    }
    ctx->pc = 0x1C01AECu;
    // 0x1c01aec: 0xc70002e  jal         func_1C000B8
    ctx->pc = 0x1C01AECu;
    SET_GPR_U32(ctx, 31, 0x1C01AF4u);
    ctx->pc = 0x1C000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000B8u, 0x1C01AECu, 0x1C01AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01AF4u;
label_1c01af4:
    // 0x1c01af4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c01af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c01af8:
    // 0x1c01af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B00u;
        // 0x1c01b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01B08u;
label_1c01b08:
    // 0x1c01b08: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C01B08u;
    {
        const bool branch_taken_0x1c01b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B08u;
        // 0x1c01b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b08) {
            ctx->pc = 0x1C01AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01af8;
        }
    }
    ctx->pc = 0x1C01B10u;
    // 0x1c01b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01b18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c01b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c01b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c01b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b20: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c01b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c01b24: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C01B24u;
    SET_GPR_U32(ctx, 31, 0x1C01B2Cu);
    ctx->pc = 0x1C01B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01B24u;
    // 0x1c01b28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C01B24u, 0x1C01B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01B2Cu;
label_1c01b2c:
    // 0x1c01b2c: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c01b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c01b30: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c01b30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c01b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b3c: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C01B3Cu;
    {
        const bool branch_taken_0x1c01b3c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C01B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B3Cu;
        // 0x1c01b40: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b3c) {
            ctx->pc = 0x1C01B6Cu;
            goto label_1c01b6c;
        }
    }
    ctx->pc = 0x1C01B44u;
    // 0x1c01b44: 0x29cf001b  slti        $t7, $t6, 0x1B
    ctx->pc = 0x1c01b44u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c01b48: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C01B48u;
    {
        const bool branch_taken_0x1c01b48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B48u;
        // 0x1c01b4c: 0x240f001f  addiu       $t7, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b48) {
            ctx->pc = 0x1C01BA0u;
            goto label_1c01ba0;
        }
    }
    ctx->pc = 0x1C01B50u;
    // 0x1c01b50: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x1c01b50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c01b54: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1c01b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1c01b58:
    // 0x1c01b58: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C01B58u;
    {
        const bool branch_taken_0x1c01b58 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C01B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B58u;
        // 0x1c01b5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b58) {
            ctx->pc = 0x1C01B70u;
            goto label_1c01b70;
        }
    }
    ctx->pc = 0x1C01B60u;
    // 0x1c01b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c01b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c01b6c:
    // 0x1c01b6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c01b70:
    // 0x1c01b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c01b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b74: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c01b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01b78: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C01B78u;
    SET_GPR_U32(ctx, 31, 0x1C01B80u);
    ctx->pc = 0x1C01B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01B78u;
    // 0x1c01b7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C01B78u, 0x1C01B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01B80u;
label_1c01b80:
    // 0x1c01b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01b8c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1c01b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c01b90: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1c01b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1c01b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c01b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01b98: 0x87002ea  j           func_1C00BA8
    ctx->pc = 0x1C01B98u;
    ctx->pc = 0x1C01B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01B98u;
    // 0x1c01b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00BA8u;
    sub_01C00BA8_0x1c00ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01BA0u;
label_1c01ba0:
    // 0x1c01ba0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C01BA0u;
    {
        const bool branch_taken_0x1c01ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01BA0u;
        // 0x1c01ba4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01ba0) {
            ctx->pc = 0x1C01B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01b58;
        }
    }
    ctx->pc = 0x1C01BA8u;
}
