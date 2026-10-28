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

// Function: sub_01DB1BE8
// Address: 0x1db1be8 - 0x1db1c00
void sub_01DB1BE8_0x1db1be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1BE8_0x1db1be8");
#endif

    ctx->pc = 0x1db1be8u;

    // 0x1db1be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db1be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db1bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db1becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db1bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db1bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1bf4: 0x876c3e0  j           func_1DB0F80
    ctx->pc = 0x1DB1BF4u;
    ctx->pc = 0x1DB1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1BF4u;
    // 0x1db1bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F80u;
    sub_01DB0F80_0x1db0f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB1BFCu;
    // 0x1db1bfc: 0x0  nop
    ctx->pc = 0x1db1bfcu;
    // NOP
    ctx->pc = 0x1db1c00u;
}
