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

// Function: sub_01C0F730
// Address: 0x1c0f730 - 0x1c0f740
void sub_01C0F730_0x1c0f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F730_0x1c0f730");
#endif

    ctx->pc = 0x1c0f730u;

    // 0x1c0f730: 0x0  nop
    ctx->pc = 0x1c0f730u;
    // NOP
    // 0x1c0f734: 0x0  nop
    ctx->pc = 0x1c0f734u;
    // NOP
    // 0x1c0f738: 0x0  nop
    ctx->pc = 0x1c0f738u;
    // NOP
    // 0x1c0f73c: 0x0  nop
    ctx->pc = 0x1c0f73cu;
    // NOP
    ctx->pc = 0x1c0f740u;
}
