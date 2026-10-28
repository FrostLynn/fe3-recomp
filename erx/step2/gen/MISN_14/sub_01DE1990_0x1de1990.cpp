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

// Function: sub_01DE1990
// Address: 0x1de1990 - 0x1de19a0
void sub_01DE1990_0x1de1990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1990_0x1de1990");
#endif

    ctx->pc = 0x1de1990u;

    // 0x1de1990: 0x0  nop
    ctx->pc = 0x1de1990u;
    // NOP
    // 0x1de1994: 0x0  nop
    ctx->pc = 0x1de1994u;
    // NOP
    // 0x1de1998: 0x0  nop
    ctx->pc = 0x1de1998u;
    // NOP
    // 0x1de199c: 0x0  nop
    ctx->pc = 0x1de199cu;
    // NOP
    ctx->pc = 0x1de19a0u;
}
