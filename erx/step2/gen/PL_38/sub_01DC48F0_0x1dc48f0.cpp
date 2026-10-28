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

// Function: sub_01DC48F0
// Address: 0x1dc48f0 - 0x1dc4980
void sub_01DC48F0_0x1dc48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC48F0_0x1dc48f0");
#endif

    switch (ctx->pc) {
        case 0x1dc4910u: goto label_1dc4910;
        case 0x1dc4968u: goto label_1dc4968;
        default: break;
    }

    ctx->pc = 0x1dc48f0u;

    // 0x1dc48f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc48f4: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc48f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc48f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc48fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc48fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4900: 0x15e00016  bnez        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC4900u;
    {
        const bool branch_taken_0x1dc4900 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4900u;
        // 0x1dc4904: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4900) {
            ctx->pc = 0x1DC495Cu;
            goto label_1dc495c;
        }
    }
    ctx->pc = 0x1DC4908u;
    // 0x1dc4908: 0xc7710c6  jal         func_1DC4318
    ctx->pc = 0x1DC4908u;
    SET_GPR_U32(ctx, 31, 0x1DC4910u);
    ctx->pc = 0x1DC4318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4318u, 0x1DC4908u, 0x1DC4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4910u;
label_1dc4910:
    // 0x1dc4910: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4910u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4914: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4914u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4918: 0x25efa254  addiu       $t7, $t7, -0x5DAC
    ctx->pc = 0x1dc4918u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943316));
    // 0x1dc491c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4920: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc4920u;
    { uint32_t bits = FAST_READ32(0x1DCA254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4924: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4924u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc492c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc492cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4930: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4930u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4938: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc493c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc493cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4940: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc4940u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4948: 0x8dc60060  lw          $a2, 0x60($t6)
    ctx->pc = 0x1dc4948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 96)));
    // 0x1dc494c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc494cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4950: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4950u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4954: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4954u;
    ctx->pc = 0x1DC4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4954u;
    // 0x1dc4958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC495Cu;
label_1dc495c:
    // 0x1dc495c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dc495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc4960: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC4960u;
    SET_GPR_U32(ctx, 31, 0x1DC4968u);
    ctx->pc = 0x1DC4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4960u;
    // 0x1dc4964: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC4960u, 0x1DC4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4968u;
label_1dc4968:
    // 0x1dc4968: 0xa040040d  sb          $zero, 0x40D($v0)
    ctx->pc = 0x1dc4968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1037), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc496c: 0xa04009b0  sb          $zero, 0x9B0($v0)
    ctx->pc = 0x1dc496cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc4970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4978: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4978u;
        // 0x1dc497c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4980u;
}
