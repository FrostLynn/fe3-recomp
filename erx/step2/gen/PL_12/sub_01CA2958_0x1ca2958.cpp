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

// Function: sub_01CA2958
// Address: 0x1ca2958 - 0x1ca2960
void sub_01CA2958_0x1ca2958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2958_0x1ca2958");
#endif

    ctx->pc = 0x1ca2958u;

    // 0x1ca2958: 0x80b1b72  j           func_2C6DC8
    ctx->pc = 0x1CA2958u;
    ctx->pc = 0x2C6DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6DC8u, 0x1CA2958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2960u;
}
