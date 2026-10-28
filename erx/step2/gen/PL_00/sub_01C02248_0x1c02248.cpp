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

// Function: sub_01C02248
// Address: 0x1c02248 - 0x1c02260
void sub_01C02248_0x1c02248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02248_0x1c02248");
#endif

    ctx->pc = 0x1c02248u;

    // 0x1c02248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0224c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02254: 0x8700422  j           func_1C01088
    ctx->pc = 0x1C02254u;
    ctx->pc = 0x1C02258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02254u;
    // 0x1c02258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01088u;
    sub_01C01088_0x1c01088(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0225Cu;
    // 0x1c0225c: 0x0  nop
    ctx->pc = 0x1c0225cu;
    // NOP
    ctx->pc = 0x1c02260u;
}
