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

// Function: sub_01CF1100
// Address: 0x1cf1100 - 0x1cf1150
void sub_01CF1100_0x1cf1100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1100_0x1cf1100");
#endif

    switch (ctx->pc) {
        case 0x1cf112cu: goto label_1cf112c;
        default: break;
    }

    ctx->pc = 0x1cf1100u;

    // 0x1cf1100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf110c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf110cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf1114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf111c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf111cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1120: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1124: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1124u;
    SET_GPR_U32(ctx, 31, 0x1CF112Cu);
    ctx->pc = 0x1CF1128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1124u;
    // 0x1cf1128: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1124u, 0x1CF112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF112Cu;
label_1cf112c:
    // 0x1cf112c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1138: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x1cf1138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1cf113c: 0x240600d8  addiu       $a2, $zero, 0xD8
    ctx->pc = 0x1cf113cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
    // 0x1cf1140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf1140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1144: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF1144u;
    ctx->pc = 0x1CF1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1144u;
    // 0x1cf1148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF114Cu;
    // 0x1cf114c: 0x0  nop
    ctx->pc = 0x1cf114cu;
    // NOP
    ctx->pc = 0x1cf1150u;
}
