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

// Function: sub_01C1FC40
// Address: 0x1c1fc40 - 0x1c1fc48
void sub_01C1FC40_0x1c1fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FC40_0x1c1fc40");
#endif

    ctx->pc = 0x1c1fc40u;

    // 0x1c1fc40: 0x80b32a2  j           func_2CCA88
    ctx->pc = 0x1C1FC40u;
    ctx->pc = 0x2CCA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCA88u, 0x1C1FC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FC48u;
}
