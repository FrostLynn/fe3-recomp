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

// Function: sub_01CA2A58
// Address: 0x1ca2a58 - 0x1ca2a60
void sub_01CA2A58_0x1ca2a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2A58_0x1ca2a58");
#endif

    ctx->pc = 0x1ca2a58u;

    // 0x1ca2a58: 0x80b155a  j           func_2C5568
    ctx->pc = 0x1CA2A58u;
    ctx->pc = 0x2C5568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5568u, 0x1CA2A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2A60u;
}
