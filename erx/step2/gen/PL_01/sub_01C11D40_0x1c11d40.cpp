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

// Function: sub_01C11D40
// Address: 0x1c11d40 - 0x1c11d60
void sub_01C11D40_0x1c11d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11D40_0x1c11d40");
#endif

    ctx->pc = 0x1c11d40u;

    // 0x1c11d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11d44: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c11d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c11d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11d4c: 0x24a53b60  addiu       $a1, $a1, 0x3B60
    ctx->pc = 0x1c11d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15200));
    // 0x1c11d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11d54: 0x87041be  j           func_1C106F8
    ctx->pc = 0x1C11D54u;
    ctx->pc = 0x1C11D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11D54u;
    // 0x1c11d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C106F8u;
    sub_01C106F8_0x1c106f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11D5Cu;
    // 0x1c11d5c: 0x0  nop
    ctx->pc = 0x1c11d5cu;
    // NOP
    ctx->pc = 0x1c11d60u;
}
