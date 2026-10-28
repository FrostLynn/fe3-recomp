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

// Function: sub_01D3BC30
// Address: 0x1d3bc30 - 0x1d3bc40
void sub_01D3BC30_0x1d3bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3BC30_0x1d3bc30");
#endif

    ctx->pc = 0x1d3bc30u;

    // 0x1d3bc30: 0x0  nop
    ctx->pc = 0x1d3bc30u;
    // NOP
    // 0x1d3bc34: 0x0  nop
    ctx->pc = 0x1d3bc34u;
    // NOP
    // 0x1d3bc38: 0x0  nop
    ctx->pc = 0x1d3bc38u;
    // NOP
    // 0x1d3bc3c: 0x0  nop
    ctx->pc = 0x1d3bc3cu;
    // NOP
    ctx->pc = 0x1d3bc40u;
}
