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

// Function: sub_01CA42D0
// Address: 0x1ca42d0 - 0x1ca42f8
void sub_01CA42D0_0x1ca42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA42D0_0x1ca42d0");
#endif

    switch (ctx->pc) {
        case 0x1ca42e4u: goto label_1ca42e4;
        default: break;
    }

    ctx->pc = 0x1ca42d0u;

    // 0x1ca42d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca42d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca42d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca42d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca42dc: 0xc7289ec  jal         func_1CA27B0
    ctx->pc = 0x1CA42DCu;
    SET_GPR_U32(ctx, 31, 0x1CA42E4u);
    ctx->pc = 0x1CA42E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA42DCu;
    // 0x1ca42e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA27B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA27B0u, 0x1CA42DCu, 0x1CA42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA42E4u;
label_1ca42e4:
    // 0x1ca42e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca42e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca42e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca42e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca42ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca42ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca42f0: 0x87289e0  j           func_1CA2780
    ctx->pc = 0x1CA42F0u;
    ctx->pc = 0x1CA42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA42F0u;
    // 0x1ca42f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2780u;
    sub_01CA2780_0x1ca2780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA42F8u;
}
