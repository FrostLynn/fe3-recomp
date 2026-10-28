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

// Function: sub_01D3C720
// Address: 0x1d3c720 - 0x1d3c730
void sub_01D3C720_0x1d3c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C720_0x1d3c720");
#endif

    ctx->pc = 0x1d3c720u;

    // 0x1d3c720: 0x0  nop
    ctx->pc = 0x1d3c720u;
    // NOP
    // 0x1d3c724: 0x0  nop
    ctx->pc = 0x1d3c724u;
    // NOP
    // 0x1d3c728: 0x0  nop
    ctx->pc = 0x1d3c728u;
    // NOP
    // 0x1d3c72c: 0x0  nop
    ctx->pc = 0x1d3c72cu;
    // NOP
    ctx->pc = 0x1d3c730u;
}
