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

// Function: sub_01DBBD18
// Address: 0x1dbbd18 - 0x1dbbd28
void sub_01DBBD18_0x1dbbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBD18_0x1dbbd18");
#endif

    ctx->pc = 0x1dbbd18u;

    // 0x1dbbd18: 0x0  nop
    ctx->pc = 0x1dbbd18u;
    // NOP
    // 0x1dbbd1c: 0x0  nop
    ctx->pc = 0x1dbbd1cu;
    // NOP
    // 0x1dbbd20: 0x0  nop
    ctx->pc = 0x1dbbd20u;
    // NOP
    // 0x1dbbd24: 0x0  nop
    ctx->pc = 0x1dbbd24u;
    // NOP
    ctx->pc = 0x1dbbd28u;
}
