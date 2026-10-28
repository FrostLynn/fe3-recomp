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

// Function: sub_01D67638
// Address: 0x1d67638 - 0x1d67660
void sub_01D67638_0x1d67638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67638_0x1d67638");
#endif

    switch (ctx->pc) {
        case 0x1d6764cu: goto label_1d6764c;
        default: break;
    }

    ctx->pc = 0x1d67638u;

    // 0x1d67638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6763c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67640: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67644: 0xc7599d6  jal         func_1D66758
    ctx->pc = 0x1D67644u;
    SET_GPR_U32(ctx, 31, 0x1D6764Cu);
    ctx->pc = 0x1D67648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67644u;
    // 0x1d67648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66758u, 0x1D67644u, 0x1D6764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6764Cu;
label_1d6764c:
    // 0x1d6764c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67650: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67658: 0x8759c66  j           func_1D67198
    ctx->pc = 0x1D67658u;
    ctx->pc = 0x1D6765Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67658u;
    // 0x1d6765c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67198u;
    sub_01D67198_0x1d67198(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67660u;
}
