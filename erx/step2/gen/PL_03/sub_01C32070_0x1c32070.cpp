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

// Function: sub_01C32070
// Address: 0x1c32070 - 0x1c320b8
void sub_01C32070_0x1c32070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32070_0x1c32070");
#endif

    switch (ctx->pc) {
        case 0x1c3209cu: goto label_1c3209c;
        default: break;
    }

    ctx->pc = 0x1c32070u;

    // 0x1c32070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c32074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c32074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c32078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3207c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c3207cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c32080: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c32080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c32084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c32084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c32088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3208c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c3208cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c32090: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c32090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c32094: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C32094u;
    SET_GPR_U32(ctx, 31, 0x1C3209Cu);
    ctx->pc = 0x1C32098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C32094u;
    // 0x1c32098: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C32094u, 0x1C3209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3209Cu;
label_1c3209c:
    // 0x1c3209c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c320a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c320a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c320a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c320a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c320a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c320a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c320ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c320acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c320b0: 0x870bdd0  j           func_1C2F740
    ctx->pc = 0x1C320B0u;
    ctx->pc = 0x1C320B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C320B0u;
    // 0x1c320b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    sub_01C2F740_0x1c2f740(rdram, ctx, runtime); return;
    ctx->pc = 0x1C320B8u;
}
