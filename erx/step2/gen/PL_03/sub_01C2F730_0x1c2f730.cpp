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

// Function: sub_01C2F730
// Address: 0x1c2f730 - 0x1c2f740
void sub_01C2F730_0x1c2f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F730_0x1c2f730");
#endif

    ctx->pc = 0x1c2f730u;

    // 0x1c2f730: 0x0  nop
    ctx->pc = 0x1c2f730u;
    // NOP
    // 0x1c2f734: 0x0  nop
    ctx->pc = 0x1c2f734u;
    // NOP
    // 0x1c2f738: 0x0  nop
    ctx->pc = 0x1c2f738u;
    // NOP
    // 0x1c2f73c: 0x0  nop
    ctx->pc = 0x1c2f73cu;
    // NOP
    ctx->pc = 0x1c2f740u;
}
