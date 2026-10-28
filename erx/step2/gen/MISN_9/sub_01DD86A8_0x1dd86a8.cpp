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

// Function: sub_01DD86A8
// Address: 0x1dd86a8 - 0x1dd86f8
void sub_01DD86A8_0x1dd86a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD86A8_0x1dd86a8");
#endif

    switch (ctx->pc) {
        case 0x1dd86c8u: goto label_1dd86c8;
        case 0x1dd86d8u: goto label_1dd86d8;
        default: break;
    }

    ctx->pc = 0x1dd86a8u;

    // 0x1dd86a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd86a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd86ac: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd86acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd86b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd86b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd86b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd86b8: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd86bc: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd86bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd86c0: 0xc7760ca  jal         func_1DD8328
    ctx->pc = 0x1DD86C0u;
    SET_GPR_U32(ctx, 31, 0x1DD86C8u);
    ctx->pc = 0x1DD86C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD86C0u;
    // 0x1dd86c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8328u, 0x1DD86C0u, 0x1DD86C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD86C8u;
label_1dd86c8:
    // 0x1dd86c8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd86c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd86cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd86ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd86d0: 0xc7760c6  jal         func_1DD8318
    ctx->pc = 0x1DD86D0u;
    SET_GPR_U32(ctx, 31, 0x1DD86D8u);
    ctx->pc = 0x1DD86D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD86D0u;
    // 0x1dd86d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8318u, 0x1DD86D0u, 0x1DD86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD86D8u;
label_1dd86d8:
    // 0x1dd86d8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd86dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd86dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd86e0: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd86e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd86e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd86e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd86e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd86ec: 0x87760da  j           func_1DD8368
    ctx->pc = 0x1DD86ECu;
    ctx->pc = 0x1DD86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD86ECu;
    // 0x1dd86f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8368u;
    sub_01DD8368_0x1dd8368(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD86F4u;
    // 0x1dd86f4: 0x0  nop
    ctx->pc = 0x1dd86f4u;
    // NOP
    ctx->pc = 0x1dd86f8u;
}
