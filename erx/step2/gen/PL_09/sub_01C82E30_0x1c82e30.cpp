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

// Function: sub_01C82E30
// Address: 0x1c82e30 - 0x1c82e48
void sub_01C82E30_0x1c82e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82E30_0x1c82e30");
#endif

    ctx->pc = 0x1c82e30u;

    // 0x1c82e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c82e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c82e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c82e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82e3c: 0x872066e  j           func_1C819B8
    ctx->pc = 0x1C82E3Cu;
    ctx->pc = 0x1C82E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82E3Cu;
    // 0x1c82e40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C819B8u;
    sub_01C819B8_0x1c819b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C82E44u;
    // 0x1c82e44: 0x0  nop
    ctx->pc = 0x1c82e44u;
    // NOP
    ctx->pc = 0x1c82e48u;
}
