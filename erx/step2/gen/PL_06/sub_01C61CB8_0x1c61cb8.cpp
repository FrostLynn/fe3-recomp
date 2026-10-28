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

// Function: sub_01C61CB8
// Address: 0x1c61cb8 - 0x1c61cd0
void sub_01C61CB8_0x1c61cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61CB8_0x1c61cb8");
#endif

    ctx->pc = 0x1c61cb8u;

    // 0x1c61cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61cc4: 0x871810a  j           func_1C60428
    ctx->pc = 0x1C61CC4u;
    ctx->pc = 0x1C61CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61CC4u;
    // 0x1c61cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60428u;
    sub_01C60428_0x1c60428(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61CCCu;
    // 0x1c61ccc: 0x0  nop
    ctx->pc = 0x1c61cccu;
    // NOP
    ctx->pc = 0x1c61cd0u;
}
