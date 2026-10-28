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

// Function: sub_01C10210
// Address: 0x1c10210 - 0x1c10220
void sub_01C10210_0x1c10210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10210_0x1c10210");
#endif

    ctx->pc = 0x1c10210u;

    // 0x1c10210: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C10210u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C10210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C10218u;
    // 0x1c10218: 0x0  nop
    ctx->pc = 0x1c10218u;
    // NOP
    // 0x1c1021c: 0x0  nop
    ctx->pc = 0x1c1021cu;
    // NOP
    ctx->pc = 0x1c10220u;
}
