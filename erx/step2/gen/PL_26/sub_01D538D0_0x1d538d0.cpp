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

// Function: sub_01D538D0
// Address: 0x1d538d0 - 0x1d53908
void sub_01D538D0_0x1d538d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D538D0_0x1d538d0");
#endif

    switch (ctx->pc) {
        case 0x1d538ecu: goto label_1d538ec;
        default: break;
    }

    ctx->pc = 0x1d538d0u;

    // 0x1d538d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d538d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d538d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d538d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d538d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d538d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d538dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d538dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d538e0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d538e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d538e4: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D538E4u;
    SET_GPR_U32(ctx, 31, 0x1D538ECu);
    ctx->pc = 0x1D538E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D538E4u;
    // 0x1d538e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D538E4u, 0x1D538ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D538ECu;
label_1d538ec:
    // 0x1d538ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d538ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d538f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d538f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d538f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d538f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d538f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d538f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d538fc: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1d538fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d53900: 0x87543ec  j           func_1D50FB0
    ctx->pc = 0x1D53900u;
    ctx->pc = 0x1D53904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53900u;
    // 0x1d53904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FB0u;
    sub_01D50FB0_0x1d50fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53908u;
}
