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

// Function: sub_01C50488
// Address: 0x1c50488 - 0x1c50498
void sub_01C50488_0x1c50488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50488_0x1c50488");
#endif

    ctx->pc = 0x1c50488u;

    // 0x1c50488: 0x0  nop
    ctx->pc = 0x1c50488u;
    // NOP
    // 0x1c5048c: 0x0  nop
    ctx->pc = 0x1c5048cu;
    // NOP
    // 0x1c50490: 0x0  nop
    ctx->pc = 0x1c50490u;
    // NOP
    // 0x1c50494: 0x0  nop
    ctx->pc = 0x1c50494u;
    // NOP
    ctx->pc = 0x1c50498u;
}
