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

// Function: sub_01CCF9F8
// Address: 0x1ccf9f8 - 0x1ccfa10
void sub_01CCF9F8_0x1ccf9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF9F8_0x1ccf9f8");
#endif

    ctx->pc = 0x1ccf9f8u;

    // 0x1ccf9f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfa04: 0x87338ca  j           func_1CCE328
    ctx->pc = 0x1CCFA04u;
    ctx->pc = 0x1CCFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA04u;
    // 0x1ccfa08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE328u;
    sub_01CCE328_0x1cce328(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFA0Cu;
    // 0x1ccfa0c: 0x0  nop
    ctx->pc = 0x1ccfa0cu;
    // NOP
    ctx->pc = 0x1ccfa10u;
}
