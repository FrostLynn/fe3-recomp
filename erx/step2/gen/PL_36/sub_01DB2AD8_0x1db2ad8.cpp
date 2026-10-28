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

// Function: sub_01DB2AD8
// Address: 0x1db2ad8 - 0x1db2bd8
void sub_01DB2AD8_0x1db2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2AD8_0x1db2ad8");
#endif

    switch (ctx->pc) {
        case 0x1db2af4u: goto label_1db2af4;
        case 0x1db2afcu: goto label_1db2afc;
        case 0x1db2b10u: goto label_1db2b10;
        case 0x1db2b14u: goto label_1db2b14;
        case 0x1db2b50u: goto label_1db2b50;
        case 0x1db2b7cu: goto label_1db2b7c;
        case 0x1db2b88u: goto label_1db2b88;
        case 0x1db2b94u: goto label_1db2b94;
        case 0x1db2ba8u: goto label_1db2ba8;
        case 0x1db2bb8u: goto label_1db2bb8;
        default: break;
    }

    ctx->pc = 0x1db2ad8u;

    // 0x1db2ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2adc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db2adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db2ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2ae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db2ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ae8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2aec: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB2AECu;
    SET_GPR_U32(ctx, 31, 0x1DB2AF4u);
    ctx->pc = 0x1DB2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2AECu;
    // 0x1db2af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB2AECu, 0x1DB2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2AF4u;
label_1db2af4:
    // 0x1db2af4: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB2AF4u;
    SET_GPR_U32(ctx, 31, 0x1DB2AFCu);
    ctx->pc = 0x1DB2AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2AF4u;
    // 0x1db2af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB2AF4u, 0x1DB2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2AFCu;
label_1db2afc:
    // 0x1db2afc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2afcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2b00: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB2B00u;
    {
        const bool branch_taken_0x1db2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B00u;
        // 0x1db2b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b00) {
            ctx->pc = 0x1DB2B24u;
            goto label_1db2b24;
        }
    }
    ctx->pc = 0x1DB2B08u;
    // 0x1db2b08: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB2B08u;
    SET_GPR_U32(ctx, 31, 0x1DB2B10u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB2B08u, 0x1DB2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B10u;
label_1db2b10:
    // 0x1db2b10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db2b14:
    // 0x1db2b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B1Cu;
        // 0x1db2b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2B24u;
label_1db2b24:
    // 0x1db2b24: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DB2B24u;
    {
        const bool branch_taken_0x1db2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2B24u;
        // 0x1db2b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2b24) {
            ctx->pc = 0x1DB2B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2b14;
        }
    }
    ctx->pc = 0x1DB2B2Cu;
    // 0x1db2b2c: 0x0  nop
    ctx->pc = 0x1db2b2cu;
    // NOP
    // 0x1db2b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db2b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db2b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db2b48: 0xc76c3d8  jal         func_1DB0F60
    ctx->pc = 0x1DB2B48u;
    SET_GPR_U32(ctx, 31, 0x1DB2B50u);
    ctx->pc = 0x1DB2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2B48u;
    // 0x1db2b4c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F60u, 0x1DB2B48u, 0x1DB2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B50u;
label_1db2b50:
    // 0x1db2b50: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db2b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db2b54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db2b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b5c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1db2b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2b60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2b60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db2b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db2b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db2b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db2b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b74: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2B74u;
    SET_GPR_U32(ctx, 31, 0x1DB2B7Cu);
    ctx->pc = 0x1DB2B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2B74u;
    // 0x1db2b78: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2B74u, 0x1DB2B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B7Cu;
label_1db2b7c:
    // 0x1db2b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b80: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB2B80u;
    SET_GPR_U32(ctx, 31, 0x1DB2B88u);
    ctx->pc = 0x1DB2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2B80u;
    // 0x1db2b84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB2B80u, 0x1DB2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B88u;
label_1db2b88:
    // 0x1db2b88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2b8c: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2B8Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2B94u);
    ctx->pc = 0x1DB2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2B8Cu;
    // 0x1db2b90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2B8Cu, 0x1DB2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2B94u;
label_1db2b94:
    // 0x1db2b94: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1db2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1db2b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db2b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2b9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1db2b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2ba0: 0xc76c3dc  jal         func_1DB0F70
    ctx->pc = 0x1DB2BA0u;
    SET_GPR_U32(ctx, 31, 0x1DB2BA8u);
    ctx->pc = 0x1DB2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2BA0u;
    // 0x1db2ba4: 0x24050113  addiu       $a1, $zero, 0x113 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F70u, 0x1DB2BA0u, 0x1DB2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2BA8u;
label_1db2ba8:
    // 0x1db2ba8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db2ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db2bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2bb0: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB2BB0u;
    SET_GPR_U32(ctx, 31, 0x1DB2BB8u);
    ctx->pc = 0x1DB2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2BB0u;
    // 0x1db2bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB2BB0u, 0x1DB2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2BB8u;
label_1db2bb8:
    // 0x1db2bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2bc4: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x1db2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x1db2bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db2bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2bcc: 0x876c3de  j           func_1DB0F78
    ctx->pc = 0x1DB2BCCu;
    ctx->pc = 0x1DB2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2BCCu;
    // 0x1db2bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F78u;
    sub_01DB0F78_0x1db0f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2BD4u;
    // 0x1db2bd4: 0x0  nop
    ctx->pc = 0x1db2bd4u;
    // NOP
    ctx->pc = 0x1db2bd8u;
}
