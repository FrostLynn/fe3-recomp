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

// Function: sub_01CC4A08
// Address: 0x1cc4a08 - 0x1cc4a28
void sub_01CC4A08_0x1cc4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4A08_0x1cc4a08");
#endif

    ctx->pc = 0x1cc4a08u;

    // 0x1cc4a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4a0c: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x1cc4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x1cc4a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc4a14: 0x24a55778  addiu       $a1, $a1, 0x5778
    ctx->pc = 0x1cc4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22392));
    // 0x1cc4a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4a1c: 0x8730d02  j           func_1CC3408
    ctx->pc = 0x1CC4A1Cu;
    ctx->pc = 0x1CC4A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A1Cu;
    // 0x1cc4a20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC3408u;
    sub_01CC3408_0x1cc3408(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4A24u;
    // 0x1cc4a24: 0x0  nop
    ctx->pc = 0x1cc4a24u;
    // NOP
    ctx->pc = 0x1cc4a28u;
}
