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

// Function: sub_01CCFAC8
// Address: 0x1ccfac8 - 0x1ccfb18
void sub_01CCFAC8_0x1ccfac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFAC8_0x1ccfac8");
#endif

    switch (ctx->pc) {
        case 0x1ccfaf4u: goto label_1ccfaf4;
        default: break;
    }

    ctx->pc = 0x1ccfac8u;

    // 0x1ccfac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccfaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccfad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccfad4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccfad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccfad8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccfad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccfadc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccfadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccfae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccfae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccfae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfae8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccfae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccfaec: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCFAECu;
    SET_GPR_U32(ctx, 31, 0x1CCFAF4u);
    ctx->pc = 0x1CCFAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFAECu;
    // 0x1ccfaf0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCFAECu, 0x1CCFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFAF4u;
label_1ccfaf4:
    // 0x1ccfaf4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ccfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ccfaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccfaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfafc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccfafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccfb00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccfb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfb04: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x1ccfb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccfb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccfb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfb0c: 0x8733510  j           func_1CCD440
    ctx->pc = 0x1CCFB0Cu;
    ctx->pc = 0x1CCFB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFB0Cu;
    // 0x1ccfb10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    sub_01CCD440_0x1ccd440(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFB14u;
    // 0x1ccfb14: 0x0  nop
    ctx->pc = 0x1ccfb14u;
    // NOP
    ctx->pc = 0x1ccfb18u;
}
