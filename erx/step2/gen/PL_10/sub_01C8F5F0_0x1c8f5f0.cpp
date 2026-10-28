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

// Function: sub_01C8F5F0
// Address: 0x1c8f5f0 - 0x1c8f610
void sub_01C8F5F0_0x1c8f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F5F0_0x1c8f5f0");
#endif

    ctx->pc = 0x1c8f5f0u;

    // 0x1c8f5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f5f4: 0x3c0501c9  lui         $a1, 0x1C9
    ctx->pc = 0x1c8f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8f5fc: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0
    ctx->pc = 0x1c8f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    // 0x1c8f600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8f600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f604: 0x87233ea  j           func_1C8CFA8
    ctx->pc = 0x1C8F604u;
    ctx->pc = 0x1C8F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F604u;
    // 0x1c8f608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFA8u;
    sub_01C8CFA8_0x1c8cfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8F60Cu;
    // 0x1c8f60c: 0x0  nop
    ctx->pc = 0x1c8f60cu;
    // NOP
    ctx->pc = 0x1c8f610u;
}
