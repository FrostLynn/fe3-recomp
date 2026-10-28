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

// Function: sub_01CF1CE0
// Address: 0x1cf1ce0 - 0x1cf1d00
void sub_01CF1CE0_0x1cf1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1CE0_0x1cf1ce0");
#endif

    ctx->pc = 0x1cf1ce0u;

    // 0x1cf1ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1ce4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1cf1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1cf1ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1cec: 0x3c0501cf  lui         $a1, 0x1CF
    ctx->pc = 0x1cf1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)463 << 16));
    // 0x1cf1cf0: 0x24a565e0  addiu       $a1, $a1, 0x65E0
    ctx->pc = 0x1cf1cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26080));
    // 0x1cf1cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1cf8: 0x873c148  j           func_1CF0520
    ctx->pc = 0x1CF1CF8u;
    ctx->pc = 0x1CF1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1CF8u;
    // 0x1cf1cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0520u;
    sub_01CF0520_0x1cf0520(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1D00u;
}
