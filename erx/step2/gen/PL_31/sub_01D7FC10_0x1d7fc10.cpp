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

// Function: sub_01D7FC10
// Address: 0x1d7fc10 - 0x1d7fc68
void sub_01D7FC10_0x1d7fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FC10_0x1d7fc10");
#endif

    switch (ctx->pc) {
        case 0x1d7fc3cu: goto label_1d7fc3c;
        case 0x1d7fc48u: goto label_1d7fc48;
        default: break;
    }

    ctx->pc = 0x1d7fc10u;

    // 0x1d7fc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fc14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7fc18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fc1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7fc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fc20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7fc24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fc24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc2c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7fc2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7fc30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7fc30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc34: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FC34u;
    SET_GPR_U32(ctx, 31, 0x1D7FC3Cu);
    ctx->pc = 0x1D7FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FC34u;
    // 0x1d7fc38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FC34u, 0x1D7FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC3Cu;
label_1d7fc3c:
    // 0x1d7fc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc40: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7FC40u;
    SET_GPR_U32(ctx, 31, 0x1D7FC48u);
    ctx->pc = 0x1D7FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FC40u;
    // 0x1d7fc44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7FC40u, 0x1D7FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC48u;
label_1d7fc48:
    // 0x1d7fc48: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7fc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc50: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d7fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d7fc54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7fc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7fc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7fc5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fc5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fc60: 0x875f870  j           func_1D7E1C0
    ctx->pc = 0x1D7FC60u;
    ctx->pc = 0x1D7FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FC60u;
    // 0x1d7fc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E1C0u;
    sub_01D7E1C0_0x1d7e1c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7FC68u;
}
