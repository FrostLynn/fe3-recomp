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

// Function: sub_01DE0040
// Address: 0x1de0040 - 0x1de0050
void sub_01DE0040_0x1de0040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0040_0x1de0040");
#endif

    ctx->pc = 0x1de0040u;

    // 0x1de0040: 0x0  nop
    ctx->pc = 0x1de0040u;
    // NOP
    // 0x1de0044: 0x0  nop
    ctx->pc = 0x1de0044u;
    // NOP
    // 0x1de0048: 0x0  nop
    ctx->pc = 0x1de0048u;
    // NOP
    // 0x1de004c: 0x0  nop
    ctx->pc = 0x1de004cu;
    // NOP
    ctx->pc = 0x1de0050u;
}
