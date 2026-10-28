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

// Function: sub_01D67660
// Address: 0x1d67660 - 0x1d67678
void sub_01D67660_0x1d67660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67660_0x1d67660");
#endif

    ctx->pc = 0x1d67660u;

    // 0x1d67660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67664: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1d67664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1d67668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d67668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6766c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67670: 0x8759c5a  j           func_1D67168
    ctx->pc = 0x1D67670u;
    ctx->pc = 0x1D67674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67670u;
    // 0x1d67674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67168u;
    sub_01D67168_0x1d67168(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67678u;
}
