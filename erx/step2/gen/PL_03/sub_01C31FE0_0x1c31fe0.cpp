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

// Function: sub_01C31FE0
// Address: 0x1c31fe0 - 0x1c32000
void sub_01C31FE0_0x1c31fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31FE0_0x1c31fe0");
#endif

    ctx->pc = 0x1c31fe0u;

    // 0x1c31fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31fe4: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c31fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c31fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31fec: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x1c31fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x1c31ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31ff4: 0x870c1c2  j           func_1C30708
    ctx->pc = 0x1C31FF4u;
    ctx->pc = 0x1C31FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31FF4u;
    // 0x1c31ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30708u;
    sub_01C30708_0x1c30708(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31FFCu;
    // 0x1c31ffc: 0x0  nop
    ctx->pc = 0x1c31ffcu;
    // NOP
    ctx->pc = 0x1c32000u;
}
