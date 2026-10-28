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

// Function: sub_01CEF528
// Address: 0x1cef528 - 0x1cef538
void sub_01CEF528_0x1cef528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF528_0x1cef528");
#endif

    ctx->pc = 0x1cef528u;

    // 0x1cef528: 0x80d9758  j           func_365D60
    ctx->pc = 0x1CEF528u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1CEF528u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF530u;
    // 0x1cef530: 0x0  nop
    ctx->pc = 0x1cef530u;
    // NOP
    // 0x1cef534: 0x0  nop
    ctx->pc = 0x1cef534u;
    // NOP
    ctx->pc = 0x1cef538u;
}
