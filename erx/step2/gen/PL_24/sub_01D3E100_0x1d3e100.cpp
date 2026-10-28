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

// Function: sub_01D3E100
// Address: 0x1d3e100 - 0x1d3e158
void sub_01D3E100_0x1d3e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E100_0x1d3e100");
#endif

    switch (ctx->pc) {
        case 0x1d3e130u: goto label_1d3e130;
        case 0x1d3e13cu: goto label_1d3e13c;
        default: break;
    }

    ctx->pc = 0x1d3e100u;

    // 0x1d3e100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e104: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d3e104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d3e108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3e108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3e10c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3e10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3e110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3e110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3e114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3e114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3e118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e11c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3e11cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e120: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3e120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3e124: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3e124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e128: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3E128u;
    SET_GPR_U32(ctx, 31, 0x1D3E130u);
    ctx->pc = 0x1D3E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E128u;
    // 0x1d3e12c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3E128u, 0x1D3E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E130u;
label_1d3e130:
    // 0x1d3e130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e134: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3E134u;
    SET_GPR_U32(ctx, 31, 0x1D3E13Cu);
    ctx->pc = 0x1D3E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E134u;
    // 0x1d3e138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3E134u, 0x1D3E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E13Cu;
label_1d3e13c:
    // 0x1d3e13c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e140: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3e140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3e144: 0x3c0501d4  lui         $a1, 0x1D4
    ctx->pc = 0x1d3e144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3e148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3e14c: 0x24a5fc00  addiu       $a1, $a1, -0x400
    ctx->pc = 0x1d3e14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x1d3e150: 0x874ef2a  j           func_1D3BCA8
    ctx->pc = 0x1D3E150u;
    ctx->pc = 0x1D3E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E150u;
    // 0x1d3e154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCA8u;
    sub_01D3BCA8_0x1d3bca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3E158u;
}
