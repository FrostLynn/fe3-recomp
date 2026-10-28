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

// Function: sub_01D7D730
// Address: 0x1d7d730 - 0x1d7d740
void sub_01D7D730_0x1d7d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7D730_0x1d7d730");
#endif

    ctx->pc = 0x1d7d730u;

    // 0x1d7d730: 0x0  nop
    ctx->pc = 0x1d7d730u;
    // NOP
    // 0x1d7d734: 0x0  nop
    ctx->pc = 0x1d7d734u;
    // NOP
    // 0x1d7d738: 0x0  nop
    ctx->pc = 0x1d7d738u;
    // NOP
    // 0x1d7d73c: 0x0  nop
    ctx->pc = 0x1d7d73cu;
    // NOP
    ctx->pc = 0x1d7d740u;
}
