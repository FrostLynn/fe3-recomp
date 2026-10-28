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

// Function: sub_01C69E38
// Address: 0x1c69e38 - 0x1c69e48
void sub_01C69E38_0x1c69e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C69E38_0x1c69e38");
#endif

    ctx->pc = 0x1c69e38u;

    // 0x1c69e38: 0x0  nop
    ctx->pc = 0x1c69e38u;
    // NOP
    // 0x1c69e3c: 0x0  nop
    ctx->pc = 0x1c69e3cu;
    // NOP
    // 0x1c69e40: 0x0  nop
    ctx->pc = 0x1c69e40u;
    // NOP
    // 0x1c69e44: 0x0  nop
    ctx->pc = 0x1c69e44u;
    // NOP
    ctx->pc = 0x1c69e48u;
}
