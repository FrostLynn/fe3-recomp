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

// Function: sub_01DBD220
// Address: 0x1dbd220 - 0x1dbd238
void sub_01DBD220_0x1dbd220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD220_0x1dbd220");
#endif

    ctx->pc = 0x1dbd220u;

    // 0x1dbd220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd22c: 0x876ee7c  j           func_1DBB9F0
    ctx->pc = 0x1DBD22Cu;
    ctx->pc = 0x1DBD230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD22Cu;
    // 0x1dbd230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9F0u;
    sub_01DBB9F0_0x1dbb9f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD234u;
    // 0x1dbd234: 0x0  nop
    ctx->pc = 0x1dbd234u;
    // NOP
    ctx->pc = 0x1dbd238u;
}
