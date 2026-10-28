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

// Function: sub_01DDF180
// Address: 0x1ddf180 - 0x1ddf1c0
void sub_01DDF180_0x1ddf180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF180_0x1ddf180");
#endif

    switch (ctx->pc) {
        case 0x1ddf198u: goto label_1ddf198;
        case 0x1ddf1a0u: goto label_1ddf1a0;
        default: break;
    }

    ctx->pc = 0x1ddf180u;

    // 0x1ddf180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddf180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddf184: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf184u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddf188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddf18c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1ddf18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1ddf190: 0xc777bca  jal         func_1DDEF28
    ctx->pc = 0x1DDF190u;
    SET_GPR_U32(ctx, 31, 0x1DDF198u);
    ctx->pc = 0x1DDF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF190u;
    // 0x1ddf194: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF28u, 0x1DDF190u, 0x1DDF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF198u;
label_1ddf198:
    // 0x1ddf198: 0xc777be0  jal         func_1DDEF80
    ctx->pc = 0x1DDF198u;
    SET_GPR_U32(ctx, 31, 0x1DDF1A0u);
    ctx->pc = 0x1DDEF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF80u, 0x1DDF198u, 0x1DDF1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF1A0u;
label_1ddf1a0:
    // 0x1ddf1a0: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1ddf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf1a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ddf1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ddf1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddf1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf1ac: 0x2406f6d5  addiu       $a2, $zero, -0x92B
    ctx->pc = 0x1ddf1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964949));
    // 0x1ddf1b0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1ddf1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddf1b4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1ddf1b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ddf1b8: 0x8777bd6  j           func_1DDEF58
    ctx->pc = 0x1DDF1B8u;
    ctx->pc = 0x1DDF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF1B8u;
    // 0x1ddf1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF58u;
    sub_01DDEF58_0x1ddef58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDF1C0u;
}
