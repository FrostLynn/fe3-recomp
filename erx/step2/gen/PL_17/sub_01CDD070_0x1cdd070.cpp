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

// Function: sub_01CDD070
// Address: 0x1cdd070 - 0x1cdd090
void sub_01CDD070_0x1cdd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD070_0x1cdd070");
#endif

    ctx->pc = 0x1cdd070u;

    // 0x1cdd070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd074: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd07c: 0x24a510a0  addiu       $a1, $a1, 0x10A0
    ctx->pc = 0x1cdd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4256));
    // 0x1cdd080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd084: 0x8736c88  j           func_1CDB220
    ctx->pc = 0x1CDD084u;
    ctx->pc = 0x1CDD088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD084u;
    // 0x1cdd088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB220u;
    sub_01CDB220_0x1cdb220(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD08Cu;
    // 0x1cdd08c: 0x0  nop
    ctx->pc = 0x1cdd08cu;
    // NOP
    ctx->pc = 0x1cdd090u;
}
