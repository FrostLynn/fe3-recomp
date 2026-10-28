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

// Function: sub_01C0F838
// Address: 0x1c0f838 - 0x1c0f840
void sub_01C0F838_0x1c0f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F838_0x1c0f838");
#endif

    ctx->pc = 0x1c0f838u;

    // 0x1c0f838: 0x80b0db2  j           func_2C36C8
    ctx->pc = 0x1C0F838u;
    ctx->pc = 0x2C36C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C36C8u, 0x1C0F838u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F840u;
}
