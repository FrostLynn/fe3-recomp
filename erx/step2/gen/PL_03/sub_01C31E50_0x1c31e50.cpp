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

// Function: sub_01C31E50
// Address: 0x1c31e50 - 0x1c31e70
void sub_01C31E50_0x1c31e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31E50_0x1c31e50");
#endif

    ctx->pc = 0x1c31e50u;

    // 0x1c31e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31e54: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c31e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c31e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31e5c: 0x24a576a0  addiu       $a1, $a1, 0x76A0
    ctx->pc = 0x1c31e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30368));
    // 0x1c31e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31e64: 0x870c1c2  j           func_1C30708
    ctx->pc = 0x1C31E64u;
    ctx->pc = 0x1C31E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31E64u;
    // 0x1c31e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30708u;
    sub_01C30708_0x1c30708(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31E6Cu;
    // 0x1c31e6c: 0x0  nop
    ctx->pc = 0x1c31e6cu;
    // NOP
    ctx->pc = 0x1c31e70u;
}
