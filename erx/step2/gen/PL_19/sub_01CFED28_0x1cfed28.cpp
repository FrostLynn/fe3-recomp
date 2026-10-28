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

// Function: sub_01CFED28
// Address: 0x1cfed28 - 0x1cfedb0
void sub_01CFED28_0x1cfed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFED28_0x1cfed28");
#endif

    switch (ctx->pc) {
        case 0x1cfed44u: goto label_1cfed44;
        case 0x1cfed7cu: goto label_1cfed7c;
        case 0x1cfed90u: goto label_1cfed90;
        default: break;
    }

    ctx->pc = 0x1cfed28u;

    // 0x1cfed28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfed2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfed30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfed34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfed34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed38: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cfed38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cfed3c: 0xc73f49c  jal         func_1CFD270
    ctx->pc = 0x1CFED3Cu;
    SET_GPR_U32(ctx, 31, 0x1CFED44u);
    ctx->pc = 0x1CFED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFED3Cu;
    // 0x1cfed40: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD270u, 0x1CFED3Cu, 0x1CFED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFED44u;
label_1cfed44:
    // 0x1cfed44: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cfed44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cfed48: 0x25effff7  addiu       $t7, $t7, -0x9
    ctx->pc = 0x1cfed48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967287));
    // 0x1cfed4c: 0x2dee0017  sltiu       $t6, $t7, 0x17
    ctx->pc = 0x1cfed4cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1cfed50: 0x11c0001b  beqz        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CFED50u;
    {
        const bool branch_taken_0x1cfed50 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFED50u;
        // 0x1cfed54: 0x3c0e01d0  lui         $t6, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfed50) {
            ctx->pc = 0x1CFEDC0u;
            return;
        }
    }
    ctx->pc = 0x1CFED58u;
    // 0x1cfed58: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cfed58u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cfed5c: 0x25ce1310  addiu       $t6, $t6, 0x1310
    ctx->pc = 0x1cfed5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4880));
    // 0x1cfed60: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cfed60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cfed64: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cfed64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cfed68: 0x1a00008  jr          $t5
    ctx->pc = 0x1CFED68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFED70u: goto label_1cfed70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFED68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CFED70u;
label_1cfed70:
    // 0x1cfed70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfed70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed78: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1cfed78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_1cfed7c:
    // 0x1cfed7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfed7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfed80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfed80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed84: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfed84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfed88: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFED88u;
    SET_GPR_U32(ctx, 31, 0x1CFED90u);
    ctx->pc = 0x1CFED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFED88u;
    // 0x1cfed8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFED88u, 0x1CFED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFED90u;
label_1cfed90:
    // 0x1cfed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfed94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfed98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfed98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfed9c: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1cfed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1cfeda0: 0x240600de  addiu       $a2, $zero, 0xDE
    ctx->pc = 0x1cfeda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x1cfeda4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfeda4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeda8: 0x873f776  j           func_1CFDDD8
    ctx->pc = 0x1CFEDA8u;
    ctx->pc = 0x1CFEDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEDA8u;
    // 0x1cfedac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDDD8u;
    sub_01CFDDD8_0x1cfddd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEDB0u;
}
