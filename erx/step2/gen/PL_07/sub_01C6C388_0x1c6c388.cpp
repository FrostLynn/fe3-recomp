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

// Function: sub_01C6C388
// Address: 0x1c6c388 - 0x1c6c3a8
void sub_01C6C388_0x1c6c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C388_0x1c6c388");
#endif

    ctx->pc = 0x1c6c388u;

    // 0x1c6c388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c38c: 0x3c0501c7  lui         $a1, 0x1C7
    ctx->pc = 0x1c6c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c394: 0x24a5d100  addiu       $a1, $a1, -0x2F00
    ctx->pc = 0x1c6c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955264));
    // 0x1c6c398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c39c: 0x871ab84  j           func_1C6AE10
    ctx->pc = 0x1C6C39Cu;
    ctx->pc = 0x1C6C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C39Cu;
    // 0x1c6c3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE10u;
    sub_01C6AE10_0x1c6ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C3A4u;
    // 0x1c6c3a4: 0x0  nop
    ctx->pc = 0x1c6c3a4u;
    // NOP
    ctx->pc = 0x1c6c3a8u;
}
