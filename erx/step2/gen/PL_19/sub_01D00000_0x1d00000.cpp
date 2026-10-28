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

// Function: sub_01D00000
// Address: 0x1d00000 - 0x1d00008
void sub_01D00000_0x1d00000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00000_0x1d00000");
#endif

    ctx->pc = 0x1d00000u;

    // 0x1d00000: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d00000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d00004: 0x0  nop
    ctx->pc = 0x1d00004u;
    // NOP
    ctx->pc = 0x1d00008u;
}
