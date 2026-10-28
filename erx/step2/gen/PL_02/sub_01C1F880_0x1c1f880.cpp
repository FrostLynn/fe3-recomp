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

// Function: sub_01C1F880
// Address: 0x1c1f880 - 0x1c1f888
void sub_01C1F880_0x1c1f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F880_0x1c1f880");
#endif

    ctx->pc = 0x1c1f880u;

    // 0x1c1f880: 0x80b214e  j           func_2C8538
    ctx->pc = 0x1C1F880u;
    ctx->pc = 0x2C8538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8538u, 0x1C1F880u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F888u;
}
