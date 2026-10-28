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

// Function: sub_01C4F960
// Address: 0x1c4f960 - 0x1c4f970
void sub_01C4F960_0x1c4f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4F960_0x1c4f960");
#endif

    ctx->pc = 0x1c4f960u;

    // 0x1c4f960: 0x0  nop
    ctx->pc = 0x1c4f960u;
    // NOP
    // 0x1c4f964: 0x0  nop
    ctx->pc = 0x1c4f964u;
    // NOP
    // 0x1c4f968: 0x0  nop
    ctx->pc = 0x1c4f968u;
    // NOP
    // 0x1c4f96c: 0x0  nop
    ctx->pc = 0x1c4f96cu;
    // NOP
    ctx->pc = 0x1c4f970u;
}
