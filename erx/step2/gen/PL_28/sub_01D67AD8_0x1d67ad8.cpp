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

// Function: sub_01D67AD8
// Address: 0x1d67ad8 - 0x1d67b00
void sub_01D67AD8_0x1d67ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67AD8_0x1d67ad8");
#endif

    switch (ctx->pc) {
        case 0x1d67aecu: goto label_1d67aec;
        default: break;
    }

    ctx->pc = 0x1d67ad8u;

    // 0x1d67ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d67adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d67ae0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67ae4: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67AE4u;
    SET_GPR_U32(ctx, 31, 0x1D67AECu);
    ctx->pc = 0x1D67AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67AE4u;
    // 0x1d67ae8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67AE4u, 0x1D67AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67AECu;
label_1d67aec:
    // 0x1d67aec: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d67aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d67af0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d67af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d67af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d67af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67AF8u;
        // 0x1d67afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67B00u;
}
