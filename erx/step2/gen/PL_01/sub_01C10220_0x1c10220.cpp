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

// Function: sub_01C10220
// Address: 0x1c10220 - 0x1c10230
void sub_01C10220_0x1c10220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10220_0x1c10220");
#endif

    ctx->pc = 0x1c10220u;

    // 0x1c10220: 0x0  nop
    ctx->pc = 0x1c10220u;
    // NOP
    // 0x1c10224: 0x0  nop
    ctx->pc = 0x1c10224u;
    // NOP
    // 0x1c10228: 0x0  nop
    ctx->pc = 0x1c10228u;
    // NOP
    // 0x1c1022c: 0x0  nop
    ctx->pc = 0x1c1022cu;
    // NOP
    ctx->pc = 0x1c10230u;
}
