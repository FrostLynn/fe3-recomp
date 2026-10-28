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

// Function: sub_01CCDF18
// Address: 0x1ccdf18 - 0x1ccdf28
void sub_01CCDF18_0x1ccdf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCDF18_0x1ccdf18");
#endif

    ctx->pc = 0x1ccdf18u;

    // 0x1ccdf18: 0x0  nop
    ctx->pc = 0x1ccdf18u;
    // NOP
    // 0x1ccdf1c: 0x0  nop
    ctx->pc = 0x1ccdf1cu;
    // NOP
    // 0x1ccdf20: 0x0  nop
    ctx->pc = 0x1ccdf20u;
    // NOP
    // 0x1ccdf24: 0x0  nop
    ctx->pc = 0x1ccdf24u;
    // NOP
    ctx->pc = 0x1ccdf28u;
}
