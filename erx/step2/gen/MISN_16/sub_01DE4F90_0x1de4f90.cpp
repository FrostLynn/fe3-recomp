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

// Function: sub_01DE4F90
// Address: 0x1de4f90 - 0x1de4fd0
void sub_01DE4F90_0x1de4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4F90_0x1de4f90");
#endif

    switch (ctx->pc) {
        case 0x1de4fa8u: goto label_1de4fa8;
        default: break;
    }

    ctx->pc = 0x1de4f90u;

    // 0x1de4f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de4f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de4f94: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4f94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de4f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de4f9c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de4fa0: 0xc779386  jal         func_1DE4E18
    ctx->pc = 0x1DE4FA0u;
    SET_GPR_U32(ctx, 31, 0x1DE4FA8u);
    ctx->pc = 0x1DE4FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4FA0u;
    // 0x1de4fa4: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E18u, 0x1DE4FA0u, 0x1DE4FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4FA8u;
label_1de4fa8:
    // 0x1de4fa8: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1de4fa8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1de4fac: 0x240f0154  addiu       $t7, $zero, 0x154
    ctx->pc = 0x1de4facu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x1de4fb0: 0x15cf0005  bne         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE4FB0u;
    {
        const bool branch_taken_0x1de4fb0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4FB0u;
        // 0x1de4fb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4fb0) {
            ctx->pc = 0x1DE4FC8u;
            goto label_1de4fc8;
        }
    }
    ctx->pc = 0x1DE4FB8u;
    // 0x1de4fb8: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de4fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4fbc: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de4fbcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de4fc0: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1de4fc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1de4fc4: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de4fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de4fc8:
    // 0x1de4fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE4FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4FC8u;
        // 0x1de4fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE4FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE4FD0u;
}
