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

// Function: sub_01CA2ED8
// Address: 0x1ca2ed8 - 0x1ca2ee0
void sub_01CA2ED8_0x1ca2ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2ED8_0x1ca2ed8");
#endif

    ctx->pc = 0x1ca2ed8u;

    // 0x1ca2ed8: 0x80b2386  j           func_2C8E18
    ctx->pc = 0x1CA2ED8u;
    ctx->pc = 0x2C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E18u, 0x1CA2ED8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2EE0u;
}
