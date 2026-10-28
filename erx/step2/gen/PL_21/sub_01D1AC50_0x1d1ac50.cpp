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

// Function: sub_01D1AC50
// Address: 0x1d1ac50 - 0x1d1adc0
void sub_01D1AC50_0x1d1ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1AC50_0x1d1ac50");
#endif

    switch (ctx->pc) {
        case 0x1d1ac6cu: goto label_1d1ac6c;
        case 0x1d1ac74u: goto label_1d1ac74;
        case 0x1d1ac88u: goto label_1d1ac88;
        case 0x1d1ac8cu: goto label_1d1ac8c;
        case 0x1d1acc8u: goto label_1d1acc8;
        case 0x1d1ad00u: goto label_1d1ad00;
        case 0x1d1ad14u: goto label_1d1ad14;
        case 0x1d1ad28u: goto label_1d1ad28;
        case 0x1d1ad34u: goto label_1d1ad34;
        case 0x1d1ad40u: goto label_1d1ad40;
        case 0x1d1ad54u: goto label_1d1ad54;
        case 0x1d1ad64u: goto label_1d1ad64;
        default: break;
    }

    ctx->pc = 0x1d1ac50u;

    // 0x1d1ac50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1ac54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1ac54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1ac58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1ac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1ac5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ac5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ac60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1ac64: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1AC64u;
    SET_GPR_U32(ctx, 31, 0x1D1AC6Cu);
    ctx->pc = 0x1D1AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC64u;
    // 0x1d1ac68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1AC64u, 0x1D1AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC6Cu;
label_1d1ac6c:
    // 0x1d1ac6c: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1AC6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AC74u);
    ctx->pc = 0x1D1AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC6Cu;
    // 0x1d1ac70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1AC6Cu, 0x1D1AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC74u;
label_1d1ac74:
    // 0x1d1ac74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1ac74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ac78: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1AC78u;
    {
        const bool branch_taken_0x1d1ac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC78u;
        // 0x1d1ac7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ac78) {
            ctx->pc = 0x1D1AC9Cu;
            goto label_1d1ac9c;
        }
    }
    ctx->pc = 0x1D1AC80u;
    // 0x1d1ac80: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1AC80u;
    SET_GPR_U32(ctx, 31, 0x1D1AC88u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1AC80u, 0x1D1AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC88u;
label_1d1ac88:
    // 0x1d1ac88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1ac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1ac8c:
    // 0x1d1ac8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ac8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ac90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC94u;
        // 0x1d1ac98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AC9Cu;
label_1d1ac9c:
    // 0x1d1ac9c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1AC9Cu;
    {
        const bool branch_taken_0x1d1ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC9Cu;
        // 0x1d1aca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ac9c) {
            ctx->pc = 0x1D1AC8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ac8c;
        }
    }
    ctx->pc = 0x1D1ACA4u;
    // 0x1d1aca4: 0x0  nop
    ctx->pc = 0x1d1aca4u;
    // NOP
    // 0x1d1aca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1acac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1acb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1acb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1acb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1acb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1acbc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1acc0: 0xc74641c  jal         func_1D19070
    ctx->pc = 0x1D1ACC0u;
    SET_GPR_U32(ctx, 31, 0x1D1ACC8u);
    ctx->pc = 0x1D1ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ACC0u;
    // 0x1d1acc4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19070u, 0x1D1ACC0u, 0x1D1ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ACC8u;
label_1d1acc8:
    // 0x1d1acc8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1accc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1acd0: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d1acd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d1acd4: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1d1acd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1acd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1acdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ace0: 0x11cf000c  beq         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1ACE0u;
    {
        const bool branch_taken_0x1d1ace0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D1ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ACE0u;
        // 0x1d1ace4: 0x2406016a  addiu       $a2, $zero, 0x16A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ace0) {
            ctx->pc = 0x1D1AD14u;
            goto label_1d1ad14;
        }
    }
    ctx->pc = 0x1D1ACE8u;
    // 0x1d1ace8: 0x29cf001a  slti        $t7, $t6, 0x1A
    ctx->pc = 0x1d1ace8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1d1acec: 0x11e00024  beqz        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D1ACECu;
    {
        const bool branch_taken_0x1d1acec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ACECu;
        // 0x1d1acf0: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1acec) {
            ctx->pc = 0x1D1AD80u;
            goto label_1d1ad80;
        }
    }
    ctx->pc = 0x1D1ACF4u;
    // 0x1d1acf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1acf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1acf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1acfc: 0x240600ea  addiu       $a2, $zero, 0xEA
    ctx->pc = 0x1d1acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
label_1d1ad00:
    // 0x1d1ad00: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1AD00u;
    {
        const bool branch_taken_0x1d1ad00 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D1AD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AD00u;
        // 0x1d1ad04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ad00) {
            ctx->pc = 0x1D1AD18u;
            goto label_1d1ad18;
        }
    }
    ctx->pc = 0x1D1AD08u;
    // 0x1d1ad08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d1ad14:
    // 0x1d1ad14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1ad14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1ad18:
    // 0x1d1ad18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1ad18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad1c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d1ad1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1ad20: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1AD20u;
    SET_GPR_U32(ctx, 31, 0x1D1AD28u);
    ctx->pc = 0x1D1AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD20u;
    // 0x1d1ad24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1AD20u, 0x1D1AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AD28u;
label_1d1ad28:
    // 0x1d1ad28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad2c: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1AD2Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AD34u);
    ctx->pc = 0x1D1AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD2Cu;
    // 0x1d1ad30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1AD2Cu, 0x1D1AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AD34u;
label_1d1ad34:
    // 0x1d1ad34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1ad38: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1AD38u;
    SET_GPR_U32(ctx, 31, 0x1D1AD40u);
    ctx->pc = 0x1D1AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD38u;
    // 0x1d1ad3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1AD38u, 0x1D1AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AD40u;
label_1d1ad40:
    // 0x1d1ad40: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d1ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d1ad44: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d1ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d1ad48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d1ad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1ad4c: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D1AD4Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AD54u);
    ctx->pc = 0x1D1AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD4Cu;
    // 0x1d1ad50: 0x240500e6  addiu       $a1, $zero, 0xE6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D1AD4Cu, 0x1D1AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AD54u;
label_1d1ad54:
    // 0x1d1ad54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1ad54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1ad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad5c: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1AD5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AD64u);
    ctx->pc = 0x1D1AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD5Cu;
    // 0x1d1ad60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1AD5Cu, 0x1D1AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AD64u;
label_1d1ad64:
    // 0x1d1ad64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1ad68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ad6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ad6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ad70: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1d1ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1d1ad74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1ad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ad78: 0x8746422  j           func_1D19088
    ctx->pc = 0x1D1AD78u;
    ctx->pc = 0x1D1AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD78u;
    // 0x1d1ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19088u;
    sub_01D19088_0x1d19088(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1AD80u;
label_1d1ad80:
    // 0x1d1ad80: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1d1ad80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d1ad84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ad88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad8c: 0x11cfffe1  beq         $t6, $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D1AD8Cu;
    {
        const bool branch_taken_0x1d1ad8c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D1AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AD8Cu;
        // 0x1d1ad90: 0x24060174  addiu       $a2, $zero, 0x174 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ad8c) {
            ctx->pc = 0x1D1AD14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ad14;
        }
    }
    ctx->pc = 0x1D1AD94u;
    // 0x1d1ad94: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1d1ad94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d1ad98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ad9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ada0: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x1D1ADA0u;
    {
        const bool branch_taken_0x1d1ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ADA0u;
        // 0x1d1ada4: 0x2406019f  addiu       $a2, $zero, 0x19F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ada0) {
            ctx->pc = 0x1D1AD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ad00;
        }
    }
    ctx->pc = 0x1D1ADA8u;
    // 0x1d1ada8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1adac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1adb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1adb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1adb4: 0x8746424  j           func_1D19090
    ctx->pc = 0x1D1ADB4u;
    ctx->pc = 0x1D1ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ADB4u;
    // 0x1d1adb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19090u;
    sub_01D19090_0x1d19090(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1ADBCu;
    // 0x1d1adbc: 0x0  nop
    ctx->pc = 0x1d1adbcu;
    // NOP
    ctx->pc = 0x1d1adc0u;
}
