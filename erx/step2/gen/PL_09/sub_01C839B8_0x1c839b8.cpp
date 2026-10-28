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

// Function: sub_01C839B8
// Address: 0x1c839b8 - 0x1c83a10
void sub_01C839B8_0x1c839b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C839B8_0x1c839b8");
#endif

    switch (ctx->pc) {
        case 0x1c839e8u: goto label_1c839e8;
        case 0x1c839f4u: goto label_1c839f4;
        default: break;
    }

    ctx->pc = 0x1c839b8u;

    // 0x1c839b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c839b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c839bc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1c839bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1c839c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c839c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c839c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c839c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c839c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c839c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c839cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c839ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c839d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c839d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c839d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c839d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c839d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c839d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c839dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c839dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c839e0: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C839E0u;
    SET_GPR_U32(ctx, 31, 0x1C839E8u);
    ctx->pc = 0x1C839E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C839E0u;
    // 0x1c839e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C839E0u, 0x1C839E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C839E8u;
label_1c839e8:
    // 0x1c839e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c839e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c839ec: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C839ECu;
    SET_GPR_U32(ctx, 31, 0x1C839F4u);
    ctx->pc = 0x1C839F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C839ECu;
    // 0x1c839f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C839ECu, 0x1C839F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C839F4u;
label_1c839f4:
    // 0x1c839f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c839f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c839f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c839f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c839fc: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c839fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c83a00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83a04: 0x24a55860  addiu       $a1, $a1, 0x5860
    ctx->pc = 0x1c83a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22624));
    // 0x1c83a08: 0x87203ea  j           func_1C80FA8
    ctx->pc = 0x1C83A08u;
    ctx->pc = 0x1C83A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83A08u;
    // 0x1c83a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80FA8u;
    sub_01C80FA8_0x1c80fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C83A10u;
}
