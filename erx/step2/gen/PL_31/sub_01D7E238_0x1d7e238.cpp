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

// Function: sub_01D7E238
// Address: 0x1d7e238 - 0x1d7e248
void sub_01D7E238_0x1d7e238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E238_0x1d7e238");
#endif

    ctx->pc = 0x1d7e238u;

    // 0x1d7e238: 0x0  nop
    ctx->pc = 0x1d7e238u;
    // NOP
    // 0x1d7e23c: 0x0  nop
    ctx->pc = 0x1d7e23cu;
    // NOP
    // 0x1d7e240: 0x0  nop
    ctx->pc = 0x1d7e240u;
    // NOP
    // 0x1d7e244: 0x0  nop
    ctx->pc = 0x1d7e244u;
    // NOP
    ctx->pc = 0x1d7e248u;
}
