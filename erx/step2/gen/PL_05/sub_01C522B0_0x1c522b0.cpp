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

// Function: sub_01C522B0
// Address: 0x1c522b0 - 0x1c52300
void sub_01C522B0_0x1c522b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C522B0_0x1c522b0");
#endif

    switch (ctx->pc) {
        case 0x1c522dcu: goto label_1c522dc;
        default: break;
    }

    ctx->pc = 0x1c522b0u;

    // 0x1c522b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c522b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c522b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c522b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c522b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c522bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c522bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c522c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c522c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c522c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c522c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c522c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c522c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c522ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c522d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c522d4: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C522D4u;
    SET_GPR_U32(ctx, 31, 0x1C522DCu);
    ctx->pc = 0x1C522D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C522D4u;
    // 0x1c522d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C522D4u, 0x1C522DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C522DCu;
label_1c522dc:
    // 0x1c522dc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c522dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c522e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c522e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c522e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c522e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c522e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c522ec: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1c522ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c522f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c522f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c522f4: 0x8713e5c  j           func_1C4F970
    ctx->pc = 0x1C522F4u;
    ctx->pc = 0x1C522F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C522F4u;
    // 0x1c522f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    sub_01C4F970_0x1c4f970(rdram, ctx, runtime); return;
    ctx->pc = 0x1C522FCu;
    // 0x1c522fc: 0x0  nop
    ctx->pc = 0x1c522fcu;
    // NOP
    ctx->pc = 0x1c52300u;
}
