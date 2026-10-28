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

// Function: sub_01D5CD30
// Address: 0x1d5cd30 - 0x1d5cd40
void sub_01D5CD30_0x1d5cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CD30_0x1d5cd30");
#endif

    ctx->pc = 0x1d5cd30u;

    // 0x1d5cd30: 0x0  nop
    ctx->pc = 0x1d5cd30u;
    // NOP
    // 0x1d5cd34: 0x0  nop
    ctx->pc = 0x1d5cd34u;
    // NOP
    // 0x1d5cd38: 0x0  nop
    ctx->pc = 0x1d5cd38u;
    // NOP
    // 0x1d5cd3c: 0x0  nop
    ctx->pc = 0x1d5cd3cu;
    // NOP
    ctx->pc = 0x1d5cd40u;
}
