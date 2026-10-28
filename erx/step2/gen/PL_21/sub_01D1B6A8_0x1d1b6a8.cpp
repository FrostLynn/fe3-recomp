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

// Function: sub_01D1B6A8
// Address: 0x1d1b6a8 - 0x1d1b6c8
void sub_01D1B6A8_0x1d1b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B6A8_0x1d1b6a8");
#endif

    ctx->pc = 0x1d1b6a8u;

    // 0x1d1b6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b6ac: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x1d1b6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b6b4: 0x24a5cee0  addiu       $a1, $a1, -0x3120
    ctx->pc = 0x1d1b6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954720));
    // 0x1d1b6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b6bc: 0x8746814  j           func_1D1A050
    ctx->pc = 0x1D1B6BCu;
    ctx->pc = 0x1D1B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B6BCu;
    // 0x1d1b6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A050u;
    sub_01D1A050_0x1d1a050(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B6C4u;
    // 0x1d1b6c4: 0x0  nop
    ctx->pc = 0x1d1b6c4u;
    // NOP
    ctx->pc = 0x1d1b6c8u;
}
