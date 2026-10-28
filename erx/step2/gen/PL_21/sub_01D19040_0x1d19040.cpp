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

// Function: sub_01D19040
// Address: 0x1d19040 - 0x1d19050
void sub_01D19040_0x1d19040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19040_0x1d19040");
#endif

    ctx->pc = 0x1d19040u;

    // 0x1d19040: 0x0  nop
    ctx->pc = 0x1d19040u;
    // NOP
    // 0x1d19044: 0x0  nop
    ctx->pc = 0x1d19044u;
    // NOP
    // 0x1d19048: 0x0  nop
    ctx->pc = 0x1d19048u;
    // NOP
    // 0x1d1904c: 0x0  nop
    ctx->pc = 0x1d1904cu;
    // NOP
    ctx->pc = 0x1d19050u;
}
