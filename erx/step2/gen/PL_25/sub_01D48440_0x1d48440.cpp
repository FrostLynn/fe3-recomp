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

// Function: sub_01D48440
// Address: 0x1d48440 - 0x1d48460
void sub_01D48440_0x1d48440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48440_0x1d48440");
#endif

    ctx->pc = 0x1d48440u;

    // 0x1d48440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d48444: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x1d48444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x1d48448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d48448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4844c: 0x24a5ac40  addiu       $a1, $a1, -0x53C0
    ctx->pc = 0x1d4844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945856));
    // 0x1d48450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48454: 0x8751b40  j           func_1D46D00
    ctx->pc = 0x1D48454u;
    ctx->pc = 0x1D48458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48454u;
    // 0x1d48458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46D00u;
    sub_01D46D00_0x1d46d00(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4845Cu;
    // 0x1d4845c: 0x0  nop
    ctx->pc = 0x1d4845cu;
    // NOP
    ctx->pc = 0x1d48460u;
}
