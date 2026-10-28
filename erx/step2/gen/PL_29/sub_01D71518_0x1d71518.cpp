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

// Function: sub_01D71518
// Address: 0x1d71518 - 0x1d71570
void sub_01D71518_0x1d71518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71518_0x1d71518");
#endif

    switch (ctx->pc) {
        case 0x1d71544u: goto label_1d71544;
        case 0x1d71550u: goto label_1d71550;
        default: break;
    }

    ctx->pc = 0x1d71518u;

    // 0x1d71518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7151c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7151cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d71520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71524: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d71524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d71528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7152c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7152cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d71530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71534: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d71534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d71538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d71538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7153c: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D7153Cu;
    SET_GPR_U32(ctx, 31, 0x1D71544u);
    ctx->pc = 0x1D71540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7153Cu;
    // 0x1d71540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D7153Cu, 0x1D71544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71544u;
label_1d71544:
    // 0x1d71544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71548: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D71548u;
    SET_GPR_U32(ctx, 31, 0x1D71550u);
    ctx->pc = 0x1D7154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71548u;
    // 0x1d7154c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D71548u, 0x1D71550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71550u;
label_1d71550:
    // 0x1d71550: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d71550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d71554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71558: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d71558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d7155c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7155cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d71560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d71568: 0x875c2a0  j           func_1D70A80
    ctx->pc = 0x1D71568u;
    ctx->pc = 0x1D7156Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71568u;
    // 0x1d7156c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70A80u;
    sub_01D70A80_0x1d70a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D71570u;
}
