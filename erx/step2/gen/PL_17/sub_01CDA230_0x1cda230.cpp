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

// Function: sub_01CDA230
// Address: 0x1cda230 - 0x1cda240
void sub_01CDA230_0x1cda230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA230_0x1cda230");
#endif

    ctx->pc = 0x1cda230u;

    // 0x1cda230: 0x0  nop
    ctx->pc = 0x1cda230u;
    // NOP
    // 0x1cda234: 0x0  nop
    ctx->pc = 0x1cda234u;
    // NOP
    // 0x1cda238: 0x0  nop
    ctx->pc = 0x1cda238u;
    // NOP
    // 0x1cda23c: 0x0  nop
    ctx->pc = 0x1cda23cu;
    // NOP
    ctx->pc = 0x1cda240u;
}
