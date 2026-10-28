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

// Function: sub_01D5DA98
// Address: 0x1d5da98 - 0x1d5dbc0
void sub_01D5DA98_0x1d5da98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DA98_0x1d5da98");
#endif

    switch (ctx->pc) {
        case 0x1d5dac0u: goto label_1d5dac0;
        case 0x1d5dad4u: goto label_1d5dad4;
        case 0x1d5dad8u: goto label_1d5dad8;
        case 0x1d5daf8u: goto label_1d5daf8;
        case 0x1d5db08u: goto label_1d5db08;
        case 0x1d5db3cu: goto label_1d5db3c;
        case 0x1d5db74u: goto label_1d5db74;
        case 0x1d5db80u: goto label_1d5db80;
        case 0x1d5db90u: goto label_1d5db90;
        case 0x1d5dba8u: goto label_1d5dba8;
        default: break;
    }

    ctx->pc = 0x1d5da98u;

    // 0x1d5da98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5da9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5daa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5daa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5daa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5daa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5daac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d5dab0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5dab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dab4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5dab8: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DAB8u;
    SET_GPR_U32(ctx, 31, 0x1D5DAC0u);
    ctx->pc = 0x1D5DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DAB8u;
    // 0x1d5dabc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DAB8u, 0x1D5DAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DAC0u;
label_1d5dac0:
    // 0x1d5dac0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d5dac0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5dac4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5DAC4u;
    {
        const bool branch_taken_0x1d5dac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DAC4u;
        // 0x1d5dac8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dac4) {
            ctx->pc = 0x1D5DB10u;
            goto label_1d5db10;
        }
    }
    ctx->pc = 0x1D5DACCu;
    // 0x1d5dacc: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5DACCu;
    {
        const bool branch_taken_0x1d5dacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5dacc) {
            ctx->pc = 0x1D5DAF0u;
            goto label_1d5daf0;
        }
    }
    ctx->pc = 0x1D5DAD4u;
label_1d5dad4:
    // 0x1d5dad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5dad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5dad8:
    // 0x1d5dad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5dad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5dadc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5dadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5dae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5dae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5dae4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5dae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5dae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DAE8u;
        // 0x1d5daec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DAF0u;
label_1d5daf0:
    // 0x1d5daf0: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5DAF0u;
    SET_GPR_U32(ctx, 31, 0x1D5DAF8u);
    ctx->pc = 0x1D5DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DAF0u;
    // 0x1d5daf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5DAF0u, 0x1D5DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DAF8u;
label_1d5daf8:
    // 0x1d5daf8: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D5DAF8u;
    {
        const bool branch_taken_0x1d5daf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D5DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DAF8u;
        // 0x1d5dafc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5daf8) {
            ctx->pc = 0x1D5DAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dad4;
        }
    }
    ctx->pc = 0x1D5DB00u;
    // 0x1d5db00: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5DB00u;
    SET_GPR_U32(ctx, 31, 0x1D5DB08u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5DB00u, 0x1D5DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DB08u;
label_1d5db08:
    // 0x1d5db08: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D5DB08u;
    {
        const bool branch_taken_0x1d5db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DB08u;
        // 0x1d5db0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5db08) {
            ctx->pc = 0x1D5DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dad8;
        }
    }
    ctx->pc = 0x1D5DB10u;
label_1d5db10:
    // 0x1d5db10: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d5db10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d5db14: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D5DB14u;
    {
        const bool branch_taken_0x1d5db14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DB14u;
        // 0x1d5db18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5db14) {
            ctx->pc = 0x1D5DAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dad8;
        }
    }
    ctx->pc = 0x1D5DB1Cu;
    // 0x1d5db1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d5db1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5db24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5db28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5db2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db30: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5db30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5db34: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5DB34u;
    SET_GPR_U32(ctx, 31, 0x1D5DB3Cu);
    ctx->pc = 0x1D5DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DB34u;
    // 0x1d5db38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5DB34u, 0x1D5DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DB3Cu;
label_1d5db3c:
    // 0x1d5db3c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5db3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5db40: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D5DB40u;
    {
        const bool branch_taken_0x1d5db40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DB40u;
        // 0x1d5db44: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5db40) {
            ctx->pc = 0x1D5DAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dad4;
        }
    }
    ctx->pc = 0x1D5DB48u;
    // 0x1d5db48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5db4c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5db50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5db50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5db54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5db54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5db5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5db5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5db60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5db64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5db68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5db68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db6c: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5DB6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5DB74u);
    ctx->pc = 0x1D5DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DB6Cu;
    // 0x1d5db70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5DB6Cu, 0x1D5DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DB74u;
label_1d5db74:
    // 0x1d5db74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db78: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5DB78u;
    SET_GPR_U32(ctx, 31, 0x1D5DB80u);
    ctx->pc = 0x1D5DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DB78u;
    // 0x1d5db7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5DB78u, 0x1D5DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DB80u;
label_1d5db80:
    // 0x1d5db80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5db84: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5db88: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DB88u;
    SET_GPR_U32(ctx, 31, 0x1D5DB90u);
    ctx->pc = 0x1D5DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DB88u;
    // 0x1d5db8c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DB88u, 0x1D5DB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DB90u;
label_1d5db90:
    // 0x1d5db90: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5db90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5db94: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d5db94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d5db98: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d5db98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d5db9c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5dba0: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DBA0u;
    SET_GPR_U32(ctx, 31, 0x1D5DBA8u);
    ctx->pc = 0x1D5DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DBA0u;
    // 0x1d5dba4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DBA0u, 0x1D5DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DBA8u;
label_1d5dba8:
    // 0x1d5dba8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d5dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d5dbac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5dbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5dbb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5dbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DBB4u;
        // 0x1d5dbb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DBBCu;
    // 0x1d5dbbc: 0x0  nop
    ctx->pc = 0x1d5dbbcu;
    // NOP
    ctx->pc = 0x1d5dbc0u;
}
