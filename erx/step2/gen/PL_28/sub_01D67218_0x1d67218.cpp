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

// Function: sub_01D67218
// Address: 0x1d67218 - 0x1d67228
void sub_01D67218_0x1d67218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67218_0x1d67218");
#endif

    ctx->pc = 0x1d67218u;

    // 0x1d67218: 0x0  nop
    ctx->pc = 0x1d67218u;
    // NOP
    // 0x1d6721c: 0x0  nop
    ctx->pc = 0x1d6721cu;
    // NOP
    // 0x1d67220: 0x0  nop
    ctx->pc = 0x1d67220u;
    // NOP
    // 0x1d67224: 0x0  nop
    ctx->pc = 0x1d67224u;
    // NOP
    ctx->pc = 0x1d67228u;
}
