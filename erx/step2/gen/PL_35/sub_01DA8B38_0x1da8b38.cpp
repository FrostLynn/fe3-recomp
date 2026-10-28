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

// Function: sub_01DA8B38
// Address: 0x1da8b38 - 0x1da8b60
void sub_01DA8B38_0x1da8b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8B38_0x1da8b38");
#endif

    switch (ctx->pc) {
        case 0x1da8b4cu: goto label_1da8b4c;
        default: break;
    }

    ctx->pc = 0x1da8b38u;

    // 0x1da8b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8b40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8b44: 0xc769bae  jal         func_1DA6EB8
    ctx->pc = 0x1DA8B44u;
    SET_GPR_U32(ctx, 31, 0x1DA8B4Cu);
    ctx->pc = 0x1DA8B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8B44u;
    // 0x1da8b48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6EB8u, 0x1DA8B44u, 0x1DA8B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8B4Cu;
label_1da8b4c:
    // 0x1da8b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8b58: 0x8769e94  j           func_1DA7A50
    ctx->pc = 0x1DA8B58u;
    ctx->pc = 0x1DA8B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8B58u;
    // 0x1da8b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7A50u;
    sub_01DA7A50_0x1da7a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8B60u;
}
