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

// Function: sub_01C779A8
// Address: 0x1c779a8 - 0x1c77a90
void sub_01C779A8_0x1c779a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C779A8_0x1c779a8");
#endif

    switch (ctx->pc) {
        case 0x1c779bcu: goto label_1c779bc;
        case 0x1c779d0u: goto label_1c779d0;
        case 0x1c779d4u: goto label_1c779d4;
        case 0x1c779f0u: goto label_1c779f0;
        case 0x1c779fcu: goto label_1c779fc;
        case 0x1c77a3cu: goto label_1c77a3c;
        case 0x1c77a68u: goto label_1c77a68;
        case 0x1c77a74u: goto label_1c77a74;
        case 0x1c77a80u: goto label_1c77a80;
        default: break;
    }

    ctx->pc = 0x1c779a8u;

    // 0x1c779a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c779a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c779ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c779acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c779b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c779b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c779b4: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C779B4u;
    SET_GPR_U32(ctx, 31, 0x1C779BCu);
    ctx->pc = 0x1C779B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C779B4u;
    // 0x1c779b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C779B4u, 0x1C779BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C779BCu;
label_1c779bc:
    // 0x1c779bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c779bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c779c0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C779C0u;
    {
        const bool branch_taken_0x1c779c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C779C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C779C0u;
        // 0x1c779c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c779c0) {
            ctx->pc = 0x1C779E4u;
            goto label_1c779e4;
        }
    }
    ctx->pc = 0x1C779C8u;
    // 0x1c779c8: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C779C8u;
    SET_GPR_U32(ctx, 31, 0x1C779D0u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C779C8u, 0x1C779D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C779D0u;
label_1c779d0:
    // 0x1c779d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c779d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c779d4:
    // 0x1c779d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c779d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c779d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c779d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c779dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C779DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C779E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C779DCu;
        // 0x1c779e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C779DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C779E4u;
label_1c779e4:
    // 0x1c779e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c779e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c779e8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C779E8u;
    SET_GPR_U32(ctx, 31, 0x1C779F0u);
    ctx->pc = 0x1C779ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C779E8u;
    // 0x1c779ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C779E8u, 0x1C779F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C779F0u;
label_1c779f0:
    // 0x1c779f0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c779f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c779f4: 0xc71d664  jal         func_1C75990
    ctx->pc = 0x1C779F4u;
    SET_GPR_U32(ctx, 31, 0x1C779FCu);
    ctx->pc = 0x1C779F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C779F4u;
    // 0x1c779f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75990u, 0x1C779F4u, 0x1C779FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C779FCu;
label_1c779fc:
    // 0x1c779fc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C779FCu;
    {
        const bool branch_taken_0x1c779fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C779FCu;
        // 0x1c77a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c779fc) {
            ctx->pc = 0x1C779D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c779d4;
        }
    }
    ctx->pc = 0x1C77A04u;
    // 0x1c77a04: 0x0  nop
    ctx->pc = 0x1c77a04u;
    // NOP
    // 0x1c77a08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77a0c: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c77a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c77a14: 0x25ee0dd0  addiu       $t6, $t7, 0xDD0
    ctx->pc = 0x1c77a14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3536));
    // 0x1c77a18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c77a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c77a1c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c77a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C80DD4u));
    // 0x1c77a20: 0x8ded0dd0  lw          $t5, 0xDD0($t7)
    ctx->pc = 0x1c77a20u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C80DD0u));
    // 0x1c77a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a28: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c77a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c77a2c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c77a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c77a30: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c77a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c77a34: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77A34u;
    SET_GPR_U32(ctx, 31, 0x1C77A3Cu);
    ctx->pc = 0x1C77A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77A34u;
    // 0x1c77a38: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77A34u, 0x1C77A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A3Cu;
label_1c77a3c:
    // 0x1c77a3c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c77a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c77a40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c77a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77a4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c77a4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c77a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a54: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c77a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c77a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a5c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c77a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c77a60: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77A60u;
    SET_GPR_U32(ctx, 31, 0x1C77A68u);
    ctx->pc = 0x1C77A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77A60u;
    // 0x1c77a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77A60u, 0x1C77A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A68u;
label_1c77a68:
    // 0x1c77a68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c77a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c77a6c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C77A74u);
    ctx->pc = 0x1C77A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77A6Cu;
    // 0x1c77a70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77A6Cu, 0x1C77A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A74u;
label_1c77a74:
    // 0x1c77a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c77a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77a78: 0xc71d666  jal         func_1C75998
    ctx->pc = 0x1C77A78u;
    SET_GPR_U32(ctx, 31, 0x1C77A80u);
    ctx->pc = 0x1C77A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77A78u;
    // 0x1c77a7c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75998u, 0x1C77A78u, 0x1C77A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77A80u;
label_1c77a80:
    // 0x1c77a80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c77a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77a84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c77a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c77a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77A88u;
        // 0x1c77a8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77A90u;
}
