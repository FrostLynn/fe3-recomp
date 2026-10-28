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

// Function: sub_01C1FBA8
// Address: 0x1c1fba8 - 0x1c1fbb0
void sub_01C1FBA8_0x1c1fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FBA8_0x1c1fba8");
#endif

    ctx->pc = 0x1c1fba8u;

    // 0x1c1fba8: 0x80b2b1a  j           func_2CAC68
    ctx->pc = 0x1C1FBA8u;
    ctx->pc = 0x2CAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC68u, 0x1C1FBA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FBB0u;
}
