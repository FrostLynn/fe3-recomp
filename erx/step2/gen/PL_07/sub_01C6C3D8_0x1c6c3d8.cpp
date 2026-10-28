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

// Function: sub_01C6C3D8
// Address: 0x1c6c3d8 - 0x1c6c3f8
void sub_01C6C3D8_0x1c6c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C3D8_0x1c6c3d8");
#endif

    ctx->pc = 0x1c6c3d8u;

    // 0x1c6c3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c3dc: 0x3c0501c7  lui         $a1, 0x1C7
    ctx->pc = 0x1c6c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c3e4: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20
    ctx->pc = 0x1c6c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    // 0x1c6c3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c3ec: 0x871ab84  j           func_1C6AE10
    ctx->pc = 0x1C6C3ECu;
    ctx->pc = 0x1C6C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C3ECu;
    // 0x1c6c3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE10u;
    sub_01C6AE10_0x1c6ae10(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C3F4u;
    // 0x1c6c3f4: 0x0  nop
    ctx->pc = 0x1c6c3f4u;
    // NOP
    ctx->pc = 0x1c6c3f8u;
}
