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

// Function: sub_01C6A938
// Address: 0x1c6a938 - 0x1c6a948
void sub_01C6A938_0x1c6a938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A938_0x1c6a938");
#endif

    ctx->pc = 0x1c6a938u;

    // 0x1c6a938: 0x0  nop
    ctx->pc = 0x1c6a938u;
    // NOP
    // 0x1c6a93c: 0x0  nop
    ctx->pc = 0x1c6a93cu;
    // NOP
    // 0x1c6a940: 0x0  nop
    ctx->pc = 0x1c6a940u;
    // NOP
    // 0x1c6a944: 0x0  nop
    ctx->pc = 0x1c6a944u;
    // NOP
    ctx->pc = 0x1c6a948u;
}
