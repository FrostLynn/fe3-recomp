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

// Function: sub_01D9ED68
// Address: 0x1d9ed68 - 0x1d9ee78
void sub_01D9ED68_0x1d9ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9ED68_0x1d9ed68");
#endif

    switch (ctx->pc) {
        case 0x1d9ed88u: goto label_1d9ed88;
        case 0x1d9ed9cu: goto label_1d9ed9c;
        case 0x1d9eda0u: goto label_1d9eda0;
        case 0x1d9edbcu: goto label_1d9edbc;
        case 0x1d9edccu: goto label_1d9edcc;
        case 0x1d9ee18u: goto label_1d9ee18;
        case 0x1d9ee54u: goto label_1d9ee54;
        case 0x1d9ee60u: goto label_1d9ee60;
        default: break;
    }

    ctx->pc = 0x1d9ed68u;

    // 0x1d9ed68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9ed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9ed6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ed6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ed70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9ed74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9ed78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9ed78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ed7c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9ed80: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9ED80u;
    SET_GPR_U32(ctx, 31, 0x1D9ED88u);
    ctx->pc = 0x1D9ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ED80u;
    // 0x1d9ed84: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9ED80u, 0x1D9ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ED88u;
label_1d9ed88:
    // 0x1d9ed88: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d9ed88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9ed8c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D9ED8Cu;
    {
        const bool branch_taken_0x1d9ed8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED8Cu;
        // 0x1d9ed90: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ed8c) {
            ctx->pc = 0x1D9EDD8u;
            goto label_1d9edd8;
        }
    }
    ctx->pc = 0x1D9ED94u;
    // 0x1d9ed94: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9ED94u;
    {
        const bool branch_taken_0x1d9ed94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9ed94) {
            ctx->pc = 0x1D9EDB4u;
            goto label_1d9edb4;
        }
    }
    ctx->pc = 0x1D9ED9Cu;
label_1d9ed9c:
    // 0x1d9ed9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9ed9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9eda0:
    // 0x1d9eda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9eda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9eda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9eda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9eda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9eda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9edac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EDACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDACu;
        // 0x1d9edb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EDACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EDB4u;
label_1d9edb4:
    // 0x1d9edb4: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9EDB4u;
    SET_GPR_U32(ctx, 31, 0x1D9EDBCu);
    ctx->pc = 0x1D9EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EDB4u;
    // 0x1d9edb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9EDB4u, 0x1D9EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EDBCu;
label_1d9edbc:
    // 0x1d9edbc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9EDBCu;
    {
        const bool branch_taken_0x1d9edbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDBCu;
        // 0x1d9edc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9edbc) {
            ctx->pc = 0x1D9ED9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ed9c;
        }
    }
    ctx->pc = 0x1D9EDC4u;
    // 0x1d9edc4: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9EDC4u;
    SET_GPR_U32(ctx, 31, 0x1D9EDCCu);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9EDC4u, 0x1D9EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EDCCu;
label_1d9edcc:
    // 0x1d9edcc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D9EDCCu;
    {
        const bool branch_taken_0x1d9edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDCCu;
        // 0x1d9edd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9edcc) {
            ctx->pc = 0x1D9EDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eda0;
        }
    }
    ctx->pc = 0x1D9EDD4u;
    // 0x1d9edd4: 0x0  nop
    ctx->pc = 0x1d9edd4u;
    // NOP
label_1d9edd8:
    // 0x1d9edd8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d9edd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d9eddc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D9EDDCu;
    {
        const bool branch_taken_0x1d9eddc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EDDCu;
        // 0x1d9ede0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eddc) {
            ctx->pc = 0x1D9EDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eda0;
        }
    }
    ctx->pc = 0x1D9EDE4u;
    // 0x1d9ede4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d9ede4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d9ede8: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d9ede8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d9edec: 0x25ce0900  addiu       $t6, $t6, 0x900
    ctx->pc = 0x1d9edecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2304));
    // 0x1d9edf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9edf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9edf4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9edf4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9edf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9edf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9edfc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9edfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9ee00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9ee00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee04: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9ee04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9ee08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9ee08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee0c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9ee0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ee10: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9EE10u;
    SET_GPR_U32(ctx, 31, 0x1D9EE18u);
    ctx->pc = 0x1D9EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EE10u;
    // 0x1d9ee14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9EE10u, 0x1D9EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EE18u;
label_1d9ee18:
    // 0x1d9ee18: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9ee18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ee1c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D9EE1Cu;
    {
        const bool branch_taken_0x1d9ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EE1Cu;
        // 0x1d9ee20: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ee1c) {
            ctx->pc = 0x1D9ED9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ed9c;
        }
    }
    ctx->pc = 0x1D9EE24u;
    // 0x1d9ee24: 0x0  nop
    ctx->pc = 0x1d9ee24u;
    // NOP
    // 0x1d9ee28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9ee2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9ee2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ee30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ee34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9ee34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9ee3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9ee3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9ee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee44: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9ee44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ee48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9ee48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee4c: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9EE4Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EE54u);
    ctx->pc = 0x1D9EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EE4Cu;
    // 0x1d9ee50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9EE4Cu, 0x1D9EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EE54u;
label_1d9ee54:
    // 0x1d9ee54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ee58: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9EE58u;
    SET_GPR_U32(ctx, 31, 0x1D9EE60u);
    ctx->pc = 0x1D9EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EE58u;
    // 0x1d9ee5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9EE58u, 0x1D9EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EE60u;
label_1d9ee60:
    // 0x1d9ee60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9ee64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9ee64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ee68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ee68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ee6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EE6Cu;
        // 0x1d9ee70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EE74u;
    // 0x1d9ee74: 0x0  nop
    ctx->pc = 0x1d9ee74u;
    // NOP
    ctx->pc = 0x1d9ee78u;
}
