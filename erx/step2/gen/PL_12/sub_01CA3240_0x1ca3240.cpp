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

// Function: sub_01CA3240
// Address: 0x1ca3240 - 0x1ca3250
void sub_01CA3240_0x1ca3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3240_0x1ca3240");
#endif

    ctx->pc = 0x1ca3240u;

    // 0x1ca3240: 0x0  nop
    ctx->pc = 0x1ca3240u;
    // NOP
    // 0x1ca3244: 0x0  nop
    ctx->pc = 0x1ca3244u;
    // NOP
    // 0x1ca3248: 0x0  nop
    ctx->pc = 0x1ca3248u;
    // NOP
    // 0x1ca324c: 0x0  nop
    ctx->pc = 0x1ca324cu;
    // NOP
    ctx->pc = 0x1ca3250u;
}
