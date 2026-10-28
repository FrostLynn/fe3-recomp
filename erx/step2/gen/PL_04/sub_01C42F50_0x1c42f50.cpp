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

// Function: sub_01C42F50
// Address: 0x1c42f50 - 0x1c42f60
void sub_01C42F50_0x1c42f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42F50_0x1c42f50");
#endif

    ctx->pc = 0x1c42f50u;

    // 0x1c42f50: 0x0  nop
    ctx->pc = 0x1c42f50u;
    // NOP
    // 0x1c42f54: 0x0  nop
    ctx->pc = 0x1c42f54u;
    // NOP
    // 0x1c42f58: 0x0  nop
    ctx->pc = 0x1c42f58u;
    // NOP
    // 0x1c42f5c: 0x0  nop
    ctx->pc = 0x1c42f5cu;
    // NOP
    ctx->pc = 0x1c42f60u;
}
