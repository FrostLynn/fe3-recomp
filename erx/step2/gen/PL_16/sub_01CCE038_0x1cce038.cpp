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

// Function: sub_01CCE038
// Address: 0x1cce038 - 0x1cce050
void sub_01CCE038_0x1cce038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE038_0x1cce038");
#endif

    ctx->pc = 0x1cce038u;

    // 0x1cce038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cce03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cce040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cce040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce044: 0x8733520  j           func_1CCD480
    ctx->pc = 0x1CCE044u;
    ctx->pc = 0x1CCE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE044u;
    // 0x1cce048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    sub_01CCD480_0x1ccd480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE04Cu;
    // 0x1cce04c: 0x0  nop
    ctx->pc = 0x1cce04cu;
    // NOP
    ctx->pc = 0x1cce050u;
}
