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

// Function: sub_01C80F30
// Address: 0x1c80f30 - 0x1c80f40
void sub_01C80F30_0x1c80f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C80F30_0x1c80f30");
#endif

    ctx->pc = 0x1c80f30u;

    // 0x1c80f30: 0x0  nop
    ctx->pc = 0x1c80f30u;
    // NOP
    // 0x1c80f34: 0x0  nop
    ctx->pc = 0x1c80f34u;
    // NOP
    // 0x1c80f38: 0x0  nop
    ctx->pc = 0x1c80f38u;
    // NOP
    // 0x1c80f3c: 0x0  nop
    ctx->pc = 0x1c80f3cu;
    // NOP
    ctx->pc = 0x1c80f40u;
}
