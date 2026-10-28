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

// Function: sub_01D0E618
// Address: 0x1d0e618 - 0x1d0e638
void sub_01D0E618_0x1d0e618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E618_0x1d0e618");
#endif

    ctx->pc = 0x1d0e618u;

    // 0x1d0e618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e61c: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x1d0e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e624: 0x24a51790  addiu       $a1, $a1, 0x1790
    ctx->pc = 0x1d0e624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6032));
    // 0x1d0e628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e62c: 0x8743346  j           func_1D0CD18
    ctx->pc = 0x1D0E62Cu;
    ctx->pc = 0x1D0E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E62Cu;
    // 0x1d0e630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CD18u;
    sub_01D0CD18_0x1d0cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E634u;
    // 0x1d0e634: 0x0  nop
    ctx->pc = 0x1d0e634u;
    // NOP
    ctx->pc = 0x1d0e638u;
}
