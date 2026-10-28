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

// Function: sub_01D8AED0
// Address: 0x1d8aed0 - 0x1d8aef0
void sub_01D8AED0_0x1d8aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AED0_0x1d8aed0");
#endif

    ctx->pc = 0x1d8aed0u;

    // 0x1d8aed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8aed4: 0x3c0501d9  lui         $a1, 0x1D9
    ctx->pc = 0x1d8aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)473 << 16));
    // 0x1d8aed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8aedc: 0x24a5bbb0  addiu       $a1, $a1, -0x4450
    ctx->pc = 0x1d8aedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x1d8aee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8aee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8aee4: 0x876263e  j           func_1D898F8
    ctx->pc = 0x1D8AEE4u;
    ctx->pc = 0x1D8AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AEE4u;
    // 0x1d8aee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D898F8u;
    sub_01D898F8_0x1d898f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8AEECu;
    // 0x1d8aeec: 0x0  nop
    ctx->pc = 0x1d8aeecu;
    // NOP
    ctx->pc = 0x1d8aef0u;
}
