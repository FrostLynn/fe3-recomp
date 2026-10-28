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

// Function: sub_01CA4D78
// Address: 0x1ca4d78 - 0x1ca4d98
void sub_01CA4D78_0x1ca4d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4D78_0x1ca4d78");
#endif

    ctx->pc = 0x1ca4d78u;

    // 0x1ca4d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4d7c: 0x3c0501ca  lui         $a1, 0x1CA
    ctx->pc = 0x1ca4d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)458 << 16));
    // 0x1ca4d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4d84: 0x24a568e0  addiu       $a1, $a1, 0x68E0
    ctx->pc = 0x1ca4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26848));
    // 0x1ca4d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4d8c: 0x8728dc6  j           func_1CA3718
    ctx->pc = 0x1CA4D8Cu;
    ctx->pc = 0x1CA4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4D8Cu;
    // 0x1ca4d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3718u;
    sub_01CA3718_0x1ca3718(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4D94u;
    // 0x1ca4d94: 0x0  nop
    ctx->pc = 0x1ca4d94u;
    // NOP
    ctx->pc = 0x1ca4d98u;
}
