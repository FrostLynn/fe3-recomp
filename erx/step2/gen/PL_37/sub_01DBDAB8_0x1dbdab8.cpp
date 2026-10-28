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

// Function: sub_01DBDAB8
// Address: 0x1dbdab8 - 0x1dbdad8
void sub_01DBDAB8_0x1dbdab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDAB8_0x1dbdab8");
#endif

    ctx->pc = 0x1dbdab8u;

    // 0x1dbdab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdabc: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x1dbdabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x1dbdac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbdac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbdac4: 0x24a5ff90  addiu       $a1, $a1, -0x70
    ctx->pc = 0x1dbdac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    // 0x1dbdac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbdac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdacc: 0x876f608  j           func_1DBD820
    ctx->pc = 0x1DBDACCu;
    ctx->pc = 0x1DBDAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDACCu;
    // 0x1dbdad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD820u;
    sub_01DBD820_0x1dbd820(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBDAD4u;
    // 0x1dbdad4: 0x0  nop
    ctx->pc = 0x1dbdad4u;
    // NOP
    ctx->pc = 0x1dbdad8u;
}
