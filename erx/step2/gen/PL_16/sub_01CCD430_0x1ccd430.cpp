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

// Function: sub_01CCD430
// Address: 0x1ccd430 - 0x1ccd440
void sub_01CCD430_0x1ccd430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD430_0x1ccd430");
#endif

    ctx->pc = 0x1ccd430u;

    // 0x1ccd430: 0x0  nop
    ctx->pc = 0x1ccd430u;
    // NOP
    // 0x1ccd434: 0x0  nop
    ctx->pc = 0x1ccd434u;
    // NOP
    // 0x1ccd438: 0x0  nop
    ctx->pc = 0x1ccd438u;
    // NOP
    // 0x1ccd43c: 0x0  nop
    ctx->pc = 0x1ccd43cu;
    // NOP
    ctx->pc = 0x1ccd440u;
}
