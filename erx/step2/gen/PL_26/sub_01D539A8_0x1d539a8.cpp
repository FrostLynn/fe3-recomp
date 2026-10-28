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

// Function: sub_01D539A8
// Address: 0x1d539a8 - 0x1d539c8
void sub_01D539A8_0x1d539a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D539A8_0x1d539a8");
#endif

    ctx->pc = 0x1d539a8u;

    // 0x1d539a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d539a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d539ac: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d539acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d539b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d539b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d539b4: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x1d539b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x1d539b8: 0x24a558c0  addiu       $a1, $a1, 0x58C0
    ctx->pc = 0x1d539b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22720));
    // 0x1d539bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d539bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d539c0: 0x87543ea  j           func_1D50FA8
    ctx->pc = 0x1D539C0u;
    ctx->pc = 0x1D539C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D539C0u;
    // 0x1d539c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FA8u;
    sub_01D50FA8_0x1d50fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D539C8u;
}
