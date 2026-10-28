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

// Function: sub_01D341A0
// Address: 0x1d341a0 - 0x1d341e8
void sub_01D341A0_0x1d341a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D341A0_0x1d341a0");
#endif

    switch (ctx->pc) {
        case 0x1d341ccu: goto label_1d341cc;
        default: break;
    }

    ctx->pc = 0x1d341a0u;

    // 0x1d341a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d341a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d341a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d341a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d341a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d341a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d341ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d341acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d341b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d341b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d341b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d341b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d341b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d341b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d341bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d341bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d341c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d341c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d341c4: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D341C4u;
    SET_GPR_U32(ctx, 31, 0x1D341CCu);
    ctx->pc = 0x1D341C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D341C4u;
    // 0x1d341c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D341C4u, 0x1D341CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D341CCu;
label_1d341cc:
    // 0x1d341cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d341ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d341d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d341d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d341d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d341d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d341d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d341d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d341dc: 0x874cd5a  j           func_1D33568
    ctx->pc = 0x1D341DCu;
    ctx->pc = 0x1D341E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D341DCu;
    // 0x1d341e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    sub_01D33568_0x1d33568(rdram, ctx, runtime); return;
    ctx->pc = 0x1D341E4u;
    // 0x1d341e4: 0x0  nop
    ctx->pc = 0x1d341e4u;
    // NOP
    ctx->pc = 0x1d341e8u;
}
