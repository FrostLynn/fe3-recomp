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

// Function: sub_01DD9660
// Address: 0x1dd9660 - 0x1dd9668
void sub_01DD9660_0x1dd9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9660_0x1dd9660");
#endif

    ctx->pc = 0x1dd9660u;

    // 0x1dd9660: 0x80a63b4  j           func_298ED0
    ctx->pc = 0x1DD9660u;
    ctx->pc = 0x298ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298ED0u, 0x1DD9660u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD9668u;
}
