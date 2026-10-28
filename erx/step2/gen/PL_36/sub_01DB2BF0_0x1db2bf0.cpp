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

// Function: sub_01DB2BF0
// Address: 0x1db2bf0 - 0x1db2cf0
void sub_01DB2BF0_0x1db2bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2BF0_0x1db2bf0");
#endif

    switch (ctx->pc) {
        case 0x1db2c0cu: goto label_1db2c0c;
        case 0x1db2c14u: goto label_1db2c14;
        case 0x1db2c28u: goto label_1db2c28;
        case 0x1db2c2cu: goto label_1db2c2c;
        case 0x1db2c68u: goto label_1db2c68;
        case 0x1db2c90u: goto label_1db2c90;
        case 0x1db2c9cu: goto label_1db2c9c;
        case 0x1db2ca8u: goto label_1db2ca8;
        case 0x1db2cbcu: goto label_1db2cbc;
        case 0x1db2cd4u: goto label_1db2cd4;
        default: break;
    }

    ctx->pc = 0x1db2bf0u;

    // 0x1db2bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2bf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db2bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db2bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db2bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2c04: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB2C04u;
    SET_GPR_U32(ctx, 31, 0x1DB2C0Cu);
    ctx->pc = 0x1DB2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C04u;
    // 0x1db2c08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB2C04u, 0x1DB2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C0Cu;
label_1db2c0c:
    // 0x1db2c0c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB2C0Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2C14u);
    ctx->pc = 0x1DB2C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C0Cu;
    // 0x1db2c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB2C0Cu, 0x1DB2C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C14u;
label_1db2c14:
    // 0x1db2c14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2c18: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB2C18u;
    {
        const bool branch_taken_0x1db2c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2C18u;
        // 0x1db2c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2c18) {
            ctx->pc = 0x1DB2C3Cu;
            goto label_1db2c3c;
        }
    }
    ctx->pc = 0x1DB2C20u;
    // 0x1db2c20: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB2C20u;
    SET_GPR_U32(ctx, 31, 0x1DB2C28u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB2C20u, 0x1DB2C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C28u;
label_1db2c28:
    // 0x1db2c28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db2c2c:
    // 0x1db2c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2C34u;
        // 0x1db2c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2C3Cu;
label_1db2c3c:
    // 0x1db2c3c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DB2C3Cu;
    {
        const bool branch_taken_0x1db2c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2C3Cu;
        // 0x1db2c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2c3c) {
            ctx->pc = 0x1DB2C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2c2c;
        }
    }
    ctx->pc = 0x1DB2C44u;
    // 0x1db2c44: 0x0  nop
    ctx->pc = 0x1db2c44u;
    // NOP
    // 0x1db2c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2c50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db2c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db2c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db2c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db2c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db2c60: 0xc76c3d8  jal         func_1DB0F60
    ctx->pc = 0x1DB2C60u;
    SET_GPR_U32(ctx, 31, 0x1DB2C68u);
    ctx->pc = 0x1DB2C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C60u;
    // 0x1db2c64: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F60u, 0x1DB2C60u, 0x1DB2C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C68u;
label_1db2c68:
    // 0x1db2c68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db2c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db2c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db2c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c78: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1db2c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2c7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2c7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c80: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db2c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db2c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c88: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2C88u;
    SET_GPR_U32(ctx, 31, 0x1DB2C90u);
    ctx->pc = 0x1DB2C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C88u;
    // 0x1db2c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2C88u, 0x1DB2C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C90u;
label_1db2c90:
    // 0x1db2c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2c94: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB2C94u;
    SET_GPR_U32(ctx, 31, 0x1DB2C9Cu);
    ctx->pc = 0x1DB2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C94u;
    // 0x1db2c98: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB2C94u, 0x1DB2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2C9Cu;
label_1db2c9c:
    // 0x1db2c9c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2ca0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2CA0u;
    SET_GPR_U32(ctx, 31, 0x1DB2CA8u);
    ctx->pc = 0x1DB2CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2CA0u;
    // 0x1db2ca4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2CA0u, 0x1DB2CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2CA8u;
label_1db2ca8:
    // 0x1db2ca8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1db2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1db2cac: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1db2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1db2cb0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1db2cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2cb4: 0xc76c3dc  jal         func_1DB0F70
    ctx->pc = 0x1DB2CB4u;
    SET_GPR_U32(ctx, 31, 0x1DB2CBCu);
    ctx->pc = 0x1DB2CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2CB4u;
    // 0x1db2cb8: 0x24050114  addiu       $a1, $zero, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F70u, 0x1DB2CB4u, 0x1DB2CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2CBCu;
label_1db2cbc:
    // 0x1db2cbc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2cbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2cc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db2cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db2cc4: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1db2cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1db2cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ccc: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB2CCCu;
    SET_GPR_U32(ctx, 31, 0x1DB2CD4u);
    ctx->pc = 0x1DB2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2CCCu;
    // 0x1db2cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB2CCCu, 0x1DB2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2CD4u;
label_1db2cd4:
    // 0x1db2cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2ce0: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x1db2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x1db2ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2ce8: 0x876c3de  j           func_1DB0F78
    ctx->pc = 0x1DB2CE8u;
    ctx->pc = 0x1DB2CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2CE8u;
    // 0x1db2cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F78u;
    sub_01DB0F78_0x1db0f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2CF0u;
}
