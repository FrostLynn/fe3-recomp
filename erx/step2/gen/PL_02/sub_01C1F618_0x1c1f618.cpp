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

// Function: sub_01C1F618
// Address: 0x1c1f618 - 0x1c1f620
void sub_01C1F618_0x1c1f618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F618_0x1c1f618");
#endif

    ctx->pc = 0x1c1f618u;

    // 0x1c1f618: 0x80b113e  j           func_2C44F8
    ctx->pc = 0x1C1F618u;
    ctx->pc = 0x2C44F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44F8u, 0x1C1F618u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F620u;
}
