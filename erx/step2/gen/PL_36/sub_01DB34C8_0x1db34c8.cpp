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

// Function: sub_01DB34C8
// Address: 0x1db34c8 - 0x1db34e0
void sub_01DB34C8_0x1db34c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB34C8_0x1db34c8");
#endif

    ctx->pc = 0x1db34c8u;

    // 0x1db34c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db34c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db34cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db34ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db34d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db34d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db34d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db34d8: 0x876c66e  j           func_1DB19B8
    ctx->pc = 0x1DB34D8u;
    ctx->pc = 0x1DB34DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB34D8u;
    // 0x1db34dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB19B8u;
    sub_01DB19B8_0x1db19b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB34E0u;
}
