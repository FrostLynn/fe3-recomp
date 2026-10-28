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

// Function: sub_01DD3EB0
// Address: 0x1dd3eb0 - 0x1dd3ee8
void sub_01DD3EB0_0x1dd3eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3EB0_0x1dd3eb0");
#endif

    switch (ctx->pc) {
        case 0x1dd3eccu: goto label_1dd3ecc;
        case 0x1dd3ed8u: goto label_1dd3ed8;
        default: break;
    }

    ctx->pc = 0x1dd3eb0u;

    // 0x1dd3eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3eb4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd3eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd3eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd3eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd3ebc: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD3EBCu;
    {
        const bool branch_taken_0x1dd3ebc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd3ebc) {
            ctx->pc = 0x1DD3EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD3EBCu;
            // 0x1dd3ec0: 0x3c040000  lui         $a0, 0x0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD3ED0u;
            goto label_1dd3ed0;
        }
    }
    ctx->pc = 0x1DD3EC4u;
    // 0x1dd3ec4: 0xc774f56  jal         func_1DD3D58
    ctx->pc = 0x1DD3EC4u;
    SET_GPR_U32(ctx, 31, 0x1DD3ECCu);
    ctx->pc = 0x1DD3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3EC4u;
    // 0x1dd3ec8: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D58u, 0x1DD3EC4u, 0x1DD3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3ECCu;
label_1dd3ecc:
    // 0x1dd3ecc: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
label_1dd3ed0:
    // 0x1dd3ed0: 0xc774f66  jal         func_1DD3D98
    ctx->pc = 0x1DD3ED0u;
    SET_GPR_U32(ctx, 31, 0x1DD3ED8u);
    ctx->pc = 0x1DD3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3ED0u;
    // 0x1dd3ed4: 0x24844810  addiu       $a0, $a0, 0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D98u, 0x1DD3ED0u, 0x1DD3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3ED8u;
label_1dd3ed8:
    // 0x1dd3ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd3ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3EDCu;
        // 0x1dd3ee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3EE4u;
    // 0x1dd3ee4: 0x0  nop
    ctx->pc = 0x1dd3ee4u;
    // NOP
    ctx->pc = 0x1dd3ee8u;
}
