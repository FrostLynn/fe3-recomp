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

// Function: sub_01CA2890
// Address: 0x1ca2890 - 0x1ca2898
void sub_01CA2890_0x1ca2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2890_0x1ca2890");
#endif

    ctx->pc = 0x1ca2890u;

    // 0x1ca2890: 0x80b0f02  j           func_2C3C08
    ctx->pc = 0x1CA2890u;
    ctx->pc = 0x2C3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C08u, 0x1CA2890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2898u;
}
