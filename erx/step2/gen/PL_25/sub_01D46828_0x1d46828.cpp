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

// Function: sub_01D46828
// Address: 0x1d46828 - 0x1d46838
void sub_01D46828_0x1d46828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46828_0x1d46828");
#endif

    ctx->pc = 0x1d46828u;

    // 0x1d46828: 0x0  nop
    ctx->pc = 0x1d46828u;
    // NOP
    // 0x1d4682c: 0x0  nop
    ctx->pc = 0x1d4682cu;
    // NOP
    // 0x1d46830: 0x0  nop
    ctx->pc = 0x1d46830u;
    // NOP
    // 0x1d46834: 0x0  nop
    ctx->pc = 0x1d46834u;
    // NOP
    ctx->pc = 0x1d46838u;
}
