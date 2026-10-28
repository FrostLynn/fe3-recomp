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

// Function: sub_01C6C3F8
// Address: 0x1c6c3f8 - 0x1c6c410
void sub_01C6C3F8_0x1c6c3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C3F8_0x1c6c3f8");
#endif

    ctx->pc = 0x1c6c3f8u;

    // 0x1c6c3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c404: 0x871ab52  j           func_1C6AD48
    ctx->pc = 0x1C6C404u;
    ctx->pc = 0x1C6C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C404u;
    // 0x1c6c408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AD48u;
    sub_01C6AD48_0x1c6ad48(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C40Cu;
    // 0x1c6c40c: 0x0  nop
    ctx->pc = 0x1c6c40cu;
    // NOP
    ctx->pc = 0x1c6c410u;
}
