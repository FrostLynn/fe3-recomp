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

// Function: sub_01DE5330
// Address: 0x1de5330 - 0x1de5360
void sub_01DE5330_0x1de5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5330_0x1de5330");
#endif

    switch (ctx->pc) {
        case 0x1de5340u: goto label_1de5340;
        default: break;
    }

    ctx->pc = 0x1de5330u;

    // 0x1de5330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de5334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de5338: 0xc7793e4  jal         func_1DE4F90
    ctx->pc = 0x1DE5338u;
    SET_GPR_U32(ctx, 31, 0x1DE5340u);
    ctx->pc = 0x1DE4F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4F90u, 0x1DE5338u, 0x1DE5340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE5340u;
label_1de5340:
    // 0x1de5340: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de5340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5344: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de5344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de5348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de5348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de534c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de534cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de5350: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de5350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de5354: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de5354u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de5358: 0x8779394  j           func_1DE4E50
    ctx->pc = 0x1DE5358u;
    ctx->pc = 0x1DE535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE5358u;
    // 0x1de535c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E50u;
    sub_01DE4E50_0x1de4e50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE5360u;
}
