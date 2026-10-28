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

// Function: sub_01C320E0
// Address: 0x1c320e0 - 0x1c32120
void sub_01C320E0_0x1c320e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C320E0_0x1c320e0");
#endif

    switch (ctx->pc) {
        case 0x1c320fcu: goto label_1c320fc;
        case 0x1c3210cu: goto label_1c3210c;
        default: break;
    }

    ctx->pc = 0x1c320e0u;

    // 0x1c320e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c320e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c320e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c320e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c320e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c320e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c320ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c320ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c320f0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c320f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c320f4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C320F4u;
    SET_GPR_U32(ctx, 31, 0x1C320FCu);
    ctx->pc = 0x1C320F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C320F4u;
    // 0x1c320f8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C320F4u, 0x1C320FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C320FCu;
label_1c320fc:
    // 0x1c320fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c320fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c32100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32104: 0xc70bdec  jal         func_1C2F7B0
    ctx->pc = 0x1C32104u;
    SET_GPR_U32(ctx, 31, 0x1C3210Cu);
    ctx->pc = 0x1C32108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32104u;
    // 0x1c32108: 0xa04f0950  sb          $t7, 0x950($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F7B0u, 0x1C32104u, 0x1C3210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3210Cu;
label_1c3210c:
    // 0x1c3210c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c32110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c32114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c32114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c32118: 0x870c086  j           func_1C30218
    ctx->pc = 0x1C32118u;
    ctx->pc = 0x1C3211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32118u;
    // 0x1c3211c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30218u;
    sub_01C30218_0x1c30218(rdram, ctx, runtime); return;
    ctx->pc = 0x1C32120u;
}
