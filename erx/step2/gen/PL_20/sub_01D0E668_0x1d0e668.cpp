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

// Function: sub_01D0E668
// Address: 0x1d0e668 - 0x1d0e688
void sub_01D0E668_0x1d0e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E668_0x1d0e668");
#endif

    ctx->pc = 0x1d0e668u;

    // 0x1d0e668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e66c: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x1d0e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e674: 0x24a524b0  addiu       $a1, $a1, 0x24B0
    ctx->pc = 0x1d0e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
    // 0x1d0e678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e67c: 0x8743346  j           func_1D0CD18
    ctx->pc = 0x1D0E67Cu;
    ctx->pc = 0x1D0E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E67Cu;
    // 0x1d0e680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CD18u;
    sub_01D0CD18_0x1d0cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E684u;
    // 0x1d0e684: 0x0  nop
    ctx->pc = 0x1d0e684u;
    // NOP
    ctx->pc = 0x1d0e688u;
}
