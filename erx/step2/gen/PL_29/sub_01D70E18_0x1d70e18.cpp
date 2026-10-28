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

// Function: sub_01D70E18
// Address: 0x1d70e18 - 0x1d70f18
void sub_01D70E18_0x1d70e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70E18_0x1d70e18");
#endif

    switch (ctx->pc) {
        case 0x1d70e34u: goto label_1d70e34;
        case 0x1d70e3cu: goto label_1d70e3c;
        case 0x1d70e50u: goto label_1d70e50;
        case 0x1d70e54u: goto label_1d70e54;
        case 0x1d70e90u: goto label_1d70e90;
        case 0x1d70eb8u: goto label_1d70eb8;
        case 0x1d70ec4u: goto label_1d70ec4;
        case 0x1d70ed0u: goto label_1d70ed0;
        case 0x1d70ee4u: goto label_1d70ee4;
        case 0x1d70efcu: goto label_1d70efc;
        default: break;
    }

    ctx->pc = 0x1d70e18u;

    // 0x1d70e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70e1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70e28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70e2c: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D70E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D70E34u);
    ctx->pc = 0x1D70E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70E2Cu;
    // 0x1d70e30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D70E2Cu, 0x1D70E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70E34u;
label_1d70e34:
    // 0x1d70e34: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D70E34u;
    SET_GPR_U32(ctx, 31, 0x1D70E3Cu);
    ctx->pc = 0x1D70E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70E34u;
    // 0x1d70e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D70E34u, 0x1D70E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70E3Cu;
label_1d70e3c:
    // 0x1d70e3c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70e3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70e40: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D70E40u;
    {
        const bool branch_taken_0x1d70e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D70E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E40u;
        // 0x1d70e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e40) {
            ctx->pc = 0x1D70E64u;
            goto label_1d70e64;
        }
    }
    ctx->pc = 0x1D70E48u;
    // 0x1d70e48: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D70E48u;
    SET_GPR_U32(ctx, 31, 0x1D70E50u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D70E48u, 0x1D70E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70E50u;
label_1d70e50:
    // 0x1d70e50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d70e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d70e54:
    // 0x1d70e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70e58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E5Cu;
        // 0x1d70e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70E64u;
label_1d70e64:
    // 0x1d70e64: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D70E64u;
    {
        const bool branch_taken_0x1d70e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70E64u;
        // 0x1d70e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70e64) {
            ctx->pc = 0x1D70E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70e54;
        }
    }
    ctx->pc = 0x1D70E6Cu;
    // 0x1d70e6c: 0x0  nop
    ctx->pc = 0x1d70e6cu;
    // NOP
    // 0x1d70e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d70e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d70e74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70e78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d70e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d70e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d70e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d70e80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d70e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70e84: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d70e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d70e88: 0xc75c00e  jal         func_1D70038
    ctx->pc = 0x1D70E88u;
    SET_GPR_U32(ctx, 31, 0x1D70E90u);
    ctx->pc = 0x1D70E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70E88u;
    // 0x1d70e8c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70038u, 0x1D70E88u, 0x1D70E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70E90u;
label_1d70e90:
    // 0x1d70e90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d70e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d70e94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d70e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70e98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d70e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70e9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d70e9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ea0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d70ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70ea4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d70ea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d70ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d70eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70eb0: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D70EB0u;
    SET_GPR_U32(ctx, 31, 0x1D70EB8u);
    ctx->pc = 0x1D70EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70EB0u;
    // 0x1d70eb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D70EB0u, 0x1D70EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70EB8u;
label_1d70eb8:
    // 0x1d70eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ebc: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D70EBCu;
    SET_GPR_U32(ctx, 31, 0x1D70EC4u);
    ctx->pc = 0x1D70EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70EBCu;
    // 0x1d70ec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D70EBCu, 0x1D70EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70EC4u;
label_1d70ec4:
    // 0x1d70ec4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d70ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d70ec8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D70EC8u;
    SET_GPR_U32(ctx, 31, 0x1D70ED0u);
    ctx->pc = 0x1D70ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70EC8u;
    // 0x1d70ecc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D70EC8u, 0x1D70ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70ED0u;
label_1d70ed0:
    // 0x1d70ed0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d70ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d70ed4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d70ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d70ed8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d70ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70edc: 0xc75c012  jal         func_1D70048
    ctx->pc = 0x1D70EDCu;
    SET_GPR_U32(ctx, 31, 0x1D70EE4u);
    ctx->pc = 0x1D70EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70EDCu;
    // 0x1d70ee0: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70048u, 0x1D70EDCu, 0x1D70EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70EE4u;
label_1d70ee4:
    // 0x1d70ee4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70eec: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d70eecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d70ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ef4: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D70EF4u;
    SET_GPR_U32(ctx, 31, 0x1D70EFCu);
    ctx->pc = 0x1D70EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70EF4u;
    // 0x1d70ef8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D70EF4u, 0x1D70EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70EFCu;
label_1d70efc:
    // 0x1d70efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70f00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d70f00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70f08: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x1d70f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1d70f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d70f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70f10: 0x875c014  j           func_1D70050
    ctx->pc = 0x1D70F10u;
    ctx->pc = 0x1D70F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F10u;
    // 0x1d70f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70050u;
    sub_01D70050_0x1d70050(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70F18u;
}
