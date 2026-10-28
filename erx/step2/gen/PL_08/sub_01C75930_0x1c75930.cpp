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

// Function: sub_01C75930
// Address: 0x1c75930 - 0x1c75940
void sub_01C75930_0x1c75930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75930_0x1c75930");
#endif

    ctx->pc = 0x1c75930u;

    // 0x1c75930: 0x0  nop
    ctx->pc = 0x1c75930u;
    // NOP
    // 0x1c75934: 0x0  nop
    ctx->pc = 0x1c75934u;
    // NOP
    // 0x1c75938: 0x0  nop
    ctx->pc = 0x1c75938u;
    // NOP
    // 0x1c7593c: 0x0  nop
    ctx->pc = 0x1c7593cu;
    // NOP
    ctx->pc = 0x1c75940u;
}
