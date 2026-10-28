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

// Function: sub_01C00038
// Address: 0x1c00038 - 0x1c00048
void sub_01C00038_0x1c00038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00038_0x1c00038");
#endif

    ctx->pc = 0x1c00038u;

    // 0x1c00038: 0x0  nop
    ctx->pc = 0x1c00038u;
    // NOP
    // 0x1c0003c: 0x0  nop
    ctx->pc = 0x1c0003cu;
    // NOP
    // 0x1c00040: 0x0  nop
    ctx->pc = 0x1c00040u;
    // NOP
    // 0x1c00044: 0x0  nop
    ctx->pc = 0x1c00044u;
    // NOP
    ctx->pc = 0x1c00048u;
}
