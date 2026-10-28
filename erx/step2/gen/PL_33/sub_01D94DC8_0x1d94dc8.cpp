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

// Function: sub_01D94DC8
// Address: 0x1d94dc8 - 0x1d94e20
void sub_01D94DC8_0x1d94dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94DC8_0x1d94dc8");
#endif

    switch (ctx->pc) {
        case 0x1d94df4u: goto label_1d94df4;
        case 0x1d94e00u: goto label_1d94e00;
        default: break;
    }

    ctx->pc = 0x1d94dc8u;

    // 0x1d94dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94dcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94dd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94ddc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94de4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94de8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94de8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94dec: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94DECu;
    SET_GPR_U32(ctx, 31, 0x1D94DF4u);
    ctx->pc = 0x1D94DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94DECu;
    // 0x1d94df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94DECu, 0x1D94DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94DF4u;
label_1d94df4:
    // 0x1d94df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94df8: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D94DF8u;
    SET_GPR_U32(ctx, 31, 0x1D94E00u);
    ctx->pc = 0x1D94DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94DF8u;
    // 0x1d94dfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D94DF8u, 0x1D94E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E00u;
label_1d94e00:
    // 0x1d94e00: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d94e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d94e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94e08: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d94e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d94e0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94e10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94e18: 0x8764cb2  j           func_1D932C8
    ctx->pc = 0x1D94E18u;
    ctx->pc = 0x1D94E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E18u;
    // 0x1d94e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D932C8u;
    sub_01D932C8_0x1d932c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D94E20u;
}
