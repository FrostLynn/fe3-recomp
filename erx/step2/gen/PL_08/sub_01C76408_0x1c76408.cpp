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

// Function: sub_01C76408
// Address: 0x1c76408 - 0x1c76418
void sub_01C76408_0x1c76408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76408_0x1c76408");
#endif

    ctx->pc = 0x1c76408u;

    // 0x1c76408: 0x0  nop
    ctx->pc = 0x1c76408u;
    // NOP
    // 0x1c7640c: 0x0  nop
    ctx->pc = 0x1c7640cu;
    // NOP
    // 0x1c76410: 0x0  nop
    ctx->pc = 0x1c76410u;
    // NOP
    // 0x1c76414: 0x0  nop
    ctx->pc = 0x1c76414u;
    // NOP
    ctx->pc = 0x1c76418u;
}
