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

// Function: sub_01CFDD70
// Address: 0x1cfdd70 - 0x1cfdd80
void sub_01CFDD70_0x1cfdd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD70_0x1cfdd70");
#endif

    ctx->pc = 0x1cfdd70u;

    // 0x1cfdd70: 0x0  nop
    ctx->pc = 0x1cfdd70u;
    // NOP
    // 0x1cfdd74: 0x0  nop
    ctx->pc = 0x1cfdd74u;
    // NOP
    // 0x1cfdd78: 0x0  nop
    ctx->pc = 0x1cfdd78u;
    // NOP
    // 0x1cfdd7c: 0x0  nop
    ctx->pc = 0x1cfdd7cu;
    // NOP
    ctx->pc = 0x1cfdd80u;
}
