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

// Function: sub_01C8EF30
// Address: 0x1c8ef30 - 0x1c8f018
void sub_01C8EF30_0x1c8ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EF30_0x1c8ef30");
#endif

    switch (ctx->pc) {
        case 0x1c8ef44u: goto label_1c8ef44;
        case 0x1c8ef58u: goto label_1c8ef58;
        case 0x1c8ef5cu: goto label_1c8ef5c;
        case 0x1c8ef78u: goto label_1c8ef78;
        case 0x1c8ef84u: goto label_1c8ef84;
        case 0x1c8efc4u: goto label_1c8efc4;
        case 0x1c8eff0u: goto label_1c8eff0;
        case 0x1c8effcu: goto label_1c8effc;
        case 0x1c8f008u: goto label_1c8f008;
        default: break;
    }

    ctx->pc = 0x1c8ef30u;

    // 0x1c8ef30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ef34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ef38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8ef38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8ef3c: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8EF3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EF44u);
    ctx->pc = 0x1C8EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF3Cu;
    // 0x1c8ef40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8EF3Cu, 0x1C8EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF44u;
label_1c8ef44:
    // 0x1c8ef44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8ef44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ef48: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8EF48u;
    {
        const bool branch_taken_0x1c8ef48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF48u;
        // 0x1c8ef4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ef48) {
            ctx->pc = 0x1C8EF6Cu;
            goto label_1c8ef6c;
        }
    }
    ctx->pc = 0x1C8EF50u;
    // 0x1c8ef50: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8EF50u;
    SET_GPR_U32(ctx, 31, 0x1C8EF58u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8EF50u, 0x1C8EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF58u;
label_1c8ef58:
    // 0x1c8ef58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8ef5c:
    // 0x1c8ef5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ef5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ef60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8ef60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ef64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF64u;
        // 0x1c8ef68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EF6Cu;
label_1c8ef6c:
    // 0x1c8ef6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ef70: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EF70u;
    SET_GPR_U32(ctx, 31, 0x1C8EF78u);
    ctx->pc = 0x1C8EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF70u;
    // 0x1c8ef74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EF70u, 0x1C8EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF78u;
label_1c8ef78:
    // 0x1c8ef78: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c8ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c8ef7c: 0xc7233e4  jal         func_1C8CF90
    ctx->pc = 0x1C8EF7Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EF84u);
    ctx->pc = 0x1C8EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF7Cu;
    // 0x1c8ef80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF90u, 0x1C8EF7Cu, 0x1C8EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF84u;
label_1c8ef84:
    // 0x1c8ef84: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C8EF84u;
    {
        const bool branch_taken_0x1c8ef84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF84u;
        // 0x1c8ef88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ef84) {
            ctx->pc = 0x1C8EF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ef5c;
        }
    }
    ctx->pc = 0x1C8EF8Cu;
    // 0x1c8ef8c: 0x0  nop
    ctx->pc = 0x1c8ef8cu;
    // NOP
    // 0x1c8ef90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8ef94: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c8ef94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c8ef98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c8ef9c: 0x25ee89d0  addiu       $t6, $t7, -0x7630
    ctx->pc = 0x1c8ef9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937040));
    // 0x1c8efa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c8efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8efa4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c8efa4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C989D4u));
    // 0x1c8efa8: 0x8ded89d0  lw          $t5, -0x7630($t7)
    ctx->pc = 0x1c8efa8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C989D0u));
    // 0x1c8efac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8efacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8efb0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c8efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c8efb4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c8efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c8efb8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c8efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8efbc: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EFBCu;
    SET_GPR_U32(ctx, 31, 0x1C8EFC4u);
    ctx->pc = 0x1C8EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EFBCu;
    // 0x1c8efc0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EFBCu, 0x1C8EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EFC4u;
label_1c8efc4:
    // 0x1c8efc4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c8efc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c8efc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8efc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8efcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8efccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8efd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8efd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8efd4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8efd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8efd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8efd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8efdc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c8efdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c8efe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8efe4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8efe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8efe8: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8EFE8u;
    SET_GPR_U32(ctx, 31, 0x1C8EFF0u);
    ctx->pc = 0x1C8EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EFE8u;
    // 0x1c8efec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8EFE8u, 0x1C8EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EFF0u;
label_1c8eff0:
    // 0x1c8eff0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8eff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8eff4: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EFF4u;
    SET_GPR_U32(ctx, 31, 0x1C8EFFCu);
    ctx->pc = 0x1C8EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EFF4u;
    // 0x1c8eff8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EFF4u, 0x1C8EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EFFCu;
label_1c8effc:
    // 0x1c8effc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8effcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f000: 0xc7233e6  jal         func_1C8CF98
    ctx->pc = 0x1C8F000u;
    SET_GPR_U32(ctx, 31, 0x1C8F008u);
    ctx->pc = 0x1C8F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F000u;
    // 0x1c8f004: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF98u, 0x1C8F000u, 0x1C8F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F008u;
label_1c8f008:
    // 0x1c8f008: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8f008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f00c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8f00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8f010: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F010u;
        // 0x1c8f014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F018u;
}
