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

// Function: sub_01DC4570
// Address: 0x1dc4570 - 0x1dc4580
void sub_01DC4570_0x1dc4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4570_0x1dc4570");
#endif

    ctx->pc = 0x1dc4570u;

    // 0x1dc4570: 0x0  nop
    ctx->pc = 0x1dc4570u;
    // NOP
    // 0x1dc4574: 0x0  nop
    ctx->pc = 0x1dc4574u;
    // NOP
    // 0x1dc4578: 0x0  nop
    ctx->pc = 0x1dc4578u;
    // NOP
    // 0x1dc457c: 0x0  nop
    ctx->pc = 0x1dc457cu;
    // NOP
    ctx->pc = 0x1dc4580u;
}
