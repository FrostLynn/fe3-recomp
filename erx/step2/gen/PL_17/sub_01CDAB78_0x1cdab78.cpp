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

// Function: sub_01CDAB78
// Address: 0x1cdab78 - 0x1cdab80
void sub_01CDAB78_0x1cdab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAB78_0x1cdab78");
#endif

    ctx->pc = 0x1cdab78u;

    // 0x1cdab78: 0x80b28ac  j           func_2CA2B0
    ctx->pc = 0x1CDAB78u;
    ctx->pc = 0x2CA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA2B0u, 0x1CDAB78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAB80u;
}
