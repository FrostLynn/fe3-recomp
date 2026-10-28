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

// Function: sub_01CDCC68
// Address: 0x1cdcc68 - 0x1cdcd28
void sub_01CDCC68_0x1cdcc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCC68_0x1cdcc68");
#endif

    switch (ctx->pc) {
        case 0x1cdcc7cu: goto label_1cdcc7c;
        case 0x1cdcc90u: goto label_1cdcc90;
        case 0x1cdcc94u: goto label_1cdcc94;
        case 0x1cdccd0u: goto label_1cdccd0;
        case 0x1cdccdcu: goto label_1cdccdc;
        case 0x1cdcce8u: goto label_1cdcce8;
        case 0x1cdcd08u: goto label_1cdcd08;
        default: break;
    }

    ctx->pc = 0x1cdcc68u;

    // 0x1cdcc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcc6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdcc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdcc70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdcc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdcc74: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDCC74u;
    SET_GPR_U32(ctx, 31, 0x1CDCC7Cu);
    ctx->pc = 0x1CDCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC74u;
    // 0x1cdcc78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDCC74u, 0x1CDCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC7Cu;
label_1cdcc7c:
    // 0x1cdcc7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdcc7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcc80: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDCC80u;
    {
        const bool branch_taken_0x1cdcc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC80u;
        // 0x1cdcc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcc80) {
            ctx->pc = 0x1CDCCA4u;
            goto label_1cdcca4;
        }
    }
    ctx->pc = 0x1CDCC88u;
    // 0x1cdcc88: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDCC88u;
    SET_GPR_U32(ctx, 31, 0x1CDCC90u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDCC88u, 0x1CDCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC90u;
label_1cdcc90:
    // 0x1cdcc90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdcc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdcc94:
    // 0x1cdcc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcc98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdcc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC9Cu;
        // 0x1cdcca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCCA4u;
label_1cdcca4:
    // 0x1cdcca4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CDCCA4u;
    {
        const bool branch_taken_0x1cdcca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCCA4u;
        // 0x1cdcca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcca4) {
            ctx->pc = 0x1CDCC94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcc94;
        }
    }
    ctx->pc = 0x1CDCCACu;
    // 0x1cdccac: 0x0  nop
    ctx->pc = 0x1cdccacu;
    // NOP
    // 0x1cdccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdccb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdccb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdccbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdccc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdccc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdccc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccc8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCCC8u;
    SET_GPR_U32(ctx, 31, 0x1CDCCD0u);
    ctx->pc = 0x1CDCCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCCC8u;
    // 0x1cdcccc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCCC8u, 0x1CDCCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCCD0u;
label_1cdccd0:
    // 0x1cdccd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdccd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccd4: 0xc737594  jal         func_1CDD650
    ctx->pc = 0x1CDCCD4u;
    SET_GPR_U32(ctx, 31, 0x1CDCCDCu);
    ctx->pc = 0x1CDCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCCD4u;
    // 0x1cdccd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD650u, 0x1CDCCD4u, 0x1CDCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCCDCu;
label_1cdccdc:
    // 0x1cdccdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cdccdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcce0: 0xc736b32  jal         func_1CDACC8
    ctx->pc = 0x1CDCCE0u;
    SET_GPR_U32(ctx, 31, 0x1CDCCE8u);
    ctx->pc = 0x1CDCCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCCE0u;
    // 0x1cdcce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDACC8u, 0x1CDCCE0u, 0x1CDCCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCCE8u;
label_1cdcce8:
    // 0x1cdcce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdcce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdccecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdccf4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdccf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdccf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdccfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcd00: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDCD00u;
    SET_GPR_U32(ctx, 31, 0x1CDCD08u);
    ctx->pc = 0x1CDCD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD00u;
    // 0x1cdcd04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDCD00u, 0x1CDCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCD08u;
label_1cdcd08:
    // 0x1cdcd08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdcd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcd0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcd10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdcd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcd14: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cdcd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdcd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdcd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdcd1c: 0x873689a  j           func_1CDA268
    ctx->pc = 0x1CDCD1Cu;
    ctx->pc = 0x1CDCD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD1Cu;
    // 0x1cdcd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    sub_01CDA268_0x1cda268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCD24u;
    // 0x1cdcd24: 0x0  nop
    ctx->pc = 0x1cdcd24u;
    // NOP
    ctx->pc = 0x1cdcd28u;
}
