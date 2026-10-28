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

// Function: sub_01DB3620
// Address: 0x1db3620 - 0x1db3648
void sub_01DB3620_0x1db3620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3620_0x1db3620");
#endif

    switch (ctx->pc) {
        case 0x1db3634u: goto label_1db3634;
        default: break;
    }

    ctx->pc = 0x1db3620u;

    // 0x1db3620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db3628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db3628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db362c: 0xc76c3ec  jal         func_1DB0FB0
    ctx->pc = 0x1DB362Cu;
    SET_GPR_U32(ctx, 31, 0x1DB3634u);
    ctx->pc = 0x1DB3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB362Cu;
    // 0x1db3630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0FB0u, 0x1DB362Cu, 0x1DB3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3634u;
label_1db3634:
    // 0x1db3634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db3634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3638: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db3638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db363c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db363cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3640: 0x876c7da  j           func_1DB1F68
    ctx->pc = 0x1DB3640u;
    ctx->pc = 0x1DB3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3640u;
    // 0x1db3644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1F68u;
    sub_01DB1F68_0x1db1f68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB3648u;
}
