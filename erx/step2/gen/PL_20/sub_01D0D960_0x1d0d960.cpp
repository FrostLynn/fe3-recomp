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

// Function: sub_01D0D960
// Address: 0x1d0d960 - 0x1d0da84
void sub_01D0D960_0x1d0d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0D960_0x1d0d960");
#endif

    switch (ctx->pc) {
        case 0x1d0d97cu: goto label_1d0d97c;
        case 0x1d0d984u: goto label_1d0d984;
        case 0x1d0d998u: goto label_1d0d998;
        case 0x1d0d99cu: goto label_1d0d99c;
        case 0x1d0d9d8u: goto label_1d0d9d8;
        case 0x1d0da18u: goto label_1d0da18;
        case 0x1d0da2cu: goto label_1d0da2c;
        case 0x1d0da38u: goto label_1d0da38;
        case 0x1d0da44u: goto label_1d0da44;
        case 0x1d0da58u: goto label_1d0da58;
        case 0x1d0da68u: goto label_1d0da68;
        default: break;
    }

    ctx->pc = 0x1d0d960u;

    // 0x1d0d960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0d964: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0d964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0d968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0d96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0d970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0d974: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0D974u;
    SET_GPR_U32(ctx, 31, 0x1D0D97Cu);
    ctx->pc = 0x1D0D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D974u;
    // 0x1d0d978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0D974u, 0x1D0D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D97Cu;
label_1d0d97c:
    // 0x1d0d97c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0D97Cu;
    SET_GPR_U32(ctx, 31, 0x1D0D984u);
    ctx->pc = 0x1D0D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D97Cu;
    // 0x1d0d980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0D97Cu, 0x1D0D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D984u;
label_1d0d984:
    // 0x1d0d984: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0d984u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d988: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0D988u;
    {
        const bool branch_taken_0x1d0d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D988u;
        // 0x1d0d98c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d988) {
            ctx->pc = 0x1D0D9ACu;
            goto label_1d0d9ac;
        }
    }
    ctx->pc = 0x1D0D990u;
    // 0x1d0d990: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0D990u;
    SET_GPR_U32(ctx, 31, 0x1D0D998u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0D990u, 0x1D0D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D998u;
label_1d0d998:
    // 0x1d0d998: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0d998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0d99c:
    // 0x1d0d99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0d99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d9a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0d9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D9A4u;
        // 0x1d0d9a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D9ACu;
label_1d0d9ac:
    // 0x1d0d9ac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0D9ACu;
    {
        const bool branch_taken_0x1d0d9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D9ACu;
        // 0x1d0d9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d9ac) {
            ctx->pc = 0x1D0D99Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d99c;
        }
    }
    ctx->pc = 0x1D0D9B4u;
    // 0x1d0d9b4: 0x0  nop
    ctx->pc = 0x1d0d9b4u;
    // NOP
    // 0x1d0d9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d9bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0d9c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0d9c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0d9c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0d9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d9cc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0d9d0: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0D9D0u;
    SET_GPR_U32(ctx, 31, 0x1D0D9D8u);
    ctx->pc = 0x1D0D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D9D0u;
    // 0x1d0d9d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0D9D0u, 0x1D0D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D9D8u;
label_1d0d9d8:
    // 0x1d0d9d8: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d0d9d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0d9dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0d9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d9e0: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1d0d9e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1d0d9e4: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1d0d9e4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d0d9e8: 0x11e00036  beqz        $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D0D9E8u;
    {
        const bool branch_taken_0x1d0d9e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D9E8u;
        // 0x1d0d9ec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d9e8) {
            ctx->pc = 0x1D0DAC4u;
            return;
        }
    }
    ctx->pc = 0x1D0D9F0u;
    // 0x1d0d9f0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d0d9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d0d9f4: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0d9f4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0d9f8: 0x25cefb6c  addiu       $t6, $t6, -0x494
    ctx->pc = 0x1d0d9f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966124));
    // 0x1d0d9fc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0d9fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0da00: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d0da00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0da04: 0x1a00008  jr          $t5
    ctx->pc = 0x1D0DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0DA0Cu: goto label_1d0da0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DA04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0DA0Cu;
label_1d0da0c:
    // 0x1d0da0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0da10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da14: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d0da14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1d0da18:
    // 0x1d0da18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0da18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0da1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0da1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da20: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0da20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0da24: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0DA24u;
    SET_GPR_U32(ctx, 31, 0x1D0DA2Cu);
    ctx->pc = 0x1D0DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA24u;
    // 0x1d0da28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0DA24u, 0x1D0DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA2Cu;
label_1d0da2c:
    // 0x1d0da2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da30: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0DA30u;
    SET_GPR_U32(ctx, 31, 0x1D0DA38u);
    ctx->pc = 0x1D0DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA30u;
    // 0x1d0da34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0DA30u, 0x1D0DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA38u;
label_1d0da38:
    // 0x1d0da38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0da3c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DA3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DA44u);
    ctx->pc = 0x1D0DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA3Cu;
    // 0x1d0da40: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DA3Cu, 0x1D0DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA44u;
label_1d0da44:
    // 0x1d0da44: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d0da44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d0da48: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d0da48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d0da4c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d0da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0da50: 0xc742f5c  jal         func_1D0BD70
    ctx->pc = 0x1D0DA50u;
    SET_GPR_U32(ctx, 31, 0x1D0DA58u);
    ctx->pc = 0x1D0DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA50u;
    // 0x1d0da54: 0x240500e3  addiu       $a1, $zero, 0xE3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD70u, 0x1D0DA50u, 0x1D0DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA58u;
label_1d0da58:
    // 0x1d0da58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0da58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0da5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da60: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0DA60u;
    SET_GPR_U32(ctx, 31, 0x1D0DA68u);
    ctx->pc = 0x1D0DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA60u;
    // 0x1d0da64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0DA60u, 0x1D0DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DA68u;
label_1d0da68:
    // 0x1d0da68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0da68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0da6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0da6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0da70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0da70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0da74: 0x24050081  addiu       $a1, $zero, 0x81
    ctx->pc = 0x1d0da74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1d0da78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0da78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0da7c: 0x8742f5e  j           func_1D0BD78
    ctx->pc = 0x1D0DA7Cu;
    ctx->pc = 0x1D0DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DA7Cu;
    // 0x1d0da80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD78u;
    sub_01D0BD78_0x1d0bd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DA84u;
}
