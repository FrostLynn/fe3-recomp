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

// Function: sub_01DBB938
// Address: 0x1dbb938 - 0x1dbb948
void sub_01DBB938_0x1dbb938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBB938_0x1dbb938");
#endif

    ctx->pc = 0x1dbb938u;

    // 0x1dbb938: 0x0  nop
    ctx->pc = 0x1dbb938u;
    // NOP
    // 0x1dbb93c: 0x0  nop
    ctx->pc = 0x1dbb93cu;
    // NOP
    // 0x1dbb940: 0x0  nop
    ctx->pc = 0x1dbb940u;
    // NOP
    // 0x1dbb944: 0x0  nop
    ctx->pc = 0x1dbb944u;
    // NOP
    ctx->pc = 0x1dbb948u;
}
