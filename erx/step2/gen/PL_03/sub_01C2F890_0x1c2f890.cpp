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

// Function: sub_01C2F890
// Address: 0x1c2f890 - 0x1c2f898
void sub_01C2F890_0x1c2f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F890_0x1c2f890");
#endif

    ctx->pc = 0x1c2f890u;

    // 0x1c2f890: 0x80b0ee8  j           func_2C3BA0
    ctx->pc = 0x1C2F890u;
    ctx->pc = 0x2C3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BA0u, 0x1C2F890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F898u;
}
