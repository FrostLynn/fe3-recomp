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

// Function: sub_01D52DC0
// Address: 0x1d52dc0 - 0x1d52de8
void sub_01D52DC0_0x1d52dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52DC0_0x1d52dc0");
#endif

    switch (ctx->pc) {
        case 0x1d52dd4u: goto label_1d52dd4;
        default: break;
    }

    ctx->pc = 0x1d52dc0u;

    // 0x1d52dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52dc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d52dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d52dcc: 0xc7543ec  jal         func_1D50FB0
    ctx->pc = 0x1D52DCCu;
    SET_GPR_U32(ctx, 31, 0x1D52DD4u);
    ctx->pc = 0x1D52DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52DCCu;
    // 0x1d52dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FB0u, 0x1D52DCCu, 0x1D52DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52DD4u;
label_1d52dd4:
    // 0x1d52dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52dd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d52dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52de0: 0x87543e0  j           func_1D50F80
    ctx->pc = 0x1D52DE0u;
    ctx->pc = 0x1D52DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52DE0u;
    // 0x1d52de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F80u;
    sub_01D50F80_0x1d50f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52DE8u;
}
