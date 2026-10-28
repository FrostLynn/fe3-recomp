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

// Function: sub_01DBBEF8
// Address: 0x1dbbef8 - 0x1dbbfd8
void sub_01DBBEF8_0x1dbbef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBEF8_0x1dbbef8");
#endif

    switch (ctx->pc) {
        case 0x1dbbf0cu: goto label_1dbbf0c;
        case 0x1dbbf20u: goto label_1dbbf20;
        case 0x1dbbf24u: goto label_1dbbf24;
        case 0x1dbbf40u: goto label_1dbbf40;
        case 0x1dbbf4cu: goto label_1dbbf4c;
        case 0x1dbbf7cu: goto label_1dbbf7c;
        case 0x1dbbfa8u: goto label_1dbbfa8;
        case 0x1dbbfb4u: goto label_1dbbfb4;
        default: break;
    }

    ctx->pc = 0x1dbbef8u;

    // 0x1dbbef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbbef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbbefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbf00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbbf04: 0xc76ee54  jal         func_1DBB950
    ctx->pc = 0x1DBBF04u;
    SET_GPR_U32(ctx, 31, 0x1DBBF0Cu);
    ctx->pc = 0x1DBBF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBF04u;
    // 0x1dbbf08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB950u, 0x1DBBF04u, 0x1DBBF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF0Cu;
label_1dbbf0c:
    // 0x1dbbf0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbbf0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbf10: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBBF10u;
    {
        const bool branch_taken_0x1dbbf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBBF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBF10u;
        // 0x1dbbf14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbf10) {
            ctx->pc = 0x1DBBF34u;
            goto label_1dbbf34;
        }
    }
    ctx->pc = 0x1DBBF18u;
    // 0x1dbbf18: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBBF18u;
    SET_GPR_U32(ctx, 31, 0x1DBBF20u);
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBBF18u, 0x1DBBF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF20u;
label_1dbbf20:
    // 0x1dbbf20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dbbf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dbbf24:
    // 0x1dbbf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbf28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbbf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBBF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBF2Cu;
        // 0x1dbbf30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBBF34u;
label_1dbbf34:
    // 0x1dbbf34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dbbf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbbf38: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBBF38u;
    SET_GPR_U32(ctx, 31, 0x1DBBF40u);
    ctx->pc = 0x1DBBF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBF38u;
    // 0x1dbbf3c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBBF38u, 0x1DBBF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF40u;
label_1dbbf40:
    // 0x1dbbf40: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1dbbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1dbbf44: 0xc76ee66  jal         func_1DBB998
    ctx->pc = 0x1DBBF44u;
    SET_GPR_U32(ctx, 31, 0x1DBBF4Cu);
    ctx->pc = 0x1DBBF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBF44u;
    // 0x1dbbf48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB998u, 0x1DBBF44u, 0x1DBBF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF4Cu;
label_1dbbf4c:
    // 0x1dbbf4c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DBBF4Cu;
    {
        const bool branch_taken_0x1dbbf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBF4Cu;
        // 0x1dbbf50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbf4c) {
            ctx->pc = 0x1DBBF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbbf24;
        }
    }
    ctx->pc = 0x1DBBF54u;
    // 0x1dbbf54: 0x0  nop
    ctx->pc = 0x1dbbf54u;
    // NOP
    // 0x1dbbf58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbbf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbbf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbf60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbbf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbbf64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbbf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbbf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbbf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf70: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbbf74: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBBF74u;
    SET_GPR_U32(ctx, 31, 0x1DBBF7Cu);
    ctx->pc = 0x1DBBF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBF74u;
    // 0x1dbbf78: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBBF74u, 0x1DBBF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF7Cu;
label_1dbbf7c:
    // 0x1dbbf7c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1dbbf7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1dbbf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dbbf84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbf88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbbf88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf8c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1dbbf8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1dbbf90: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dbbf90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbf94: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1dbbf94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1dbbf98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbbf98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf9c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1dbbf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dbbfa0: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBBFA0u;
    SET_GPR_U32(ctx, 31, 0x1DBBFA8u);
    ctx->pc = 0x1DBBFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBFA0u;
    // 0x1dbbfa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBBFA0u, 0x1DBBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBFA8u;
label_1dbbfa8:
    // 0x1dbbfa8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dbbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbbfac: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBBFACu;
    SET_GPR_U32(ctx, 31, 0x1DBBFB4u);
    ctx->pc = 0x1DBBFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBFACu;
    // 0x1dbbfb0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBBFACu, 0x1DBBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBFB4u;
label_1dbbfb4:
    // 0x1dbbfb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dbbfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbfb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbbfb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbfbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbfc0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1dbbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1dbbfc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbbfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbbfc8: 0x876ee68  j           func_1DBB9A0
    ctx->pc = 0x1DBBFC8u;
    ctx->pc = 0x1DBBFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBFC8u;
    // 0x1dbbfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9A0u;
    sub_01DBB9A0_0x1dbb9a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBBFD0u;
    // 0x1dbbfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBBFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBBFD8u;
}
