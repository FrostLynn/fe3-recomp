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

// Function: sub_01D9C930
// Address: 0x1d9c930 - 0x1d9c940
void sub_01D9C930_0x1d9c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9C930_0x1d9c930");
#endif

    ctx->pc = 0x1d9c930u;

    // 0x1d9c930: 0x0  nop
    ctx->pc = 0x1d9c930u;
    // NOP
    // 0x1d9c934: 0x0  nop
    ctx->pc = 0x1d9c934u;
    // NOP
    // 0x1d9c938: 0x0  nop
    ctx->pc = 0x1d9c938u;
    // NOP
    // 0x1d9c93c: 0x0  nop
    ctx->pc = 0x1d9c93cu;
    // NOP
    ctx->pc = 0x1d9c940u;
}
