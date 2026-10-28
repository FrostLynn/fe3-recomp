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

// Function: sub_01C11EB8
// Address: 0x1c11eb8 - 0x1c11ed0
void sub_01C11EB8_0x1c11eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11EB8_0x1c11eb8");
#endif

    ctx->pc = 0x1c11eb8u;

    // 0x1c11eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11ec4: 0x87041da  j           func_1C10768
    ctx->pc = 0x1C11EC4u;
    ctx->pc = 0x1C11EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11EC4u;
    // 0x1c11ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10768u;
    sub_01C10768_0x1c10768(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11ECCu;
    // 0x1c11ecc: 0x0  nop
    ctx->pc = 0x1c11eccu;
    // NOP
    ctx->pc = 0x1c11ed0u;
}
