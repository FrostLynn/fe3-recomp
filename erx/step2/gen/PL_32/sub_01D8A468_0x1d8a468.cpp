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

// Function: sub_01D8A468
// Address: 0x1d8a468 - 0x1d8a4f4
void sub_01D8A468_0x1d8a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A468_0x1d8a468");
#endif

    switch (ctx->pc) {
        case 0x1d8a484u: goto label_1d8a484;
        case 0x1d8a4c0u: goto label_1d8a4c0;
        case 0x1d8a4d4u: goto label_1d8a4d4;
        default: break;
    }

    ctx->pc = 0x1d8a468u;

    // 0x1d8a468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a478: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d8a478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d8a47c: 0xc762258  jal         func_1D88960
    ctx->pc = 0x1D8A47Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A484u);
    ctx->pc = 0x1D8A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A47Cu;
    // 0x1d8a480: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88960u, 0x1D8A47Cu, 0x1D8A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A484u;
label_1d8a484:
    // 0x1d8a484: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1d8a484u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d8a488: 0x25effff7  addiu       $t7, $t7, -0x9
    ctx->pc = 0x1d8a488u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967287));
    // 0x1d8a48c: 0x2dee0017  sltiu       $t6, $t7, 0x17
    ctx->pc = 0x1d8a48cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d8a490: 0x11c00024  beqz        $t6, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D8A490u;
    {
        const bool branch_taken_0x1d8a490 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A490u;
        // 0x1d8a494: 0x3c0e01d9  lui         $t6, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a490) {
            ctx->pc = 0x1D8A524u;
            return;
        }
    }
    ctx->pc = 0x1D8A498u;
    // 0x1d8a498: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8a498u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8a49c: 0x25ceba90  addiu       $t6, $t6, -0x4570
    ctx->pc = 0x1d8a49cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949520));
    // 0x1d8a4a0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d8a4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d8a4a4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d8a4a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8a4a8: 0x1a00008  jr          $t5
    ctx->pc = 0x1D8A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8A4B0u: goto label_1d8a4b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A4A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D8A4B0u;
label_1d8a4b0:
    // 0x1d8a4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4b8: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1d8a4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d8a4bc: 0x0  nop
    ctx->pc = 0x1d8a4bcu;
    // NOP
label_1d8a4c0:
    // 0x1d8a4c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d8a4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8a4cc: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A4CCu;
    SET_GPR_U32(ctx, 31, 0x1D8A4D4u);
    ctx->pc = 0x1D8A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A4CCu;
    // 0x1d8a4d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A4CCu, 0x1D8A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A4D4u;
label_1d8a4d4:
    // 0x1d8a4d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a4e0: 0x240500a5  addiu       $a1, $zero, 0xA5
    ctx->pc = 0x1d8a4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x1d8a4e4: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x1d8a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1d8a4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8a4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4ec: 0x8762522  j           func_1D89488
    ctx->pc = 0x1D8A4ECu;
    ctx->pc = 0x1D8A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A4ECu;
    // 0x1d8a4f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89488u;
    sub_01D89488_0x1d89488(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A4F4u;
}
