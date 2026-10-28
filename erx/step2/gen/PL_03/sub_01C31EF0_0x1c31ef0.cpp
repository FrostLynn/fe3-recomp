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

// Function: sub_01C31EF0
// Address: 0x1c31ef0 - 0x1c31f10
void sub_01C31EF0_0x1c31ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31EF0_0x1c31ef0");
#endif

    ctx->pc = 0x1c31ef0u;

    // 0x1c31ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31ef4: 0x3c0501c4  lui         $a1, 0x1C4
    ctx->pc = 0x1c31ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
    // 0x1c31ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31efc: 0x24a592c0  addiu       $a1, $a1, -0x6D40
    ctx->pc = 0x1c31efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x1c31f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31f04: 0x870c1c2  j           func_1C30708
    ctx->pc = 0x1C31F04u;
    ctx->pc = 0x1C31F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F04u;
    // 0x1c31f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30708u;
    sub_01C30708_0x1c30708(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31F0Cu;
    // 0x1c31f0c: 0x0  nop
    ctx->pc = 0x1c31f0cu;
    // NOP
    ctx->pc = 0x1c31f10u;
}
