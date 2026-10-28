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

// Function: sub_01D89420
// Address: 0x1d89420 - 0x1d89430
void sub_01D89420_0x1d89420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89420_0x1d89420");
#endif

    ctx->pc = 0x1d89420u;

    // 0x1d89420: 0x0  nop
    ctx->pc = 0x1d89420u;
    // NOP
    // 0x1d89424: 0x0  nop
    ctx->pc = 0x1d89424u;
    // NOP
    // 0x1d89428: 0x0  nop
    ctx->pc = 0x1d89428u;
    // NOP
    // 0x1d8942c: 0x0  nop
    ctx->pc = 0x1d8942cu;
    // NOP
    ctx->pc = 0x1d89430u;
}
