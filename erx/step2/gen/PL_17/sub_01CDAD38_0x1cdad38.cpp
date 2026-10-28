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

// Function: sub_01CDAD38
// Address: 0x1cdad38 - 0x1cdad48
void sub_01CDAD38_0x1cdad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD38_0x1cdad38");
#endif

    ctx->pc = 0x1cdad38u;

    // 0x1cdad38: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CDAD38u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CDAD38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAD40u;
    // 0x1cdad40: 0x0  nop
    ctx->pc = 0x1cdad40u;
    // NOP
    // 0x1cdad44: 0x0  nop
    ctx->pc = 0x1cdad44u;
    // NOP
    ctx->pc = 0x1cdad48u;
}
