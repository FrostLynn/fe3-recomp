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

// Function: sub_01DD8550
// Address: 0x1dd8550 - 0x1dd8588
void sub_01DD8550_0x1dd8550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8550_0x1dd8550");
#endif

    switch (ctx->pc) {
        case 0x1dd8568u: goto label_1dd8568;
        default: break;
    }

    ctx->pc = 0x1dd8550u;

    // 0x1dd8550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd8550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd8554: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8554u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd8558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd855c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd855cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd8560: 0xc7760ce  jal         func_1DD8338
    ctx->pc = 0x1DD8560u;
    SET_GPR_U32(ctx, 31, 0x1DD8568u);
    ctx->pc = 0x1DD8564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8560u;
    // 0x1dd8564: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8338u, 0x1DD8560u, 0x1DD8568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8568u;
label_1dd8568:
    // 0x1dd8568: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd856c: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1dd856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1dd8570: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd8570u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd8574: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dd8574u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd8578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd8578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd857c: 0xadc00cd8  sw          $zero, 0xCD8($t6)
    ctx->pc = 0x1dd857cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
    // 0x1dd8580: 0x87760e0  j           func_1DD8380
    ctx->pc = 0x1DD8580u;
    ctx->pc = 0x1DD8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8580u;
    // 0x1dd8584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8380u;
    sub_01DD8380_0x1dd8380(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD8588u;
}
