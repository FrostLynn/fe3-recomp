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

// Function: sub_01CDAD00
// Address: 0x1cdad00 - 0x1cdad08
void sub_01CDAD00_0x1cdad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD00_0x1cdad00");
#endif

    ctx->pc = 0x1cdad00u;

    // 0x1cdad00: 0x80b33e6  j           func_2CCF98
    ctx->pc = 0x1CDAD00u;
    ctx->pc = 0x2CCF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF98u, 0x1CDAD00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAD08u;
}
