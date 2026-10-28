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

// Function: sub_01D78248
// Address: 0x1d78248 - 0x1d78260
void sub_01D78248_0x1d78248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78248_0x1d78248");
#endif

    ctx->pc = 0x1d78248u;

    // 0x1d78248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7824c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x1d7824cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d78250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d78250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d78254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d78254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78258: 0x875e068  j           func_1D781A0
    ctx->pc = 0x1D78258u;
    ctx->pc = 0x1D7825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78258u;
    // 0x1d7825c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D781A0u;
    sub_01D781A0_0x1d781a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D78260u;
}
