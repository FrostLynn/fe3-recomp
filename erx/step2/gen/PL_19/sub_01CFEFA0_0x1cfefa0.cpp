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

// Function: sub_01CFEFA0
// Address: 0x1cfefa0 - 0x1cfefc8
void sub_01CFEFA0_0x1cfefa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEFA0_0x1cfefa0");
#endif

    switch (ctx->pc) {
        case 0x1cfefb4u: goto label_1cfefb4;
        default: break;
    }

    ctx->pc = 0x1cfefa0u;

    // 0x1cfefa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfefa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfefa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfefa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfefa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfefa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfefac: 0xc73f4b0  jal         func_1CFD2C0
    ctx->pc = 0x1CFEFACu;
    SET_GPR_U32(ctx, 31, 0x1CFEFB4u);
    ctx->pc = 0x1CFEFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEFACu;
    // 0x1cfefb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2C0u, 0x1CFEFACu, 0x1CFEFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEFB4u;
label_1cfefb4:
    // 0x1cfefb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfefb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfefb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfefb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfefbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfefbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfefc0: 0x873f7a4  j           func_1CFDE90
    ctx->pc = 0x1CFEFC0u;
    ctx->pc = 0x1CFEFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEFC0u;
    // 0x1cfefc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDE90u;
    sub_01CFDE90_0x1cfde90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEFC8u;
}
