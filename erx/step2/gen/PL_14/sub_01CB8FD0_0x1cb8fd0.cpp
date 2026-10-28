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

// Function: sub_01CB8FD0
// Address: 0x1cb8fd0 - 0x1cb9008
void sub_01CB8FD0_0x1cb8fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8FD0_0x1cb8fd0");
#endif

    switch (ctx->pc) {
        case 0x1cb8fe4u: goto label_1cb8fe4;
        default: break;
    }

    ctx->pc = 0x1cb8fd0u;

    // 0x1cb8fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8fd8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb8fdc: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8FDCu;
    SET_GPR_U32(ctx, 31, 0x1CB8FE4u);
    ctx->pc = 0x1CB8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8FDCu;
    // 0x1cb8fe0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8FDCu, 0x1CB8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8FE4u;
label_1cb8fe4:
    // 0x1cb8fe4: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1cb8fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1cb8fe8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB8FE8u;
    {
        const bool branch_taken_0x1cb8fe8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8FE8u;
        // 0x1cb8fec: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8fe8) {
            ctx->pc = 0x1CB8FFCu;
            goto label_1cb8ffc;
        }
    }
    ctx->pc = 0x1CB8FF0u;
    // 0x1cb8ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8ff4: 0x872d9ee  j           func_1CB67B8
    ctx->pc = 0x1CB8FF4u;
    ctx->pc = 0x1CB8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8FF4u;
    // 0x1cb8ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67B8u;
    sub_01CB67B8_0x1cb67b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8FFCu;
label_1cb8ffc:
    // 0x1cb8ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb9000: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9000u;
        // 0x1cb9004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9008u;
}
