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

// Function: sub_01D5D7D8
// Address: 0x1d5d7d8 - 0x1d5d7e8
void sub_01D5D7D8_0x1d5d7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D7D8_0x1d5d7d8");
#endif

    ctx->pc = 0x1d5d7d8u;

    // 0x1d5d7d8: 0x0  nop
    ctx->pc = 0x1d5d7d8u;
    // NOP
    // 0x1d5d7dc: 0x0  nop
    ctx->pc = 0x1d5d7dcu;
    // NOP
    // 0x1d5d7e0: 0x0  nop
    ctx->pc = 0x1d5d7e0u;
    // NOP
    // 0x1d5d7e4: 0x0  nop
    ctx->pc = 0x1d5d7e4u;
    // NOP
    ctx->pc = 0x1d5d7e8u;
}
