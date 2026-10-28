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

// Function: sub_01C829B0
// Address: 0x1c829b0 - 0x1c82ab8
void sub_01C829B0_0x1c829b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C829B0_0x1c829b0");
#endif

    switch (ctx->pc) {
        case 0x1c829ccu: goto label_1c829cc;
        case 0x1c829d4u: goto label_1c829d4;
        case 0x1c829e8u: goto label_1c829e8;
        case 0x1c829f0u: goto label_1c829f0;
        case 0x1c829f4u: goto label_1c829f4;
        case 0x1c82a30u: goto label_1c82a30;
        case 0x1c82a5cu: goto label_1c82a5c;
        case 0x1c82a68u: goto label_1c82a68;
        case 0x1c82a74u: goto label_1c82a74;
        case 0x1c82a88u: goto label_1c82a88;
        case 0x1c82a98u: goto label_1c82a98;
        default: break;
    }

    ctx->pc = 0x1c829b0u;

    // 0x1c829b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c829b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c829b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c829b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c829b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c829b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c829bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c829bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c829c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c829c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c829c4: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C829C4u;
    SET_GPR_U32(ctx, 31, 0x1C829CCu);
    ctx->pc = 0x1C829C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C829C4u;
    // 0x1c829c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C829C4u, 0x1C829CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C829CCu;
label_1c829cc:
    // 0x1c829cc: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C829CCu;
    SET_GPR_U32(ctx, 31, 0x1C829D4u);
    ctx->pc = 0x1C829D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C829CCu;
    // 0x1c829d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C829CCu, 0x1C829D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C829D4u;
label_1c829d4:
    // 0x1c829d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c829d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c829d8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C829D8u;
    {
        const bool branch_taken_0x1c829d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C829DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C829D8u;
        // 0x1c829dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c829d8) {
            ctx->pc = 0x1C82A04u;
            goto label_1c82a04;
        }
    }
    ctx->pc = 0x1C829E0u;
    // 0x1c829e0: 0xc7203ec  jal         func_1C80FB0
    ctx->pc = 0x1C829E0u;
    SET_GPR_U32(ctx, 31, 0x1C829E8u);
    ctx->pc = 0x1C80FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80FB0u, 0x1C829E0u, 0x1C829E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C829E8u;
label_1c829e8:
    // 0x1c829e8: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C829E8u;
    SET_GPR_U32(ctx, 31, 0x1C829F0u);
    ctx->pc = 0x1C829ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C829E8u;
    // 0x1c829ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C829E8u, 0x1C829F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C829F0u;
label_1c829f0:
    // 0x1c829f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c829f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c829f4:
    // 0x1c829f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c829f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c829f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c829f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c829fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C829FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C829FCu;
        // 0x1c82a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C829FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82A04u;
label_1c82a04:
    // 0x1c82a04: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C82A04u;
    {
        const bool branch_taken_0x1c82a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82A04u;
        // 0x1c82a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82a04) {
            ctx->pc = 0x1C829F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c829f4;
        }
    }
    ctx->pc = 0x1C82A0Cu;
    // 0x1c82a0c: 0x0  nop
    ctx->pc = 0x1c82a0cu;
    // NOP
    // 0x1c82a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c82a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c82a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c82a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c82a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c82a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c82a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c82a28: 0xc7203d8  jal         func_1C80F60
    ctx->pc = 0x1C82A28u;
    SET_GPR_U32(ctx, 31, 0x1C82A30u);
    ctx->pc = 0x1C82A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A28u;
    // 0x1c82a2c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F60u, 0x1C82A28u, 0x1C82A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A30u;
label_1c82a30:
    // 0x1c82a30: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c82a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c82a34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c82a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82a38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c82a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a3c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c82a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82a40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c82a40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c82a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c82a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c82a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a54: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C82A54u;
    SET_GPR_U32(ctx, 31, 0x1C82A5Cu);
    ctx->pc = 0x1C82A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A54u;
    // 0x1c82a58: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C82A54u, 0x1C82A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A5Cu;
label_1c82a5c:
    // 0x1c82a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a60: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C82A60u;
    SET_GPR_U32(ctx, 31, 0x1C82A68u);
    ctx->pc = 0x1C82A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A60u;
    // 0x1c82a64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C82A60u, 0x1C82A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A68u;
label_1c82a68:
    // 0x1c82a68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82a6c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C82A74u);
    ctx->pc = 0x1C82A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A6Cu;
    // 0x1c82a70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82A6Cu, 0x1C82A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A74u;
label_1c82a74:
    // 0x1c82a74: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c82a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c82a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c82a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c82a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82a80: 0xc7203dc  jal         func_1C80F70
    ctx->pc = 0x1C82A80u;
    SET_GPR_U32(ctx, 31, 0x1C82A88u);
    ctx->pc = 0x1C82A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A80u;
    // 0x1c82a84: 0x240500bc  addiu       $a1, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F70u, 0x1C82A80u, 0x1C82A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A88u;
label_1c82a88:
    // 0x1c82a88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c82a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c82a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a90: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C82A90u;
    SET_GPR_U32(ctx, 31, 0x1C82A98u);
    ctx->pc = 0x1C82A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82A90u;
    // 0x1c82a94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C82A90u, 0x1C82A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82A98u;
label_1c82a98:
    // 0x1c82a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c82a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82aa4: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1c82aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c82aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c82aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82aac: 0x87203de  j           func_1C80F78
    ctx->pc = 0x1C82AACu;
    ctx->pc = 0x1C82AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82AACu;
    // 0x1c82ab0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F78u;
    sub_01C80F78_0x1c80f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C82AB4u;
    // 0x1c82ab4: 0x0  nop
    ctx->pc = 0x1c82ab4u;
    // NOP
    ctx->pc = 0x1c82ab8u;
}
