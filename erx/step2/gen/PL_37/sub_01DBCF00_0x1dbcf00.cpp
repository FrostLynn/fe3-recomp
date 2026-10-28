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

// Function: sub_01DBCF00
// Address: 0x1dbcf00 - 0x1dbcf38
void sub_01DBCF00_0x1dbcf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCF00_0x1dbcf00");
#endif

    switch (ctx->pc) {
        case 0x1dbcf14u: goto label_1dbcf14;
        default: break;
    }

    ctx->pc = 0x1dbcf00u;

    // 0x1dbcf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbcf04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbcf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbcf08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbcf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbcf0c: 0xc76ee8a  jal         func_1DBBA28
    ctx->pc = 0x1DBCF0Cu;
    SET_GPR_U32(ctx, 31, 0x1DBCF14u);
    ctx->pc = 0x1DBCF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCF0Cu;
    // 0x1dbcf10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBA28u, 0x1DBCF0Cu, 0x1DBCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCF14u;
label_1dbcf14:
    // 0x1dbcf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcf18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbcf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbcf1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbcf1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcf20: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1dbcf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1dbcf24: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1dbcf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dbcf28: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1dbcf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1dbcf2c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1dbcf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1dbcf30: 0x876f350  j           func_1DBCD40
    ctx->pc = 0x1DBCF30u;
    ctx->pc = 0x1DBCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCF30u;
    // 0x1dbcf34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCD40u;
    sub_01DBCD40_0x1dbcd40(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCF38u;
}
