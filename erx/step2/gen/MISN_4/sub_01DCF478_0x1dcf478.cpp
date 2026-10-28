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

// Function: sub_01DCF478
// Address: 0x1dcf478 - 0x1dcf488
void sub_01DCF478_0x1dcf478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF478_0x1dcf478");
#endif

    ctx->pc = 0x1dcf478u;

    // 0x1dcf478: 0x0  nop
    ctx->pc = 0x1dcf478u;
    // NOP
    // 0x1dcf47c: 0x0  nop
    ctx->pc = 0x1dcf47cu;
    // NOP
    // 0x1dcf480: 0x0  nop
    ctx->pc = 0x1dcf480u;
    // NOP
    // 0x1dcf484: 0x0  nop
    ctx->pc = 0x1dcf484u;
    // NOP
    ctx->pc = 0x1dcf488u;
}
