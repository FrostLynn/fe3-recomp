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

// Function: sub_01C8D890
// Address: 0x1c8d890 - 0x1c8d898
void sub_01C8D890_0x1c8d890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D890_0x1c8d890");
#endif

    ctx->pc = 0x1c8d890u;

    // 0x1c8d890: 0x80b2936  j           func_2CA4D8
    ctx->pc = 0x1C8D890u;
    ctx->pc = 0x2CA4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA4D8u, 0x1C8D890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D898u;
}
