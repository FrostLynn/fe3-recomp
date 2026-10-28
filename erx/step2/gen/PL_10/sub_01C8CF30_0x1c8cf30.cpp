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

// Function: sub_01C8CF30
// Address: 0x1c8cf30 - 0x1c8cf40
void sub_01C8CF30_0x1c8cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8CF30_0x1c8cf30");
#endif

    ctx->pc = 0x1c8cf30u;

    // 0x1c8cf30: 0x0  nop
    ctx->pc = 0x1c8cf30u;
    // NOP
    // 0x1c8cf34: 0x0  nop
    ctx->pc = 0x1c8cf34u;
    // NOP
    // 0x1c8cf38: 0x0  nop
    ctx->pc = 0x1c8cf38u;
    // NOP
    // 0x1c8cf3c: 0x0  nop
    ctx->pc = 0x1c8cf3cu;
    // NOP
    ctx->pc = 0x1c8cf40u;
}
