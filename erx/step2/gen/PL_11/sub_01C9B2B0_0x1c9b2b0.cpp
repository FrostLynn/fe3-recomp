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

// Function: sub_01C9B2B0
// Address: 0x1c9b2b0 - 0x1c9b340
void sub_01C9B2B0_0x1c9b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B2B0_0x1c9b2b0");
#endif

    switch (ctx->pc) {
        case 0x1c9b2c4u: goto label_1c9b2c4;
        case 0x1c9b2d8u: goto label_1c9b2d8;
        case 0x1c9b2dcu: goto label_1c9b2dc;
        case 0x1c9b324u: goto label_1c9b324;
        default: break;
    }

    ctx->pc = 0x1c9b2b0u;

    // 0x1c9b2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b2b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b2bc: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9B2BCu;
    SET_GPR_U32(ctx, 31, 0x1C9B2C4u);
    ctx->pc = 0x1C9B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B2BCu;
    // 0x1c9b2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9B2BCu, 0x1C9B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B2C4u;
label_1c9b2c4:
    // 0x1c9b2c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b2c8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9B2C8u;
    {
        const bool branch_taken_0x1c9b2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B2C8u;
        // 0x1c9b2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b2c8) {
            ctx->pc = 0x1C9B2ECu;
            goto label_1c9b2ec;
        }
    }
    ctx->pc = 0x1C9B2D0u;
    // 0x1c9b2d0: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9B2D0u;
    SET_GPR_U32(ctx, 31, 0x1C9B2D8u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9B2D0u, 0x1C9B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B2D8u;
label_1c9b2d8:
    // 0x1c9b2d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9b2dc:
    // 0x1c9b2dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b2e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B2E4u;
        // 0x1c9b2e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B2ECu;
label_1c9b2ec:
    // 0x1c9b2ec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9B2ECu;
    {
        const bool branch_taken_0x1c9b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B2ECu;
        // 0x1c9b2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b2ec) {
            ctx->pc = 0x1C9B2DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b2dc;
        }
    }
    ctx->pc = 0x1C9B2F4u;
    // 0x1c9b2f4: 0x0  nop
    ctx->pc = 0x1c9b2f4u;
    // NOP
    // 0x1c9b2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b304: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9b304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b30c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9b30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b318: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9b318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b31c: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9B31Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B324u);
    ctx->pc = 0x1C9B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B31Cu;
    // 0x1c9b320: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9B31Cu, 0x1C9B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B324u;
label_1c9b324:
    // 0x1c9b324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b328: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b330: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c9b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b334: 0x87262da  j           func_1C98B68
    ctx->pc = 0x1C9B334u;
    ctx->pc = 0x1C9B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B334u;
    // 0x1c9b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    sub_01C98B68_0x1c98b68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B33Cu;
    // 0x1c9b33c: 0x0  nop
    ctx->pc = 0x1c9b33cu;
    // NOP
    ctx->pc = 0x1c9b340u;
}
