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

// Function: sub_01D71078
// Address: 0x1d71078 - 0x1d71160
void sub_01D71078_0x1d71078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71078_0x1d71078");
#endif

    switch (ctx->pc) {
        case 0x1d7108cu: goto label_1d7108c;
        case 0x1d710a0u: goto label_1d710a0;
        case 0x1d710a4u: goto label_1d710a4;
        case 0x1d710c0u: goto label_1d710c0;
        case 0x1d710ccu: goto label_1d710cc;
        case 0x1d7110cu: goto label_1d7110c;
        case 0x1d71138u: goto label_1d71138;
        case 0x1d71144u: goto label_1d71144;
        case 0x1d71150u: goto label_1d71150;
        default: break;
    }

    ctx->pc = 0x1d71078u;

    // 0x1d71078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7107c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71080: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d71080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d71084: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D71084u;
    SET_GPR_U32(ctx, 31, 0x1D7108Cu);
    ctx->pc = 0x1D71088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71084u;
    // 0x1d71088: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D71084u, 0x1D7108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7108Cu;
label_1d7108c:
    // 0x1d7108c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7108cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71090: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D71090u;
    {
        const bool branch_taken_0x1d71090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D71094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71090u;
        // 0x1d71094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71090) {
            ctx->pc = 0x1D710B4u;
            goto label_1d710b4;
        }
    }
    ctx->pc = 0x1D71098u;
    // 0x1d71098: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D71098u;
    SET_GPR_U32(ctx, 31, 0x1D710A0u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D71098u, 0x1D710A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D710A0u;
label_1d710a0:
    // 0x1d710a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d710a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d710a4:
    // 0x1d710a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d710a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d710a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d710a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d710ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D710ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D710B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D710ACu;
        // 0x1d710b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D710ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D710B4u;
label_1d710b4:
    // 0x1d710b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d710b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d710b8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D710B8u;
    SET_GPR_U32(ctx, 31, 0x1D710C0u);
    ctx->pc = 0x1D710BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D710B8u;
    // 0x1d710bc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D710B8u, 0x1D710C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D710C0u;
label_1d710c0:
    // 0x1d710c0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d710c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d710c4: 0xc75c01a  jal         func_1D70068
    ctx->pc = 0x1D710C4u;
    SET_GPR_U32(ctx, 31, 0x1D710CCu);
    ctx->pc = 0x1D710C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D710C4u;
    // 0x1d710c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70068u, 0x1D710C4u, 0x1D710CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D710CCu;
label_1d710cc:
    // 0x1d710cc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D710CCu;
    {
        const bool branch_taken_0x1d710cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D710D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D710CCu;
        // 0x1d710d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d710cc) {
            ctx->pc = 0x1D710A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d710a4;
        }
    }
    ctx->pc = 0x1D710D4u;
    // 0x1d710d4: 0x0  nop
    ctx->pc = 0x1d710d4u;
    // NOP
    // 0x1d710d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d710d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d710dc: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d710dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d710e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d710e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d710e4: 0x25ee7ac0  addiu       $t6, $t7, 0x7AC0
    ctx->pc = 0x1d710e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 31424));
    // 0x1d710e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d710e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d710ec: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d710ecu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D77AC4u));
    // 0x1d710f0: 0x8ded7ac0  lw          $t5, 0x7AC0($t7)
    ctx->pc = 0x1d710f0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D77AC0u));
    // 0x1d710f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d710f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d710f8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d710f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d710fc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d710fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d71100: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d71100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d71104: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71104u;
    SET_GPR_U32(ctx, 31, 0x1D7110Cu);
    ctx->pc = 0x1D71108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71104u;
    // 0x1d71108: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71104u, 0x1D7110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7110Cu;
label_1d7110c:
    // 0x1d7110c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d7110cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d71110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d71110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71118: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d71118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7111c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7111cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d71120: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d71120u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71124: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d71124u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d71128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7112c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7112cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71130: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71130u;
    SET_GPR_U32(ctx, 31, 0x1D71138u);
    ctx->pc = 0x1D71134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71130u;
    // 0x1d71134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71130u, 0x1D71138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71138u;
label_1d71138:
    // 0x1d71138: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d71138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7113c: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D7113Cu;
    SET_GPR_U32(ctx, 31, 0x1D71144u);
    ctx->pc = 0x1D71140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7113Cu;
    // 0x1d71140: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D7113Cu, 0x1D71144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71144u;
label_1d71144:
    // 0x1d71144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d71144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71148: 0xc75c01c  jal         func_1D70070
    ctx->pc = 0x1D71148u;
    SET_GPR_U32(ctx, 31, 0x1D71150u);
    ctx->pc = 0x1D7114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71148u;
    // 0x1d7114c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70070u, 0x1D71148u, 0x1D71150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71150u;
label_1d71150:
    // 0x1d71150: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d71150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71154: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d71154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d71158: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71158u;
        // 0x1d7115c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71160u;
}
