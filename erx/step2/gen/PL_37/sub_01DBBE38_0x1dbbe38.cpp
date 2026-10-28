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

// Function: sub_01DBBE38
// Address: 0x1dbbe38 - 0x1dbbe50
void sub_01DBBE38_0x1dbbe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBE38_0x1dbbe38");
#endif

    ctx->pc = 0x1dbbe38u;

    // 0x1dbbe38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbbe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbbe3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbbe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbbe40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbbe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbe44: 0x876ee62  j           func_1DBB988
    ctx->pc = 0x1DBBE44u;
    ctx->pc = 0x1DBBE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBE44u;
    // 0x1dbbe48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB988u;
    sub_01DBB988_0x1dbb988(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBBE4Cu;
    // 0x1dbbe4c: 0x0  nop
    ctx->pc = 0x1dbbe4cu;
    // NOP
    ctx->pc = 0x1dbbe50u;
}
