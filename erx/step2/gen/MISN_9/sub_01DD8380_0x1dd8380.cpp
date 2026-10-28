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

// Function: sub_01DD8380
// Address: 0x1dd8380 - 0x1dd8390
void sub_01DD8380_0x1dd8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8380_0x1dd8380");
#endif

    ctx->pc = 0x1dd8380u;

    // 0x1dd8380: 0x8099edc  j           func_267B70
    ctx->pc = 0x1DD8380u;
    ctx->pc = 0x267B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267B70u, 0x1DD8380u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8388u;
    // 0x1dd8388: 0x0  nop
    ctx->pc = 0x1dd8388u;
    // NOP
    // 0x1dd838c: 0x0  nop
    ctx->pc = 0x1dd838cu;
    // NOP
    ctx->pc = 0x1dd8390u;
}
