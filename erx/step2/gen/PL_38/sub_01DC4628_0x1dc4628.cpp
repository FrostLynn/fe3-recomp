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

// Function: sub_01DC4628
// Address: 0x1dc4628 - 0x1dc4688
void sub_01DC4628_0x1dc4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4628_0x1dc4628");
#endif

    switch (ctx->pc) {
        case 0x1dc463cu: goto label_1dc463c;
        default: break;
    }

    ctx->pc = 0x1dc4628u;

    // 0x1dc4628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc462c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4634: 0xc7710a8  jal         func_1DC42A0
    ctx->pc = 0x1DC4634u;
    SET_GPR_U32(ctx, 31, 0x1DC463Cu);
    ctx->pc = 0x1DC4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4634u;
    // 0x1dc4638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC42A0u, 0x1DC4634u, 0x1DC463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC463Cu;
label_1dc463c:
    // 0x1dc463c: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc463cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4640: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4640u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4644: 0x25efa244  addiu       $t7, $t7, -0x5DBC
    ctx->pc = 0x1dc4644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943300));
    // 0x1dc4648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc464c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc464cu;
    { uint32_t bits = FAST_READ32(0x1DCA244u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4650: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4650u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc4658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc465c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc465cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4664: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc4668: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc466c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc466cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4674: 0x8dc6000c  lw          $a2, 0xC($t6)
    ctx->pc = 0x1dc4674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x1dc4678: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc467c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc467cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4680: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4680u;
    ctx->pc = 0x1DC4684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4680u;
    // 0x1dc4684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4688u;
}
