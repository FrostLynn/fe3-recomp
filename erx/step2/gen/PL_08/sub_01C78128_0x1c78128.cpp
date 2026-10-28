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

// Function: sub_01C78128
// Address: 0x1c78128 - 0x1c78148
void sub_01C78128_0x1c78128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78128_0x1c78128");
#endif

    ctx->pc = 0x1c78128u;

    // 0x1c78128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7812c: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c7812cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c78130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c78130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c78134: 0x24a59880  addiu       $a1, $a1, -0x6780
    ctx->pc = 0x1c78134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940800));
    // 0x1c78138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c78138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7813c: 0x871da38  j           func_1C768E0
    ctx->pc = 0x1C7813Cu;
    ctx->pc = 0x1C78140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7813Cu;
    // 0x1c78140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C768E0u;
    sub_01C768E0_0x1c768e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78144u;
    // 0x1c78144: 0x0  nop
    ctx->pc = 0x1c78144u;
    // NOP
    ctx->pc = 0x1c78148u;
}
