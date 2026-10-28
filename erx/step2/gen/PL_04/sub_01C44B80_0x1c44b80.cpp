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

// Function: sub_01C44B80
// Address: 0x1c44b80 - 0x1c44bb8
void sub_01C44B80_0x1c44b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44B80_0x1c44b80");
#endif

    switch (ctx->pc) {
        case 0x1c44b9cu: goto label_1c44b9c;
        default: break;
    }

    ctx->pc = 0x1c44b80u;

    // 0x1c44b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c44b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44b90: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c44b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c44b94: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C44B94u;
    SET_GPR_U32(ctx, 31, 0x1C44B9Cu);
    ctx->pc = 0x1C44B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44B94u;
    // 0x1c44b98: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C44B94u, 0x1C44B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44B9Cu;
label_1c44b9c:
    // 0x1c44b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44ba4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44bac: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c44bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c44bb0: 0x871092c  j           func_1C424B0
    ctx->pc = 0x1C44BB0u;
    ctx->pc = 0x1C44BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44BB0u;
    // 0x1c44bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424B0u;
    sub_01C424B0_0x1c424b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44BB8u;
}
