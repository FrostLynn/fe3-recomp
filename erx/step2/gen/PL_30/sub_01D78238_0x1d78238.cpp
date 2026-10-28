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

// Function: sub_01D78238
// Address: 0x1d78238 - 0x1d78248
void sub_01D78238_0x1d78238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78238_0x1d78238");
#endif

    ctx->pc = 0x1d78238u;

    // 0x1d78238: 0x0  nop
    ctx->pc = 0x1d78238u;
    // NOP
    // 0x1d7823c: 0x0  nop
    ctx->pc = 0x1d7823cu;
    // NOP
    // 0x1d78240: 0x0  nop
    ctx->pc = 0x1d78240u;
    // NOP
    // 0x1d78244: 0x0  nop
    ctx->pc = 0x1d78244u;
    // NOP
    ctx->pc = 0x1d78248u;
}
