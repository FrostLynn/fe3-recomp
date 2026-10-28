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

// Function: sub_01C30230
// Address: 0x1c30230 - 0x1c30240
void sub_01C30230_0x1c30230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30230_0x1c30230");
#endif

    ctx->pc = 0x1c30230u;

    // 0x1c30230: 0x0  nop
    ctx->pc = 0x1c30230u;
    // NOP
    // 0x1c30234: 0x0  nop
    ctx->pc = 0x1c30234u;
    // NOP
    // 0x1c30238: 0x0  nop
    ctx->pc = 0x1c30238u;
    // NOP
    // 0x1c3023c: 0x0  nop
    ctx->pc = 0x1c3023cu;
    // NOP
    ctx->pc = 0x1c30240u;
}
