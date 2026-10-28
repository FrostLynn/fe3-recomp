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

// Function: sub_01C83CB8
// Address: 0x1c83cb8 - 0x1c83d0c
void sub_01C83CB8_0x1c83cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83CB8_0x1c83cb8");
#endif

    switch (ctx->pc) {
        case 0x1c83cfcu: goto label_1c83cfc;
        case 0x1c83d00u: goto label_1c83d00;
        default: break;
    }

    ctx->pc = 0x1c83cb8u;

    // 0x1c83cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c83cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c83cbc: 0x2484ff31  addiu       $a0, $a0, -0xCF
    ctx->pc = 0x1c83cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967089));
    // 0x1c83cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c83cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c83cc4: 0x2c8f0065  sltiu       $t7, $a0, 0x65
    ctx->pc = 0x1c83cc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x1c83cc8: 0x11e00022  beqz        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C83CC8u;
    {
        const bool branch_taken_0x1c83cc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83CC8u;
        // 0x1c83ccc: 0x3c0e01c8  lui         $t6, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)456 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83cc8) {
            ctx->pc = 0x1C83D54u;
            return;
        }
    }
    ctx->pc = 0x1C83CD0u;
    // 0x1c83cd0: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c83cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c83cd4: 0x25ce48fc  addiu       $t6, $t6, 0x48FC
    ctx->pc = 0x1c83cd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18684));
    // 0x1c83cd8: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c83cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c83cdc: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c83cdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c83ce0: 0x1a00008  jr          $t5
    ctx->pc = 0x1C83CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C83CE8u: goto label_1c83ce8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83CE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C83CE8u;
label_1c83ce8:
    // 0x1c83ce8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83cec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83cf0: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c83cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c83cf4: 0xc720a20  jal         func_1C82880
    ctx->pc = 0x1C83CF4u;
    SET_GPR_U32(ctx, 31, 0x1C83CFCu);
    ctx->pc = 0x1C83CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83CF4u;
    // 0x1c83cf8: 0x24c67ba0  addiu       $a2, $a2, 0x7BA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C82880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C82880u, 0x1C83CF4u, 0x1C83CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83CFCu;
label_1c83cfc:
    // 0x1c83cfc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c83cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c83d00:
    // 0x1c83d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c83d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83d04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D04u;
        // 0x1c83d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83D0Cu;
}
