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

// Function: sub_01CDD560
// Address: 0x1cdd560 - 0x1cdd580
void sub_01CDD560_0x1cdd560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD560_0x1cdd560");
#endif

    ctx->pc = 0x1cdd560u;

    // 0x1cdd560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd564: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd56c: 0x24a54b40  addiu       $a1, $a1, 0x4B40
    ctx->pc = 0x1cdd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19264));
    // 0x1cdd570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd574: 0x87374fa  j           func_1CDD3E8
    ctx->pc = 0x1CDD574u;
    ctx->pc = 0x1CDD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD574u;
    // 0x1cdd578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD3E8u;
    sub_01CDD3E8_0x1cdd3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD57Cu;
    // 0x1cdd57c: 0x0  nop
    ctx->pc = 0x1cdd57cu;
    // NOP
    ctx->pc = 0x1cdd580u;
}
