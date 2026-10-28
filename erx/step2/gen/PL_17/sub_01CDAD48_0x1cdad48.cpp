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

// Function: sub_01CDAD48
// Address: 0x1cdad48 - 0x1cdad58
void sub_01CDAD48_0x1cdad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD48_0x1cdad48");
#endif

    ctx->pc = 0x1cdad48u;

    // 0x1cdad48: 0x0  nop
    ctx->pc = 0x1cdad48u;
    // NOP
    // 0x1cdad4c: 0x0  nop
    ctx->pc = 0x1cdad4cu;
    // NOP
    // 0x1cdad50: 0x0  nop
    ctx->pc = 0x1cdad50u;
    // NOP
    // 0x1cdad54: 0x0  nop
    ctx->pc = 0x1cdad54u;
    // NOP
    ctx->pc = 0x1cdad58u;
}
