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

// Function: sub_01CF1770
// Address: 0x1cf1770 - 0x1cf1788
void sub_01CF1770_0x1cf1770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1770_0x1cf1770");
#endif

    ctx->pc = 0x1cf1770u;

    // 0x1cf1770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf177c: 0x873c0ee  j           func_1CF03B8
    ctx->pc = 0x1CF177Cu;
    ctx->pc = 0x1CF1780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF177Cu;
    // 0x1cf1780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF03B8u;
    sub_01CF03B8_0x1cf03b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1784u;
    // 0x1cf1784: 0x0  nop
    ctx->pc = 0x1cf1784u;
    // NOP
    ctx->pc = 0x1cf1788u;
}
