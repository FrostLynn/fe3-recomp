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

// Function: sub_01CF1520
// Address: 0x1cf1520 - 0x1cf1608
void sub_01CF1520_0x1cf1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1520_0x1cf1520");
#endif

    switch (ctx->pc) {
        case 0x1cf1534u: goto label_1cf1534;
        case 0x1cf1548u: goto label_1cf1548;
        case 0x1cf154cu: goto label_1cf154c;
        case 0x1cf1568u: goto label_1cf1568;
        case 0x1cf1574u: goto label_1cf1574;
        case 0x1cf15b4u: goto label_1cf15b4;
        case 0x1cf15e0u: goto label_1cf15e0;
        case 0x1cf15ecu: goto label_1cf15ec;
        case 0x1cf15f8u: goto label_1cf15f8;
        default: break;
    }

    ctx->pc = 0x1cf1520u;

    // 0x1cf1520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1528: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf152c: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF152Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1534u);
    ctx->pc = 0x1CF1530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF152Cu;
    // 0x1cf1530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF152Cu, 0x1CF1534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1534u;
label_1cf1534:
    // 0x1cf1534: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf1534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1538: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF1538u;
    {
        const bool branch_taken_0x1cf1538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1538u;
        // 0x1cf153c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1538) {
            ctx->pc = 0x1CF155Cu;
            goto label_1cf155c;
        }
    }
    ctx->pc = 0x1CF1540u;
    // 0x1cf1540: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF1540u;
    SET_GPR_U32(ctx, 31, 0x1CF1548u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF1540u, 0x1CF1548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1548u;
label_1cf1548:
    // 0x1cf1548: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf1548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf154c:
    // 0x1cf154c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf154cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1554: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1554u;
        // 0x1cf1558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF155Cu;
label_1cf155c:
    // 0x1cf155c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf155cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1560: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1560u;
    SET_GPR_U32(ctx, 31, 0x1CF1568u);
    ctx->pc = 0x1CF1564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1560u;
    // 0x1cf1564: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1560u, 0x1CF1568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1568u;
label_1cf1568:
    // 0x1cf1568: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cf1568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cf156c: 0xc73bd66  jal         func_1CEF598
    ctx->pc = 0x1CF156Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1574u);
    ctx->pc = 0x1CF1570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF156Cu;
    // 0x1cf1570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF598u, 0x1CF156Cu, 0x1CF1574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1574u;
label_1cf1574:
    // 0x1cf1574: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF1574u;
    {
        const bool branch_taken_0x1cf1574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1574u;
        // 0x1cf1578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1574) {
            ctx->pc = 0x1CF154Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf154c;
        }
    }
    ctx->pc = 0x1CF157Cu;
    // 0x1cf157c: 0x0  nop
    ctx->pc = 0x1cf157cu;
    // NOP
    // 0x1cf1580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1584: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1584u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1588: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cf1588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cf158c: 0x25eed0e8  addiu       $t6, $t7, -0x2F18
    ctx->pc = 0x1cf158cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955240));
    // 0x1cf1590: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cf1590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cf1594: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cf1594u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CFD0ECu));
    // 0x1cf1598: 0x8dedd0e8  lw          $t5, -0x2F18($t7)
    ctx->pc = 0x1cf1598u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CFD0E8u));
    // 0x1cf159c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf159cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15a0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cf15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cf15a4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cf15a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cf15a8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cf15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf15ac: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF15ACu;
    SET_GPR_U32(ctx, 31, 0x1CF15B4u);
    ctx->pc = 0x1CF15B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF15ACu;
    // 0x1cf15b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF15ACu, 0x1CF15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF15B4u;
label_1cf15b4:
    // 0x1cf15b4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cf15b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cf15b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf15b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf15bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf15bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf15c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf15c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf15c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf15c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf15c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15cc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cf15ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cf15d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf15d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15d4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cf15d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf15d8: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF15D8u;
    SET_GPR_U32(ctx, 31, 0x1CF15E0u);
    ctx->pc = 0x1CF15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF15D8u;
    // 0x1cf15dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF15D8u, 0x1CF15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF15E0u;
label_1cf15e0:
    // 0x1cf15e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf15e4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF15E4u;
    SET_GPR_U32(ctx, 31, 0x1CF15ECu);
    ctx->pc = 0x1CF15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF15E4u;
    // 0x1cf15e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF15E4u, 0x1CF15ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF15ECu;
label_1cf15ec:
    // 0x1cf15ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf15ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf15f0: 0xc73bd68  jal         func_1CEF5A0
    ctx->pc = 0x1CF15F0u;
    SET_GPR_U32(ctx, 31, 0x1CF15F8u);
    ctx->pc = 0x1CF15F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF15F0u;
    // 0x1cf15f4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5A0u, 0x1CF15F0u, 0x1CF15F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF15F8u;
label_1cf15f8:
    // 0x1cf15f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cf15f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf15fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf15fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf1600: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1600u;
        // 0x1cf1604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1608u;
}
