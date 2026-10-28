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

// Function: sub_01C44998
// Address: 0x1c44998 - 0x1c449b0
void sub_01C44998_0x1c44998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44998_0x1c44998");
#endif

    ctx->pc = 0x1c44998u;

    // 0x1c44998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4499c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c449a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c449a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c449a4: 0x8710cb0  j           func_1C432C0
    ctx->pc = 0x1C449A4u;
    ctx->pc = 0x1C449A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C449A4u;
    // 0x1c449a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C432C0u;
    sub_01C432C0_0x1c432c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C449ACu;
    // 0x1c449ac: 0x0  nop
    ctx->pc = 0x1c449acu;
    // NOP
    ctx->pc = 0x1c449b0u;
}
