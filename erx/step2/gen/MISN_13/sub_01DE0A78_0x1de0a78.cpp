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

// Function: sub_01DE0A78
// Address: 0x1de0a78 - 0x1de0aa8
void sub_01DE0A78_0x1de0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0A78_0x1de0a78");
#endif

    switch (ctx->pc) {
        case 0x1de0a88u: goto label_1de0a88;
        default: break;
    }

    ctx->pc = 0x1de0a78u;

    // 0x1de0a78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de0a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de0a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de0a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de0a80: 0xc778220  jal         func_1DE0880
    ctx->pc = 0x1DE0A80u;
    SET_GPR_U32(ctx, 31, 0x1DE0A88u);
    ctx->pc = 0x1DE0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0880u, 0x1DE0A80u, 0x1DE0A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0A88u;
label_1de0a88:
    // 0x1de0a88: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1de0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0a8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de0a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de0a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de0a94: 0x2406f6d3  addiu       $a2, $zero, -0x92D
    ctx->pc = 0x1de0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964947));
    // 0x1de0a98: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de0a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de0a9c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de0a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de0aa0: 0x87781d4  j           func_1DE0750
    ctx->pc = 0x1DE0AA0u;
    ctx->pc = 0x1DE0AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0AA0u;
    // 0x1de0aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0750u;
    sub_01DE0750_0x1de0750(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE0AA8u;
}
