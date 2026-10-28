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

// Function: sub_01D8A588
// Address: 0x1d8a588 - 0x1d8a614
void sub_01D8A588_0x1d8a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A588_0x1d8a588");
#endif

    switch (ctx->pc) {
        case 0x1d8a5a4u: goto label_1d8a5a4;
        case 0x1d8a5e0u: goto label_1d8a5e0;
        case 0x1d8a5f4u: goto label_1d8a5f4;
        default: break;
    }

    ctx->pc = 0x1d8a588u;

    // 0x1d8a588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a598: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d8a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d8a59c: 0xc762258  jal         func_1D88960
    ctx->pc = 0x1D8A59Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A5A4u);
    ctx->pc = 0x1D8A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A59Cu;
    // 0x1d8a5a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88960u, 0x1D8A59Cu, 0x1D8A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A5A4u;
label_1d8a5a4:
    // 0x1d8a5a4: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1d8a5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d8a5a8: 0x25effff7  addiu       $t7, $t7, -0x9
    ctx->pc = 0x1d8a5a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967287));
    // 0x1d8a5ac: 0x2dee0017  sltiu       $t6, $t7, 0x17
    ctx->pc = 0x1d8a5acu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d8a5b0: 0x11c00020  beqz        $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D8A5B0u;
    {
        const bool branch_taken_0x1d8a5b0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A5B0u;
        // 0x1d8a5b4: 0x3c0e01d9  lui         $t6, 0x1D9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a5b0) {
            ctx->pc = 0x1D8A634u;
            return;
        }
    }
    ctx->pc = 0x1D8A5B8u;
    // 0x1d8a5b8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8a5b8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8a5bc: 0x25cebaec  addiu       $t6, $t6, -0x4514
    ctx->pc = 0x1d8a5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294949612));
    // 0x1d8a5c0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d8a5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d8a5c4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d8a5c4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8a5c8: 0x1a00008  jr          $t5
    ctx->pc = 0x1D8A5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8A5D0u: goto label_1d8a5d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A5C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D8A5D0u;
label_1d8a5d0:
    // 0x1d8a5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a5d8: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1d8a5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d8a5dc: 0x0  nop
    ctx->pc = 0x1d8a5dcu;
    // NOP
label_1d8a5e0:
    // 0x1d8a5e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a5e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a5e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d8a5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8a5ec: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A5ECu;
    SET_GPR_U32(ctx, 31, 0x1D8A5F4u);
    ctx->pc = 0x1D8A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A5ECu;
    // 0x1d8a5f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A5ECu, 0x1D8A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A5F4u;
label_1d8a5f4:
    // 0x1d8a5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a5f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a600: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x1d8a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x1d8a604: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x1d8a604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1d8a608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a60c: 0x8762522  j           func_1D89488
    ctx->pc = 0x1D8A60Cu;
    ctx->pc = 0x1D8A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A60Cu;
    // 0x1d8a610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89488u;
    sub_01D89488_0x1d89488(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A614u;
}
