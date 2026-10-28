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

// Function: sub_01C61548
// Address: 0x1c61548 - 0x1c61560
void sub_01C61548_0x1c61548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61548_0x1c61548");
#endif

    ctx->pc = 0x1c61548u;

    // 0x1c61548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6154c: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x1c6154cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1c61550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61558: 0x8717fea  j           func_1C5FFA8
    ctx->pc = 0x1C61558u;
    ctx->pc = 0x1C6155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61558u;
    // 0x1c6155c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FFA8u;
    sub_01C5FFA8_0x1c5ffa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61560u;
}
