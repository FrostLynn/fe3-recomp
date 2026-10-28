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

// Function: sub_01C9AFB0
// Address: 0x1c9afb0 - 0x1c9b008
void sub_01C9AFB0_0x1c9afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AFB0_0x1c9afb0");
#endif

    switch (ctx->pc) {
        case 0x1c9afdcu: goto label_1c9afdc;
        case 0x1c9afe8u: goto label_1c9afe8;
        default: break;
    }

    ctx->pc = 0x1c9afb0u;

    // 0x1c9afb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9afb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9afb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9afb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9afbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9afbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9afc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9afc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9afc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9afc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afcc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9afccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9afd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9afd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afd4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9AFD4u;
    SET_GPR_U32(ctx, 31, 0x1C9AFDCu);
    ctx->pc = 0x1C9AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AFD4u;
    // 0x1c9afd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9AFD4u, 0x1C9AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AFDCu;
label_1c9afdc:
    // 0x1c9afdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afe0: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9AFE0u;
    SET_GPR_U32(ctx, 31, 0x1C9AFE8u);
    ctx->pc = 0x1C9AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AFE0u;
    // 0x1c9afe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9AFE0u, 0x1C9AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AFE8u;
label_1c9afe8:
    // 0x1c9afe8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9afec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aff0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c9aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c9aff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aff8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9affc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9affcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b000: 0x872656a  j           func_1C995A8
    ctx->pc = 0x1C9B000u;
    ctx->pc = 0x1C9B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B000u;
    // 0x1c9b004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C995A8u;
    sub_01C995A8_0x1c995a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B008u;
}
