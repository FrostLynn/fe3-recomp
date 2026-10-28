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

// Function: sub_01DE3778
// Address: 0x1de3778 - 0x1de3788
void sub_01DE3778_0x1de3778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3778_0x1de3778");
#endif

    ctx->pc = 0x1de3778u;

    // 0x1de3778: 0x0  nop
    ctx->pc = 0x1de3778u;
    // NOP
    // 0x1de377c: 0x0  nop
    ctx->pc = 0x1de377cu;
    // NOP
    // 0x1de3780: 0x0  nop
    ctx->pc = 0x1de3780u;
    // NOP
    // 0x1de3784: 0x0  nop
    ctx->pc = 0x1de3784u;
    // NOP
    ctx->pc = 0x1de3788u;
}
