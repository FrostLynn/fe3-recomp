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

// Function: sub_01C21A18
// Address: 0x1c21a18 - 0x1c21a38
void sub_01C21A18_0x1c21a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21A18_0x1c21a18");
#endif

    ctx->pc = 0x1c21a18u;

    // 0x1c21a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21a1c: 0x3c0501c2  lui         $a1, 0x1C2
    ctx->pc = 0x1c21a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)450 << 16));
    // 0x1c21a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21a24: 0x24a53410  addiu       $a1, $a1, 0x3410
    ctx->pc = 0x1c21a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13328));
    // 0x1c21a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21a2c: 0x8708050  j           func_1C20140
    ctx->pc = 0x1C21A2Cu;
    ctx->pc = 0x1C21A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21A2Cu;
    // 0x1c21a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20140u;
    sub_01C20140_0x1c20140(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21A34u;
    // 0x1c21a34: 0x0  nop
    ctx->pc = 0x1c21a34u;
    // NOP
    ctx->pc = 0x1c21a38u;
}
