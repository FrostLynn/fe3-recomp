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

// Function: sub_01DBD910
// Address: 0x1dbd910 - 0x1dbd928
void sub_01DBD910_0x1dbd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD910_0x1dbd910");
#endif

    ctx->pc = 0x1dbd910u;

    // 0x1dbd910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd91c: 0x876f600  j           func_1DBD800
    ctx->pc = 0x1DBD91Cu;
    ctx->pc = 0x1DBD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD91Cu;
    // 0x1dbd920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD800u;
    sub_01DBD800_0x1dbd800(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD924u;
    // 0x1dbd924: 0x0  nop
    ctx->pc = 0x1dbd924u;
    // NOP
    ctx->pc = 0x1dbd928u;
}
