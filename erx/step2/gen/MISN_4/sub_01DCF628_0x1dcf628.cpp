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

// Function: sub_01DCF628
// Address: 0x1dcf628 - 0x1dcf648
void sub_01DCF628_0x1dcf628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF628_0x1dcf628");
#endif

    switch (ctx->pc) {
        case 0x1dcf63cu: goto label_1dcf63c;
        default: break;
    }

    ctx->pc = 0x1dcf628u;

    // 0x1dcf628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcf628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcf62c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcf630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcf630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcf634: 0xc773d22  jal         func_1DCF488
    ctx->pc = 0x1DCF634u;
    SET_GPR_U32(ctx, 31, 0x1DCF63Cu);
    ctx->pc = 0x1DCF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF634u;
    // 0x1dcf638: 0x2484fa70  addiu       $a0, $a0, -0x590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF488u, 0x1DCF634u, 0x1DCF63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF63Cu;
label_1dcf63c:
    // 0x1dcf63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcf63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf640: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF640u;
        // 0x1dcf644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF648u;
}
