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

// Function: sub_01D19B78
// Address: 0x1d19b78 - 0x1d19b88
void sub_01D19B78_0x1d19b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19B78_0x1d19b78");
#endif

    ctx->pc = 0x1d19b78u;

    // 0x1d19b78: 0x0  nop
    ctx->pc = 0x1d19b78u;
    // NOP
    // 0x1d19b7c: 0x0  nop
    ctx->pc = 0x1d19b7cu;
    // NOP
    // 0x1d19b80: 0x0  nop
    ctx->pc = 0x1d19b80u;
    // NOP
    // 0x1d19b84: 0x0  nop
    ctx->pc = 0x1d19b84u;
    // NOP
    ctx->pc = 0x1d19b88u;
}
