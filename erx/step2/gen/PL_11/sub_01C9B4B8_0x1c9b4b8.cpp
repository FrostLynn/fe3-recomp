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

// Function: sub_01C9B4B8
// Address: 0x1c9b4b8 - 0x1c9b590
void sub_01C9B4B8_0x1c9b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B4B8_0x1c9b4b8");
#endif

    switch (ctx->pc) {
        case 0x1c9b4d8u: goto label_1c9b4d8;
        case 0x1c9b4e4u: goto label_1c9b4e4;
        case 0x1c9b4f8u: goto label_1c9b4f8;
        case 0x1c9b508u: goto label_1c9b508;
        case 0x1c9b50cu: goto label_1c9b50c;
        case 0x1c9b554u: goto label_1c9b554;
        case 0x1c9b55cu: goto label_1c9b55c;
        case 0x1c9b564u: goto label_1c9b564;
        case 0x1c9b578u: goto label_1c9b578;
        default: break;
    }

    ctx->pc = 0x1c9b4b8u;

    // 0x1c9b4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9b4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9b4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b4c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9b4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9b4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9b4c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b4cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b4d0: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9B4D0u;
    SET_GPR_U32(ctx, 31, 0x1C9B4D8u);
    ctx->pc = 0x1C9B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B4D0u;
    // 0x1c9b4d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9B4D0u, 0x1C9B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B4D8u;
label_1c9b4d8:
    // 0x1c9b4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b4dc: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9B4DCu;
    SET_GPR_U32(ctx, 31, 0x1C9B4E4u);
    ctx->pc = 0x1C9B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B4DCu;
    // 0x1c9b4e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9B4DCu, 0x1C9B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B4E4u;
label_1c9b4e4:
    // 0x1c9b4e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b4e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b4e8: 0x144f000d  bne         $v0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x1C9B4E8u;
    {
        const bool branch_taken_0x1c9b4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B4E8u;
        // 0x1c9b4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b4e8) {
            ctx->pc = 0x1C9B520u;
            goto label_1c9b520;
        }
    }
    ctx->pc = 0x1C9B4F0u;
    // 0x1c9b4f0: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9B4F0u;
    SET_GPR_U32(ctx, 31, 0x1C9B4F8u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9B4F0u, 0x1C9B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B4F8u;
label_1c9b4f8:
    // 0x1c9b4f8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c9b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c9b4fc: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x1c9b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1c9b500: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9B500u;
    SET_GPR_U32(ctx, 31, 0x1C9B508u);
    ctx->pc = 0x1C9B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B500u;
    // 0x1c9b504: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9B500u, 0x1C9B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B508u;
label_1c9b508:
    // 0x1c9b508: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9b508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9b50c:
    // 0x1c9b50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9b510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9b514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9b518: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B518u;
        // 0x1c9b51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B520u;
label_1c9b520:
    // 0x1c9b520: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9B520u;
    {
        const bool branch_taken_0x1c9b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B520u;
        // 0x1c9b524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b520) {
            ctx->pc = 0x1C9B50Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b50c;
        }
    }
    ctx->pc = 0x1C9B528u;
    // 0x1c9b528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b52c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9b52cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b53c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9b53cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9b540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9b544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b54c: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9B54Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B554u);
    ctx->pc = 0x1C9B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B54Cu;
    // 0x1c9b550: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9B54Cu, 0x1C9B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B554u;
label_1c9b554:
    // 0x1c9b554: 0xc7262ec  jal         func_1C98BB0
    ctx->pc = 0x1C9B554u;
    SET_GPR_U32(ctx, 31, 0x1C9B55Cu);
    ctx->pc = 0x1C9B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B554u;
    // 0x1c9b558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BB0u, 0x1C9B554u, 0x1C9B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B55Cu;
label_1c9b55c:
    // 0x1c9b55c: 0xc72656e  jal         func_1C995B8
    ctx->pc = 0x1C9B55Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B564u);
    ctx->pc = 0x1C9B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B55Cu;
    // 0x1c9b560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C995B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C995B8u, 0x1C9B55Cu, 0x1C9B564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B564u;
label_1c9b564:
    // 0x1c9b564: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9b564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9b568: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c9b568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9b56c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9b56cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b570: 0xc726570  jal         func_1C995C0
    ctx->pc = 0x1C9B570u;
    SET_GPR_U32(ctx, 31, 0x1C9B578u);
    ctx->pc = 0x1C9B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B570u;
    // 0x1c9b574: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C995C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C995C0u, 0x1C9B570u, 0x1C9B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B578u;
label_1c9b578:
    // 0x1c9b578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b57c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b584: 0x8726572  j           func_1C995C8
    ctx->pc = 0x1C9B584u;
    ctx->pc = 0x1C9B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B584u;
    // 0x1c9b588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C995C8u;
    sub_01C995C8_0x1c995c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B58Cu;
    // 0x1c9b58c: 0x0  nop
    ctx->pc = 0x1c9b58cu;
    // NOP
    ctx->pc = 0x1c9b590u;
}
