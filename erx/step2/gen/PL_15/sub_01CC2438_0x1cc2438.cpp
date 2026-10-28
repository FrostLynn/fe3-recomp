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

// Function: sub_01CC2438
// Address: 0x1cc2438 - 0x1cc2448
void sub_01CC2438_0x1cc2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2438_0x1cc2438");
#endif

    ctx->pc = 0x1cc2438u;

    // 0x1cc2438: 0x0  nop
    ctx->pc = 0x1cc2438u;
    // NOP
    // 0x1cc243c: 0x0  nop
    ctx->pc = 0x1cc243cu;
    // NOP
    // 0x1cc2440: 0x0  nop
    ctx->pc = 0x1cc2440u;
    // NOP
    // 0x1cc2444: 0x0  nop
    ctx->pc = 0x1cc2444u;
    // NOP
    ctx->pc = 0x1cc2448u;
}
