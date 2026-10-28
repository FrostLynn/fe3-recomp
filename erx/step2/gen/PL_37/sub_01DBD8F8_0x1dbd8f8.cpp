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

// Function: sub_01DBD8F8
// Address: 0x1dbd8f8 - 0x1dbd910
void sub_01DBD8F8_0x1dbd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD8F8_0x1dbd8f8");
#endif

    ctx->pc = 0x1dbd8f8u;

    // 0x1dbd8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd904: 0x876f61a  j           func_1DBD868
    ctx->pc = 0x1DBD904u;
    ctx->pc = 0x1DBD908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD904u;
    // 0x1dbd908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD868u;
    sub_01DBD868_0x1dbd868(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD90Cu;
    // 0x1dbd90c: 0x0  nop
    ctx->pc = 0x1dbd90cu;
    // NOP
    ctx->pc = 0x1dbd910u;
}
