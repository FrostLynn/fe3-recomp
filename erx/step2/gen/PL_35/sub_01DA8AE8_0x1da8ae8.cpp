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

// Function: sub_01DA8AE8
// Address: 0x1da8ae8 - 0x1da8b38
void sub_01DA8AE8_0x1da8ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8AE8_0x1da8ae8");
#endif

    switch (ctx->pc) {
        case 0x1da8b14u: goto label_1da8b14;
        default: break;
    }

    ctx->pc = 0x1da8ae8u;

    // 0x1da8ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8af4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da8af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da8af8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8afc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b08: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da8b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da8b0c: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8B0Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8B14u);
    ctx->pc = 0x1DA8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8B0Cu;
    // 0x1da8b10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8B0Cu, 0x1DA8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8B14u;
label_1da8b14:
    // 0x1da8b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8b20: 0x240500af  addiu       $a1, $zero, 0xAF
    ctx->pc = 0x1da8b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1da8b24: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1da8b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x1da8b28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8b2c: 0x8769e66  j           func_1DA7998
    ctx->pc = 0x1DA8B2Cu;
    ctx->pc = 0x1DA8B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8B2Cu;
    // 0x1da8b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7998u;
    sub_01DA7998_0x1da7998(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8B34u;
    // 0x1da8b34: 0x0  nop
    ctx->pc = 0x1da8b34u;
    // NOP
    ctx->pc = 0x1da8b38u;
}
