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

// Function: sub_01DC47F0
// Address: 0x1dc47f0 - 0x1dc4880
void sub_01DC47F0_0x1dc47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC47F0_0x1dc47f0");
#endif

    switch (ctx->pc) {
        case 0x1dc4810u: goto label_1dc4810;
        case 0x1dc4868u: goto label_1dc4868;
        default: break;
    }

    ctx->pc = 0x1dc47f0u;

    // 0x1dc47f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc47f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc47f4: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc47f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc47f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc47f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc47fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4800: 0x15e00016  bnez        $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC4800u;
    {
        const bool branch_taken_0x1dc4800 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4800u;
        // 0x1dc4804: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4800) {
            ctx->pc = 0x1DC485Cu;
            goto label_1dc485c;
        }
    }
    ctx->pc = 0x1DC4808u;
    // 0x1dc4808: 0xc771150  jal         func_1DC4540
    ctx->pc = 0x1DC4808u;
    SET_GPR_U32(ctx, 31, 0x1DC4810u);
    ctx->pc = 0x1DC4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4540u, 0x1DC4808u, 0x1DC4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4810u;
label_1dc4810:
    // 0x1dc4810: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4810u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4814: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4814u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4818: 0x25efa250  addiu       $t7, $t7, -0x5DB0
    ctx->pc = 0x1dc4818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943312));
    // 0x1dc481c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4820: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc4820u;
    { uint32_t bits = FAST_READ32(0x1DCA250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4824: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4824u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc482c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc482cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4830: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4830u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4838: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc483c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc483cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4840: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc4840u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4848: 0x8dc60060  lw          $a2, 0x60($t6)
    ctx->pc = 0x1dc4848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 96)));
    // 0x1dc484c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc484cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4854: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4854u;
    ctx->pc = 0x1DC4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4854u;
    // 0x1dc4858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC485Cu;
label_1dc485c:
    // 0x1dc485c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dc485cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dc4860: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC4860u;
    SET_GPR_U32(ctx, 31, 0x1DC4868u);
    ctx->pc = 0x1DC4864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4860u;
    // 0x1dc4864: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC4860u, 0x1DC4868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4868u;
label_1dc4868:
    // 0x1dc4868: 0xa040040d  sb          $zero, 0x40D($v0)
    ctx->pc = 0x1dc4868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1037), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc486c: 0xa04009b0  sb          $zero, 0x9B0($v0)
    ctx->pc = 0x1dc486cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dc4870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4878: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4878u;
        // 0x1dc487c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4880u;
}
