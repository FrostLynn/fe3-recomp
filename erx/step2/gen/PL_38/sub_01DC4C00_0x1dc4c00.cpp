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

// Function: sub_01DC4C00
// Address: 0x1dc4c00 - 0x1dc4c18
void sub_01DC4C00_0x1dc4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4C00_0x1dc4c00");
#endif

    ctx->pc = 0x1dc4c00u;

    // 0x1dc4c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc4c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc4c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc4c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4c0c: 0x8771142  j           func_1DC4508
    ctx->pc = 0x1DC4C0Cu;
    ctx->pc = 0x1DC4C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4C0Cu;
    // 0x1dc4c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4508u;
    sub_01DC4508_0x1dc4508(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4C14u;
    // 0x1dc4c14: 0x0  nop
    ctx->pc = 0x1dc4c14u;
    // NOP
    ctx->pc = 0x1dc4c18u;
}
