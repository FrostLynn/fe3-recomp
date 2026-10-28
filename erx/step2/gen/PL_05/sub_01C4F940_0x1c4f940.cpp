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

// Function: sub_01C4F940
// Address: 0x1c4f940 - 0x1c4f948
void sub_01C4F940_0x1c4f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4F940_0x1c4f940");
#endif

    ctx->pc = 0x1c4f940u;

    // 0x1c4f940: 0x80d97d8  j           func_365F60
    ctx->pc = 0x1C4F940u;
    ctx->pc = 0x365F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F60u, 0x1C4F940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4F948u;
}
