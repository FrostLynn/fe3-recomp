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

// Function: sub_01CF0048
// Address: 0x1cf0048 - 0x1cf0058
void sub_01CF0048_0x1cf0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0048_0x1cf0048");
#endif

    ctx->pc = 0x1cf0048u;

    // 0x1cf0048: 0x0  nop
    ctx->pc = 0x1cf0048u;
    // NOP
    // 0x1cf004c: 0x0  nop
    ctx->pc = 0x1cf004cu;
    // NOP
    // 0x1cf0050: 0x0  nop
    ctx->pc = 0x1cf0050u;
    // NOP
    // 0x1cf0054: 0x0  nop
    ctx->pc = 0x1cf0054u;
    // NOP
    ctx->pc = 0x1cf0058u;
}
