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

// Function: sub_01DE1C70
// Address: 0x1de1c70 - 0x1de1cd0
void sub_01DE1C70_0x1de1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1C70_0x1de1c70");
#endif

    switch (ctx->pc) {
        case 0x1de1c88u: goto label_1de1c88;
        case 0x1de1ca8u: goto label_1de1ca8;
        case 0x1de1cb0u: goto label_1de1cb0;
        default: break;
    }

    ctx->pc = 0x1de1c70u;

    // 0x1de1c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1c74: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1c74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1c7c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1c80: 0xc77864e  jal         func_1DE1938
    ctx->pc = 0x1DE1C80u;
    SET_GPR_U32(ctx, 31, 0x1DE1C88u);
    ctx->pc = 0x1DE1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1C80u;
    // 0x1de1c84: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1938u, 0x1DE1C80u, 0x1DE1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C88u;
label_1de1c88:
    // 0x1de1c88: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1de1c88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1de1c8c: 0x240f004e  addiu       $t7, $zero, 0x4E
    ctx->pc = 0x1de1c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1de1c90: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE1C90u;
    {
        const bool branch_taken_0x1de1c90 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C90u;
        // 0x1de1c94: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1c90) {
            ctx->pc = 0x1DE1CA0u;
            goto label_1de1ca0;
        }
    }
    ctx->pc = 0x1DE1C98u;
    // 0x1de1c98: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de1c98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de1c9c: 0xa1ee0428  sb          $t6, 0x428($t7)
    ctx->pc = 0x1de1c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
label_1de1ca0:
    // 0x1de1ca0: 0xc7786a6  jal         func_1DE1A98
    ctx->pc = 0x1DE1CA0u;
    SET_GPR_U32(ctx, 31, 0x1DE1CA8u);
    ctx->pc = 0x1DE1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1A98u, 0x1DE1CA0u, 0x1DE1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1CA8u;
label_1de1ca8:
    // 0x1de1ca8: 0xc7786b4  jal         func_1DE1AD0
    ctx->pc = 0x1DE1CA8u;
    SET_GPR_U32(ctx, 31, 0x1DE1CB0u);
    ctx->pc = 0x1DE1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1AD0u, 0x1DE1CA8u, 0x1DE1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1CB0u;
label_1de1cb0:
    // 0x1de1cb0: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1cb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de1cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de1cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1cbc: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de1cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de1cc0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de1cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de1cc4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de1cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de1cc8: 0x877865a  j           func_1DE1968
    ctx->pc = 0x1DE1CC8u;
    ctx->pc = 0x1DE1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1CC8u;
    // 0x1de1ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1968u;
    sub_01DE1968_0x1de1968(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1CD0u;
}
