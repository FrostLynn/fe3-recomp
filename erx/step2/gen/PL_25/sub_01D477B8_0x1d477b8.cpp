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

// Function: sub_01D477B8
// Address: 0x1d477b8 - 0x1d47880
void sub_01D477B8_0x1d477b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D477B8_0x1d477b8");
#endif

    switch (ctx->pc) {
        case 0x1d477ccu: goto label_1d477cc;
        case 0x1d477e0u: goto label_1d477e0;
        case 0x1d477e4u: goto label_1d477e4;
        case 0x1d4781cu: goto label_1d4781c;
        case 0x1d47858u: goto label_1d47858;
        case 0x1d47864u: goto label_1d47864;
        default: break;
    }

    ctx->pc = 0x1d477b8u;

    // 0x1d477b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d477b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d477bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d477bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d477c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d477c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d477c4: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D477C4u;
    SET_GPR_U32(ctx, 31, 0x1D477CCu);
    ctx->pc = 0x1D477C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D477C4u;
    // 0x1d477c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D477C4u, 0x1D477CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D477CCu;
label_1d477cc:
    // 0x1d477cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d477ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d477d0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D477D0u;
    {
        const bool branch_taken_0x1d477d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D477D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D477D0u;
        // 0x1d477d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d477d0) {
            ctx->pc = 0x1D477F4u;
            goto label_1d477f4;
        }
    }
    ctx->pc = 0x1D477D8u;
    // 0x1d477d8: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D477D8u;
    SET_GPR_U32(ctx, 31, 0x1D477E0u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D477D8u, 0x1D477E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D477E0u;
label_1d477e0:
    // 0x1d477e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d477e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d477e4:
    // 0x1d477e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d477e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d477e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d477e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d477ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D477ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D477F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D477ECu;
        // 0x1d477f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D477ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D477F4u;
label_1d477f4:
    // 0x1d477f4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D477F4u;
    {
        const bool branch_taken_0x1d477f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D477F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D477F4u;
        // 0x1d477f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d477f4) {
            ctx->pc = 0x1D477E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d477e4;
        }
    }
    ctx->pc = 0x1D477FCu;
    // 0x1d477fc: 0x0  nop
    ctx->pc = 0x1d477fcu;
    // NOP
    // 0x1d47800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4780c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4780cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47810: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d47810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47814: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47814u;
    SET_GPR_U32(ctx, 31, 0x1D4781Cu);
    ctx->pc = 0x1D47818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47814u;
    // 0x1d47818: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47814u, 0x1D4781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4781Cu;
label_1d4781c:
    // 0x1d4781c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d4781cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d47820: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d47820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d47824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4782c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1d4782cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d47830: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d47830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47834: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d47834u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4783c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1d4783cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d47840: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d47840u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d47844: 0x91cf0ee6  lbu         $t7, 0xEE6($t6)
    ctx->pc = 0x1d47844u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3814)));
    // 0x1d47848: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D47848u;
    {
        const bool branch_taken_0x1d47848 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47848u;
        // 0x1d4784c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47848) {
            ctx->pc = 0x1D4785Cu;
            goto label_1d4785c;
        }
    }
    ctx->pc = 0x1D47850u;
    // 0x1d47850: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47850u;
    SET_GPR_U32(ctx, 31, 0x1D47858u);
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47850u, 0x1D47858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47858u;
label_1d47858:
    // 0x1d47858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4785c:
    // 0x1d4785c: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D4785Cu;
    SET_GPR_U32(ctx, 31, 0x1D47864u);
    ctx->pc = 0x1D47860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4785Cu;
    // 0x1d47860: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D4785Cu, 0x1D47864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47864u;
label_1d47864:
    // 0x1d47864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47868: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d4786c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4786cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47878: 0x8751750  j           func_1D45D40
    ctx->pc = 0x1D47878u;
    ctx->pc = 0x1D4787Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47878u;
    // 0x1d4787c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    sub_01D45D40_0x1d45d40(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47880u;
}
