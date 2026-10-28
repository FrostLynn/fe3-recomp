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

// Function: sub_01CF0168
// Address: 0x1cf0168 - 0x1cf0180
void sub_01CF0168_0x1cf0168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0168_0x1cf0168");
#endif

    ctx->pc = 0x1cf0168u;

    // 0x1cf0168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf016c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf0170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf0170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0174: 0x873bd62  j           func_1CEF588
    ctx->pc = 0x1CF0174u;
    ctx->pc = 0x1CF0178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0174u;
    // 0x1cf0178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF588u;
    sub_01CEF588_0x1cef588(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF017Cu;
    // 0x1cf017c: 0x0  nop
    ctx->pc = 0x1cf017cu;
    // NOP
    ctx->pc = 0x1cf0180u;
}
