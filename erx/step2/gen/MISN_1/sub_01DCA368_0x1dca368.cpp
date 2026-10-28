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

// Function: sub_01DCA368
// Address: 0x1dca368 - 0x1dca378
void sub_01DCA368_0x1dca368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA368_0x1dca368");
#endif

    ctx->pc = 0x1dca368u;

    // 0x1dca368: 0x0  nop
    ctx->pc = 0x1dca368u;
    // NOP
    // 0x1dca36c: 0x0  nop
    ctx->pc = 0x1dca36cu;
    // NOP
    // 0x1dca370: 0x0  nop
    ctx->pc = 0x1dca370u;
    // NOP
    // 0x1dca374: 0x0  nop
    ctx->pc = 0x1dca374u;
    // NOP
    ctx->pc = 0x1dca378u;
}
