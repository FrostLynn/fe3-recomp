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

// Function: sub_01C00CC0
// Address: 0x1c00cc0 - 0x1c00d08
void sub_01C00CC0_0x1c00cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00CC0_0x1c00cc0");
#endif

    switch (ctx->pc) {
        case 0x1c00cecu: goto label_1c00cec;
        default: break;
    }

    ctx->pc = 0x1c00cc0u;

    // 0x1c00cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c00cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00cc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00ccc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c00cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c00cd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c00cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00cd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c00cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ce0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c00ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c00ce4: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C00CE4u;
    SET_GPR_U32(ctx, 31, 0x1C00CECu);
    ctx->pc = 0x1C00CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00CE4u;
    // 0x1c00ce8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C00CE4u, 0x1C00CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00CECu;
label_1c00cec:
    // 0x1c00cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00cf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c00cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00cf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00cf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c00cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c00cfc: 0x870001c  j           func_1C00070
    ctx->pc = 0x1C00CFCu;
    ctx->pc = 0x1C00D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00CFCu;
    // 0x1c00d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00070u;
    sub_01C00070_0x1c00070(rdram, ctx, runtime); return;
    ctx->pc = 0x1C00D04u;
    // 0x1c00d04: 0x0  nop
    ctx->pc = 0x1c00d04u;
    // NOP
    ctx->pc = 0x1c00d08u;
}
