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

// Function: sub_01CDAF28
// Address: 0x1cdaf28 - 0x1cdb008
void sub_01CDAF28_0x1cdaf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAF28_0x1cdaf28");
#endif

    switch (ctx->pc) {
        case 0x1cdaf3cu: goto label_1cdaf3c;
        case 0x1cdaf50u: goto label_1cdaf50;
        case 0x1cdaf54u: goto label_1cdaf54;
        case 0x1cdaf70u: goto label_1cdaf70;
        case 0x1cdaf7cu: goto label_1cdaf7c;
        case 0x1cdafacu: goto label_1cdafac;
        case 0x1cdafd8u: goto label_1cdafd8;
        case 0x1cdafe4u: goto label_1cdafe4;
        default: break;
    }

    ctx->pc = 0x1cdaf28u;

    // 0x1cdaf28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdaf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdaf2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdaf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdaf30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdaf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdaf34: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDAF34u;
    SET_GPR_U32(ctx, 31, 0x1CDAF3Cu);
    ctx->pc = 0x1CDAF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF34u;
    // 0x1cdaf38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDAF34u, 0x1CDAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAF3Cu;
label_1cdaf3c:
    // 0x1cdaf3c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdaf3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdaf40: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDAF40u;
    {
        const bool branch_taken_0x1cdaf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDAF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF40u;
        // 0x1cdaf44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf40) {
            ctx->pc = 0x1CDAF64u;
            goto label_1cdaf64;
        }
    }
    ctx->pc = 0x1CDAF48u;
    // 0x1cdaf48: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDAF48u;
    SET_GPR_U32(ctx, 31, 0x1CDAF50u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDAF48u, 0x1CDAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAF50u;
label_1cdaf50:
    // 0x1cdaf50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdaf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdaf54:
    // 0x1cdaf54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdaf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaf58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdaf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdaf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF5Cu;
        // 0x1cdaf60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAF64u;
label_1cdaf64:
    // 0x1cdaf64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdaf64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdaf68: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDAF68u;
    SET_GPR_U32(ctx, 31, 0x1CDAF70u);
    ctx->pc = 0x1CDAF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF68u;
    // 0x1cdaf6c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDAF68u, 0x1CDAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAF70u;
label_1cdaf70:
    // 0x1cdaf70: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cdaf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cdaf74: 0xc7368a4  jal         func_1CDA290
    ctx->pc = 0x1CDAF74u;
    SET_GPR_U32(ctx, 31, 0x1CDAF7Cu);
    ctx->pc = 0x1CDAF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF74u;
    // 0x1cdaf78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA290u, 0x1CDAF74u, 0x1CDAF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAF7Cu;
label_1cdaf7c:
    // 0x1cdaf7c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CDAF7Cu;
    {
        const bool branch_taken_0x1cdaf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAF7Cu;
        // 0x1cdaf80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaf7c) {
            ctx->pc = 0x1CDAF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdaf54;
        }
    }
    ctx->pc = 0x1CDAF84u;
    // 0x1cdaf84: 0x0  nop
    ctx->pc = 0x1cdaf84u;
    // NOP
    // 0x1cdaf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdaf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdaf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdaf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdaf90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdaf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdaf94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdaf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdaf98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdaf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaf9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdaf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdafa0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdafa4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDAFA4u;
    SET_GPR_U32(ctx, 31, 0x1CDAFACu);
    ctx->pc = 0x1CDAFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAFA4u;
    // 0x1cdafa8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDAFA4u, 0x1CDAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAFACu;
label_1cdafac:
    // 0x1cdafac: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cdafacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cdafb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdafb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdafb4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdafb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdafb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdafbc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cdafbcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cdafc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdafc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdafc4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cdafc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cdafc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdafc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdafcc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cdafccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdafd0: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDAFD0u;
    SET_GPR_U32(ctx, 31, 0x1CDAFD8u);
    ctx->pc = 0x1CDAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAFD0u;
    // 0x1cdafd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDAFD0u, 0x1CDAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAFD8u;
label_1cdafd8:
    // 0x1cdafd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdafdc: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDAFDCu;
    SET_GPR_U32(ctx, 31, 0x1CDAFE4u);
    ctx->pc = 0x1CDAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAFDCu;
    // 0x1cdafe0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDAFDCu, 0x1CDAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAFE4u;
label_1cdafe4:
    // 0x1cdafe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdafe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdafe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdafe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdafec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdafecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaff0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cdaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cdaff4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdaff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdaff8: 0x87368a6  j           func_1CDA298
    ctx->pc = 0x1CDAFF8u;
    ctx->pc = 0x1CDAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAFF8u;
    // 0x1cdaffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA298u;
    sub_01CDA298_0x1cda298(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDB000u;
    // 0x1cdb000: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB008u;
}
