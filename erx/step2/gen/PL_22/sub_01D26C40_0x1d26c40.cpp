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

// Function: sub_01D26C40
// Address: 0x1d26c40 - 0x1d26c50
void sub_01D26C40_0x1d26c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26C40_0x1d26c40");
#endif

    ctx->pc = 0x1d26c40u;

    // 0x1d26c40: 0x0  nop
    ctx->pc = 0x1d26c40u;
    // NOP
    // 0x1d26c44: 0x0  nop
    ctx->pc = 0x1d26c44u;
    // NOP
    // 0x1d26c48: 0x0  nop
    ctx->pc = 0x1d26c48u;
    // NOP
    // 0x1d26c4c: 0x0  nop
    ctx->pc = 0x1d26c4cu;
    // NOP
    ctx->pc = 0x1d26c50u;
}
