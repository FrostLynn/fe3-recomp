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

// Function: sub_01DD9680
// Address: 0x1dd9680 - 0x1dd9690
void sub_01DD9680_0x1dd9680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9680_0x1dd9680");
#endif

    ctx->pc = 0x1dd9680u;

    // 0x1dd9680: 0x0  nop
    ctx->pc = 0x1dd9680u;
    // NOP
    // 0x1dd9684: 0x0  nop
    ctx->pc = 0x1dd9684u;
    // NOP
    // 0x1dd9688: 0x0  nop
    ctx->pc = 0x1dd9688u;
    // NOP
    // 0x1dd968c: 0x0  nop
    ctx->pc = 0x1dd968cu;
    // NOP
    ctx->pc = 0x1dd9690u;
}
