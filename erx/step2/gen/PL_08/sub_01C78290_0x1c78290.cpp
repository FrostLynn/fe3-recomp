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

// Function: sub_01C78290
// Address: 0x1c78290 - 0x1c78308
void sub_01C78290_0x1c78290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78290_0x1c78290");
#endif

    switch (ctx->pc) {
        case 0x1c782a4u: goto label_1c782a4;
        case 0x1c782e4u: goto label_1c782e4;
        case 0x1c782f0u: goto label_1c782f0;
        default: break;
    }

    ctx->pc = 0x1c78290u;

    // 0x1c78290: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x1c78290u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c78294: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C78294u;
    {
        const bool branch_taken_0x1c78294 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78294u;
        // 0x1c78298: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78294) {
            ctx->pc = 0x1C782B0u;
            goto label_1c782b0;
        }
    }
    ctx->pc = 0x1C7829Cu;
    // 0x1c7829c: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7829Cu;
    {
        const bool branch_taken_0x1c7829c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C782A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7829Cu;
        // 0x1c782a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7829c) {
            ctx->pc = 0x1C782A8u;
            goto label_1c782a8;
        }
    }
    ctx->pc = 0x1C782A4u;
label_1c782a4:
    // 0x1c782a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c782a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c782a8:
    // 0x1c782a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C782A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C782A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C782B0u;
label_1c782b0:
    // 0x1c782b0: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C782B0u;
    {
        const bool branch_taken_0x1c782b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C782B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C782B0u;
        // 0x1c782b4: 0xac8f0024  sw          $t7, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c782b0) {
            ctx->pc = 0x1C782A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c782a4;
        }
    }
    ctx->pc = 0x1C782B8u;
    // 0x1c782b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c782b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c782bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c782bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c782c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c782c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c782c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c782c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c782c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c782c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c782cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c782ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c782d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c782d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c782d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c782d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c782d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c782d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c782dc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C782DCu;
    SET_GPR_U32(ctx, 31, 0x1C782E4u);
    ctx->pc = 0x1C782E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C782DCu;
    // 0x1c782e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C782DCu, 0x1C782E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C782E4u;
label_1c782e4:
    // 0x1c782e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c782e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c782e8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C782E8u;
    SET_GPR_U32(ctx, 31, 0x1C782F0u);
    ctx->pc = 0x1C782ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C782E8u;
    // 0x1c782ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C782E8u, 0x1C782F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C782F0u;
label_1c782f0:
    // 0x1c782f0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c782f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c782f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c782f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c782f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c782f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c782fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C782FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C782FCu;
        // 0x1c78300: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C782FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78304u;
    // 0x1c78304: 0x0  nop
    ctx->pc = 0x1c78304u;
    // NOP
    ctx->pc = 0x1c78308u;
}
