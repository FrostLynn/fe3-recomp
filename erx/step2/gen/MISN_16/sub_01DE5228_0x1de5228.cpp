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

// Function: sub_01DE5228
// Address: 0x1de5228 - 0x1de5270
void sub_01DE5228_0x1de5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5228_0x1de5228");
#endif

    switch (ctx->pc) {
        case 0x1de5238u: goto label_1de5238;
        default: break;
    }

    ctx->pc = 0x1de5228u;

    // 0x1de5228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de5228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de522c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de5230: 0xc7793e4  jal         func_1DE4F90
    ctx->pc = 0x1DE5230u;
    SET_GPR_U32(ctx, 31, 0x1DE5238u);
    ctx->pc = 0x1DE4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4F90u, 0x1DE5230u, 0x1DE5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5238u;
label_1de5238:
    // 0x1de5238: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1de5238u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1de523c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de5240: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de5240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5244: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de5244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de5248: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de5248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de524c: 0x29ef0180  slti        $t7, $t7, 0x180
    ctx->pc = 0x1de524cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)384) ? 1 : 0);
    // 0x1de5250: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE5250u;
    {
        const bool branch_taken_0x1de5250 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5250u;
        // 0x1de5254: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5250) {
            ctx->pc = 0x1DE5264u;
            goto label_1de5264;
        }
    }
    ctx->pc = 0x1DE5258u;
    // 0x1de5258: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5258u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de525c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1de525cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5260: 0xa1ee0428  sb          $t6, 0x428($t7)
    ctx->pc = 0x1de5260u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
label_1de5264:
    // 0x1de5264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de5264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5268: 0x8779394  j           func_1DE4E50
    ctx->pc = 0x1DE5268u;
    ctx->pc = 0x1DE526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5268u;
    // 0x1de526c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E50u;
    sub_01DE4E50_0x1de4e50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE5270u;
}
