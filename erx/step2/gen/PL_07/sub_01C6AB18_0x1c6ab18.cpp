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

// Function: sub_01C6AB18
// Address: 0x1c6ab18 - 0x1c6abf8
void sub_01C6AB18_0x1c6ab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6AB18_0x1c6ab18");
#endif

    switch (ctx->pc) {
        case 0x1c6ab2cu: goto label_1c6ab2c;
        case 0x1c6ab40u: goto label_1c6ab40;
        case 0x1c6ab44u: goto label_1c6ab44;
        case 0x1c6ab60u: goto label_1c6ab60;
        case 0x1c6ab6cu: goto label_1c6ab6c;
        case 0x1c6ab9cu: goto label_1c6ab9c;
        case 0x1c6abc8u: goto label_1c6abc8;
        case 0x1c6abd4u: goto label_1c6abd4;
        default: break;
    }

    ctx->pc = 0x1c6ab18u;

    // 0x1c6ab18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6ab1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ab20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6ab24: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6AB24u;
    SET_GPR_U32(ctx, 31, 0x1C6AB2Cu);
    ctx->pc = 0x1C6AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AB24u;
    // 0x1c6ab28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6AB24u, 0x1C6AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB2Cu;
label_1c6ab2c:
    // 0x1c6ab2c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6ab2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ab30: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AB30u;
    {
        const bool branch_taken_0x1c6ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AB30u;
        // 0x1c6ab34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ab30) {
            ctx->pc = 0x1C6AB54u;
            goto label_1c6ab54;
        }
    }
    ctx->pc = 0x1C6AB38u;
    // 0x1c6ab38: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6AB38u;
    SET_GPR_U32(ctx, 31, 0x1C6AB40u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6AB38u, 0x1C6AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB40u;
label_1c6ab40:
    // 0x1c6ab40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6ab44:
    // 0x1c6ab44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6ab44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ab48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AB4Cu;
        // 0x1c6ab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AB54u;
label_1c6ab54:
    // 0x1c6ab54: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6ab58: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AB58u;
    SET_GPR_U32(ctx, 31, 0x1C6AB60u);
    ctx->pc = 0x1C6AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AB58u;
    // 0x1c6ab5c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AB58u, 0x1C6AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB60u;
label_1c6ab60:
    // 0x1c6ab60: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c6ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c6ab64: 0xc71a7a6  jal         func_1C69E98
    ctx->pc = 0x1C6AB64u;
    SET_GPR_U32(ctx, 31, 0x1C6AB6Cu);
    ctx->pc = 0x1C6AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AB64u;
    // 0x1c6ab68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E98u, 0x1C6AB64u, 0x1C6AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB6Cu;
label_1c6ab6c:
    // 0x1c6ab6c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C6AB6Cu;
    {
        const bool branch_taken_0x1c6ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AB6Cu;
        // 0x1c6ab70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ab6c) {
            ctx->pc = 0x1C6AB44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ab44;
        }
    }
    ctx->pc = 0x1C6AB74u;
    // 0x1c6ab74: 0x0  nop
    ctx->pc = 0x1c6ab74u;
    // NOP
    // 0x1c6ab78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6ab7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ab80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6ab84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6ab88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6ab88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6ab8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ab90: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6ab94: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AB94u;
    SET_GPR_U32(ctx, 31, 0x1C6AB9Cu);
    ctx->pc = 0x1C6AB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AB94u;
    // 0x1c6ab98: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AB94u, 0x1C6AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AB9Cu;
label_1c6ab9c:
    // 0x1c6ab9c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c6ab9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c6aba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aba4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6aba8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6aba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6abac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6abacu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6abb0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6abb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6abb4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c6abb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c6abb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6abb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6abbc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6abbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6abc0: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6ABC0u;
    SET_GPR_U32(ctx, 31, 0x1C6ABC8u);
    ctx->pc = 0x1C6ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ABC0u;
    // 0x1c6abc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6ABC0u, 0x1C6ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ABC8u;
label_1c6abc8:
    // 0x1c6abc8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6abcc: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6ABCCu;
    SET_GPR_U32(ctx, 31, 0x1C6ABD4u);
    ctx->pc = 0x1C6ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ABCCu;
    // 0x1c6abd0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6ABCCu, 0x1C6ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6ABD4u;
label_1c6abd4:
    // 0x1c6abd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6abd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6abd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6abd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6abdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6abdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6abe0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c6abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c6abe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6abe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6abe8: 0x871a7a8  j           func_1C69EA0
    ctx->pc = 0x1C6ABE8u;
    ctx->pc = 0x1C6ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6ABE8u;
    // 0x1c6abec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EA0u;
    sub_01C69EA0_0x1c69ea0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6ABF0u;
    // 0x1c6abf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6ABF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6ABF8u;
}
