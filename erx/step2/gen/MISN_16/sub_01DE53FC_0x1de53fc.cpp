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

// Function: sub_01DE53FC
// Address: 0x1de53fc - 0x1de540c
void sub_01DE53FC_0x1de53fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE53FC_0x1de53fc");
#endif

    ctx->pc = 0x1de53fcu;

    // 0x1de53fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE53FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE53FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5404u;
    // 0x1de5404: 0x0  nop
    ctx->pc = 0x1de5404u;
    // NOP
    // 0x1de5408: 0x0  nop
    ctx->pc = 0x1de5408u;
    // NOP
    ctx->pc = 0x1de540cu;
}
