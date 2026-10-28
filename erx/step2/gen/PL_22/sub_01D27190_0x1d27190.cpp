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

// Function: sub_01D27190
// Address: 0x1d27190 - 0x1d27198
void sub_01D27190_0x1d27190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27190_0x1d27190");
#endif

    ctx->pc = 0x1d27190u;

    // 0x1d27190: 0x80b1220  j           func_2C4880
    ctx->pc = 0x1D27190u;
    ctx->pc = 0x2C4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4880u, 0x1D27190u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27198u;
}
