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

// Function: sub_01DA9238
// Address: 0x1da9238 - 0x1da9258
void sub_01DA9238_0x1da9238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9238_0x1da9238");
#endif

    ctx->pc = 0x1da9238u;

    // 0x1da9238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da9238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da923c: 0x3c0501db  lui         $a1, 0x1DB
    ctx->pc = 0x1da923cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)475 << 16));
    // 0x1da9240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da9240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da9244: 0x24a59f20  addiu       $a1, $a1, -0x60E0
    ctx->pc = 0x1da9244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942496));
    // 0x1da9248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da924c: 0x8769f82  j           func_1DA7E08
    ctx->pc = 0x1DA924Cu;
    ctx->pc = 0x1DA9250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA924Cu;
    // 0x1da9250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7E08u;
    sub_01DA7E08_0x1da7e08(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA9254u;
    // 0x1da9254: 0x0  nop
    ctx->pc = 0x1da9254u;
    // NOP
    ctx->pc = 0x1da9258u;
}
