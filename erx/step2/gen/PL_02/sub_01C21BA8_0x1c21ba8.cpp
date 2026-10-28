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

// Function: sub_01C21BA8
// Address: 0x1c21ba8 - 0x1c21bc8
void sub_01C21BA8_0x1c21ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21BA8_0x1c21ba8");
#endif

    ctx->pc = 0x1c21ba8u;

    // 0x1c21ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21bac: 0x3c0501c2  lui         $a1, 0x1C2
    ctx->pc = 0x1c21bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)450 << 16));
    // 0x1c21bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21bb4: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x1c21bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x1c21bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21bbc: 0x8708050  j           func_1C20140
    ctx->pc = 0x1C21BBCu;
    ctx->pc = 0x1C21BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21BBCu;
    // 0x1c21bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20140u;
    sub_01C20140_0x1c20140(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21BC4u;
    // 0x1c21bc4: 0x0  nop
    ctx->pc = 0x1c21bc4u;
    // NOP
    ctx->pc = 0x1c21bc8u;
}
