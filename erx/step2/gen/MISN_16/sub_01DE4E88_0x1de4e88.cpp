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

// Function: sub_01DE4E88
// Address: 0x1de4e88 - 0x1de4e98
void sub_01DE4E88_0x1de4e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E88_0x1de4e88");
#endif

    ctx->pc = 0x1de4e88u;

    // 0x1de4e88: 0x0  nop
    ctx->pc = 0x1de4e88u;
    // NOP
    // 0x1de4e8c: 0x0  nop
    ctx->pc = 0x1de4e8cu;
    // NOP
    // 0x1de4e90: 0x0  nop
    ctx->pc = 0x1de4e90u;
    // NOP
    // 0x1de4e94: 0x0  nop
    ctx->pc = 0x1de4e94u;
    // NOP
    ctx->pc = 0x1de4e98u;
}
