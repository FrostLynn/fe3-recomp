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

// Function: sub_01DCD880
// Address: 0x1dcd880 - 0x1dcd890
void sub_01DCD880_0x1dcd880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCD880_0x1dcd880");
#endif

    ctx->pc = 0x1dcd880u;

    // 0x1dcd880: 0x0  nop
    ctx->pc = 0x1dcd880u;
    // NOP
    // 0x1dcd884: 0x0  nop
    ctx->pc = 0x1dcd884u;
    // NOP
    // 0x1dcd888: 0x0  nop
    ctx->pc = 0x1dcd888u;
    // NOP
    // 0x1dcd88c: 0x0  nop
    ctx->pc = 0x1dcd88cu;
    // NOP
    ctx->pc = 0x1dcd890u;
}
