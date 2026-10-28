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

// Function: sub_01D93338
// Address: 0x1d93338 - 0x1d93348
void sub_01D93338_0x1d93338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93338_0x1d93338");
#endif

    ctx->pc = 0x1d93338u;

    // 0x1d93338: 0x0  nop
    ctx->pc = 0x1d93338u;
    // NOP
    // 0x1d9333c: 0x0  nop
    ctx->pc = 0x1d9333cu;
    // NOP
    // 0x1d93340: 0x0  nop
    ctx->pc = 0x1d93340u;
    // NOP
    // 0x1d93344: 0x0  nop
    ctx->pc = 0x1d93344u;
    // NOP
    ctx->pc = 0x1d93348u;
}
