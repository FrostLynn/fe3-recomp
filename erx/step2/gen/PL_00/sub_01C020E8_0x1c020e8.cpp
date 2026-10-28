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

// Function: sub_01C020E8
// Address: 0x1c020e8 - 0x1c02138
void sub_01C020E8_0x1c020e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C020E8_0x1c020e8");
#endif

    switch (ctx->pc) {
        case 0x1c02114u: goto label_1c02114;
        case 0x1c02120u: goto label_1c02120;
        default: break;
    }

    ctx->pc = 0x1c020e8u;

    // 0x1c020e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c020e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c020ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c020ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c020f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c020f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c020f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c020f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c020f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c020f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c020fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c020fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c02100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02104: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c02104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c02108: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c02108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0210c: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C0210Cu;
    SET_GPR_U32(ctx, 31, 0x1C02114u);
    ctx->pc = 0x1C02110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0210Cu;
    // 0x1c02110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C0210Cu, 0x1C02114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02114u;
label_1c02114:
    // 0x1c02114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c02114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02118: 0xc70001c  jal         func_1C00070
    ctx->pc = 0x1C02118u;
    SET_GPR_U32(ctx, 31, 0x1C02120u);
    ctx->pc = 0x1C0211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02118u;
    // 0x1c0211c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00070u, 0x1C02118u, 0x1C02120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02120u;
label_1c02120:
    // 0x1c02120: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c02120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c02124: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c02124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c02128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c02128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0212c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0212cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02130: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02130u;
        // 0x1c02134: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02138u;
}
