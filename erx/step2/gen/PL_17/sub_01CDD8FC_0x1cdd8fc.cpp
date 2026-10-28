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

// Function: sub_01CDD8FC
// Address: 0x1cdd8fc - 0x1cdd90c
void sub_01CDD8FC_0x1cdd8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD8FC_0x1cdd8fc");
#endif

    ctx->pc = 0x1cdd8fcu;

    // 0x1cdd8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD904u;
    // 0x1cdd904: 0x0  nop
    ctx->pc = 0x1cdd904u;
    // NOP
    // 0x1cdd908: 0x0  nop
    ctx->pc = 0x1cdd908u;
    // NOP
    ctx->pc = 0x1cdd90cu;
}
