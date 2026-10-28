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

// Function: sub_01D0C840
// Address: 0x1d0c840 - 0x1d0c850
void sub_01D0C840_0x1d0c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C840_0x1d0c840");
#endif

    ctx->pc = 0x1d0c840u;

    // 0x1d0c840: 0x0  nop
    ctx->pc = 0x1d0c840u;
    // NOP
    // 0x1d0c844: 0x0  nop
    ctx->pc = 0x1d0c844u;
    // NOP
    // 0x1d0c848: 0x0  nop
    ctx->pc = 0x1d0c848u;
    // NOP
    // 0x1d0c84c: 0x0  nop
    ctx->pc = 0x1d0c84cu;
    // NOP
    ctx->pc = 0x1d0c850u;
}
