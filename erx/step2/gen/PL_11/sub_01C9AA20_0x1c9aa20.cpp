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

// Function: sub_01C9AA20
// Address: 0x1c9aa20 - 0x1c9ab08
void sub_01C9AA20_0x1c9aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AA20_0x1c9aa20");
#endif

    switch (ctx->pc) {
        case 0x1c9aa34u: goto label_1c9aa34;
        case 0x1c9aa48u: goto label_1c9aa48;
        case 0x1c9aa4cu: goto label_1c9aa4c;
        case 0x1c9aa68u: goto label_1c9aa68;
        case 0x1c9aa74u: goto label_1c9aa74;
        case 0x1c9aab4u: goto label_1c9aab4;
        case 0x1c9aae0u: goto label_1c9aae0;
        case 0x1c9aaecu: goto label_1c9aaec;
        case 0x1c9aaf8u: goto label_1c9aaf8;
        default: break;
    }

    ctx->pc = 0x1c9aa20u;

    // 0x1c9aa20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9aa24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9aa28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9aa2c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9AA2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AA34u);
    ctx->pc = 0x1C9AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AA2Cu;
    // 0x1c9aa30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9AA2Cu, 0x1C9AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AA34u;
label_1c9aa34:
    // 0x1c9aa34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9aa34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aa38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9AA38u;
    {
        const bool branch_taken_0x1c9aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA38u;
        // 0x1c9aa3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aa38) {
            ctx->pc = 0x1C9AA5Cu;
            goto label_1c9aa5c;
        }
    }
    ctx->pc = 0x1C9AA40u;
    // 0x1c9aa40: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9AA40u;
    SET_GPR_U32(ctx, 31, 0x1C9AA48u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9AA40u, 0x1C9AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AA48u;
label_1c9aa48:
    // 0x1c9aa48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9aa4c:
    // 0x1c9aa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9aa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9aa50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9aa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9aa54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA54u;
        // 0x1c9aa58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AA5Cu;
label_1c9aa5c:
    // 0x1c9aa5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9aa60: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AA60u;
    SET_GPR_U32(ctx, 31, 0x1C9AA68u);
    ctx->pc = 0x1C9AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AA60u;
    // 0x1c9aa64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AA60u, 0x1C9AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AA68u;
label_1c9aa68:
    // 0x1c9aa68: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c9aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c9aa6c: 0xc7262e4  jal         func_1C98B90
    ctx->pc = 0x1C9AA6Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AA74u);
    ctx->pc = 0x1C9AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AA6Cu;
    // 0x1c9aa70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B90u, 0x1C9AA6Cu, 0x1C9AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AA74u;
label_1c9aa74:
    // 0x1c9aa74: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C9AA74u;
    {
        const bool branch_taken_0x1c9aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AA74u;
        // 0x1c9aa78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aa74) {
            ctx->pc = 0x1C9AA4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9aa4c;
        }
    }
    ctx->pc = 0x1C9AA7Cu;
    // 0x1c9aa7c: 0x0  nop
    ctx->pc = 0x1c9aa7cu;
    // NOP
    // 0x1c9aa80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9aa84: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c9aa84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c9aa88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c9aa8c: 0x25ee2670  addiu       $t6, $t7, 0x2670
    ctx->pc = 0x1c9aa8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9840));
    // 0x1c9aa90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c9aa94: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c9aa94u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CA2674u));
    // 0x1c9aa98: 0x8ded2670  lw          $t5, 0x2670($t7)
    ctx->pc = 0x1c9aa98u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CA2670u));
    // 0x1c9aa9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9aa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aaa0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c9aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c9aaa4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c9aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c9aaa8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c9aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c9aaac: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AAACu;
    SET_GPR_U32(ctx, 31, 0x1C9AAB4u);
    ctx->pc = 0x1C9AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AAACu;
    // 0x1c9aab0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AAACu, 0x1C9AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AAB4u;
label_1c9aab4:
    // 0x1c9aab4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c9aab4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c9aab8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9aab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9aabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aac0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9aac4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c9aac4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c9aac8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9aac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aacc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c9aaccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c9aad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aad4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c9aad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9aad8: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9AAD8u;
    SET_GPR_U32(ctx, 31, 0x1C9AAE0u);
    ctx->pc = 0x1C9AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AAD8u;
    // 0x1c9aadc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9AAD8u, 0x1C9AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AAE0u;
label_1c9aae0:
    // 0x1c9aae0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9aae4: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AAE4u;
    SET_GPR_U32(ctx, 31, 0x1C9AAECu);
    ctx->pc = 0x1C9AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AAE4u;
    // 0x1c9aae8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AAE4u, 0x1C9AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AAECu;
label_1c9aaec:
    // 0x1c9aaec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9aaf0: 0xc7262e6  jal         func_1C98B98
    ctx->pc = 0x1C9AAF0u;
    SET_GPR_U32(ctx, 31, 0x1C9AAF8u);
    ctx->pc = 0x1C9AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AAF0u;
    // 0x1c9aaf4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B98u, 0x1C9AAF0u, 0x1C9AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AAF8u;
label_1c9aaf8:
    // 0x1c9aaf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9aaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9aafc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9ab00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB00u;
        // 0x1c9ab04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AB08u;
}
