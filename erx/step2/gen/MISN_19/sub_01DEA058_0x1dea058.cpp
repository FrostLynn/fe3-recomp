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

// Function: sub_01DEA058
// Address: 0x1dea058 - 0x1dea060
void sub_01DEA058_0x1dea058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA058_0x1dea058");
#endif

    ctx->pc = 0x1dea058u;

    // 0x1dea058: 0x80a634a  j           func_298D28
    ctx->pc = 0x1DEA058u;
    ctx->pc = 0x298D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298D28u, 0x1DEA058u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DEA060u;
}
