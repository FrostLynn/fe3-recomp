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

// Function: sub_01D5F198
// Address: 0x1d5f198 - 0x1d5f1b8
void sub_01D5F198_0x1d5f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F198_0x1d5f198");
#endif

    ctx->pc = 0x1d5f198u;

    // 0x1d5f198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f19c: 0x3c0501d6  lui         $a1, 0x1D6
    ctx->pc = 0x1d5f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f1a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f1a4: 0x24a5fd18  addiu       $a1, $a1, -0x2E8
    ctx->pc = 0x1d5f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966552));
    // 0x1d5f1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f1ac: 0x875772c  j           func_1D5DCB0
    ctx->pc = 0x1D5F1ACu;
    ctx->pc = 0x1D5F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F1ACu;
    // 0x1d5f1b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DCB0u;
    sub_01D5DCB0_0x1d5dcb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5F1B4u;
    // 0x1d5f1b4: 0x0  nop
    ctx->pc = 0x1d5f1b4u;
    // NOP
    ctx->pc = 0x1d5f1b8u;
}
