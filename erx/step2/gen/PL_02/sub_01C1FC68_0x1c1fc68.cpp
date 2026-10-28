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

// Function: sub_01C1FC68
// Address: 0x1c1fc68 - 0x1c1fc78
void sub_01C1FC68_0x1c1fc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FC68_0x1c1fc68");
#endif

    ctx->pc = 0x1c1fc68u;

    // 0x1c1fc68: 0x0  nop
    ctx->pc = 0x1c1fc68u;
    // NOP
    // 0x1c1fc6c: 0x0  nop
    ctx->pc = 0x1c1fc6cu;
    // NOP
    // 0x1c1fc70: 0x0  nop
    ctx->pc = 0x1c1fc70u;
    // NOP
    // 0x1c1fc74: 0x0  nop
    ctx->pc = 0x1c1fc74u;
    // NOP
    ctx->pc = 0x1c1fc78u;
}
