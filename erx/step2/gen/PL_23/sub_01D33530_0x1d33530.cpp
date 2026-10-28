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

// Function: sub_01D33530
// Address: 0x1d33530 - 0x1d33540
void sub_01D33530_0x1d33530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33530_0x1d33530");
#endif

    ctx->pc = 0x1d33530u;

    // 0x1d33530: 0x0  nop
    ctx->pc = 0x1d33530u;
    // NOP
    // 0x1d33534: 0x0  nop
    ctx->pc = 0x1d33534u;
    // NOP
    // 0x1d33538: 0x0  nop
    ctx->pc = 0x1d33538u;
    // NOP
    // 0x1d3353c: 0x0  nop
    ctx->pc = 0x1d3353cu;
    // NOP
    ctx->pc = 0x1d33540u;
}
