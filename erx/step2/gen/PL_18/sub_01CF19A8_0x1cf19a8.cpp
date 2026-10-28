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

// Function: sub_01CF19A8
// Address: 0x1cf19a8 - 0x1cf19c0
void sub_01CF19A8_0x1cf19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF19A8_0x1cf19a8");
#endif

    ctx->pc = 0x1cf19a8u;

    // 0x1cf19a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf19ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf19b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf19b4: 0x873c116  j           func_1CF0458
    ctx->pc = 0x1CF19B4u;
    ctx->pc = 0x1CF19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF19B4u;
    // 0x1cf19b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0458u;
    sub_01CF0458_0x1cf0458(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF19BCu;
    // 0x1cf19bc: 0x0  nop
    ctx->pc = 0x1cf19bcu;
    // NOP
    ctx->pc = 0x1cf19c0u;
}
