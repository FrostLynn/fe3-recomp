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

// Function: sub_01D47E90
// Address: 0x1d47e90 - 0x1d47f78
void sub_01D47E90_0x1d47e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47E90_0x1d47e90");
#endif

    switch (ctx->pc) {
        case 0x1d47ea4u: goto label_1d47ea4;
        case 0x1d47eb8u: goto label_1d47eb8;
        case 0x1d47ebcu: goto label_1d47ebc;
        case 0x1d47ed8u: goto label_1d47ed8;
        case 0x1d47ee4u: goto label_1d47ee4;
        case 0x1d47f24u: goto label_1d47f24;
        case 0x1d47f50u: goto label_1d47f50;
        case 0x1d47f5cu: goto label_1d47f5c;
        case 0x1d47f68u: goto label_1d47f68;
        default: break;
    }

    ctx->pc = 0x1d47e90u;

    // 0x1d47e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47e98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d47e9c: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D47E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D47EA4u);
    ctx->pc = 0x1D47EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E9Cu;
    // 0x1d47ea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D47E9Cu, 0x1D47EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47EA4u;
label_1d47ea4:
    // 0x1d47ea4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d47ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47ea8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47EA8u;
    {
        const bool branch_taken_0x1d47ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D47EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47EA8u;
        // 0x1d47eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ea8) {
            ctx->pc = 0x1D47ECCu;
            goto label_1d47ecc;
        }
    }
    ctx->pc = 0x1D47EB0u;
    // 0x1d47eb0: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D47EB0u;
    SET_GPR_U32(ctx, 31, 0x1D47EB8u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D47EB0u, 0x1D47EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47EB8u;
label_1d47eb8:
    // 0x1d47eb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d47eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d47ebc:
    // 0x1d47ebc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47ec0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47EC4u;
        // 0x1d47ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47ECCu;
label_1d47ecc:
    // 0x1d47ecc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47ed0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47ED0u;
    SET_GPR_U32(ctx, 31, 0x1D47ED8u);
    ctx->pc = 0x1D47ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47ED0u;
    // 0x1d47ed4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47ED0u, 0x1D47ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47ED8u;
label_1d47ed8:
    // 0x1d47ed8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d47ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d47edc: 0xc751764  jal         func_1D45D90
    ctx->pc = 0x1D47EDCu;
    SET_GPR_U32(ctx, 31, 0x1D47EE4u);
    ctx->pc = 0x1D47EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47EDCu;
    // 0x1d47ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D90u, 0x1D47EDCu, 0x1D47EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47EE4u;
label_1d47ee4:
    // 0x1d47ee4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D47EE4u;
    {
        const bool branch_taken_0x1d47ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47EE4u;
        // 0x1d47ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ee4) {
            ctx->pc = 0x1D47EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47ebc;
        }
    }
    ctx->pc = 0x1D47EECu;
    // 0x1d47eec: 0x0  nop
    ctx->pc = 0x1d47eecu;
    // NOP
    // 0x1d47ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47ef4: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d47ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d47ef8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d47ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d47efc: 0x25ee0e30  addiu       $t6, $t7, 0xE30
    ctx->pc = 0x1d47efcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3632));
    // 0x1d47f00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d47f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d47f04: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d47f04u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D50E34u));
    // 0x1d47f08: 0x8ded0e30  lw          $t5, 0xE30($t7)
    ctx->pc = 0x1d47f08u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D50E30u));
    // 0x1d47f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d47f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f10: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d47f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d47f14: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d47f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d47f18: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d47f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47f1c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D47F24u);
    ctx->pc = 0x1D47F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F1Cu;
    // 0x1d47f20: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47F1Cu, 0x1D47F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47F24u;
label_1d47f24:
    // 0x1d47f24: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d47f24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d47f28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47f2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47f2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f30: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d47f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47f34: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d47f34u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d47f38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d47f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f3c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d47f3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d47f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f44: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d47f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d47f48: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47F48u;
    SET_GPR_U32(ctx, 31, 0x1D47F50u);
    ctx->pc = 0x1D47F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F48u;
    // 0x1d47f4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47F48u, 0x1D47F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47F50u;
label_1d47f50:
    // 0x1d47f50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47f54: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47F54u;
    SET_GPR_U32(ctx, 31, 0x1D47F5Cu);
    ctx->pc = 0x1D47F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F54u;
    // 0x1d47f58: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47F54u, 0x1D47F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47F5Cu;
label_1d47f5c:
    // 0x1d47f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d47f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f60: 0xc751766  jal         func_1D45D98
    ctx->pc = 0x1D47F60u;
    SET_GPR_U32(ctx, 31, 0x1D47F68u);
    ctx->pc = 0x1D47F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F60u;
    // 0x1d47f64: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D98u, 0x1D47F60u, 0x1D47F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47F68u;
label_1d47f68:
    // 0x1d47f68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d47f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d47f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d47f70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F70u;
        // 0x1d47f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47F78u;
}
