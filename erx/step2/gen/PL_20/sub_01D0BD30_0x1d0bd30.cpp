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

// Function: sub_01D0BD30
// Address: 0x1d0bd30 - 0x1d0bd40
void sub_01D0BD30_0x1d0bd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BD30_0x1d0bd30");
#endif

    ctx->pc = 0x1d0bd30u;

    // 0x1d0bd30: 0x0  nop
    ctx->pc = 0x1d0bd30u;
    // NOP
    // 0x1d0bd34: 0x0  nop
    ctx->pc = 0x1d0bd34u;
    // NOP
    // 0x1d0bd38: 0x0  nop
    ctx->pc = 0x1d0bd38u;
    // NOP
    // 0x1d0bd3c: 0x0  nop
    ctx->pc = 0x1d0bd3cu;
    // NOP
    ctx->pc = 0x1d0bd40u;
}
