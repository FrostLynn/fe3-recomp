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

// Function: sub_01CCF2A0
// Address: 0x1ccf2a0 - 0x1ccf338
void sub_01CCF2A0_0x1ccf2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF2A0_0x1ccf2a0");
#endif

    switch (ctx->pc) {
        case 0x1ccf2b4u: goto label_1ccf2b4;
        case 0x1ccf2c8u: goto label_1ccf2c8;
        case 0x1ccf2ccu: goto label_1ccf2cc;
        case 0x1ccf31cu: goto label_1ccf31c;
        default: break;
    }

    ctx->pc = 0x1ccf2a0u;

    // 0x1ccf2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf2a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf2ac: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF2ACu;
    SET_GPR_U32(ctx, 31, 0x1CCF2B4u);
    ctx->pc = 0x1CCF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF2ACu;
    // 0x1ccf2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF2ACu, 0x1CCF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF2B4u;
label_1ccf2b4:
    // 0x1ccf2b4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1ccf2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf2b8: 0x144e0008  bne         $v0, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCF2B8u;
    {
        const bool branch_taken_0x1ccf2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x1CCF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF2B8u;
        // 0x1ccf2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf2b8) {
            ctx->pc = 0x1CCF2DCu;
            goto label_1ccf2dc;
        }
    }
    ctx->pc = 0x1CCF2C0u;
    // 0x1ccf2c0: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF2C0u;
    SET_GPR_U32(ctx, 31, 0x1CCF2C8u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF2C0u, 0x1CCF2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF2C8u;
label_1ccf2c8:
    // 0x1ccf2c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccf2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccf2cc:
    // 0x1ccf2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf2d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF2D4u;
        // 0x1ccf2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF2DCu;
label_1ccf2dc:
    // 0x1ccf2dc: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1ccf2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ccf2e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccf2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf2e4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CCF2E4u;
    {
        const bool branch_taken_0x1ccf2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF2E4u;
        // 0x1ccf2e8: 0xa1ee039c  sb          $t6, 0x39C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf2e4) {
            ctx->pc = 0x1CCF2CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf2cc;
        }
    }
    ctx->pc = 0x1CCF2ECu;
    // 0x1ccf2ec: 0x0  nop
    ctx->pc = 0x1ccf2ecu;
    // NOP
    // 0x1ccf2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf2f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf2f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf2fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf300: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf304: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ccf304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf30c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf310: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccf310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf314: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF314u;
    SET_GPR_U32(ctx, 31, 0x1CCF31Cu);
    ctx->pc = 0x1CCF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF314u;
    // 0x1ccf318: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF314u, 0x1CCF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF31Cu;
label_1ccf31c:
    // 0x1ccf31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf328: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ccf328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf32c: 0x873351a  j           func_1CCD468
    ctx->pc = 0x1CCF32Cu;
    ctx->pc = 0x1CCF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF32Cu;
    // 0x1ccf330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    sub_01CCD468_0x1ccd468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF334u;
    // 0x1ccf334: 0x0  nop
    ctx->pc = 0x1ccf334u;
    // NOP
    ctx->pc = 0x1ccf338u;
}
