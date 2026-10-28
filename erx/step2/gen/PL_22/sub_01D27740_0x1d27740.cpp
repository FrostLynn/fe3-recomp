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

// Function: sub_01D27740
// Address: 0x1d27740 - 0x1d27750
void sub_01D27740_0x1d27740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27740_0x1d27740");
#endif

    ctx->pc = 0x1d27740u;

    // 0x1d27740: 0x0  nop
    ctx->pc = 0x1d27740u;
    // NOP
    // 0x1d27744: 0x0  nop
    ctx->pc = 0x1d27744u;
    // NOP
    // 0x1d27748: 0x0  nop
    ctx->pc = 0x1d27748u;
    // NOP
    // 0x1d2774c: 0x0  nop
    ctx->pc = 0x1d2774cu;
    // NOP
    ctx->pc = 0x1d27750u;
}
