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

// Function: sub_01D52E30
// Address: 0x1d52e30 - 0x1d52f18
void sub_01D52E30_0x1d52e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52E30_0x1d52e30");
#endif

    switch (ctx->pc) {
        case 0x1d52e44u: goto label_1d52e44;
        case 0x1d52e58u: goto label_1d52e58;
        case 0x1d52e5cu: goto label_1d52e5c;
        case 0x1d52e78u: goto label_1d52e78;
        case 0x1d52e84u: goto label_1d52e84;
        case 0x1d52ec4u: goto label_1d52ec4;
        case 0x1d52ef0u: goto label_1d52ef0;
        case 0x1d52efcu: goto label_1d52efc;
        case 0x1d52f08u: goto label_1d52f08;
        default: break;
    }

    ctx->pc = 0x1d52e30u;

    // 0x1d52e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52e38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d52e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d52e3c: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D52E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D52E44u);
    ctx->pc = 0x1D52E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52E3Cu;
    // 0x1d52e40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D52E3Cu, 0x1D52E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52E44u;
label_1d52e44:
    // 0x1d52e44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d52e44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52e48: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52E48u;
    {
        const bool branch_taken_0x1d52e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D52E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52E48u;
        // 0x1d52e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52e48) {
            ctx->pc = 0x1D52E6Cu;
            goto label_1d52e6c;
        }
    }
    ctx->pc = 0x1D52E50u;
    // 0x1d52e50: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D52E50u;
    SET_GPR_U32(ctx, 31, 0x1D52E58u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D52E50u, 0x1D52E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52E58u;
label_1d52e58:
    // 0x1d52e58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d52e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d52e5c:
    // 0x1d52e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52e60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d52e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52E64u;
        // 0x1d52e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52E6Cu;
label_1d52e6c:
    // 0x1d52e6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52e70: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52E70u;
    SET_GPR_U32(ctx, 31, 0x1D52E78u);
    ctx->pc = 0x1D52E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52E70u;
    // 0x1d52e74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52E70u, 0x1D52E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52E78u;
label_1d52e78:
    // 0x1d52e78: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d52e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d52e7c: 0xc7543e4  jal         func_1D50F90
    ctx->pc = 0x1D52E7Cu;
    SET_GPR_U32(ctx, 31, 0x1D52E84u);
    ctx->pc = 0x1D52E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52E7Cu;
    // 0x1d52e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F90u, 0x1D52E7Cu, 0x1D52E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52E84u;
label_1d52e84:
    // 0x1d52e84: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D52E84u;
    {
        const bool branch_taken_0x1d52e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52E84u;
        // 0x1d52e88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52e84) {
            ctx->pc = 0x1D52E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52e5c;
        }
    }
    ctx->pc = 0x1D52E8Cu;
    // 0x1d52e8c: 0x0  nop
    ctx->pc = 0x1d52e8cu;
    // NOP
    // 0x1d52e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52e94: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d52e94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d52e98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d52e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d52e9c: 0x25eecbc8  addiu       $t6, $t7, -0x3438
    ctx->pc = 0x1d52e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953928));
    // 0x1d52ea0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d52ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d52ea4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d52ea4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D5CBCCu));
    // 0x1d52ea8: 0x8dedcbc8  lw          $t5, -0x3438($t7)
    ctx->pc = 0x1d52ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D5CBC8u));
    // 0x1d52eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52eb0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d52eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d52eb4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d52eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d52eb8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d52eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d52ebc: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52EBCu;
    SET_GPR_U32(ctx, 31, 0x1D52EC4u);
    ctx->pc = 0x1D52EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52EBCu;
    // 0x1d52ec0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52EBCu, 0x1D52EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52EC4u;
label_1d52ec4:
    // 0x1d52ec4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d52ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d52ec8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ed0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d52ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52ed4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d52ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d52ed8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d52ed8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52edc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d52edcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d52ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ee4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d52ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d52ee8: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D52EE8u;
    SET_GPR_U32(ctx, 31, 0x1D52EF0u);
    ctx->pc = 0x1D52EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52EE8u;
    // 0x1d52eec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D52EE8u, 0x1D52EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52EF0u;
label_1d52ef0:
    // 0x1d52ef0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52ef4: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52EF4u;
    SET_GPR_U32(ctx, 31, 0x1D52EFCu);
    ctx->pc = 0x1D52EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52EF4u;
    // 0x1d52ef8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52EF4u, 0x1D52EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52EFCu;
label_1d52efc:
    // 0x1d52efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d52efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52f00: 0xc7543e6  jal         func_1D50F98
    ctx->pc = 0x1D52F00u;
    SET_GPR_U32(ctx, 31, 0x1D52F08u);
    ctx->pc = 0x1D52F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52F00u;
    // 0x1d52f04: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F98u, 0x1D52F00u, 0x1D52F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52F08u;
label_1d52f08:
    // 0x1d52f08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d52f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52f0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d52f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d52f10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F10u;
        // 0x1d52f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52F18u;
}
