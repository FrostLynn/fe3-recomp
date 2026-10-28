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

// Function: sub_01CA2730
// Address: 0x1ca2730 - 0x1ca2740
void sub_01CA2730_0x1ca2730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2730_0x1ca2730");
#endif

    ctx->pc = 0x1ca2730u;

    // 0x1ca2730: 0x0  nop
    ctx->pc = 0x1ca2730u;
    // NOP
    // 0x1ca2734: 0x0  nop
    ctx->pc = 0x1ca2734u;
    // NOP
    // 0x1ca2738: 0x0  nop
    ctx->pc = 0x1ca2738u;
    // NOP
    // 0x1ca273c: 0x0  nop
    ctx->pc = 0x1ca273cu;
    // NOP
    ctx->pc = 0x1ca2740u;
}
