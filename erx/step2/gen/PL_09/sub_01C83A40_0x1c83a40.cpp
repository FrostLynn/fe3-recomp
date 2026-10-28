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

// Function: sub_01C83A40
// Address: 0x1c83a40 - 0x1c83a60
void sub_01C83A40_0x1c83a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83A40_0x1c83a40");
#endif

    ctx->pc = 0x1c83a40u;

    // 0x1c83a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c83a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c83a44: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c83a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c83a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c83a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c83a4c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x1c83a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x1c83a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c83a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83a54: 0x87207be  j           func_1C81EF8
    ctx->pc = 0x1C83A54u;
    ctx->pc = 0x1C83A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83A54u;
    // 0x1c83a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81EF8u;
    sub_01C81EF8_0x1c81ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C83A5Cu;
    // 0x1c83a5c: 0x0  nop
    ctx->pc = 0x1c83a5cu;
    // NOP
    ctx->pc = 0x1c83a60u;
}
