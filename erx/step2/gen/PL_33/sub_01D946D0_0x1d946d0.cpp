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

// Function: sub_01D946D0
// Address: 0x1d946d0 - 0x1d94768
void sub_01D946D0_0x1d946d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D946D0_0x1d946d0");
#endif

    switch (ctx->pc) {
        case 0x1d946e4u: goto label_1d946e4;
        case 0x1d946f8u: goto label_1d946f8;
        case 0x1d946fcu: goto label_1d946fc;
        case 0x1d9474cu: goto label_1d9474c;
        default: break;
    }

    ctx->pc = 0x1d946d0u;

    // 0x1d946d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d946d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d946d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d946d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d946d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d946d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d946dc: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D946DCu;
    SET_GPR_U32(ctx, 31, 0x1D946E4u);
    ctx->pc = 0x1D946E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D946DCu;
    // 0x1d946e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D946DCu, 0x1D946E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D946E4u;
label_1d946e4:
    // 0x1d946e4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d946e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d946e8: 0x144e0008  bne         $v0, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D946E8u;
    {
        const bool branch_taken_0x1d946e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x1D946ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D946E8u;
        // 0x1d946ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d946e8) {
            ctx->pc = 0x1D9470Cu;
            goto label_1d9470c;
        }
    }
    ctx->pc = 0x1D946F0u;
    // 0x1d946f0: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D946F0u;
    SET_GPR_U32(ctx, 31, 0x1D946F8u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D946F0u, 0x1D946F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D946F8u;
label_1d946f8:
    // 0x1d946f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d946f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d946fc:
    // 0x1d946fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d946fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94700: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94704: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94704u;
        // 0x1d94708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9470Cu;
label_1d9470c:
    // 0x1d9470c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d9470cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94710: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94714: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D94714u;
    {
        const bool branch_taken_0x1d94714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94714u;
        // 0x1d94718: 0xa1ee039c  sb          $t6, 0x39C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94714) {
            ctx->pc = 0x1D946FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d946fc;
        }
    }
    ctx->pc = 0x1D9471Cu;
    // 0x1d9471c: 0x0  nop
    ctx->pc = 0x1d9471cu;
    // NOP
    // 0x1d94720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9472c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9473c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9473cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94740: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94744: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94744u;
    SET_GPR_U32(ctx, 31, 0x1D9474Cu);
    ctx->pc = 0x1D94748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94744u;
    // 0x1d94748: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94744u, 0x1D9474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9474Cu;
label_1d9474c:
    // 0x1d9474c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94758: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d94758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9475c: 0x8764a1a  j           func_1D92868
    ctx->pc = 0x1D9475Cu;
    ctx->pc = 0x1D94760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9475Cu;
    // 0x1d94760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    sub_01D92868_0x1d92868(rdram, ctx, runtime); return;
    ctx->pc = 0x1D94764u;
    // 0x1d94764: 0x0  nop
    ctx->pc = 0x1d94764u;
    // NOP
    ctx->pc = 0x1d94768u;
}
