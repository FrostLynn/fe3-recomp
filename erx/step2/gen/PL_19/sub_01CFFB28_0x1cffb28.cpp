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

// Function: sub_01CFFB28
// Address: 0x1cffb28 - 0x1cffb48
void sub_01CFFB28_0x1cffb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFB28_0x1cffb28");
#endif

    ctx->pc = 0x1cffb28u;

    // 0x1cffb28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffb2c: 0x3c0501d0  lui         $a1, 0x1D0
    ctx->pc = 0x1cffb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)464 << 16));
    // 0x1cffb30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffb34: 0x24a53e10  addiu       $a1, $a1, 0x3E10
    ctx->pc = 0x1cffb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15888));
    // 0x1cffb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffb3c: 0x873f892  j           func_1CFE248
    ctx->pc = 0x1CFFB3Cu;
    ctx->pc = 0x1CFFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFB3Cu;
    // 0x1cffb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE248u;
    sub_01CFE248_0x1cfe248(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFB44u;
    // 0x1cffb44: 0x0  nop
    ctx->pc = 0x1cffb44u;
    // NOP
    ctx->pc = 0x1cffb48u;
}
