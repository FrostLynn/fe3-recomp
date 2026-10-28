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

// Function: sub_01DB29B0
// Address: 0x1db29b0 - 0x1db2ab0
void sub_01DB29B0_0x1db29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB29B0_0x1db29b0");
#endif

    switch (ctx->pc) {
        case 0x1db29ccu: goto label_1db29cc;
        case 0x1db29d4u: goto label_1db29d4;
        case 0x1db29e8u: goto label_1db29e8;
        case 0x1db29ecu: goto label_1db29ec;
        case 0x1db2a28u: goto label_1db2a28;
        case 0x1db2a54u: goto label_1db2a54;
        case 0x1db2a60u: goto label_1db2a60;
        case 0x1db2a6cu: goto label_1db2a6c;
        case 0x1db2a80u: goto label_1db2a80;
        case 0x1db2a90u: goto label_1db2a90;
        default: break;
    }

    ctx->pc = 0x1db29b0u;

    // 0x1db29b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db29b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db29b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db29b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db29b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db29b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db29bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db29bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db29c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db29c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db29c4: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB29C4u;
    SET_GPR_U32(ctx, 31, 0x1DB29CCu);
    ctx->pc = 0x1DB29C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB29C4u;
    // 0x1db29c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB29C4u, 0x1DB29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB29CCu;
label_1db29cc:
    // 0x1db29cc: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB29CCu;
    SET_GPR_U32(ctx, 31, 0x1DB29D4u);
    ctx->pc = 0x1DB29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB29CCu;
    // 0x1db29d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB29CCu, 0x1DB29D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB29D4u;
label_1db29d4:
    // 0x1db29d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db29d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db29d8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB29D8u;
    {
        const bool branch_taken_0x1db29d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB29D8u;
        // 0x1db29dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db29d8) {
            ctx->pc = 0x1DB29FCu;
            goto label_1db29fc;
        }
    }
    ctx->pc = 0x1DB29E0u;
    // 0x1db29e0: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB29E0u;
    SET_GPR_U32(ctx, 31, 0x1DB29E8u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB29E0u, 0x1DB29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB29E8u;
label_1db29e8:
    // 0x1db29e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db29e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db29ec:
    // 0x1db29ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db29ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db29f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db29f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db29f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB29F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB29F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB29F4u;
        // 0x1db29f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB29F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB29FCu;
label_1db29fc:
    // 0x1db29fc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DB29FCu;
    {
        const bool branch_taken_0x1db29fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB29FCu;
        // 0x1db2a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db29fc) {
            ctx->pc = 0x1DB29ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db29ec;
        }
    }
    ctx->pc = 0x1DB2A04u;
    // 0x1db2a04: 0x0  nop
    ctx->pc = 0x1db2a04u;
    // NOP
    // 0x1db2a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db2a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db2a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db2a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db2a20: 0xc76c3d8  jal         func_1DB0F60
    ctx->pc = 0x1DB2A20u;
    SET_GPR_U32(ctx, 31, 0x1DB2A28u);
    ctx->pc = 0x1DB2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A20u;
    // 0x1db2a24: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F60u, 0x1DB2A20u, 0x1DB2A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A28u;
label_1db2a28:
    // 0x1db2a28: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db2a2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db2a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2a30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a34: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1db2a34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2a38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1db2a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db2a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db2a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db2a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a4c: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2A4Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2A54u);
    ctx->pc = 0x1DB2A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A4Cu;
    // 0x1db2a50: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2A4Cu, 0x1DB2A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A54u;
label_1db2a54:
    // 0x1db2a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a58: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB2A58u;
    SET_GPR_U32(ctx, 31, 0x1DB2A60u);
    ctx->pc = 0x1DB2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A58u;
    // 0x1db2a5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB2A58u, 0x1DB2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A60u;
label_1db2a60:
    // 0x1db2a60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2a64: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2A64u;
    SET_GPR_U32(ctx, 31, 0x1DB2A6Cu);
    ctx->pc = 0x1DB2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A64u;
    // 0x1db2a68: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2A64u, 0x1DB2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A6Cu;
label_1db2a6c:
    // 0x1db2a6c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1db2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1db2a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db2a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a74: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1db2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db2a78: 0xc76c3dc  jal         func_1DB0F70
    ctx->pc = 0x1DB2A78u;
    SET_GPR_U32(ctx, 31, 0x1DB2A80u);
    ctx->pc = 0x1DB2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A78u;
    // 0x1db2a7c: 0x24050112  addiu       $a1, $zero, 0x112 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F70u, 0x1DB2A78u, 0x1DB2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A80u;
label_1db2a80:
    // 0x1db2a80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db2a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a88: 0xc76c3d0  jal         func_1DB0F40
    ctx->pc = 0x1DB2A88u;
    SET_GPR_U32(ctx, 31, 0x1DB2A90u);
    ctx->pc = 0x1DB2A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2A88u;
    // 0x1db2a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F40u, 0x1DB2A88u, 0x1DB2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2A90u;
label_1db2a90:
    // 0x1db2a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2a9c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x1db2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1db2aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db2aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2aa4: 0x876c3de  j           func_1DB0F78
    ctx->pc = 0x1DB2AA4u;
    ctx->pc = 0x1DB2AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2AA4u;
    // 0x1db2aa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F78u;
    sub_01DB0F78_0x1db0f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2AACu;
    // 0x1db2aac: 0x0  nop
    ctx->pc = 0x1db2aacu;
    // NOP
    ctx->pc = 0x1db2ab0u;
}
