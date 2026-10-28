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

// Function: sub_01DBD018
// Address: 0x1dbd018 - 0x1dbd030
void sub_01DBD018_0x1dbd018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD018_0x1dbd018");
#endif

    ctx->pc = 0x1dbd018u;

    // 0x1dbd018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd024: 0x876ee96  j           func_1DBBA58
    ctx->pc = 0x1DBD024u;
    ctx->pc = 0x1DBD028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD024u;
    // 0x1dbd028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA58u;
    sub_01DBBA58_0x1dbba58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD02Cu;
    // 0x1dbd02c: 0x0  nop
    ctx->pc = 0x1dbd02cu;
    // NOP
    ctx->pc = 0x1dbd030u;
}
