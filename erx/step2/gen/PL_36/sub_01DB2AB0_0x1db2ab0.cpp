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

// Function: sub_01DB2AB0
// Address: 0x1db2ab0 - 0x1db2ad8
void sub_01DB2AB0_0x1db2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2AB0_0x1db2ab0");
#endif

    switch (ctx->pc) {
        case 0x1db2ac4u: goto label_1db2ac4;
        default: break;
    }

    ctx->pc = 0x1db2ab0u;

    // 0x1db2ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2abc: 0xc76c3ec  jal         func_1DB0FB0
    ctx->pc = 0x1DB2ABCu;
    SET_GPR_U32(ctx, 31, 0x1DB2AC4u);
    ctx->pc = 0x1DB2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2ABCu;
    // 0x1db2ac0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0FB0u, 0x1DB2ABCu, 0x1DB2AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2AC4u;
label_1db2ac4:
    // 0x1db2ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2ad0: 0x876c3e0  j           func_1DB0F80
    ctx->pc = 0x1DB2AD0u;
    ctx->pc = 0x1DB2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2AD0u;
    // 0x1db2ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F80u;
    sub_01DB0F80_0x1db0f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2AD8u;
}
