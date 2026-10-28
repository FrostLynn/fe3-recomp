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

// Function: sub_01CDAC68
// Address: 0x1cdac68 - 0x1cdac70
void sub_01CDAC68_0x1cdac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAC68_0x1cdac68");
#endif

    ctx->pc = 0x1cdac68u;

    // 0x1cdac68: 0x80b2ac8  j           func_2CAB20
    ctx->pc = 0x1CDAC68u;
    ctx->pc = 0x2CAB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB20u, 0x1CDAC68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAC70u;
}
