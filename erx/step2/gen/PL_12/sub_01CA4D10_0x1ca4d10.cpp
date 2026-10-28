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

// Function: sub_01CA4D10
// Address: 0x1ca4d10 - 0x1ca4d28
void sub_01CA4D10_0x1ca4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4D10_0x1ca4d10");
#endif

    ctx->pc = 0x1ca4d10u;

    // 0x1ca4d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4d20: 0x8728c74  j           func_1CA31D0
    ctx->pc = 0x1CA4D20u;
    ctx->pc = 0x1CA4D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4D20u;
    // 0x1ca4d24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA31D0u;
    sub_01CA31D0_0x1ca31d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4D28u;
}
