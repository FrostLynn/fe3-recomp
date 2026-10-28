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

// Function: sub_01CFEE20
// Address: 0x1cfee20 - 0x1cfeea8
void sub_01CFEE20_0x1cfee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEE20_0x1cfee20");
#endif

    switch (ctx->pc) {
        case 0x1cfee3cu: goto label_1cfee3c;
        case 0x1cfee74u: goto label_1cfee74;
        case 0x1cfee88u: goto label_1cfee88;
        default: break;
    }

    ctx->pc = 0x1cfee20u;

    // 0x1cfee20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfee24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfee28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfee2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfee2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee30: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cfee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cfee34: 0xc73f49c  jal         func_1CFD270
    ctx->pc = 0x1CFEE34u;
    SET_GPR_U32(ctx, 31, 0x1CFEE3Cu);
    ctx->pc = 0x1CFEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEE34u;
    // 0x1cfee38: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD270u, 0x1CFEE34u, 0x1CFEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEE3Cu;
label_1cfee3c:
    // 0x1cfee3c: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cfee3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cfee40: 0x25effff8  addiu       $t7, $t7, -0x8
    ctx->pc = 0x1cfee40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
    // 0x1cfee44: 0x2dee0018  sltiu       $t6, $t7, 0x18
    ctx->pc = 0x1cfee44u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cfee48: 0x11c0001f  beqz        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x1CFEE48u;
    {
        const bool branch_taken_0x1cfee48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE48u;
        // 0x1cfee4c: 0x3c0e01d0  lui         $t6, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfee48) {
            ctx->pc = 0x1CFEEC8u;
            return;
        }
    }
    ctx->pc = 0x1CFEE50u;
    // 0x1cfee50: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cfee50u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cfee54: 0x25ce136c  addiu       $t6, $t6, 0x136C
    ctx->pc = 0x1cfee54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4972));
    // 0x1cfee58: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cfee58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cfee5c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cfee5cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cfee60: 0x1a00008  jr          $t5
    ctx->pc = 0x1CFEE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CFEE68u: goto label_1cfee68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFEE60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CFEE68u;
label_1cfee68:
    // 0x1cfee68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfee68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfee6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee70: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x1cfee70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1cfee74:
    // 0x1cfee74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfee74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfee78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfee78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee7c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfee7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfee80: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFEE80u;
    SET_GPR_U32(ctx, 31, 0x1CFEE88u);
    ctx->pc = 0x1CFEE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEE80u;
    // 0x1cfee84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFEE80u, 0x1CFEE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEE88u;
label_1cfee88:
    // 0x1cfee88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfee8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfee90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfee90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfee94: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x1cfee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1cfee98: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x1cfee98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x1cfee9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfee9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeea0: 0x873f776  j           func_1CFDDD8
    ctx->pc = 0x1CFEEA0u;
    ctx->pc = 0x1CFEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEEA0u;
    // 0x1cfeea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDDD8u;
    sub_01CFDDD8_0x1cfddd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEEA8u;
}
