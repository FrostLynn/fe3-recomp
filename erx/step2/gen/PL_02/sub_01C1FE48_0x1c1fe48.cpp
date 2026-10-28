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

// Function: sub_01C1FE48
// Address: 0x1c1fe48 - 0x1c1ff28
void sub_01C1FE48_0x1c1fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FE48_0x1c1fe48");
#endif

    switch (ctx->pc) {
        case 0x1c1fe5cu: goto label_1c1fe5c;
        case 0x1c1fe70u: goto label_1c1fe70;
        case 0x1c1fe74u: goto label_1c1fe74;
        case 0x1c1fe90u: goto label_1c1fe90;
        case 0x1c1fe9cu: goto label_1c1fe9c;
        case 0x1c1feccu: goto label_1c1fecc;
        case 0x1c1fef8u: goto label_1c1fef8;
        case 0x1c1ff04u: goto label_1c1ff04;
        default: break;
    }

    ctx->pc = 0x1c1fe48u;

    // 0x1c1fe48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1fe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1fe4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1fe4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1fe50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1fe54: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C1FE54u;
    SET_GPR_U32(ctx, 31, 0x1C1FE5Cu);
    ctx->pc = 0x1C1FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE54u;
    // 0x1c1fe58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C1FE54u, 0x1C1FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE5Cu;
label_1c1fe5c:
    // 0x1c1fe5c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c1fe5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fe60: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1FE60u;
    {
        const bool branch_taken_0x1c1fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C1FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FE60u;
        // 0x1c1fe64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fe60) {
            ctx->pc = 0x1C1FE84u;
            goto label_1c1fe84;
        }
    }
    ctx->pc = 0x1C1FE68u;
    // 0x1c1fe68: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C1FE68u;
    SET_GPR_U32(ctx, 31, 0x1C1FE70u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C1FE68u, 0x1C1FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE70u;
label_1c1fe70:
    // 0x1c1fe70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c1fe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c1fe74:
    // 0x1c1fe74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fe74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fe78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1fe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1fe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FE7Cu;
        // 0x1c1fe80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FE84u;
label_1c1fe84:
    // 0x1c1fe84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c1fe84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1fe88: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C1FE88u;
    SET_GPR_U32(ctx, 31, 0x1C1FE90u);
    ctx->pc = 0x1C1FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE88u;
    // 0x1c1fe8c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C1FE88u, 0x1C1FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE90u;
label_1c1fe90:
    // 0x1c1fe90: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c1fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c1fe94: 0xc707c68  jal         func_1C1F1A0
    ctx->pc = 0x1C1FE94u;
    SET_GPR_U32(ctx, 31, 0x1C1FE9Cu);
    ctx->pc = 0x1C1FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FE94u;
    // 0x1c1fe98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1A0u, 0x1C1FE94u, 0x1C1FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FE9Cu;
label_1c1fe9c:
    // 0x1c1fe9c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C1FE9Cu;
    {
        const bool branch_taken_0x1c1fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FE9Cu;
        // 0x1c1fea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fe9c) {
            ctx->pc = 0x1C1FE74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1fe74;
        }
    }
    ctx->pc = 0x1C1FEA4u;
    // 0x1c1fea4: 0x0  nop
    ctx->pc = 0x1c1fea4u;
    // NOP
    // 0x1c1fea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1feac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1feacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1feb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1feb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1feb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1feb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1febc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c1febcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fec0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c1fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c1fec4: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C1FEC4u;
    SET_GPR_U32(ctx, 31, 0x1C1FECCu);
    ctx->pc = 0x1C1FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FEC4u;
    // 0x1c1fec8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C1FEC4u, 0x1C1FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FECCu;
label_1c1fecc:
    // 0x1c1fecc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c1feccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c1fed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fed4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fed8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1fed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fedc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c1fedcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c1fee0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1fee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fee4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c1fee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c1fee8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1fee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1feec: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c1feecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c1fef0: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C1FEF0u;
    SET_GPR_U32(ctx, 31, 0x1C1FEF8u);
    ctx->pc = 0x1C1FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FEF0u;
    // 0x1c1fef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C1FEF0u, 0x1C1FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FEF8u;
label_1c1fef8:
    // 0x1c1fef8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c1fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1fefc: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C1FEFCu;
    SET_GPR_U32(ctx, 31, 0x1C1FF04u);
    ctx->pc = 0x1C1FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FEFCu;
    // 0x1c1ff00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C1FEFCu, 0x1C1FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF04u;
label_1c1ff04:
    // 0x1c1ff04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1ff04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ff08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1ff08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1ff0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ff0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ff10: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c1ff10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c1ff14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1ff14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ff18: 0x8707c6a  j           func_1C1F1A8
    ctx->pc = 0x1C1FF18u;
    ctx->pc = 0x1C1FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FF18u;
    // 0x1c1ff1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A8u;
    sub_01C1F1A8_0x1c1f1a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1FF20u;
    // 0x1c1ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FF28u;
}
