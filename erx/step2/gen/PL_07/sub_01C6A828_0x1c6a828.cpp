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

// Function: sub_01C6A828
// Address: 0x1c6a828 - 0x1c6a830
void sub_01C6A828_0x1c6a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A828_0x1c6a828");
#endif

    ctx->pc = 0x1c6a828u;

    // 0x1c6a828: 0x80b0f3e  j           func_2C3CF8
    ctx->pc = 0x1C6A828u;
    ctx->pc = 0x2C3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3CF8u, 0x1C6A828u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A830u;
}
