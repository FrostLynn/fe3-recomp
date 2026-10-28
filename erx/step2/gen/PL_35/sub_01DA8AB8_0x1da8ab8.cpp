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

// Function: sub_01DA8AB8
// Address: 0x1da8ab8 - 0x1da8ae8
void sub_01DA8AB8_0x1da8ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8AB8_0x1da8ab8");
#endif

    switch (ctx->pc) {
        case 0x1da8ad4u: goto label_1da8ad4;
        default: break;
    }

    ctx->pc = 0x1da8ab8u;

    // 0x1da8ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8abc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da8abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da8ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8ac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8acc: 0xc769b92  jal         func_1DA6E48
    ctx->pc = 0x1DA8ACCu;
    SET_GPR_U32(ctx, 31, 0x1DA8AD4u);
    ctx->pc = 0x1DA8AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8ACCu;
    // 0x1da8ad0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E48u, 0x1DA8ACCu, 0x1DA8AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8AD4u;
label_1da8ad4:
    // 0x1da8ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8ae0: 0x8769e50  j           func_1DA7940
    ctx->pc = 0x1DA8AE0u;
    ctx->pc = 0x1DA8AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8AE0u;
    // 0x1da8ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7940u;
    sub_01DA7940_0x1da7940(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8AE8u;
}
