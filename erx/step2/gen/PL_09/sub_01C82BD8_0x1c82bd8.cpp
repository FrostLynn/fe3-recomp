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

// Function: sub_01C82BD8
// Address: 0x1c82bd8 - 0x1c82bf0
void sub_01C82BD8_0x1c82bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82BD8_0x1c82bd8");
#endif

    ctx->pc = 0x1c82bd8u;

    // 0x1c82bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c82bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c82be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c82be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82be4: 0x87203e0  j           func_1C80F80
    ctx->pc = 0x1C82BE4u;
    ctx->pc = 0x1C82BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82BE4u;
    // 0x1c82be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F80u;
    sub_01C80F80_0x1c80f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C82BECu;
    // 0x1c82bec: 0x0  nop
    ctx->pc = 0x1c82becu;
    // NOP
    ctx->pc = 0x1c82bf0u;
}
