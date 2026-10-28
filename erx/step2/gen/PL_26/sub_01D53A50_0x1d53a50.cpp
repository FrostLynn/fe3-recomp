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

// Function: sub_01D53A50
// Address: 0x1d53a50 - 0x1d53a78
void sub_01D53A50_0x1d53a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53A50_0x1d53a50");
#endif

    switch (ctx->pc) {
        case 0x1d53a64u: goto label_1d53a64;
        default: break;
    }

    ctx->pc = 0x1d53a50u;

    // 0x1d53a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d53a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53a58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d53a5c: 0xc7543ec  jal         func_1D50FB0
    ctx->pc = 0x1D53A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D53A64u);
    ctx->pc = 0x1D53A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53A5Cu;
    // 0x1d53a60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FB0u, 0x1D53A5Cu, 0x1D53A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53A64u;
label_1d53a64:
    // 0x1d53a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53a68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d53a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53a70: 0x87547da  j           func_1D51F68
    ctx->pc = 0x1D53A70u;
    ctx->pc = 0x1D53A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53A70u;
    // 0x1d53a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51F68u;
    sub_01D51F68_0x1d51f68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53A78u;
}
