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

// Function: sub_01DCBB98
// Address: 0x1dcbb98 - 0x1dcbba8
void sub_01DCBB98_0x1dcbb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBB98_0x1dcbb98");
#endif

    ctx->pc = 0x1dcbb98u;

    // 0x1dcbb98: 0x0  nop
    ctx->pc = 0x1dcbb98u;
    // NOP
    // 0x1dcbb9c: 0x0  nop
    ctx->pc = 0x1dcbb9cu;
    // NOP
    // 0x1dcbba0: 0x0  nop
    ctx->pc = 0x1dcbba0u;
    // NOP
    // 0x1dcbba4: 0x0  nop
    ctx->pc = 0x1dcbba4u;
    // NOP
    ctx->pc = 0x1dcbba8u;
}
