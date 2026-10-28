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

// Function: sub_01CDAF10
// Address: 0x1cdaf10 - 0x1cdaf28
void sub_01CDAF10_0x1cdaf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAF10_0x1cdaf10");
#endif

    ctx->pc = 0x1cdaf10u;

    // 0x1cdaf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdaf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdaf14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdaf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdaf18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdaf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaf1c: 0x87368a0  j           func_1CDA280
    ctx->pc = 0x1CDAF1Cu;
    ctx->pc = 0x1CDAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF1Cu;
    // 0x1cdaf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA280u;
    sub_01CDA280_0x1cda280(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDAF24u;
    // 0x1cdaf24: 0x0  nop
    ctx->pc = 0x1cdaf24u;
    // NOP
    ctx->pc = 0x1cdaf28u;
}
