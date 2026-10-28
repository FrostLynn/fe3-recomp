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

// Function: sub_01C11D90
// Address: 0x1c11d90 - 0x1c11db0
void sub_01C11D90_0x1c11d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11D90_0x1c11d90");
#endif

    ctx->pc = 0x1c11d90u;

    // 0x1c11d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11d94: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c11d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c11d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11d9c: 0x24a54a20  addiu       $a1, $a1, 0x4A20
    ctx->pc = 0x1c11d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18976));
    // 0x1c11da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11da4: 0x87041be  j           func_1C106F8
    ctx->pc = 0x1C11DA4u;
    ctx->pc = 0x1C11DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11DA4u;
    // 0x1c11da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C106F8u;
    sub_01C106F8_0x1c106f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11DACu;
    // 0x1c11dac: 0x0  nop
    ctx->pc = 0x1c11dacu;
    // NOP
    ctx->pc = 0x1c11db0u;
}
