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

// Function: sub_01DD6C88
// Address: 0x1dd6c88 - 0x1dd6c98
void sub_01DD6C88_0x1dd6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C88_0x1dd6c88");
#endif

    ctx->pc = 0x1dd6c88u;

    // 0x1dd6c88: 0x0  nop
    ctx->pc = 0x1dd6c88u;
    // NOP
    // 0x1dd6c8c: 0x0  nop
    ctx->pc = 0x1dd6c8cu;
    // NOP
    // 0x1dd6c90: 0x0  nop
    ctx->pc = 0x1dd6c90u;
    // NOP
    // 0x1dd6c94: 0x0  nop
    ctx->pc = 0x1dd6c94u;
    // NOP
    ctx->pc = 0x1dd6c98u;
}
