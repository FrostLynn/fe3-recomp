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

// Function: sub_01D7F5E4
// Address: 0x1d7f5e4 - 0x1d7f638
void sub_01D7F5E4_0x1d7f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F5E4_0x1d7f5e4");
#endif

    switch (ctx->pc) {
        case 0x1d7f614u: goto label_1d7f614;
        case 0x1d7f624u: goto label_1d7f624;
        default: break;
    }

    ctx->pc = 0x1d7f5e4u;

    // 0x1d7f5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f5e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f5ec: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D7F5ECu;
    {
        const bool branch_taken_0x1d7f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F5ECu;
        // 0x1d7f5f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f5ec) {
            ctx->pc = 0x1D7F570u;
            return;
        }
    }
    ctx->pc = 0x1D7F5F4u;
    // 0x1d7f5f4: 0x0  nop
    ctx->pc = 0x1d7f5f4u;
    // NOP
    // 0x1d7f5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f608: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7f608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7f60c: 0xc75f5d8  jal         func_1D7D760
    ctx->pc = 0x1D7F60Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F614u);
    ctx->pc = 0x1D7F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F60Cu;
    // 0x1d7f610: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D760u, 0x1D7F60Cu, 0x1D7F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F614u;
label_1d7f614:
    // 0x1d7f614: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f61c: 0xc75f5e0  jal         func_1D7D780
    ctx->pc = 0x1D7F61Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F624u);
    ctx->pc = 0x1D7F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F61Cu;
    // 0x1d7f620: 0xa04f09b0  sb          $t7, 0x9B0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D780u, 0x1D7F61Cu, 0x1D7F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F624u;
label_1d7f624:
    // 0x1d7f624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f630: 0x875f874  j           func_1D7E1D0
    ctx->pc = 0x1D7F630u;
    ctx->pc = 0x1D7F634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F630u;
    // 0x1d7f634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E1D0u;
    sub_01D7E1D0_0x1d7e1d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F638u;
}
