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

// Function: sub_01C116A0
// Address: 0x1c116a0 - 0x1c116b8
void sub_01C116A0_0x1c116a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C116A0_0x1c116a0");
#endif

    ctx->pc = 0x1c116a0u;

    // 0x1c116a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c116a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c116a4: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x1c116a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1c116a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c116a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c116ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c116acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c116b0: 0x870406c  j           func_1C101B0
    ctx->pc = 0x1C116B0u;
    ctx->pc = 0x1C116B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C116B0u;
    // 0x1c116b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C101B0u;
    sub_01C101B0_0x1c101b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C116B8u;
}
