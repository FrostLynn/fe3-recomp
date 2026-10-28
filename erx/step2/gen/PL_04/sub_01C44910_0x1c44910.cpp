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

// Function: sub_01C44910
// Address: 0x1c44910 - 0x1c44928
void sub_01C44910_0x1c44910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44910_0x1c44910");
#endif

    ctx->pc = 0x1c44910u;

    // 0x1c44910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4491c: 0x8710cce  j           func_1C43338
    ctx->pc = 0x1C4491Cu;
    ctx->pc = 0x1C44920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4491Cu;
    // 0x1c44920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43338u;
    sub_01C43338_0x1c43338(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44924u;
    // 0x1c44924: 0x0  nop
    ctx->pc = 0x1c44924u;
    // NOP
    ctx->pc = 0x1c44928u;
}
