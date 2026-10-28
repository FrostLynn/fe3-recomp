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

// Function: sub_01D0E578
// Address: 0x1d0e578 - 0x1d0e598
void sub_01D0E578_0x1d0e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E578_0x1d0e578");
#endif

    ctx->pc = 0x1d0e578u;

    // 0x1d0e578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e57c: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x1d0e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e584: 0x24a5fc90  addiu       $a1, $a1, -0x370
    ctx->pc = 0x1d0e584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966416));
    // 0x1d0e588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e58c: 0x8743346  j           func_1D0CD18
    ctx->pc = 0x1D0E58Cu;
    ctx->pc = 0x1D0E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E58Cu;
    // 0x1d0e590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CD18u;
    sub_01D0CD18_0x1d0cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E594u;
    // 0x1d0e594: 0x0  nop
    ctx->pc = 0x1d0e594u;
    // NOP
    ctx->pc = 0x1d0e598u;
}
