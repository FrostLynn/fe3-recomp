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

// Function: sub_01DB3648
// Address: 0x1db3648 - 0x1db3668
void sub_01DB3648_0x1db3648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3648_0x1db3648");
#endif

    ctx->pc = 0x1db3648u;

    // 0x1db3648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db364c: 0x3c0501db  lui         $a1, 0x1DB
    ctx->pc = 0x1db364cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)475 << 16));
    // 0x1db3650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db3650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3654: 0x24a55010  addiu       $a1, $a1, 0x5010
    ctx->pc = 0x1db3654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20496));
    // 0x1db3658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db365c: 0x876c7be  j           func_1DB1EF8
    ctx->pc = 0x1DB365Cu;
    ctx->pc = 0x1DB3660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB365Cu;
    // 0x1db3660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1EF8u;
    sub_01DB1EF8_0x1db1ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB3664u;
    // 0x1db3664: 0x0  nop
    ctx->pc = 0x1db3664u;
    // NOP
    ctx->pc = 0x1db3668u;
}
