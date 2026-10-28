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

// Function: sub_01C44A58
// Address: 0x1c44a58 - 0x1c44a78
void sub_01C44A58_0x1c44a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44A58_0x1c44a58");
#endif

    ctx->pc = 0x1c44a58u;

    // 0x1c44a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44a5c: 0x3c0501c4  lui         $a1, 0x1C4
    ctx->pc = 0x1c44a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
    // 0x1c44a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44a64: 0x24a570d0  addiu       $a1, $a1, 0x70D0
    ctx->pc = 0x1c44a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28880));
    // 0x1c44a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44a6c: 0x8710d0a  j           func_1C43428
    ctx->pc = 0x1C44A6Cu;
    ctx->pc = 0x1C44A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A6Cu;
    // 0x1c44a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43428u;
    sub_01C43428_0x1c43428(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44A74u;
    // 0x1c44a74: 0x0  nop
    ctx->pc = 0x1c44a74u;
    // NOP
    ctx->pc = 0x1c44a78u;
}
