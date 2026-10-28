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

// Function: sub_01C6BC08
// Address: 0x1c6bc08 - 0x1c6bd20
void sub_01C6BC08_0x1c6bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BC08_0x1c6bc08");
#endif

    switch (ctx->pc) {
        case 0x1c6bc24u: goto label_1c6bc24;
        case 0x1c6bc2cu: goto label_1c6bc2c;
        case 0x1c6bc34u: goto label_1c6bc34;
        case 0x1c6bc48u: goto label_1c6bc48;
        case 0x1c6bc50u: goto label_1c6bc50;
        case 0x1c6bc54u: goto label_1c6bc54;
        case 0x1c6bc90u: goto label_1c6bc90;
        case 0x1c6bcb8u: goto label_1c6bcb8;
        case 0x1c6bcc4u: goto label_1c6bcc4;
        case 0x1c6bcd0u: goto label_1c6bcd0;
        case 0x1c6bcf0u: goto label_1c6bcf0;
        case 0x1c6bd00u: goto label_1c6bd00;
        default: break;
    }

    ctx->pc = 0x1c6bc08u;

    // 0x1c6bc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bc0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6bc0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6bc10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6bc14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6bc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bc18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6bc1c: 0xc71aa32  jal         func_1C6A8C8
    ctx->pc = 0x1C6BC1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BC24u);
    ctx->pc = 0x1C6BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BC1Cu;
    // 0x1c6bc20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A8C8u, 0x1C6BC1Cu, 0x1C6BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC24u;
label_1c6bc24:
    // 0x1c6bc24: 0xc71a7ae  jal         func_1C69EB8
    ctx->pc = 0x1C6BC24u;
    SET_GPR_U32(ctx, 31, 0x1C6BC2Cu);
    ctx->pc = 0x1C6BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BC24u;
    // 0x1c6bc28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EB8u, 0x1C6BC24u, 0x1C6BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC2Cu;
label_1c6bc2c:
    // 0x1c6bc2c: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6BC2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BC34u);
    ctx->pc = 0x1C6BC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BC2Cu;
    // 0x1c6bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6BC2Cu, 0x1C6BC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC34u;
label_1c6bc34:
    // 0x1c6bc34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6bc34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bc38: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6BC38u;
    {
        const bool branch_taken_0x1c6bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BC38u;
        // 0x1c6bc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bc38) {
            ctx->pc = 0x1C6BC64u;
            goto label_1c6bc64;
        }
    }
    ctx->pc = 0x1C6BC40u;
    // 0x1c6bc40: 0xc71a7ae  jal         func_1C69EB8
    ctx->pc = 0x1C6BC40u;
    SET_GPR_U32(ctx, 31, 0x1C6BC48u);
    ctx->pc = 0x1C69EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EB8u, 0x1C6BC40u, 0x1C6BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC48u;
label_1c6bc48:
    // 0x1c6bc48: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6BC48u;
    SET_GPR_U32(ctx, 31, 0x1C6BC50u);
    ctx->pc = 0x1C6BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BC48u;
    // 0x1c6bc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6BC48u, 0x1C6BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC50u;
label_1c6bc50:
    // 0x1c6bc50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6bc54:
    // 0x1c6bc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bc58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6bc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BC5Cu;
        // 0x1c6bc60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BC64u;
label_1c6bc64:
    // 0x1c6bc64: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6BC64u;
    {
        const bool branch_taken_0x1c6bc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BC64u;
        // 0x1c6bc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bc64) {
            ctx->pc = 0x1C6BC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bc54;
        }
    }
    ctx->pc = 0x1C6BC6Cu;
    // 0x1c6bc6c: 0x0  nop
    ctx->pc = 0x1c6bc6cu;
    // NOP
    // 0x1c6bc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6bc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6bc78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6bc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6bc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6bc80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6bc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bc84: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6bc88: 0xc71a79a  jal         func_1C69E68
    ctx->pc = 0x1C6BC88u;
    SET_GPR_U32(ctx, 31, 0x1C6BC90u);
    ctx->pc = 0x1C6BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BC88u;
    // 0x1c6bc8c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E68u, 0x1C6BC88u, 0x1C6BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BC90u;
label_1c6bc90:
    // 0x1c6bc90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6bc94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6bc94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bc98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6bc98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bc9c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6bc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6bca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6bca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6bca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bca8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6bca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6bcac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bcacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bcb0: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6BCB0u;
    SET_GPR_U32(ctx, 31, 0x1C6BCB8u);
    ctx->pc = 0x1C6BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCB0u;
    // 0x1c6bcb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6BCB0u, 0x1C6BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BCB8u;
label_1c6bcb8:
    // 0x1c6bcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bcbc: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6BCBCu;
    SET_GPR_U32(ctx, 31, 0x1C6BCC4u);
    ctx->pc = 0x1C6BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCBCu;
    // 0x1c6bcc0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6BCBCu, 0x1C6BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BCC4u;
label_1c6bcc4:
    // 0x1c6bcc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6bcc8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BCC8u;
    SET_GPR_U32(ctx, 31, 0x1C6BCD0u);
    ctx->pc = 0x1C6BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCC8u;
    // 0x1c6bccc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BCC8u, 0x1C6BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BCD0u;
label_1c6bcd0:
    // 0x1c6bcd0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6bcd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bcd4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c6bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c6bcd8: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c6bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c6bcdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c6bcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6bce0: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1c6bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1c6bce4: 0x26310390  addiu       $s1, $s1, 0x390
    ctx->pc = 0x1c6bce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c6bce8: 0xc71a79e  jal         func_1C69E78
    ctx->pc = 0x1C6BCE8u;
    SET_GPR_U32(ctx, 31, 0x1C6BCF0u);
    ctx->pc = 0x1C6BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCE8u;
    // 0x1c6bcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E78u, 0x1C6BCE8u, 0x1C6BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BCF0u;
label_1c6bcf0:
    // 0x1c6bcf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6bcf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6bcf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bcf8: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6BCF8u;
    SET_GPR_U32(ctx, 31, 0x1C6BD00u);
    ctx->pc = 0x1C6BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCF8u;
    // 0x1c6bcfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6BCF8u, 0x1C6BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD00u;
label_1c6bd00:
    // 0x1c6bd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bd04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6bd04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bd0c: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x1c6bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1c6bd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6bd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bd14: 0x871a7a0  j           func_1C69E80
    ctx->pc = 0x1C6BD14u;
    ctx->pc = 0x1C6BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD14u;
    // 0x1c6bd18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E80u;
    sub_01C69E80_0x1c69e80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BD1Cu;
    // 0x1c6bd1c: 0x0  nop
    ctx->pc = 0x1c6bd1cu;
    // NOP
    ctx->pc = 0x1c6bd20u;
}
