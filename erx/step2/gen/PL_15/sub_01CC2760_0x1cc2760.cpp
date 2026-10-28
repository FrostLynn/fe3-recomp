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

// Function: sub_01CC2760
// Address: 0x1cc2760 - 0x1cc2768
void sub_01CC2760_0x1cc2760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2760_0x1cc2760");
#endif

    ctx->pc = 0x1cc2760u;

    // 0x1cc2760: 0x80b15ec  j           func_2C57B0
    ctx->pc = 0x1CC2760u;
    ctx->pc = 0x2C57B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57B0u, 0x1CC2760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2768u;
}
