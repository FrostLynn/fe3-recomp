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

// Function: sub_01C02068
// Address: 0x1c02068 - 0x1c02080
void sub_01C02068_0x1c02068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02068_0x1c02068");
#endif

    ctx->pc = 0x1c02068u;

    // 0x1c02068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0206c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02074: 0x87003ac  j           func_1C00EB0
    ctx->pc = 0x1C02074u;
    ctx->pc = 0x1C02078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02074u;
    // 0x1c02078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00EB0u;
    sub_01C00EB0_0x1c00eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0207Cu;
    // 0x1c0207c: 0x0  nop
    ctx->pc = 0x1c0207cu;
    // NOP
    ctx->pc = 0x1c02080u;
}
