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

// Function: sub_01CA4CB8
// Address: 0x1ca4cb8 - 0x1ca4d10
void sub_01CA4CB8_0x1ca4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4CB8_0x1ca4cb8");
#endif

    switch (ctx->pc) {
        case 0x1ca4ce4u: goto label_1ca4ce4;
        case 0x1ca4cf0u: goto label_1ca4cf0;
        default: break;
    }

    ctx->pc = 0x1ca4cb8u;

    // 0x1ca4cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4cbc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4cc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca4cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca4ccc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4cccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4cd4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca4cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4cd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca4cd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4cdc: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA4CDCu;
    SET_GPR_U32(ctx, 31, 0x1CA4CE4u);
    ctx->pc = 0x1CA4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4CDCu;
    // 0x1ca4ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA4CDCu, 0x1CA4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4CE4u;
label_1ca4ce4:
    // 0x1ca4ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4ce8: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA4CE8u;
    SET_GPR_U32(ctx, 31, 0x1CA4CF0u);
    ctx->pc = 0x1CA4CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4CE8u;
    // 0x1ca4cec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA4CE8u, 0x1CA4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4CF0u;
label_1ca4cf0:
    // 0x1ca4cf0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca4cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4cf8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ca4cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ca4cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4d00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca4d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4d08: 0x8728c72  j           func_1CA31C8
    ctx->pc = 0x1CA4D08u;
    ctx->pc = 0x1CA4D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4D08u;
    // 0x1ca4d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA31C8u;
    sub_01CA31C8_0x1ca31c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4D10u;
}
