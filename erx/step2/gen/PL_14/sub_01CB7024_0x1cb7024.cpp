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

// Function: sub_01CB7024
// Address: 0x1cb7024 - 0x1cb7028
void sub_01CB7024_0x1cb7024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7024_0x1cb7024");
#endif

    ctx->pc = 0x1cb7024u;

    // 0x1cb7024: 0x0  nop
    ctx->pc = 0x1cb7024u;
    // NOP
    ctx->pc = 0x1cb7028u;
}
