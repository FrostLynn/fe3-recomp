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

// Function: sub_01D0E600
// Address: 0x1d0e600 - 0x1d0e618
void sub_01D0E600_0x1d0e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E600_0x1d0e600");
#endif

    ctx->pc = 0x1d0e600u;

    // 0x1d0e600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e60c: 0x8743362  j           func_1D0CD88
    ctx->pc = 0x1D0E60Cu;
    ctx->pc = 0x1D0E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E60Cu;
    // 0x1d0e610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CD88u;
    sub_01D0CD88_0x1d0cd88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E614u;
    // 0x1d0e614: 0x0  nop
    ctx->pc = 0x1d0e614u;
    // NOP
    ctx->pc = 0x1d0e618u;
}
