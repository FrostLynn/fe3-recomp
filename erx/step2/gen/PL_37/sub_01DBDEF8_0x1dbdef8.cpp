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

// Function: sub_01DBDEF8
// Address: 0x1dbdef8 - 0x1dbdf38
void sub_01DBDEF8_0x1dbdef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDEF8_0x1dbdef8");
#endif

    switch (ctx->pc) {
        case 0x1dbdf0cu: goto label_1dbdf0c;
        default: break;
    }

    ctx->pc = 0x1dbdef8u;

    // 0x1dbdef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdefc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbdefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbdf00: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbdf00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbdf04: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDF04u;
    SET_GPR_U32(ctx, 31, 0x1DBDF0Cu);
    ctx->pc = 0x1DBDF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDF04u;
    // 0x1dbdf08: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDF04u, 0x1DBDF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDF0Cu;
label_1dbdf0c:
    // 0x1dbdf0c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1dbdf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dbdf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbdf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdf14: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1dbdf14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dbdf18: 0xa1c047e9  sb          $zero, 0x47E9($t6)
    ctx->pc = 0x1dbdf18u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 18409), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbdf1c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1dbdf1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dbdf20: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1dbdf20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1dbdf24: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1dbdf24u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1dbdf28: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1dbdf28u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1dbdf2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDF2Cu;
        // 0x1dbdf30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDF34u;
    // 0x1dbdf34: 0x0  nop
    ctx->pc = 0x1dbdf34u;
    // NOP
    ctx->pc = 0x1dbdf38u;
}
