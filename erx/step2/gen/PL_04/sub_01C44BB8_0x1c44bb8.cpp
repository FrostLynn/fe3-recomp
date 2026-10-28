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

// Function: sub_01C44BB8
// Address: 0x1c44bb8 - 0x1c44bd8
void sub_01C44BB8_0x1c44bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44BB8_0x1c44bb8");
#endif

    ctx->pc = 0x1c44bb8u;

    // 0x1c44bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44bbc: 0x3c0501c4  lui         $a1, 0x1C4
    ctx->pc = 0x1c44bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
    // 0x1c44bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44bc4: 0x24a57e90  addiu       $a1, $a1, 0x7E90
    ctx->pc = 0x1c44bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32400));
    // 0x1c44bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44bcc: 0x8710d0a  j           func_1C43428
    ctx->pc = 0x1C44BCCu;
    ctx->pc = 0x1C44BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44BCCu;
    // 0x1c44bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43428u;
    sub_01C43428_0x1c43428(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44BD4u;
    // 0x1c44bd4: 0x0  nop
    ctx->pc = 0x1c44bd4u;
    // NOP
    ctx->pc = 0x1c44bd8u;
}
