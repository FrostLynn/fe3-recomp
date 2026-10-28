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

// Function: sub_01D9EAF0
// Address: 0x1d9eaf0 - 0x1d9ec00
void sub_01D9EAF0_0x1d9eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EAF0_0x1d9eaf0");
#endif

    switch (ctx->pc) {
        case 0x1d9eb10u: goto label_1d9eb10;
        case 0x1d9eb24u: goto label_1d9eb24;
        case 0x1d9eb28u: goto label_1d9eb28;
        case 0x1d9eb44u: goto label_1d9eb44;
        case 0x1d9eb54u: goto label_1d9eb54;
        case 0x1d9eba0u: goto label_1d9eba0;
        case 0x1d9ebdcu: goto label_1d9ebdc;
        case 0x1d9ebe8u: goto label_1d9ebe8;
        default: break;
    }

    ctx->pc = 0x1d9eaf0u;

    // 0x1d9eaf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9eaf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9eaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9eaf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9eafc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9eafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9eb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9eb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9eb08: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EB08u;
    SET_GPR_U32(ctx, 31, 0x1D9EB10u);
    ctx->pc = 0x1D9EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EB08u;
    // 0x1d9eb0c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EB08u, 0x1D9EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EB10u;
label_1d9eb10:
    // 0x1d9eb10: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d9eb10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9eb14: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D9EB14u;
    {
        const bool branch_taken_0x1d9eb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB14u;
        // 0x1d9eb18: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eb14) {
            ctx->pc = 0x1D9EB60u;
            goto label_1d9eb60;
        }
    }
    ctx->pc = 0x1D9EB1Cu;
    // 0x1d9eb1c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9EB1Cu;
    {
        const bool branch_taken_0x1d9eb1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9eb1c) {
            ctx->pc = 0x1D9EB3Cu;
            goto label_1d9eb3c;
        }
    }
    ctx->pc = 0x1D9EB24u;
label_1d9eb24:
    // 0x1d9eb24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9eb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9eb28:
    // 0x1d9eb28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9eb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9eb2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9eb2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9eb30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9eb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9eb34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB34u;
        // 0x1d9eb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EB3Cu;
label_1d9eb3c:
    // 0x1d9eb3c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9EB3Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EB44u);
    ctx->pc = 0x1D9EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EB3Cu;
    // 0x1d9eb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9EB3Cu, 0x1D9EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EB44u;
label_1d9eb44:
    // 0x1d9eb44: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9EB44u;
    {
        const bool branch_taken_0x1d9eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB44u;
        // 0x1d9eb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eb44) {
            ctx->pc = 0x1D9EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eb24;
        }
    }
    ctx->pc = 0x1D9EB4Cu;
    // 0x1d9eb4c: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9EB4Cu;
    SET_GPR_U32(ctx, 31, 0x1D9EB54u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9EB4Cu, 0x1D9EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EB54u;
label_1d9eb54:
    // 0x1d9eb54: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D9EB54u;
    {
        const bool branch_taken_0x1d9eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB54u;
        // 0x1d9eb58: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eb54) {
            ctx->pc = 0x1D9EB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eb28;
        }
    }
    ctx->pc = 0x1D9EB5Cu;
    // 0x1d9eb5c: 0x0  nop
    ctx->pc = 0x1d9eb5cu;
    // NOP
label_1d9eb60:
    // 0x1d9eb60: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d9eb60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d9eb64: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D9EB64u;
    {
        const bool branch_taken_0x1d9eb64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EB64u;
        // 0x1d9eb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eb64) {
            ctx->pc = 0x1D9EB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eb28;
        }
    }
    ctx->pc = 0x1D9EB6Cu;
    // 0x1d9eb6c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d9eb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d9eb70: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d9eb70u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d9eb74: 0x25ce08e0  addiu       $t6, $t6, 0x8E0
    ctx->pc = 0x1d9eb74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2272));
    // 0x1d9eb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9eb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb7c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9eb7cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9eb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9eb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb84: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9eb84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9eb88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9eb88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb8c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9eb90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9eb90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb94: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9eb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9eb98: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9EB98u;
    SET_GPR_U32(ctx, 31, 0x1D9EBA0u);
    ctx->pc = 0x1D9EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EB98u;
    // 0x1d9eb9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9EB98u, 0x1D9EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EBA0u;
label_1d9eba0:
    // 0x1d9eba0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9eba0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9eba4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D9EBA4u;
    {
        const bool branch_taken_0x1d9eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EBA4u;
        // 0x1d9eba8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eba4) {
            ctx->pc = 0x1D9EB24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9eb24;
        }
    }
    ctx->pc = 0x1D9EBACu;
    // 0x1d9ebac: 0x0  nop
    ctx->pc = 0x1d9ebacu;
    // NOP
    // 0x1d9ebb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ebb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9ebb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ebb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ebbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9ebbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ebc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9ebc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9ebc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ebc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9ebc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ebcc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9ebccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ebd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9ebd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ebd4: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9EBD4u;
    SET_GPR_U32(ctx, 31, 0x1D9EBDCu);
    ctx->pc = 0x1D9EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EBD4u;
    // 0x1d9ebd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9EBD4u, 0x1D9EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EBDCu;
label_1d9ebdc:
    // 0x1d9ebdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ebdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ebe0: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9EBE0u;
    SET_GPR_U32(ctx, 31, 0x1D9EBE8u);
    ctx->pc = 0x1D9EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EBE0u;
    // 0x1d9ebe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9EBE0u, 0x1D9EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EBE8u;
label_1d9ebe8:
    // 0x1d9ebe8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9ebec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9ebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ebf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ebf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EBF4u;
        // 0x1d9ebf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EBFCu;
    // 0x1d9ebfc: 0x0  nop
    ctx->pc = 0x1d9ebfcu;
    // NOP
    ctx->pc = 0x1d9ec00u;
}
