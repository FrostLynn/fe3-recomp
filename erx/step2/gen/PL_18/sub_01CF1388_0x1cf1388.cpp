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

// Function: sub_01CF1388
// Address: 0x1cf1388 - 0x1cf13d8
void sub_01CF1388_0x1cf1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1388_0x1cf1388");
#endif

    switch (ctx->pc) {
        case 0x1cf13b4u: goto label_1cf13b4;
        default: break;
    }

    ctx->pc = 0x1cf1388u;

    // 0x1cf1388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf138c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf138cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1394: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf1394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf139c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf13a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf13a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf13a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf13a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf13a8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf13a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf13ac: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF13ACu;
    SET_GPR_U32(ctx, 31, 0x1CF13B4u);
    ctx->pc = 0x1CF13B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF13ACu;
    // 0x1cf13b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF13ACu, 0x1CF13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF13B4u;
label_1cf13b4:
    // 0x1cf13b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf13b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf13b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf13b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf13bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf13bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf13c0: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x1cf13c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1cf13c4: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1cf13c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1cf13c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf13c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf13cc: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF13CCu;
    ctx->pc = 0x1CF13D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF13CCu;
    // 0x1cf13d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF13D4u;
    // 0x1cf13d4: 0x0  nop
    ctx->pc = 0x1cf13d4u;
    // NOP
    ctx->pc = 0x1cf13d8u;
}
