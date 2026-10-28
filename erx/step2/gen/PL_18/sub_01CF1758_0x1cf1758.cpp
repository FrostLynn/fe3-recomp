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

// Function: sub_01CF1758
// Address: 0x1cf1758 - 0x1cf1770
void sub_01CF1758_0x1cf1758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1758_0x1cf1758");
#endif

    ctx->pc = 0x1cf1758u;

    // 0x1cf1758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf175c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1cf175cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1cf1760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1768: 0x873c0c2  j           func_1CF0308
    ctx->pc = 0x1CF1768u;
    ctx->pc = 0x1CF176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1768u;
    // 0x1cf176c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0308u;
    sub_01CF0308_0x1cf0308(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1770u;
}
