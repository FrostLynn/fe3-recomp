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

// Function: sub_01DDEF70
// Address: 0x1ddef70 - 0x1ddef80
void sub_01DDEF70_0x1ddef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDEF70_0x1ddef70");
#endif

    ctx->pc = 0x1ddef70u;

    // 0x1ddef70: 0x0  nop
    ctx->pc = 0x1ddef70u;
    // NOP
    // 0x1ddef74: 0x0  nop
    ctx->pc = 0x1ddef74u;
    // NOP
    // 0x1ddef78: 0x0  nop
    ctx->pc = 0x1ddef78u;
    // NOP
    // 0x1ddef7c: 0x0  nop
    ctx->pc = 0x1ddef7cu;
    // NOP
    ctx->pc = 0x1ddef80u;
}
