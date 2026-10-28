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

// Function: sub_01DB2E50
// Address: 0x1db2e50 - 0x1db2f38
void sub_01DB2E50_0x1db2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2E50_0x1db2e50");
#endif

    switch (ctx->pc) {
        case 0x1db2e64u: goto label_1db2e64;
        case 0x1db2e78u: goto label_1db2e78;
        case 0x1db2e7cu: goto label_1db2e7c;
        case 0x1db2e98u: goto label_1db2e98;
        case 0x1db2ea4u: goto label_1db2ea4;
        case 0x1db2ee4u: goto label_1db2ee4;
        case 0x1db2f10u: goto label_1db2f10;
        case 0x1db2f1cu: goto label_1db2f1c;
        case 0x1db2f28u: goto label_1db2f28;
        default: break;
    }

    ctx->pc = 0x1db2e50u;

    // 0x1db2e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2e58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2e5c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB2E5Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2E64u);
    ctx->pc = 0x1DB2E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E5Cu;
    // 0x1db2e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB2E5Cu, 0x1DB2E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E64u;
label_1db2e64:
    // 0x1db2e64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2e64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2e68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB2E68u;
    {
        const bool branch_taken_0x1db2e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E68u;
        // 0x1db2e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2e68) {
            ctx->pc = 0x1DB2E8Cu;
            goto label_1db2e8c;
        }
    }
    ctx->pc = 0x1DB2E70u;
    // 0x1db2e70: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB2E70u;
    SET_GPR_U32(ctx, 31, 0x1DB2E78u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB2E70u, 0x1DB2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E78u;
label_1db2e78:
    // 0x1db2e78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db2e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db2e7c:
    // 0x1db2e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2e80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E84u;
        // 0x1db2e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2E8Cu;
label_1db2e8c:
    // 0x1db2e8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2e90: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2E90u;
    SET_GPR_U32(ctx, 31, 0x1DB2E98u);
    ctx->pc = 0x1DB2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E90u;
    // 0x1db2e94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2E90u, 0x1DB2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E98u;
label_1db2e98:
    // 0x1db2e98: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1db2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1db2e9c: 0xc76c3e4  jal         func_1DB0F90
    ctx->pc = 0x1DB2E9Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2EA4u);
    ctx->pc = 0x1DB2EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E9Cu;
    // 0x1db2ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F90u, 0x1DB2E9Cu, 0x1DB2EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2EA4u;
label_1db2ea4:
    // 0x1db2ea4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DB2EA4u;
    {
        const bool branch_taken_0x1db2ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2EA4u;
        // 0x1db2ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2ea4) {
            ctx->pc = 0x1DB2E7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2e7c;
        }
    }
    ctx->pc = 0x1DB2EACu;
    // 0x1db2eac: 0x0  nop
    ctx->pc = 0x1db2eacu;
    // NOP
    // 0x1db2eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2eb4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db2eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db2eb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db2ebc: 0x25eeb7b8  addiu       $t6, $t7, -0x4848
    ctx->pc = 0x1db2ebcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948792));
    // 0x1db2ec0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1db2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1db2ec4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1db2ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DBB7BCu));
    // 0x1db2ec8: 0x8dedb7b8  lw          $t5, -0x4848($t7)
    ctx->pc = 0x1db2ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DBB7B8u));
    // 0x1db2ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db2eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ed0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1db2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1db2ed4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1db2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1db2ed8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1db2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1db2edc: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2EDCu;
    SET_GPR_U32(ctx, 31, 0x1DB2EE4u);
    ctx->pc = 0x1DB2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2EDCu;
    // 0x1db2ee0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2EDCu, 0x1DB2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2EE4u;
label_1db2ee4:
    // 0x1db2ee4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1db2ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1db2ee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db2ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2eec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2eecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2ef0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db2ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2ef4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db2ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db2ef8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2ef8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2efc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1db2efcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1db2f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2f04: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db2f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db2f08: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2F08u;
    SET_GPR_U32(ctx, 31, 0x1DB2F10u);
    ctx->pc = 0x1DB2F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F08u;
    // 0x1db2f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2F08u, 0x1DB2F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F10u;
label_1db2f10:
    // 0x1db2f10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2f14: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2F14u;
    SET_GPR_U32(ctx, 31, 0x1DB2F1Cu);
    ctx->pc = 0x1DB2F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F14u;
    // 0x1db2f18: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2F14u, 0x1DB2F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F1Cu;
label_1db2f1c:
    // 0x1db2f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db2f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2f20: 0xc76c3e6  jal         func_1DB0F98
    ctx->pc = 0x1DB2F20u;
    SET_GPR_U32(ctx, 31, 0x1DB2F28u);
    ctx->pc = 0x1DB2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F20u;
    // 0x1db2f24: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F98u, 0x1DB2F20u, 0x1DB2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F28u;
label_1db2f28:
    // 0x1db2f28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db2f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2f2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db2f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db2f30: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F30u;
        // 0x1db2f34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2F38u;
}
