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

// Function: sub_01CB7228
// Address: 0x1cb7228 - 0x1cb7238
void sub_01CB7228_0x1cb7228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7228_0x1cb7228");
#endif

    ctx->pc = 0x1cb7228u;

    // 0x1cb7228: 0x0  nop
    ctx->pc = 0x1cb7228u;
    // NOP
    // 0x1cb722c: 0x0  nop
    ctx->pc = 0x1cb722cu;
    // NOP
    // 0x1cb7230: 0x0  nop
    ctx->pc = 0x1cb7230u;
    // NOP
    // 0x1cb7234: 0x0  nop
    ctx->pc = 0x1cb7234u;
    // NOP
    ctx->pc = 0x1cb7238u;
}
