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

// Function: sub_01C61680
// Address: 0x1c61680 - 0x1c61768
void sub_01C61680_0x1c61680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61680_0x1c61680");
#endif

    switch (ctx->pc) {
        case 0x1c61694u: goto label_1c61694;
        case 0x1c616a8u: goto label_1c616a8;
        case 0x1c616acu: goto label_1c616ac;
        case 0x1c616c8u: goto label_1c616c8;
        case 0x1c616d4u: goto label_1c616d4;
        case 0x1c61714u: goto label_1c61714;
        case 0x1c61740u: goto label_1c61740;
        case 0x1c6174cu: goto label_1c6174c;
        case 0x1c61758u: goto label_1c61758;
        default: break;
    }

    ctx->pc = 0x1c61680u;

    // 0x1c61680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6168c: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C6168Cu;
    SET_GPR_U32(ctx, 31, 0x1C61694u);
    ctx->pc = 0x1C61690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6168Cu;
    // 0x1c61690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C6168Cu, 0x1C61694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61694u;
label_1c61694:
    // 0x1c61694: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61698: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C61698u;
    {
        const bool branch_taken_0x1c61698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61698u;
        // 0x1c6169c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61698) {
            ctx->pc = 0x1C616BCu;
            goto label_1c616bc;
        }
    }
    ctx->pc = 0x1C616A0u;
    // 0x1c616a0: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C616A0u;
    SET_GPR_U32(ctx, 31, 0x1C616A8u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C616A0u, 0x1C616A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C616A8u;
label_1c616a8:
    // 0x1c616a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c616a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c616ac:
    // 0x1c616ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c616acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c616b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c616b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c616b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C616B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C616B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C616B4u;
        // 0x1c616b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C616B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C616BCu;
label_1c616bc:
    // 0x1c616bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c616bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c616c0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C616C0u;
    SET_GPR_U32(ctx, 31, 0x1C616C8u);
    ctx->pc = 0x1C616C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C616C0u;
    // 0x1c616c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C616C0u, 0x1C616C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C616C8u;
label_1c616c8:
    // 0x1c616c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c616c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c616cc: 0xc717d64  jal         func_1C5F590
    ctx->pc = 0x1C616CCu;
    SET_GPR_U32(ctx, 31, 0x1C616D4u);
    ctx->pc = 0x1C616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C616CCu;
    // 0x1c616d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F590u, 0x1C616CCu, 0x1C616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C616D4u;
label_1c616d4:
    // 0x1c616d4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C616D4u;
    {
        const bool branch_taken_0x1c616d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C616D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C616D4u;
        // 0x1c616d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c616d4) {
            ctx->pc = 0x1C616ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c616ac;
        }
    }
    ctx->pc = 0x1C616DCu;
    // 0x1c616dc: 0x0  nop
    ctx->pc = 0x1c616dcu;
    // NOP
    // 0x1c616e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c616e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c616e4: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c616e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c616e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c616e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c616ec: 0x25ee9cf8  addiu       $t6, $t7, -0x6308
    ctx->pc = 0x1c616ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941944));
    // 0x1c616f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c616f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c616f4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c616f4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C69CFCu));
    // 0x1c616f8: 0x8ded9cf8  lw          $t5, -0x6308($t7)
    ctx->pc = 0x1c616f8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C69CF8u));
    // 0x1c616fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c616fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61700: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c61700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c61704: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c61704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c61708: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c61708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6170c: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C6170Cu;
    SET_GPR_U32(ctx, 31, 0x1C61714u);
    ctx->pc = 0x1C61710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6170Cu;
    // 0x1c61710: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C6170Cu, 0x1C61714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61714u;
label_1c61714:
    // 0x1c61714: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c61714u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c61718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6171c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6171cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61720: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61724: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c61724u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c61728: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6172c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c6172cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c61730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61734: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c61734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61738: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61738u;
    SET_GPR_U32(ctx, 31, 0x1C61740u);
    ctx->pc = 0x1C6173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61738u;
    // 0x1c6173c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61738u, 0x1C61740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61740u;
label_1c61740:
    // 0x1c61740: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61744: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61744u;
    SET_GPR_U32(ctx, 31, 0x1C6174Cu);
    ctx->pc = 0x1C61748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61744u;
    // 0x1c61748: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61744u, 0x1C6174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6174Cu;
label_1c6174c:
    // 0x1c6174c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61750: 0xc717d66  jal         func_1C5F598
    ctx->pc = 0x1C61750u;
    SET_GPR_U32(ctx, 31, 0x1C61758u);
    ctx->pc = 0x1C61754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61750u;
    // 0x1c61754: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F598u, 0x1C61750u, 0x1C61758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61758u;
label_1c61758:
    // 0x1c61758: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c61758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6175c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c61760: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61760u;
        // 0x1c61764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61768u;
}
