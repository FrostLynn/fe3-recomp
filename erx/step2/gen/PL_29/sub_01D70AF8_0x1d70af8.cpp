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

// Function: sub_01D70AF8
// Address: 0x1d70af8 - 0x1d70b08
void sub_01D70AF8_0x1d70af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70AF8_0x1d70af8");
#endif

    ctx->pc = 0x1d70af8u;

    // 0x1d70af8: 0x0  nop
    ctx->pc = 0x1d70af8u;
    // NOP
    // 0x1d70afc: 0x0  nop
    ctx->pc = 0x1d70afcu;
    // NOP
    // 0x1d70b00: 0x0  nop
    ctx->pc = 0x1d70b00u;
    // NOP
    // 0x1d70b04: 0x0  nop
    ctx->pc = 0x1d70b04u;
    // NOP
    ctx->pc = 0x1d70b08u;
}
