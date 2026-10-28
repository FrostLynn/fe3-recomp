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

// Function: sub_01D529B0
// Address: 0x1d529b0 - 0x1d52adc
void sub_01D529B0_0x1d529b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D529B0_0x1d529b0");
#endif

    switch (ctx->pc) {
        case 0x1d529ccu: goto label_1d529cc;
        case 0x1d529d4u: goto label_1d529d4;
        case 0x1d529e8u: goto label_1d529e8;
        case 0x1d529f0u: goto label_1d529f0;
        case 0x1d529f4u: goto label_1d529f4;
        case 0x1d52a30u: goto label_1d52a30;
        case 0x1d52a70u: goto label_1d52a70;
        case 0x1d52a84u: goto label_1d52a84;
        case 0x1d52a90u: goto label_1d52a90;
        case 0x1d52a9cu: goto label_1d52a9c;
        case 0x1d52ab0u: goto label_1d52ab0;
        case 0x1d52ac0u: goto label_1d52ac0;
        default: break;
    }

    ctx->pc = 0x1d529b0u;

    // 0x1d529b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d529b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d529b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d529b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d529b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d529b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d529bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d529bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d529c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d529c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d529c4: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D529C4u;
    SET_GPR_U32(ctx, 31, 0x1D529CCu);
    ctx->pc = 0x1D529C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D529C4u;
    // 0x1d529c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D529C4u, 0x1D529CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D529CCu;
label_1d529cc:
    // 0x1d529cc: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D529CCu;
    SET_GPR_U32(ctx, 31, 0x1D529D4u);
    ctx->pc = 0x1D529D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D529CCu;
    // 0x1d529d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D529CCu, 0x1D529D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D529D4u;
label_1d529d4:
    // 0x1d529d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d529d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d529d8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D529D8u;
    {
        const bool branch_taken_0x1d529d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D529DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D529D8u;
        // 0x1d529dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d529d8) {
            ctx->pc = 0x1D52A04u;
            goto label_1d52a04;
        }
    }
    ctx->pc = 0x1D529E0u;
    // 0x1d529e0: 0xc7543ec  jal         func_1D50FB0
    ctx->pc = 0x1D529E0u;
    SET_GPR_U32(ctx, 31, 0x1D529E8u);
    ctx->pc = 0x1D50FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FB0u, 0x1D529E0u, 0x1D529E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D529E8u;
label_1d529e8:
    // 0x1d529e8: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D529E8u;
    SET_GPR_U32(ctx, 31, 0x1D529F0u);
    ctx->pc = 0x1D529ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D529E8u;
    // 0x1d529ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D529E8u, 0x1D529F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D529F0u;
label_1d529f0:
    // 0x1d529f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d529f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d529f4:
    // 0x1d529f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d529f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d529f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d529f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d529fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D529FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D529FCu;
        // 0x1d52a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D529FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52A04u;
label_1d52a04:
    // 0x1d52a04: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D52A04u;
    {
        const bool branch_taken_0x1d52a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A04u;
        // 0x1d52a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a04) {
            ctx->pc = 0x1D529F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d529f4;
        }
    }
    ctx->pc = 0x1D52A0Cu;
    // 0x1d52a0c: 0x0  nop
    ctx->pc = 0x1d52a0cu;
    // NOP
    // 0x1d52a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52a18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d52a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d52a1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d52a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d52a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a24: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d52a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d52a28: 0xc7543d8  jal         func_1D50F60
    ctx->pc = 0x1D52A28u;
    SET_GPR_U32(ctx, 31, 0x1D52A30u);
    ctx->pc = 0x1D52A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52A28u;
    // 0x1d52a2c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F60u, 0x1D52A28u, 0x1D52A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52A30u;
label_1d52a30:
    // 0x1d52a30: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d52a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d52a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d52a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a38: 0x25cefff5  addiu       $t6, $t6, -0xB
    ctx->pc = 0x1d52a38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967285));
    // 0x1d52a3c: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x1d52a3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1d52a40: 0x11e0003a  beqz        $t7, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D52A40u;
    {
        const bool branch_taken_0x1d52a40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52A40u;
        // 0x1d52a44: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52a40) {
            ctx->pc = 0x1D52B2Cu;
            return;
        }
    }
    ctx->pc = 0x1D52A48u;
    // 0x1d52a48: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d52a48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d52a4c: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d52a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d52a50: 0x25ce48f0  addiu       $t6, $t6, 0x48F0
    ctx->pc = 0x1d52a50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 18672));
    // 0x1d52a54: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d52a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d52a58: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d52a58u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d52a5c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D52A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D52A64u: goto label_1d52a64;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52A5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D52A64u;
label_1d52a64:
    // 0x1d52a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d52a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a6c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1d52a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1d52a70:
    // 0x1d52a70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a78: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d52a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52a7c: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D52A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D52A84u);
    ctx->pc = 0x1D52A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52A7Cu;
    // 0x1d52a80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D52A7Cu, 0x1D52A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52A84u;
label_1d52a84:
    // 0x1d52a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a88: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D52A88u;
    SET_GPR_U32(ctx, 31, 0x1D52A90u);
    ctx->pc = 0x1D52A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52A88u;
    // 0x1d52a8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D52A88u, 0x1D52A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52A90u;
label_1d52a90:
    // 0x1d52a90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52a94: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52A94u;
    SET_GPR_U32(ctx, 31, 0x1D52A9Cu);
    ctx->pc = 0x1D52A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52A94u;
    // 0x1d52a98: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52A94u, 0x1D52A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52A9Cu;
label_1d52a9c:
    // 0x1d52a9c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d52a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d52aa0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d52aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d52aa4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d52aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d52aa8: 0xc7543dc  jal         func_1D50F70
    ctx->pc = 0x1D52AA8u;
    SET_GPR_U32(ctx, 31, 0x1D52AB0u);
    ctx->pc = 0x1D52AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52AA8u;
    // 0x1d52aac: 0x240500f4  addiu       $a1, $zero, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F70u, 0x1D52AA8u, 0x1D52AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52AB0u;
label_1d52ab0:
    // 0x1d52ab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d52ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d52ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ab8: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D52AB8u;
    SET_GPR_U32(ctx, 31, 0x1D52AC0u);
    ctx->pc = 0x1D52ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52AB8u;
    // 0x1d52abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D52AB8u, 0x1D52AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52AC0u;
label_1d52ac0:
    // 0x1d52ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ac4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d52ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52acc: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x1d52accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x1d52ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d52ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52ad4: 0x87543de  j           func_1D50F78
    ctx->pc = 0x1D52AD4u;
    ctx->pc = 0x1D52AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52AD4u;
    // 0x1d52ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F78u;
    sub_01D50F78_0x1d50f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52ADCu;
}
