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

// Function: sub_01C5F530
// Address: 0x1c5f530 - 0x1c5f540
void sub_01C5F530_0x1c5f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F530_0x1c5f530");
#endif

    ctx->pc = 0x1c5f530u;

    // 0x1c5f530: 0x0  nop
    ctx->pc = 0x1c5f530u;
    // NOP
    // 0x1c5f534: 0x0  nop
    ctx->pc = 0x1c5f534u;
    // NOP
    // 0x1c5f538: 0x0  nop
    ctx->pc = 0x1c5f538u;
    // NOP
    // 0x1c5f53c: 0x0  nop
    ctx->pc = 0x1c5f53cu;
    // NOP
    ctx->pc = 0x1c5f540u;
}
