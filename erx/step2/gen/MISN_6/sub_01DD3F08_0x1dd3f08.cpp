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

// Function: sub_01DD3F08
// Address: 0x1dd3f08 - 0x1dd3f40
void sub_01DD3F08_0x1dd3f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3F08_0x1dd3f08");
#endif

    switch (ctx->pc) {
        case 0x1dd3f1cu: goto label_1dd3f1c;
        default: break;
    }

    ctx->pc = 0x1dd3f08u;

    // 0x1dd3f08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3f0c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd3f14: 0xc774f56  jal         func_1DD3D58
    ctx->pc = 0x1DD3F14u;
    SET_GPR_U32(ctx, 31, 0x1DD3F1Cu);
    ctx->pc = 0x1DD3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D58u, 0x1DD3F14u, 0x1DD3F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3F1Cu;
label_1dd3f1c:
    // 0x1dd3f1c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd3f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd3f24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd3f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3f28: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd3f28u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd3f2c: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1dd3f2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1dd3f30: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd3f30u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd3f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3F34u;
        // 0x1dd3f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3F3Cu;
    // 0x1dd3f3c: 0x0  nop
    ctx->pc = 0x1dd3f3cu;
    // NOP
    ctx->pc = 0x1dd3f40u;
}
