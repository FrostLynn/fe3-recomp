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

// Function: sub_01C31D60
// Address: 0x1c31d60 - 0x1c31d80
void sub_01C31D60_0x1c31d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31D60_0x1c31d60");
#endif

    ctx->pc = 0x1c31d60u;

    // 0x1c31d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31d64: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c31d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c31d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31d6c: 0x24a54000  addiu       $a1, $a1, 0x4000
    ctx->pc = 0x1c31d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x1c31d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31d74: 0x870c1c2  j           func_1C30708
    ctx->pc = 0x1C31D74u;
    ctx->pc = 0x1C31D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31D74u;
    // 0x1c31d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30708u;
    sub_01C30708_0x1c30708(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31D7Cu;
    // 0x1c31d7c: 0x0  nop
    ctx->pc = 0x1c31d7cu;
    // NOP
    ctx->pc = 0x1c31d80u;
}
