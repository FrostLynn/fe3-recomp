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

// Function: sub_01CB6730
// Address: 0x1cb6730 - 0x1cb6740
void sub_01CB6730_0x1cb6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6730_0x1cb6730");
#endif

    ctx->pc = 0x1cb6730u;

    // 0x1cb6730: 0x0  nop
    ctx->pc = 0x1cb6730u;
    // NOP
    // 0x1cb6734: 0x0  nop
    ctx->pc = 0x1cb6734u;
    // NOP
    // 0x1cb6738: 0x0  nop
    ctx->pc = 0x1cb6738u;
    // NOP
    // 0x1cb673c: 0x0  nop
    ctx->pc = 0x1cb673cu;
    // NOP
    ctx->pc = 0x1cb6740u;
}
