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

// Function: sub_01C524E0
// Address: 0x1c524e0 - 0x1c52528
void sub_01C524E0_0x1c524e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C524E0_0x1c524e0");
#endif

    switch (ctx->pc) {
        case 0x1c5250cu: goto label_1c5250c;
        default: break;
    }

    ctx->pc = 0x1c524e0u;

    // 0x1c524e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c524e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c524e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c524e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c524e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c524e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c524ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c524ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c524f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c524f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c524f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c524f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c524f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c524f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c524fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c524fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52500: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c52500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52504: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C52504u;
    SET_GPR_U32(ctx, 31, 0x1C5250Cu);
    ctx->pc = 0x1C52508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52504u;
    // 0x1c52508: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C52504u, 0x1C5250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5250Cu;
label_1c5250c:
    // 0x1c5250c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5250cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c52510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c52514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5251c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5251cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52520: 0x8713e5c  j           func_1C4F970
    ctx->pc = 0x1C52520u;
    ctx->pc = 0x1C52524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52520u;
    // 0x1c52524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    sub_01C4F970_0x1c4f970(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52528u;
}
