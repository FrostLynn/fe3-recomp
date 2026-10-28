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

// Function: sub_01D3DAC0
// Address: 0x1d3dac0 - 0x1d3dae8
void sub_01D3DAC0_0x1d3dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DAC0_0x1d3dac0");
#endif

    switch (ctx->pc) {
        case 0x1d3dad4u: goto label_1d3dad4;
        default: break;
    }

    ctx->pc = 0x1d3dac0u;

    // 0x1d3dac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3dac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3dac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3dacc: 0xc74ef20  jal         func_1D3BC80
    ctx->pc = 0x1D3DACCu;
    SET_GPR_U32(ctx, 31, 0x1D3DAD4u);
    ctx->pc = 0x1D3DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DACCu;
    // 0x1d3dad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC80u, 0x1D3DACCu, 0x1D3DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DAD4u;
label_1d3dad4:
    // 0x1d3dad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3dad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3dadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3dadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dae0: 0x874f1ae  j           func_1D3C6B8
    ctx->pc = 0x1D3DAE0u;
    ctx->pc = 0x1D3DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DAE0u;
    // 0x1d3dae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C6B8u;
    sub_01D3C6B8_0x1d3c6b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3DAE8u;
}
