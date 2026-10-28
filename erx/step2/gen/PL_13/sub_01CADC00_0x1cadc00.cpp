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

// Function: sub_01CADC00
// Address: 0x1cadc00 - 0x1cadc10
void sub_01CADC00_0x1cadc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADC00_0x1cadc00");
#endif

    ctx->pc = 0x1cadc00u;

    // 0x1cadc00: 0x0  nop
    ctx->pc = 0x1cadc00u;
    // NOP
    // 0x1cadc04: 0x0  nop
    ctx->pc = 0x1cadc04u;
    // NOP
    // 0x1cadc08: 0x0  nop
    ctx->pc = 0x1cadc08u;
    // NOP
    // 0x1cadc0c: 0x0  nop
    ctx->pc = 0x1cadc0cu;
    // NOP
    ctx->pc = 0x1cadc10u;
}
