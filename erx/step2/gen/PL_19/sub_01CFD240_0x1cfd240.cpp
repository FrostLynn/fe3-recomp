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

// Function: sub_01CFD240
// Address: 0x1cfd240 - 0x1cfd250
void sub_01CFD240_0x1cfd240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD240_0x1cfd240");
#endif

    ctx->pc = 0x1cfd240u;

    // 0x1cfd240: 0x0  nop
    ctx->pc = 0x1cfd240u;
    // NOP
    // 0x1cfd244: 0x0  nop
    ctx->pc = 0x1cfd244u;
    // NOP
    // 0x1cfd248: 0x0  nop
    ctx->pc = 0x1cfd248u;
    // NOP
    // 0x1cfd24c: 0x0  nop
    ctx->pc = 0x1cfd24cu;
    // NOP
    ctx->pc = 0x1cfd250u;
}
