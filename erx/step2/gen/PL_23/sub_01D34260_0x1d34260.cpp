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

// Function: sub_01D34260
// Address: 0x1d34260 - 0x1d342d8
void sub_01D34260_0x1d34260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34260_0x1d34260");
#endif

    switch (ctx->pc) {
        case 0x1d34284u: goto label_1d34284;
        case 0x1d342b0u: goto label_1d342b0;
        case 0x1d342bcu: goto label_1d342bc;
        default: break;
    }

    ctx->pc = 0x1d34260u;

    // 0x1d34260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d34260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d34264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34268: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d34268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3426c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d34270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d34270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d34274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34278: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d34278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3427c: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D3427Cu;
    SET_GPR_U32(ctx, 31, 0x1D34284u);
    ctx->pc = 0x1D34280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3427Cu;
    // 0x1d34280: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D3427Cu, 0x1D34284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34284u;
label_1d34284:
    // 0x1d34284: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d34284u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d34288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3428c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3428cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d34290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34294: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d34294u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d34298: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d34298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3429c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d3429cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d342a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d342a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d342a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d342a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d342a8: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D342A8u;
    SET_GPR_U32(ctx, 31, 0x1D342B0u);
    ctx->pc = 0x1D342ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D342A8u;
    // 0x1d342ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D342A8u, 0x1D342B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D342B0u;
label_1d342b0:
    // 0x1d342b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d342b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d342b4: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D342B4u;
    SET_GPR_U32(ctx, 31, 0x1D342BCu);
    ctx->pc = 0x1D342B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D342B4u;
    // 0x1d342b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D342B4u, 0x1D342BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D342BCu;
label_1d342bc:
    // 0x1d342bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d342bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d342c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d342c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d342c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d342c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d342c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d342c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d342cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d342ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d342d0: 0x874cd66  j           func_1D33598
    ctx->pc = 0x1D342D0u;
    ctx->pc = 0x1D342D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D342D0u;
    // 0x1d342d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33598u;
    sub_01D33598_0x1d33598(rdram, ctx, runtime); return;
    ctx->pc = 0x1D342D8u;
}
