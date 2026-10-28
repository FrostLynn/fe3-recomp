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

// Function: sub_01CAD168
// Address: 0x1cad168 - 0x1cad170
void sub_01CAD168_0x1cad168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD168_0x1cad168");
#endif

    ctx->pc = 0x1cad168u;

    // 0x1cad168: 0x80ae442  j           func_2B9108
    ctx->pc = 0x1CAD168u;
    ctx->pc = 0x2B9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9108u, 0x1CAD168u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD170u;
}
