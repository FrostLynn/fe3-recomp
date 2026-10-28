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

// Function: sub_01CF0FF0
// Address: 0x1cf0ff0 - 0x1cf107c
void sub_01CF0FF0_0x1cf0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0FF0_0x1cf0ff0");
#endif

    switch (ctx->pc) {
        case 0x1cf100cu: goto label_1cf100c;
        case 0x1cf1048u: goto label_1cf1048;
        case 0x1cf105cu: goto label_1cf105c;
        default: break;
    }

    ctx->pc = 0x1cf0ff0u;

    // 0x1cf0ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf0ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0ff8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf0ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf0ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf0ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1000: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cf1000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf1004: 0xc73bd5a  jal         func_1CEF568
    ctx->pc = 0x1CF1004u;
    SET_GPR_U32(ctx, 31, 0x1CF100Cu);
    ctx->pc = 0x1CF1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1004u;
    // 0x1cf1008: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF568u, 0x1CF1004u, 0x1CF100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF100Cu;
label_1cf100c:
    // 0x1cf100c: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cf100cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf1010: 0x25effff8  addiu       $t7, $t7, -0x8
    ctx->pc = 0x1cf1010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967288));
    // 0x1cf1014: 0x2dee0018  sltiu       $t6, $t7, 0x18
    ctx->pc = 0x1cf1014u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cf1018: 0x11c00020  beqz        $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CF1018u;
    {
        const bool branch_taken_0x1cf1018 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1018u;
        // 0x1cf101c: 0x3c0e01cf  lui         $t6, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1018) {
            ctx->pc = 0x1CF109Cu;
            return;
        }
    }
    ctx->pc = 0x1CF1020u;
    // 0x1cf1020: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf1020u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf1024: 0x25ce2ef0  addiu       $t6, $t6, 0x2EF0
    ctx->pc = 0x1cf1024u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12016));
    // 0x1cf1028: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf1028u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf102c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cf102cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf1030: 0x1a00008  jr          $t5
    ctx->pc = 0x1CF1030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF1038u: goto label_1cf1038;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1030u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CF1038u;
label_1cf1038:
    // 0x1cf1038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf103c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1040: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1cf1040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1cf1044: 0x0  nop
    ctx->pc = 0x1cf1044u;
    // NOP
label_1cf1048:
    // 0x1cf1048: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf1048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf104c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf104cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1050: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1054: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1054u;
    SET_GPR_U32(ctx, 31, 0x1CF105Cu);
    ctx->pc = 0x1CF1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1054u;
    // 0x1cf1058: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1054u, 0x1CF105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF105Cu;
label_1cf105c:
    // 0x1cf105c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1060: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1068: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x1cf1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x1cf106c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x1cf106cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x1cf1070: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf1070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1074: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF1074u;
    ctx->pc = 0x1CF1078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1074u;
    // 0x1cf1078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF107Cu;
}
