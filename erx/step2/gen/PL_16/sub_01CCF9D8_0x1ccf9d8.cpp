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

// Function: sub_01CCF9D8
// Address: 0x1ccf9d8 - 0x1ccf9f8
void sub_01CCF9D8_0x1ccf9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF9D8_0x1ccf9d8");
#endif

    ctx->pc = 0x1ccf9d8u;

    // 0x1ccf9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf9dc: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccf9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccf9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf9e4: 0x24a50be0  addiu       $a1, $a1, 0xBE0
    ctx->pc = 0x1ccf9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3040));
    // 0x1ccf9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf9ec: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCF9ECu;
    ctx->pc = 0x1CCF9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF9ECu;
    // 0x1ccf9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF9F4u;
    // 0x1ccf9f4: 0x0  nop
    ctx->pc = 0x1ccf9f4u;
    // NOP
    ctx->pc = 0x1ccf9f8u;
}
