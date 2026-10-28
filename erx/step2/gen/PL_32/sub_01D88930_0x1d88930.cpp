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

// Function: sub_01D88930
// Address: 0x1d88930 - 0x1d88940
void sub_01D88930_0x1d88930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88930_0x1d88930");
#endif

    ctx->pc = 0x1d88930u;

    // 0x1d88930: 0x0  nop
    ctx->pc = 0x1d88930u;
    // NOP
    // 0x1d88934: 0x0  nop
    ctx->pc = 0x1d88934u;
    // NOP
    // 0x1d88938: 0x0  nop
    ctx->pc = 0x1d88938u;
    // NOP
    // 0x1d8893c: 0x0  nop
    ctx->pc = 0x1d8893cu;
    // NOP
    ctx->pc = 0x1d88940u;
}
