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

// Function: sub_01C52348
// Address: 0x1c52348 - 0x1c52380
void sub_01C52348_0x1c52348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52348_0x1c52348");
#endif

    switch (ctx->pc) {
        case 0x1c52364u: goto label_1c52364;
        default: break;
    }

    ctx->pc = 0x1c52348u;

    // 0x1c52348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5234c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c52354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52358: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5235c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5235Cu;
    SET_GPR_U32(ctx, 31, 0x1C52364u);
    ctx->pc = 0x1C52360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5235Cu;
    // 0x1c52360: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5235Cu, 0x1C52364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52364u;
label_1c52364:
    // 0x1c52364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5236c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c5236cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52374: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c52374u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c52378: 0x8713e78  j           func_1C4F9E0
    ctx->pc = 0x1C52378u;
    ctx->pc = 0x1C5237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52378u;
    // 0x1c5237c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9E0u;
    sub_01C4F9E0_0x1c4f9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52380u;
}
