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

// Function: sub_01DB0F30
// Address: 0x1db0f30 - 0x1db0f40
void sub_01DB0F30_0x1db0f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB0F30_0x1db0f30");
#endif

    ctx->pc = 0x1db0f30u;

    // 0x1db0f30: 0x0  nop
    ctx->pc = 0x1db0f30u;
    // NOP
    // 0x1db0f34: 0x0  nop
    ctx->pc = 0x1db0f34u;
    // NOP
    // 0x1db0f38: 0x0  nop
    ctx->pc = 0x1db0f38u;
    // NOP
    // 0x1db0f3c: 0x0  nop
    ctx->pc = 0x1db0f3cu;
    // NOP
    ctx->pc = 0x1db0f40u;
}
