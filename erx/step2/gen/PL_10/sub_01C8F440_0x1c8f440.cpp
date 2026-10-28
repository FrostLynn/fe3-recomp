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

// Function: sub_01C8F440
// Address: 0x1c8f440 - 0x1c8f460
void sub_01C8F440_0x1c8f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F440_0x1c8f440");
#endif

    ctx->pc = 0x1c8f440u;

    // 0x1c8f440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f444: 0x3c0501c9  lui         $a1, 0x1C9
    ctx->pc = 0x1c8f444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8f44c: 0x24a502d0  addiu       $a1, $a1, 0x2D0
    ctx->pc = 0x1c8f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
    // 0x1c8f450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f454: 0x87237c2  j           func_1C8DF08
    ctx->pc = 0x1C8F454u;
    ctx->pc = 0x1C8F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F454u;
    // 0x1c8f458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DF08u;
    sub_01C8DF08_0x1c8df08(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8F45Cu;
    // 0x1c8f45c: 0x0  nop
    ctx->pc = 0x1c8f45cu;
    // NOP
    ctx->pc = 0x1c8f460u;
}
