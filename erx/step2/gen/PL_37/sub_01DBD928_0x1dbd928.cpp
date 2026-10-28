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

// Function: sub_01DBD928
// Address: 0x1dbd928 - 0x1dbd948
void sub_01DBD928_0x1dbd928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD928_0x1dbd928");
#endif

    ctx->pc = 0x1dbd928u;

    // 0x1dbd928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd92c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x1dbd92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x1dbd930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd934: 0x24a5f770  addiu       $a1, $a1, -0x890
    ctx->pc = 0x1dbd934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965104));
    // 0x1dbd938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd93c: 0x876f608  j           func_1DBD820
    ctx->pc = 0x1DBD93Cu;
    ctx->pc = 0x1DBD940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD93Cu;
    // 0x1dbd940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD820u;
    sub_01DBD820_0x1dbd820(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD944u;
    // 0x1dbd944: 0x0  nop
    ctx->pc = 0x1dbd944u;
    // NOP
    ctx->pc = 0x1dbd948u;
}
