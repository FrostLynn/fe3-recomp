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

// Function: sub_01C78310
// Address: 0x1c78310 - 0x1c78358
void sub_01C78310_0x1c78310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78310_0x1c78310");
#endif

    switch (ctx->pc) {
        case 0x1c7832cu: goto label_1c7832c;
        default: break;
    }

    ctx->pc = 0x1c78310u;

    // 0x1c78310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7831c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c7831cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78320: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c78320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c78324: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C78324u;
    SET_GPR_U32(ctx, 31, 0x1C7832Cu);
    ctx->pc = 0x1C78328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78324u;
    // 0x1c78328: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C78324u, 0x1C7832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7832Cu;
label_1c7832c:
    // 0x1c7832c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c7832cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c78338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7833c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c7833cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c78340: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c78340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c78344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78348: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c78348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7834c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c7834cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78350: 0x871d8e4  j           func_1C76390
    ctx->pc = 0x1C78350u;
    ctx->pc = 0x1C78354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78350u;
    // 0x1c78354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76390u;
    sub_01C76390_0x1c76390(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78358u;
}
