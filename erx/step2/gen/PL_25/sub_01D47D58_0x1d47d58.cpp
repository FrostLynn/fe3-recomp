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

// Function: sub_01D47D58
// Address: 0x1d47d58 - 0x1d47d70
void sub_01D47D58_0x1d47d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47D58_0x1d47d58");
#endif

    ctx->pc = 0x1d47d58u;

    // 0x1d47d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47d5c: 0x2405008b  addiu       $a1, $zero, 0x8B
    ctx->pc = 0x1d47d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
    // 0x1d47d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d47d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d47d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d47d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47d68: 0x87519e6  j           func_1D46798
    ctx->pc = 0x1D47D68u;
    ctx->pc = 0x1D47D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47D68u;
    // 0x1d47d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46798u;
    sub_01D46798_0x1d46798(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47D70u;
}
