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

// Function: sub_01D19B88
// Address: 0x1d19b88 - 0x1d19c98
void sub_01D19B88_0x1d19b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19B88_0x1d19b88");
#endif

    switch (ctx->pc) {
        case 0x1d19ba4u: goto label_1d19ba4;
        case 0x1d19bacu: goto label_1d19bac;
        case 0x1d19bc0u: goto label_1d19bc0;
        case 0x1d19bc4u: goto label_1d19bc4;
        case 0x1d19c1cu: goto label_1d19c1c;
        case 0x1d19c2cu: goto label_1d19c2c;
        case 0x1d19c40u: goto label_1d19c40;
        case 0x1d19c54u: goto label_1d19c54;
        case 0x1d19c64u: goto label_1d19c64;
        default: break;
    }

    ctx->pc = 0x1d19b88u;

    // 0x1d19b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d19b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d19b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19b98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19b9c: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D19B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D19BA4u);
    ctx->pc = 0x1D19BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19B9Cu;
    // 0x1d19ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D19B9Cu, 0x1D19BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19BA4u;
label_1d19ba4:
    // 0x1d19ba4: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D19BA4u;
    SET_GPR_U32(ctx, 31, 0x1D19BACu);
    ctx->pc = 0x1D19BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19BA4u;
    // 0x1d19ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D19BA4u, 0x1D19BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19BACu;
label_1d19bac:
    // 0x1d19bac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d19bacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19bb0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D19BB0u;
    {
        const bool branch_taken_0x1d19bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D19BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19BB0u;
        // 0x1d19bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19bb0) {
            ctx->pc = 0x1D19BD4u;
            goto label_1d19bd4;
        }
    }
    ctx->pc = 0x1D19BB8u;
    // 0x1d19bb8: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D19BB8u;
    SET_GPR_U32(ctx, 31, 0x1D19BC0u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D19BB8u, 0x1D19BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19BC0u;
label_1d19bc0:
    // 0x1d19bc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d19bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d19bc4:
    // 0x1d19bc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19bc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d19bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19BCCu;
        // 0x1d19bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19BD4u;
label_1d19bd4:
    // 0x1d19bd4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D19BD4u;
    {
        const bool branch_taken_0x1d19bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19BD4u;
        // 0x1d19bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19bd4) {
            ctx->pc = 0x1D19BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19bc4;
        }
    }
    ctx->pc = 0x1D19BDCu;
    // 0x1d19bdc: 0x0  nop
    ctx->pc = 0x1d19bdcu;
    // NOP
    // 0x1d19be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d19be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d19be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19be8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d19be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d19bec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d19becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d19bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d19bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d19bf8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d19bf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d19bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d19c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d19c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d19c04: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d19c04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d19c08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d19c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d19c0c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d19c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d19c10: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d19c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c14: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19C14u;
    SET_GPR_U32(ctx, 31, 0x1D19C1Cu);
    ctx->pc = 0x1D19C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C14u;
    // 0x1d19c18: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19C14u, 0x1D19C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19C1Cu;
label_1d19c1c:
    // 0x1d19c1c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d19c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d19c20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d19c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c24: 0xc74641c  jal         func_1D19070
    ctx->pc = 0x1D19C24u;
    SET_GPR_U32(ctx, 31, 0x1D19C2Cu);
    ctx->pc = 0x1D19C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C24u;
    // 0x1d19c28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19070u, 0x1D19C24u, 0x1D19C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19C2Cu;
label_1d19c2c:
    // 0x1d19c2c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d19c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d19c30: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d19c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c38: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D19C38u;
    SET_GPR_U32(ctx, 31, 0x1D19C40u);
    ctx->pc = 0x1D19C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C38u;
    // 0x1d19c3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D19C38u, 0x1D19C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19C40u;
label_1d19c40:
    // 0x1d19c40: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d19c40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d19c44: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d19c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d19c48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d19c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c4c: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D19C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D19C54u);
    ctx->pc = 0x1D19C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C4Cu;
    // 0x1d19c50: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D19C4Cu, 0x1D19C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19C54u;
label_1d19c54:
    // 0x1d19c54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d19c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d19c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c5c: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D19C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D19C64u);
    ctx->pc = 0x1D19C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C5Cu;
    // 0x1d19c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D19C5Cu, 0x1D19C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19C64u;
label_1d19c64:
    // 0x1d19c64: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d19c64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d19c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d19c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d19c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19c78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d19c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19c7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d19c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d19c80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d19c80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d19c84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d19c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d19c88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d19c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d19c8c: 0x8746422  j           func_1D19088
    ctx->pc = 0x1D19C8Cu;
    ctx->pc = 0x1D19C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19C8Cu;
    // 0x1d19c90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19088u;
    sub_01D19088_0x1d19088(rdram, ctx, runtime); return;
    ctx->pc = 0x1D19C94u;
    // 0x1d19c94: 0x0  nop
    ctx->pc = 0x1d19c94u;
    // NOP
    ctx->pc = 0x1d19c98u;
}
