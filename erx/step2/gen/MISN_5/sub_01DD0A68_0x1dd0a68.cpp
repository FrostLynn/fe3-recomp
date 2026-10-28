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

// Function: sub_01DD0A68
// Address: 0x1dd0a68 - 0x1dd0a78
void sub_01DD0A68_0x1dd0a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0A68_0x1dd0a68");
#endif

    ctx->pc = 0x1dd0a68u;

    // 0x1dd0a68: 0x0  nop
    ctx->pc = 0x1dd0a68u;
    // NOP
    // 0x1dd0a6c: 0x0  nop
    ctx->pc = 0x1dd0a6cu;
    // NOP
    // 0x1dd0a70: 0x0  nop
    ctx->pc = 0x1dd0a70u;
    // NOP
    // 0x1dd0a74: 0x0  nop
    ctx->pc = 0x1dd0a74u;
    // NOP
    ctx->pc = 0x1dd0a78u;
}
