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

// Function: sub_01C1FDA0
// Address: 0x1c1fda0 - 0x1c1fe30
void sub_01C1FDA0_0x1c1fda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FDA0_0x1c1fda0");
#endif

    switch (ctx->pc) {
        case 0x1c1fdb4u: goto label_1c1fdb4;
        case 0x1c1fdc8u: goto label_1c1fdc8;
        case 0x1c1fdccu: goto label_1c1fdcc;
        case 0x1c1fe14u: goto label_1c1fe14;
        default: break;
    }

    ctx->pc = 0x1c1fda0u;

    // 0x1c1fda0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1fda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1fda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1fda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1fda8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1fdac: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C1FDACu;
    SET_GPR_U32(ctx, 31, 0x1C1FDB4u);
    ctx->pc = 0x1C1FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FDACu;
    // 0x1c1fdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C1FDACu, 0x1C1FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FDB4u;
label_1c1fdb4:
    // 0x1c1fdb4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c1fdb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fdb8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1FDB8u;
    {
        const bool branch_taken_0x1c1fdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C1FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDB8u;
        // 0x1c1fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fdb8) {
            ctx->pc = 0x1C1FDDCu;
            goto label_1c1fddc;
        }
    }
    ctx->pc = 0x1C1FDC0u;
    // 0x1c1fdc0: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C1FDC0u;
    SET_GPR_U32(ctx, 31, 0x1C1FDC8u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C1FDC0u, 0x1C1FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FDC8u;
label_1c1fdc8:
    // 0x1c1fdc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c1fdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c1fdcc:
    // 0x1c1fdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fdd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1fdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1fdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDD4u;
        // 0x1c1fdd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FDDCu;
label_1c1fddc:
    // 0x1c1fddc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C1FDDCu;
    {
        const bool branch_taken_0x1c1fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDDCu;
        // 0x1c1fde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fddc) {
            ctx->pc = 0x1C1FDCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1fdcc;
        }
    }
    ctx->pc = 0x1C1FDE4u;
    // 0x1c1fde4: 0x0  nop
    ctx->pc = 0x1c1fde4u;
    // NOP
    // 0x1c1fde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1fde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1fdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fdf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1fdf4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c1fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1fdf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1fdfc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1fdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fe00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1fe00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fe04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1fe04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fe08: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c1fe08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1fe0c: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C1FE0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1FE14u);
    ctx->pc = 0x1C1FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE0Cu;
    // 0x1c1fe10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C1FE0Cu, 0x1C1FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE14u;
label_1c1fe14:
    // 0x1c1fe14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fe18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1fe1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fe1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fe20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c1fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1fe24: 0x8707c5e  j           func_1C1F178
    ctx->pc = 0x1C1FE24u;
    ctx->pc = 0x1C1FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE24u;
    // 0x1c1fe28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    sub_01C1F178_0x1c1f178(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1FE2Cu;
    // 0x1c1fe2c: 0x0  nop
    ctx->pc = 0x1c1fe2cu;
    // NOP
    ctx->pc = 0x1c1fe30u;
}
