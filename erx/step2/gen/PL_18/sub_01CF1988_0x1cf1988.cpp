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

// Function: sub_01CF1988
// Address: 0x1cf1988 - 0x1cf19a8
void sub_01CF1988_0x1cf1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1988_0x1cf1988");
#endif

    ctx->pc = 0x1cf1988u;

    // 0x1cf1988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf198c: 0x3c0501cf  lui         $a1, 0x1CF
    ctx->pc = 0x1cf198cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)463 << 16));
    // 0x1cf1990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1994: 0x24a530c0  addiu       $a1, $a1, 0x30C0
    ctx->pc = 0x1cf1994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
    // 0x1cf1998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf199c: 0x873c148  j           func_1CF0520
    ctx->pc = 0x1CF199Cu;
    ctx->pc = 0x1CF19A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF199Cu;
    // 0x1cf19a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0520u;
    sub_01CF0520_0x1cf0520(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF19A4u;
    // 0x1cf19a4: 0x0  nop
    ctx->pc = 0x1cf19a4u;
    // NOP
    ctx->pc = 0x1cf19a8u;
}
