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

// Function: sub_01DB2CF0
// Address: 0x1db2cf0 - 0x1db2d18
void sub_01DB2CF0_0x1db2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2CF0_0x1db2cf0");
#endif

    switch (ctx->pc) {
        case 0x1db2d04u: goto label_1db2d04;
        default: break;
    }

    ctx->pc = 0x1db2cf0u;

    // 0x1db2cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2cf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2cf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2cfc: 0xc76c3ec  jal         func_1DB0FB0
    ctx->pc = 0x1DB2CFCu;
    SET_GPR_U32(ctx, 31, 0x1DB2D04u);
    ctx->pc = 0x1DB2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2CFCu;
    // 0x1db2d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0FB0u, 0x1DB2CFCu, 0x1DB2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2D04u;
label_1db2d04:
    // 0x1db2d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2d10: 0x876c3e0  j           func_1DB0F80
    ctx->pc = 0x1DB2D10u;
    ctx->pc = 0x1DB2D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2D10u;
    // 0x1db2d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F80u;
    sub_01DB0F80_0x1db0f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2D18u;
}
