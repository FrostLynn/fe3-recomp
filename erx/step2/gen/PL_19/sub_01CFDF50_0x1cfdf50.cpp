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

// Function: sub_01CFDF50
// Address: 0x1cfdf50 - 0x1cfe030
void sub_01CFDF50_0x1cfdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDF50_0x1cfdf50");
#endif

    switch (ctx->pc) {
        case 0x1cfdf64u: goto label_1cfdf64;
        case 0x1cfdf78u: goto label_1cfdf78;
        case 0x1cfdf7cu: goto label_1cfdf7c;
        case 0x1cfdf98u: goto label_1cfdf98;
        case 0x1cfdfa4u: goto label_1cfdfa4;
        case 0x1cfdfd4u: goto label_1cfdfd4;
        case 0x1cfe000u: goto label_1cfe000;
        case 0x1cfe00cu: goto label_1cfe00c;
        default: break;
    }

    ctx->pc = 0x1cfdf50u;

    // 0x1cfdf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfdf54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdf58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfdf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfdf5c: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDF64u);
    ctx->pc = 0x1CFDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF5Cu;
    // 0x1cfdf60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFDF5Cu, 0x1CFDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF64u;
label_1cfdf64:
    // 0x1cfdf64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfdf64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfdf68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFDF68u;
    {
        const bool branch_taken_0x1cfdf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFDF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF68u;
        // 0x1cfdf6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdf68) {
            ctx->pc = 0x1CFDF8Cu;
            goto label_1cfdf8c;
        }
    }
    ctx->pc = 0x1CFDF70u;
    // 0x1cfdf70: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFDF70u;
    SET_GPR_U32(ctx, 31, 0x1CFDF78u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFDF70u, 0x1CFDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF78u;
label_1cfdf78:
    // 0x1cfdf78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfdf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cfdf7c:
    // 0x1cfdf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfdf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfdf80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfdf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfdf84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFDF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDF84u;
        // 0x1cfdf88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFDF8Cu;
label_1cfdf8c:
    // 0x1cfdf8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cfdf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfdf90: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFDF90u;
    SET_GPR_U32(ctx, 31, 0x1CFDF98u);
    ctx->pc = 0x1CFDF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF90u;
    // 0x1cfdf94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFDF90u, 0x1CFDF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF98u;
label_1cfdf98:
    // 0x1cfdf98: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cfdf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cfdf9c: 0xc73f4a8  jal         func_1CFD2A0
    ctx->pc = 0x1CFDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDFA4u);
    ctx->pc = 0x1CFDFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF9Cu;
    // 0x1cfdfa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2A0u, 0x1CFDF9Cu, 0x1CFDFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDFA4u;
label_1cfdfa4:
    // 0x1cfdfa4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFDFA4u;
    {
        const bool branch_taken_0x1cfdfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDFA4u;
        // 0x1cfdfa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdfa4) {
            ctx->pc = 0x1CFDF7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfdf7c;
        }
    }
    ctx->pc = 0x1CFDFACu;
    // 0x1cfdfac: 0x0  nop
    ctx->pc = 0x1cfdfacu;
    // NOP
    // 0x1cfdfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfdfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfdfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdfb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfdfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfdfbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfdfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfdfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfdfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdfc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfdfc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdfc8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfdfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfdfcc: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFDFCCu;
    SET_GPR_U32(ctx, 31, 0x1CFDFD4u);
    ctx->pc = 0x1CFDFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDFCCu;
    // 0x1cfdfd0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFDFCCu, 0x1CFDFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDFD4u;
label_1cfdfd4:
    // 0x1cfdfd4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cfdfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cfdfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfdfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdfdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cfdfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfdfe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfdfe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdfe4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cfdfe4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cfdfe8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cfdfe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfdfec: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cfdfecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cfdff0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cfdff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdff4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cfdff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cfdff8: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFDFF8u;
    SET_GPR_U32(ctx, 31, 0x1CFE000u);
    ctx->pc = 0x1CFDFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDFF8u;
    // 0x1cfdffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFDFF8u, 0x1CFE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE000u;
label_1cfe000:
    // 0x1cfe000: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cfe000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe004: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE004u;
    SET_GPR_U32(ctx, 31, 0x1CFE00Cu);
    ctx->pc = 0x1CFE008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE004u;
    // 0x1cfe008: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE004u, 0x1CFE00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE00Cu;
label_1cfe00c:
    // 0x1cfe00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cfe00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe010: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe018: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cfe018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cfe01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfe01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe020: 0x873f4aa  j           func_1CFD2A8
    ctx->pc = 0x1CFE020u;
    ctx->pc = 0x1CFE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE020u;
    // 0x1cfe024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A8u;
    sub_01CFD2A8_0x1cfd2a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFE028u;
    // 0x1cfe028: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE030u;
}
