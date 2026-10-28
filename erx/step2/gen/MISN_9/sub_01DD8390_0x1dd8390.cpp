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

// Function: sub_01DD8390
// Address: 0x1dd8390 - 0x1dd83a0
void sub_01DD8390_0x1dd8390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8390_0x1dd8390");
#endif

    ctx->pc = 0x1dd8390u;

    // 0x1dd8390: 0x0  nop
    ctx->pc = 0x1dd8390u;
    // NOP
    // 0x1dd8394: 0x0  nop
    ctx->pc = 0x1dd8394u;
    // NOP
    // 0x1dd8398: 0x0  nop
    ctx->pc = 0x1dd8398u;
    // NOP
    // 0x1dd839c: 0x0  nop
    ctx->pc = 0x1dd839cu;
    // NOP
    ctx->pc = 0x1dd83a0u;
}
