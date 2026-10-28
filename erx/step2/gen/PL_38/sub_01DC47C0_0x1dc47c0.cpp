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

// Function: sub_01DC47C0
// Address: 0x1dc47c0 - 0x1dc47d8
void sub_01DC47C0_0x1dc47c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC47C0_0x1dc47c0");
#endif

    ctx->pc = 0x1dc47c0u;

    // 0x1dc47c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc47c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc47c4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dc47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dc47c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc47c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc47cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc47ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc47d0: 0x87710b8  j           func_1DC42E0
    ctx->pc = 0x1DC47D0u;
    ctx->pc = 0x1DC47D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC47D0u;
    // 0x1dc47d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42E0u;
    sub_01DC42E0_0x1dc42e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC47D8u;
}
