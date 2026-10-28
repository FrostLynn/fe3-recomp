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

// Function: sub_01DB1A20
// Address: 0x1db1a20 - 0x1db1a30
void sub_01DB1A20_0x1db1a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1A20_0x1db1a20");
#endif

    ctx->pc = 0x1db1a20u;

    // 0x1db1a20: 0x0  nop
    ctx->pc = 0x1db1a20u;
    // NOP
    // 0x1db1a24: 0x0  nop
    ctx->pc = 0x1db1a24u;
    // NOP
    // 0x1db1a28: 0x0  nop
    ctx->pc = 0x1db1a28u;
    // NOP
    // 0x1db1a2c: 0x0  nop
    ctx->pc = 0x1db1a2cu;
    // NOP
    ctx->pc = 0x1db1a30u;
}
