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

// Function: sub_01C9AB10
// Address: 0x1c9ab10 - 0x1c9abf8
void sub_01C9AB10_0x1c9ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AB10_0x1c9ab10");
#endif

    switch (ctx->pc) {
        case 0x1c9ab24u: goto label_1c9ab24;
        case 0x1c9ab38u: goto label_1c9ab38;
        case 0x1c9ab3cu: goto label_1c9ab3c;
        case 0x1c9ab58u: goto label_1c9ab58;
        case 0x1c9ab64u: goto label_1c9ab64;
        case 0x1c9aba4u: goto label_1c9aba4;
        case 0x1c9abd0u: goto label_1c9abd0;
        case 0x1c9abdcu: goto label_1c9abdc;
        case 0x1c9abe8u: goto label_1c9abe8;
        default: break;
    }

    ctx->pc = 0x1c9ab10u;

    // 0x1c9ab10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9ab14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9ab18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9ab1c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9AB1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AB24u);
    ctx->pc = 0x1C9AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB1Cu;
    // 0x1c9ab20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9AB1Cu, 0x1C9AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB24u;
label_1c9ab24:
    // 0x1c9ab24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9ab24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9ab28: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9AB28u;
    {
        const bool branch_taken_0x1c9ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB28u;
        // 0x1c9ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab28) {
            ctx->pc = 0x1C9AB4Cu;
            goto label_1c9ab4c;
        }
    }
    ctx->pc = 0x1C9AB30u;
    // 0x1c9ab30: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9AB30u;
    SET_GPR_U32(ctx, 31, 0x1C9AB38u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9AB30u, 0x1C9AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB38u;
label_1c9ab38:
    // 0x1c9ab38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9ab3c:
    // 0x1c9ab3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9ab3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9ab40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9ab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9ab44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB44u;
        // 0x1c9ab48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AB4Cu;
label_1c9ab4c:
    // 0x1c9ab4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9ab50: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AB50u;
    SET_GPR_U32(ctx, 31, 0x1C9AB58u);
    ctx->pc = 0x1C9AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB50u;
    // 0x1c9ab54: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AB50u, 0x1C9AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB58u;
label_1c9ab58:
    // 0x1c9ab58: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c9ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c9ab5c: 0xc7262e4  jal         func_1C98B90
    ctx->pc = 0x1C9AB5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AB64u);
    ctx->pc = 0x1C9AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB5Cu;
    // 0x1c9ab60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B90u, 0x1C9AB5Cu, 0x1C9AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AB64u;
label_1c9ab64:
    // 0x1c9ab64: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C9AB64u;
    {
        const bool branch_taken_0x1c9ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AB64u;
        // 0x1c9ab68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ab64) {
            ctx->pc = 0x1C9AB3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9ab3c;
        }
    }
    ctx->pc = 0x1C9AB6Cu;
    // 0x1c9ab6c: 0x0  nop
    ctx->pc = 0x1c9ab6cu;
    // NOP
    // 0x1c9ab70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9ab74: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c9ab74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c9ab78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c9ab7c: 0x25ee2678  addiu       $t6, $t7, 0x2678
    ctx->pc = 0x1c9ab7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9848));
    // 0x1c9ab80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c9ab84: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c9ab84u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CA267Cu));
    // 0x1c9ab88: 0x8ded2678  lw          $t5, 0x2678($t7)
    ctx->pc = 0x1c9ab88u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CA2678u));
    // 0x1c9ab8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ab90: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c9ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c9ab94: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c9ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c9ab98: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c9ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c9ab9c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AB9Cu;
    SET_GPR_U32(ctx, 31, 0x1C9ABA4u);
    ctx->pc = 0x1C9ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AB9Cu;
    // 0x1c9aba0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AB9Cu, 0x1C9ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ABA4u;
label_1c9aba4:
    // 0x1c9aba4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c9aba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c9aba8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9aba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9abac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9abacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9abb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9abb4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c9abb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c9abb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9abb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abbc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c9abbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c9abc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9abc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abc4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c9abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9abc8: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9ABC8u;
    SET_GPR_U32(ctx, 31, 0x1C9ABD0u);
    ctx->pc = 0x1C9ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ABC8u;
    // 0x1c9abcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9ABC8u, 0x1C9ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ABD0u;
label_1c9abd0:
    // 0x1c9abd0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9abd4: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9ABD4u;
    SET_GPR_U32(ctx, 31, 0x1C9ABDCu);
    ctx->pc = 0x1C9ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ABD4u;
    // 0x1c9abd8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9ABD4u, 0x1C9ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ABDCu;
label_1c9abdc:
    // 0x1c9abdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9abdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9abe0: 0xc7262e6  jal         func_1C98B98
    ctx->pc = 0x1C9ABE0u;
    SET_GPR_U32(ctx, 31, 0x1C9ABE8u);
    ctx->pc = 0x1C9ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ABE0u;
    // 0x1c9abe4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B98u, 0x1C9ABE0u, 0x1C9ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ABE8u;
label_1c9abe8:
    // 0x1c9abe8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9abe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9abec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9abecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ABF0u;
        // 0x1c9abf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9ABF8u;
}
