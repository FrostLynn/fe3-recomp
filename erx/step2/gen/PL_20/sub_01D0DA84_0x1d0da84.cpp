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

// Function: sub_01D0DA84
// Address: 0x1d0da84 - 0x1d0db10
void sub_01D0DA84_0x1d0da84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DA84_0x1d0da84");
#endif

    switch (ctx->pc) {
        case 0x1d0da94u: goto label_1d0da94;
        case 0x1d0daa4u: goto label_1d0daa4;
        case 0x1d0dab4u: goto label_1d0dab4;
        case 0x1d0dac4u: goto label_1d0dac4;
        case 0x1d0dad4u: goto label_1d0dad4;
        case 0x1d0dafcu: goto label_1d0dafc;
        default: break;
    }

    ctx->pc = 0x1d0da84u;

    // 0x1d0da84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0da88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da8c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D0DA8Cu;
    {
        const bool branch_taken_0x1d0da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DA8Cu;
        // 0x1d0da90: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0da8c) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DA94u;
label_1d0da94:
    // 0x1d0da94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0da98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da9c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D0DA9Cu;
    {
        const bool branch_taken_0x1d0da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DA9Cu;
        // 0x1d0daa0: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0da9c) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DAA4u;
label_1d0daa4:
    // 0x1d0daa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0daa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0daa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0daac: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D0DAACu;
    {
        const bool branch_taken_0x1d0daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DAACu;
        // 0x1d0dab0: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0daac) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DAB4u;
label_1d0dab4:
    // 0x1d0dab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dabc: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D0DABCu;
    {
        const bool branch_taken_0x1d0dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DABCu;
        // 0x1d0dac0: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dabc) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DAC4u;
label_1d0dac4:
    // 0x1d0dac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dacc: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D0DACCu;
    {
        const bool branch_taken_0x1d0dacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DACCu;
        // 0x1d0dad0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dacc) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DAD4u;
label_1d0dad4:
    // 0x1d0dad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dadc: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D0DADCu;
    {
        const bool branch_taken_0x1d0dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DADCu;
        // 0x1d0dae0: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dadc) {
            ctx->pc = 0x1D0DA18u;
            return;
        }
    }
    ctx->pc = 0x1D0DAE4u;
    // 0x1d0dae4: 0x0  nop
    ctx->pc = 0x1d0dae4u;
    // NOP
    // 0x1d0dae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0daec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0daf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0daf4: 0xc742f6c  jal         func_1D0BDB0
    ctx->pc = 0x1D0DAF4u;
    SET_GPR_U32(ctx, 31, 0x1D0DAFCu);
    ctx->pc = 0x1D0DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DAF4u;
    // 0x1d0daf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BDB0u, 0x1D0DAF4u, 0x1D0DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DAFCu;
label_1d0dafc:
    // 0x1d0dafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0db00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0db00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0db04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0db04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0db08: 0x8742f60  j           func_1D0BD80
    ctx->pc = 0x1D0DB08u;
    ctx->pc = 0x1D0DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DB08u;
    // 0x1d0db0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD80u;
    sub_01D0BD80_0x1d0bd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DB10u;
}
