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

// Function: sub_01C42430
// Address: 0x1c42430 - 0x1c42440
void sub_01C42430_0x1c42430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42430_0x1c42430");
#endif

    ctx->pc = 0x1c42430u;

    // 0x1c42430: 0x0  nop
    ctx->pc = 0x1c42430u;
    // NOP
    // 0x1c42434: 0x0  nop
    ctx->pc = 0x1c42434u;
    // NOP
    // 0x1c42438: 0x0  nop
    ctx->pc = 0x1c42438u;
    // NOP
    // 0x1c4243c: 0x0  nop
    ctx->pc = 0x1c4243cu;
    // NOP
    ctx->pc = 0x1c42440u;
}
