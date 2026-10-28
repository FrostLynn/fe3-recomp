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

// Function: sub_01DA7930
// Address: 0x1da7930 - 0x1da7940
void sub_01DA7930_0x1da7930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7930_0x1da7930");
#endif

    ctx->pc = 0x1da7930u;

    // 0x1da7930: 0x0  nop
    ctx->pc = 0x1da7930u;
    // NOP
    // 0x1da7934: 0x0  nop
    ctx->pc = 0x1da7934u;
    // NOP
    // 0x1da7938: 0x0  nop
    ctx->pc = 0x1da7938u;
    // NOP
    // 0x1da793c: 0x0  nop
    ctx->pc = 0x1da793cu;
    // NOP
    ctx->pc = 0x1da7940u;
}
