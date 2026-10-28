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

// Function: sub_01C60018
// Address: 0x1c60018 - 0x1c60028
void sub_01C60018_0x1c60018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60018_0x1c60018");
#endif

    ctx->pc = 0x1c60018u;

    // 0x1c60018: 0x0  nop
    ctx->pc = 0x1c60018u;
    // NOP
    // 0x1c6001c: 0x0  nop
    ctx->pc = 0x1c6001cu;
    // NOP
    // 0x1c60020: 0x0  nop
    ctx->pc = 0x1c60020u;
    // NOP
    // 0x1c60024: 0x0  nop
    ctx->pc = 0x1c60024u;
    // NOP
    ctx->pc = 0x1c60028u;
}
