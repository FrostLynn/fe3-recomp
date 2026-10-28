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

// Function: sub_01C32120
// Address: 0x1c32120 - 0x1c32178
void sub_01C32120_0x1c32120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32120_0x1c32120");
#endif

    switch (ctx->pc) {
        case 0x1c3213cu: goto label_1c3213c;
        case 0x1c3216cu: goto label_1c3216c;
        default: break;
    }

    ctx->pc = 0x1c32120u;

    // 0x1c32120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c32124: 0x938f803c  lbu         $t7, -0x7FC4($gp)
    ctx->pc = 0x1c32124u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x1c32128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c32128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3212c: 0x51e00006  beql        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3212Cu;
    {
        const bool branch_taken_0x1c3212c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3212c) {
            ctx->pc = 0x1C32130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3212Cu;
            // 0x1c32130: 0x3c0501c4  lui         $a1, 0x1C4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C32148u;
            goto label_1c32148;
        }
    }
    ctx->pc = 0x1C32134u;
    // 0x1c32134: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c32134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c32138: 0x24a56900  addiu       $a1, $a1, 0x6900
    ctx->pc = 0x1c32138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
label_1c3213c:
    // 0x1c3213c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3213cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c32140: 0x870c1c2  j           func_1C30708
    ctx->pc = 0x1C32140u;
    ctx->pc = 0x1C32144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32140u;
    // 0x1c32144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30708u;
    sub_01C30708_0x1c30708(rdram, ctx, runtime); return;
    ctx->pc = 0x1C32148u;
label_1c32148:
    // 0x1c32148: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C32148u;
    {
        const bool branch_taken_0x1c32148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32148u;
        // 0x1c3214c: 0x24a5bfa0  addiu       $a1, $a1, -0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32148) {
            ctx->pc = 0x1C3213Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3213c;
        }
    }
    ctx->pc = 0x1C32150u;
    // 0x1c32150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c32154: 0x938f803c  lbu         $t7, -0x7FC4($gp)
    ctx->pc = 0x1c32154u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x1c32158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c32158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3215c: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3215Cu;
    {
        const bool branch_taken_0x1c3215c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3215Cu;
        // 0x1c32160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3215c) {
            ctx->pc = 0x1C3216Cu;
            goto label_1c3216c;
        }
    }
    ctx->pc = 0x1C32164u;
    // 0x1c32164: 0xc70c190  jal         func_1C30640
    ctx->pc = 0x1C32164u;
    SET_GPR_U32(ctx, 31, 0x1C3216Cu);
    ctx->pc = 0x1C30640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30640u, 0x1C32164u, 0x1C3216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3216Cu;
label_1c3216c:
    // 0x1c3216c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c32170: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32170u;
        // 0x1c32174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32178u;
}
