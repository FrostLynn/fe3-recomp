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

// Function: sub_01C99630
// Address: 0x1c99630 - 0x1c99640
void sub_01C99630_0x1c99630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99630_0x1c99630");
#endif

    ctx->pc = 0x1c99630u;

    // 0x1c99630: 0x0  nop
    ctx->pc = 0x1c99630u;
    // NOP
    // 0x1c99634: 0x0  nop
    ctx->pc = 0x1c99634u;
    // NOP
    // 0x1c99638: 0x0  nop
    ctx->pc = 0x1c99638u;
    // NOP
    // 0x1c9963c: 0x0  nop
    ctx->pc = 0x1c9963cu;
    // NOP
    ctx->pc = 0x1c99640u;
}
