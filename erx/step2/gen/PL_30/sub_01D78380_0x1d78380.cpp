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

// Function: sub_01D78380
// Address: 0x1d78380 - 0x1d78468
void sub_01D78380_0x1d78380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78380_0x1d78380");
#endif

    switch (ctx->pc) {
        case 0x1d78394u: goto label_1d78394;
        case 0x1d783a8u: goto label_1d783a8;
        case 0x1d783acu: goto label_1d783ac;
        case 0x1d783c8u: goto label_1d783c8;
        case 0x1d783d4u: goto label_1d783d4;
        case 0x1d78414u: goto label_1d78414;
        case 0x1d78440u: goto label_1d78440;
        case 0x1d7844cu: goto label_1d7844c;
        case 0x1d78458u: goto label_1d78458;
        default: break;
    }

    ctx->pc = 0x1d78380u;

    // 0x1d78380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d78384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7838c: 0xc75ded0  jal         func_1D77B40
    ctx->pc = 0x1D7838Cu;
    SET_GPR_U32(ctx, 31, 0x1D78394u);
    ctx->pc = 0x1D78390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7838Cu;
    // 0x1d78390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B40u, 0x1D7838Cu, 0x1D78394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78394u;
label_1d78394:
    // 0x1d78394: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d78394u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78398: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D78398u;
    {
        const bool branch_taken_0x1d78398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78398u;
        // 0x1d7839c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78398) {
            ctx->pc = 0x1D783BCu;
            goto label_1d783bc;
        }
    }
    ctx->pc = 0x1D783A0u;
    // 0x1d783a0: 0xc75ded2  jal         func_1D77B48
    ctx->pc = 0x1D783A0u;
    SET_GPR_U32(ctx, 31, 0x1D783A8u);
    ctx->pc = 0x1D77B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B48u, 0x1D783A0u, 0x1D783A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D783A8u;
label_1d783a8:
    // 0x1d783a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d783a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d783ac:
    // 0x1d783ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d783acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d783b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d783b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d783b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D783B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D783B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D783B4u;
        // 0x1d783b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D783B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D783BCu;
label_1d783bc:
    // 0x1d783bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d783bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d783c0: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D783C0u;
    SET_GPR_U32(ctx, 31, 0x1D783C8u);
    ctx->pc = 0x1D783C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D783C0u;
    // 0x1d783c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D783C0u, 0x1D783C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D783C8u;
label_1d783c8:
    // 0x1d783c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d783c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d783cc: 0xc75dee2  jal         func_1D77B88
    ctx->pc = 0x1D783CCu;
    SET_GPR_U32(ctx, 31, 0x1D783D4u);
    ctx->pc = 0x1D783D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D783CCu;
    // 0x1d783d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B88u, 0x1D783CCu, 0x1D783D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D783D4u;
label_1d783d4:
    // 0x1d783d4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D783D4u;
    {
        const bool branch_taken_0x1d783d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D783D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D783D4u;
        // 0x1d783d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d783d4) {
            ctx->pc = 0x1D783ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d783ac;
        }
    }
    ctx->pc = 0x1D783DCu;
    // 0x1d783dc: 0x0  nop
    ctx->pc = 0x1d783dcu;
    // NOP
    // 0x1d783e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d783e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d783e4: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d783e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d783e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d783e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d783ec: 0x25eed5c8  addiu       $t6, $t7, -0x2A38
    ctx->pc = 0x1d783ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956488));
    // 0x1d783f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d783f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d783f4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d783f4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D7D5CCu));
    // 0x1d783f8: 0x8dedd5c8  lw          $t5, -0x2A38($t7)
    ctx->pc = 0x1d783f8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D7D5C8u));
    // 0x1d783fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d783fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78400: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d78400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d78404: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d78404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d78408: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d78408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d7840c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7840Cu;
    SET_GPR_U32(ctx, 31, 0x1D78414u);
    ctx->pc = 0x1D78410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7840Cu;
    // 0x1d78410: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7840Cu, 0x1D78414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78414u;
label_1d78414:
    // 0x1d78414: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d78414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d78418: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d78418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7841c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7841cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78420: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d78420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78424: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d78424u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d78428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d78428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7842c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d7842cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d78430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d78430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78434: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d78434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d78438: 0xc75dee0  jal         func_1D77B80
    ctx->pc = 0x1D78438u;
    SET_GPR_U32(ctx, 31, 0x1D78440u);
    ctx->pc = 0x1D7843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78438u;
    // 0x1d7843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B80u, 0x1D78438u, 0x1D78440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78440u;
label_1d78440:
    // 0x1d78440: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d78440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d78444: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D78444u;
    SET_GPR_U32(ctx, 31, 0x1D7844Cu);
    ctx->pc = 0x1D78448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78444u;
    // 0x1d78448: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D78444u, 0x1D7844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7844Cu;
label_1d7844c:
    // 0x1d7844c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7844cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78450: 0xc75dee4  jal         func_1D77B90
    ctx->pc = 0x1D78450u;
    SET_GPR_U32(ctx, 31, 0x1D78458u);
    ctx->pc = 0x1D78454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78450u;
    // 0x1d78454: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B90u, 0x1D78450u, 0x1D78458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78458u;
label_1d78458:
    // 0x1d78458: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d78458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7845c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d78460: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78460u;
        // 0x1d78464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78468u;
}
