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

// Function: sub_01DEA078
// Address: 0x1dea078 - 0x1dea088
void sub_01DEA078_0x1dea078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA078_0x1dea078");
#endif

    ctx->pc = 0x1dea078u;

    // 0x1dea078: 0x0  nop
    ctx->pc = 0x1dea078u;
    // NOP
    // 0x1dea07c: 0x0  nop
    ctx->pc = 0x1dea07cu;
    // NOP
    // 0x1dea080: 0x0  nop
    ctx->pc = 0x1dea080u;
    // NOP
    // 0x1dea084: 0x0  nop
    ctx->pc = 0x1dea084u;
    // NOP
    ctx->pc = 0x1dea088u;
}
