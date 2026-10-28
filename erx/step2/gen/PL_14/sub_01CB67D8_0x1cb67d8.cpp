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

// Function: sub_01CB67D8
// Address: 0x1cb67d8 - 0x1cb67e0
void sub_01CB67D8_0x1cb67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB67D8_0x1cb67d8");
#endif

    ctx->pc = 0x1cb67d8u;

    // 0x1cb67d8: 0x80b08ac  j           func_2C22B0
    ctx->pc = 0x1CB67D8u;
    ctx->pc = 0x2C22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C22B0u, 0x1CB67D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB67E0u;
}
