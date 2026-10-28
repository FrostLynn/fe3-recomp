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

// Function: sub_01D5D9B8
// Address: 0x1d5d9b8 - 0x1d5da98
void sub_01D5D9B8_0x1d5d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D9B8_0x1d5d9b8");
#endif

    switch (ctx->pc) {
        case 0x1d5d9ccu: goto label_1d5d9cc;
        case 0x1d5d9e0u: goto label_1d5d9e0;
        case 0x1d5d9e4u: goto label_1d5d9e4;
        case 0x1d5da00u: goto label_1d5da00;
        case 0x1d5da0cu: goto label_1d5da0c;
        case 0x1d5da3cu: goto label_1d5da3c;
        case 0x1d5da68u: goto label_1d5da68;
        case 0x1d5da74u: goto label_1d5da74;
        default: break;
    }

    ctx->pc = 0x1d5d9b8u;

    // 0x1d5d9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d9c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5d9c4: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5D9C4u;
    SET_GPR_U32(ctx, 31, 0x1D5D9CCu);
    ctx->pc = 0x1D5D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D9C4u;
    // 0x1d5d9c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5D9C4u, 0x1D5D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D9CCu;
label_1d5d9cc:
    // 0x1d5d9cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5d9ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d9d0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5D9D0u;
    {
        const bool branch_taken_0x1d5d9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D9D0u;
        // 0x1d5d9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d9d0) {
            ctx->pc = 0x1D5D9F4u;
            goto label_1d5d9f4;
        }
    }
    ctx->pc = 0x1D5D9D8u;
    // 0x1d5d9d8: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5D9D8u;
    SET_GPR_U32(ctx, 31, 0x1D5D9E0u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5D9D8u, 0x1D5D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D9E0u;
label_1d5d9e0:
    // 0x1d5d9e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5d9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5d9e4:
    // 0x1d5d9e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5d9e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d9e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5d9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5d9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D9ECu;
        // 0x1d5d9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D9F4u;
label_1d5d9f4:
    // 0x1d5d9f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5d9f8: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5D9F8u;
    SET_GPR_U32(ctx, 31, 0x1D5DA00u);
    ctx->pc = 0x1D5D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D9F8u;
    // 0x1d5d9fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5D9F8u, 0x1D5DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA00u;
label_1d5da00:
    // 0x1d5da00: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d5da00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d5da04: 0xc757364  jal         func_1D5CD90
    ctx->pc = 0x1D5DA04u;
    SET_GPR_U32(ctx, 31, 0x1D5DA0Cu);
    ctx->pc = 0x1D5DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA04u;
    // 0x1d5da08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD90u, 0x1D5DA04u, 0x1D5DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA0Cu;
label_1d5da0c:
    // 0x1d5da0c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D5DA0Cu;
    {
        const bool branch_taken_0x1d5da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DA0Cu;
        // 0x1d5da10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5da0c) {
            ctx->pc = 0x1D5D9E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d9e4;
        }
    }
    ctx->pc = 0x1D5DA14u;
    // 0x1d5da14: 0x0  nop
    ctx->pc = 0x1d5da14u;
    // NOP
    // 0x1d5da18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5da1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5da20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5da24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5da28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5da28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5da2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da30: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5da30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5da34: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DA34u;
    SET_GPR_U32(ctx, 31, 0x1D5DA3Cu);
    ctx->pc = 0x1D5DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA34u;
    // 0x1d5da38: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DA34u, 0x1D5DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA3Cu;
label_1d5da3c:
    // 0x1d5da3c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d5da3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d5da40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5da40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5da44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5da48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5da48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5da4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5da50: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5da50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5da54: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d5da54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d5da58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5da58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da5c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5da5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5da60: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5DA60u;
    SET_GPR_U32(ctx, 31, 0x1D5DA68u);
    ctx->pc = 0x1D5DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA60u;
    // 0x1d5da64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5DA60u, 0x1D5DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA68u;
label_1d5da68:
    // 0x1d5da68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5da68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5da6c: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DA6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5DA74u);
    ctx->pc = 0x1D5DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA6Cu;
    // 0x1d5da70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DA6Cu, 0x1D5DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DA74u;
label_1d5da74:
    // 0x1d5da74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5da74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5da78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5da78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5da7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5da7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5da80: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d5da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d5da84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5da84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5da88: 0x8757366  j           func_1D5CD98
    ctx->pc = 0x1D5DA88u;
    ctx->pc = 0x1D5DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DA88u;
    // 0x1d5da8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD98u;
    sub_01D5CD98_0x1d5cd98(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5DA90u;
    // 0x1d5da90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DA98u;
}
