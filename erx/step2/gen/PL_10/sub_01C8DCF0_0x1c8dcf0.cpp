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

// Function: sub_01C8DCF0
// Address: 0x1c8dcf0 - 0x1c8de18
void sub_01C8DCF0_0x1c8dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DCF0_0x1c8dcf0");
#endif

    switch (ctx->pc) {
        case 0x1c8dd18u: goto label_1c8dd18;
        case 0x1c8dd2cu: goto label_1c8dd2c;
        case 0x1c8dd30u: goto label_1c8dd30;
        case 0x1c8dd50u: goto label_1c8dd50;
        case 0x1c8dd60u: goto label_1c8dd60;
        case 0x1c8dd94u: goto label_1c8dd94;
        case 0x1c8ddccu: goto label_1c8ddcc;
        case 0x1c8ddd8u: goto label_1c8ddd8;
        case 0x1c8dde8u: goto label_1c8dde8;
        case 0x1c8de00u: goto label_1c8de00;
        default: break;
    }

    ctx->pc = 0x1c8dcf0u;

    // 0x1c8dcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8dcf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8dcf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8dcfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8dd00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c8dd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c8dd08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8dd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8dd10: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DD10u;
    SET_GPR_U32(ctx, 31, 0x1C8DD18u);
    ctx->pc = 0x1C8DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DD10u;
    // 0x1c8dd14: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DD10u, 0x1C8DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DD18u;
label_1c8dd18:
    // 0x1c8dd18: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c8dd18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c8dd1c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8DD1Cu;
    {
        const bool branch_taken_0x1c8dd1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD1Cu;
        // 0x1c8dd20: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd1c) {
            ctx->pc = 0x1C8DD68u;
            goto label_1c8dd68;
        }
    }
    ctx->pc = 0x1C8DD24u;
    // 0x1c8dd24: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DD24u;
    {
        const bool branch_taken_0x1c8dd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c8dd24) {
            ctx->pc = 0x1C8DD48u;
            goto label_1c8dd48;
        }
    }
    ctx->pc = 0x1C8DD2Cu;
label_1c8dd2c:
    // 0x1c8dd2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8dd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8dd30:
    // 0x1c8dd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8dd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8dd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8dd38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8dd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8dd3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8dd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD40u;
        // 0x1c8dd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DD48u;
label_1c8dd48:
    // 0x1c8dd48: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8DD48u;
    SET_GPR_U32(ctx, 31, 0x1C8DD50u);
    ctx->pc = 0x1C8DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DD48u;
    // 0x1c8dd4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8DD48u, 0x1C8DD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DD50u;
label_1c8dd50:
    // 0x1c8dd50: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C8DD50u;
    {
        const bool branch_taken_0x1c8dd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C8DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD50u;
        // 0x1c8dd54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd50) {
            ctx->pc = 0x1C8DD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8dd2c;
        }
    }
    ctx->pc = 0x1C8DD58u;
    // 0x1c8dd58: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8DD58u;
    SET_GPR_U32(ctx, 31, 0x1C8DD60u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8DD58u, 0x1C8DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DD60u;
label_1c8dd60:
    // 0x1c8dd60: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8DD60u;
    {
        const bool branch_taken_0x1c8dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD60u;
        // 0x1c8dd64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd60) {
            ctx->pc = 0x1C8DD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8dd30;
        }
    }
    ctx->pc = 0x1C8DD68u;
label_1c8dd68:
    // 0x1c8dd68: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c8dd68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c8dd6c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C8DD6Cu;
    {
        const bool branch_taken_0x1c8dd6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD6Cu;
        // 0x1c8dd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd6c) {
            ctx->pc = 0x1C8DD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8dd30;
        }
    }
    ctx->pc = 0x1C8DD74u;
    // 0x1c8dd74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c8dd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8dd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8dd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8dd80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8dd84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dd88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8dd88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8dd8c: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8DD8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DD94u);
    ctx->pc = 0x1C8DD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DD8Cu;
    // 0x1c8dd90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8DD8Cu, 0x1C8DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DD94u;
label_1c8dd94:
    // 0x1c8dd94: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8dd94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8dd98: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C8DD98u;
    {
        const bool branch_taken_0x1c8dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DD98u;
        // 0x1c8dd9c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dd98) {
            ctx->pc = 0x1C8DD2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8dd2c;
        }
    }
    ctx->pc = 0x1C8DDA0u;
    // 0x1c8dda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8dda4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8dda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8dda8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ddac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8ddacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ddb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8ddb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8ddb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ddb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ddbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8ddbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ddc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8ddc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ddc4: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8DDC4u;
    SET_GPR_U32(ctx, 31, 0x1C8DDCCu);
    ctx->pc = 0x1C8DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DDC4u;
    // 0x1c8ddc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8DDC4u, 0x1C8DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DDCCu;
label_1c8ddcc:
    // 0x1c8ddcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ddccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ddd0: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8DDD0u;
    SET_GPR_U32(ctx, 31, 0x1C8DDD8u);
    ctx->pc = 0x1C8DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DDD0u;
    // 0x1c8ddd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8DDD0u, 0x1C8DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DDD8u;
label_1c8ddd8:
    // 0x1c8ddd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8dddc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8dde0: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DDE0u;
    SET_GPR_U32(ctx, 31, 0x1C8DDE8u);
    ctx->pc = 0x1C8DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DDE0u;
    // 0x1c8dde4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DDE0u, 0x1C8DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DDE8u;
label_1c8dde8:
    // 0x1c8dde8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8dde8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ddec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c8ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c8ddf0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c8ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c8ddf4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ddf8: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DDF8u;
    SET_GPR_U32(ctx, 31, 0x1C8DE00u);
    ctx->pc = 0x1C8DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DDF8u;
    // 0x1c8ddfc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DDF8u, 0x1C8DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DE00u;
label_1c8de00:
    // 0x1c8de00: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c8de00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c8de04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8de04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8de08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8de08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8de0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DE0Cu;
        // 0x1c8de10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DE14u;
    // 0x1c8de14: 0x0  nop
    ctx->pc = 0x1c8de14u;
    // NOP
    ctx->pc = 0x1c8de18u;
}
