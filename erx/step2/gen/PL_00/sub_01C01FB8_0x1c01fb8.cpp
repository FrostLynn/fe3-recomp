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

// Function: sub_01C01FB8
// Address: 0x1c01fb8 - 0x1c01ff0
void sub_01C01FB8_0x1c01fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01FB8_0x1c01fb8");
#endif

    switch (ctx->pc) {
        case 0x1c01fe0u: goto label_1c01fe0;
        default: break;
    }

    ctx->pc = 0x1c01fb8u;

    // 0x1c01fb8: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x1c01fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x1c01fbc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c01fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c01fc0: 0x25eef650  addiu       $t6, $t7, -0x9B0
    ctx->pc = 0x1c01fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964816));
    // 0x1c01fc4: 0x8dedf650  lw          $t5, -0x9B0($t7)
    ctx->pc = 0x1c01fc4u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C0F650u));
    // 0x1c01fc8: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c01fc8u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C0F654u));
    // 0x1c01fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c01fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01fd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c01fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c01fd4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c01fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c01fd8: 0xc700360  jal         func_1C00D80
    ctx->pc = 0x1C01FD8u;
    SET_GPR_U32(ctx, 31, 0x1C01FE0u);
    ctx->pc = 0x1C01FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01FD8u;
    // 0x1c01fdc: 0xafac0004  sw          $t4, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00D80u, 0x1C01FD8u, 0x1C01FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01FE0u;
label_1c01fe0:
    // 0x1c01fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c01fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c01fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01FE4u;
        // 0x1c01fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01FECu;
    // 0x1c01fec: 0x0  nop
    ctx->pc = 0x1c01fecu;
    // NOP
    ctx->pc = 0x1c01ff0u;
}
