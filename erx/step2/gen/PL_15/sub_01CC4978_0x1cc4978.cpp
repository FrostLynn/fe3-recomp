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

// Function: sub_01CC4978
// Address: 0x1cc4978 - 0x1cc4998
void sub_01CC4978_0x1cc4978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4978_0x1cc4978");
#endif

    switch (ctx->pc) {
        case 0x1cc4988u: goto label_1cc4988;
        default: break;
    }

    ctx->pc = 0x1cc4978u;

    // 0x1cc4978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc497c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc4980: 0xc730bac  jal         func_1CC2EB0
    ctx->pc = 0x1CC4980u;
    SET_GPR_U32(ctx, 31, 0x1CC4988u);
    ctx->pc = 0x1CC2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2EB0u, 0x1CC4980u, 0x1CC4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4988u;
label_1cc4988:
    // 0x1cc4988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc498c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc498cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4990: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4990u;
        // 0x1cc4994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4998u;
}
