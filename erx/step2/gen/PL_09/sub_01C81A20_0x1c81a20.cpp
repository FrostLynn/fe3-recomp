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

// Function: sub_01C81A20
// Address: 0x1c81a20 - 0x1c81a30
void sub_01C81A20_0x1c81a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81A20_0x1c81a20");
#endif

    ctx->pc = 0x1c81a20u;

    // 0x1c81a20: 0x0  nop
    ctx->pc = 0x1c81a20u;
    // NOP
    // 0x1c81a24: 0x0  nop
    ctx->pc = 0x1c81a24u;
    // NOP
    // 0x1c81a28: 0x0  nop
    ctx->pc = 0x1c81a28u;
    // NOP
    // 0x1c81a2c: 0x0  nop
    ctx->pc = 0x1c81a2cu;
    // NOP
    ctx->pc = 0x1c81a30u;
}
