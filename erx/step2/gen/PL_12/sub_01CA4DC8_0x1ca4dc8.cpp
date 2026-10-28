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

// Function: sub_01CA4DC8
// Address: 0x1ca4dc8 - 0x1ca4e38
void sub_01CA4DC8_0x1ca4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4DC8_0x1ca4dc8");
#endif

    switch (ctx->pc) {
        case 0x1ca4de4u: goto label_1ca4de4;
        case 0x1ca4e20u: goto label_1ca4e20;
        case 0x1ca4e28u: goto label_1ca4e28;
        default: break;
    }

    ctx->pc = 0x1ca4dc8u;

    // 0x1ca4dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca4dcc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ca4dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ca4dd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ca4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ca4dd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4dd8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca4dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca4ddc: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4DDCu;
    SET_GPR_U32(ctx, 31, 0x1CA4DE4u);
    ctx->pc = 0x1CA4DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4DDCu;
    // 0x1ca4de0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4DDCu, 0x1CA4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4DE4u;
label_1ca4de4:
    // 0x1ca4de4: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x1ca4de4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca4de8: 0x244407d4  addiu       $a0, $v0, 0x7D4
    ctx->pc = 0x1ca4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2004));
    // 0x1ca4dec: 0x8e0c000c  lw          $t4, 0xC($s0)
    ctx->pc = 0x1ca4decu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4df0: 0x24050138  addiu       $a1, $zero, 0x138
    ctx->pc = 0x1ca4df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x1ca4df4: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1ca4df4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ca4df8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ca4df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4dfc: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1ca4dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ca4e00: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1ca4e00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca4e04: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x1ca4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x1ca4e08: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1ca4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1ca4e0c: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x1ca4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x1ca4e10: 0xafae000c  sw          $t6, 0xC($sp)
    ctx->pc = 0x1ca4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 14));
    // 0x1ca4e14: 0xafaf0010  sw          $t7, 0x10($sp)
    ctx->pc = 0x1ca4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 15));
    // 0x1ca4e18: 0xc728c76  jal         func_1CA31D8
    ctx->pc = 0x1CA4E18u;
    SET_GPR_U32(ctx, 31, 0x1CA4E20u);
    ctx->pc = 0x1CA4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4E18u;
    // 0x1ca4e1c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA31D8u, 0x1CA4E18u, 0x1CA4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4E20u;
label_1ca4e20:
    // 0x1ca4e20: 0xc728a44  jal         func_1CA2910
    ctx->pc = 0x1CA4E20u;
    SET_GPR_U32(ctx, 31, 0x1CA4E28u);
    ctx->pc = 0x1CA4E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4E20u;
    // 0x1ca4e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2910u, 0x1CA4E20u, 0x1CA4E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4E28u;
label_1ca4e28:
    // 0x1ca4e28: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ca4e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4e2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ca4e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca4e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4E30u;
        // 0x1ca4e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4E38u;
}
