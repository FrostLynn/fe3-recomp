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

// Function: sub_01C99750
// Address: 0x1c99750 - 0x1c99768
void sub_01C99750_0x1c99750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99750_0x1c99750");
#endif

    ctx->pc = 0x1c99750u;

    // 0x1c99750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c99754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c99758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c99758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9975c: 0x87262e0  j           func_1C98B80
    ctx->pc = 0x1C9975Cu;
    ctx->pc = 0x1C99760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9975Cu;
    // 0x1c99760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B80u;
    sub_01C98B80_0x1c98b80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C99764u;
    // 0x1c99764: 0x0  nop
    ctx->pc = 0x1c99764u;
    // NOP
    ctx->pc = 0x1c99768u;
}
