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

// Function: sub_01DE0A48
// Address: 0x1de0a48 - 0x1de0a78
void sub_01DE0A48_0x1de0a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0A48_0x1de0a48");
#endif

    switch (ctx->pc) {
        case 0x1de0a5cu: goto label_1de0a5c;
        default: break;
    }

    ctx->pc = 0x1de0a48u;

    // 0x1de0a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de0a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de0a4c: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1de0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de0a54: 0xc7781d6  jal         func_1DE0758
    ctx->pc = 0x1DE0A54u;
    SET_GPR_U32(ctx, 31, 0x1DE0A5Cu);
    ctx->pc = 0x1DE0A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0A54u;
    // 0x1de0a58: 0xaf80801c  sw          $zero, -0x7FE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0758u, 0x1DE0A54u, 0x1DE0A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0A5Cu;
label_1de0a5c:
    // 0x1de0a5c: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de0a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de0a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de0a64: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de0a64u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de0a68: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1de0a68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1de0a6c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de0a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de0a70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0A70u;
        // 0x1de0a74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0A78u;
}
