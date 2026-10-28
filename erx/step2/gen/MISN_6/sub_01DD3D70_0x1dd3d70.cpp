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

// Function: sub_01DD3D70
// Address: 0x1dd3d70 - 0x1dd3d80
void sub_01DD3D70_0x1dd3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3D70_0x1dd3d70");
#endif

    ctx->pc = 0x1dd3d70u;

    // 0x1dd3d70: 0x0  nop
    ctx->pc = 0x1dd3d70u;
    // NOP
    // 0x1dd3d74: 0x0  nop
    ctx->pc = 0x1dd3d74u;
    // NOP
    // 0x1dd3d78: 0x0  nop
    ctx->pc = 0x1dd3d78u;
    // NOP
    // 0x1dd3d7c: 0x0  nop
    ctx->pc = 0x1dd3d7cu;
    // NOP
    ctx->pc = 0x1dd3d80u;
}
