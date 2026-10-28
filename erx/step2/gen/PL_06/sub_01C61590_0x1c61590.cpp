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

// Function: sub_01C61590
// Address: 0x1c61590 - 0x1c61678
void sub_01C61590_0x1c61590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61590_0x1c61590");
#endif

    switch (ctx->pc) {
        case 0x1c615a4u: goto label_1c615a4;
        case 0x1c615b8u: goto label_1c615b8;
        case 0x1c615bcu: goto label_1c615bc;
        case 0x1c615d8u: goto label_1c615d8;
        case 0x1c615e4u: goto label_1c615e4;
        case 0x1c61624u: goto label_1c61624;
        case 0x1c61650u: goto label_1c61650;
        case 0x1c6165cu: goto label_1c6165c;
        case 0x1c61668u: goto label_1c61668;
        default: break;
    }

    ctx->pc = 0x1c61590u;

    // 0x1c61590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61598: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6159c: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C6159Cu;
    SET_GPR_U32(ctx, 31, 0x1C615A4u);
    ctx->pc = 0x1C615A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6159Cu;
    // 0x1c615a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C6159Cu, 0x1C615A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C615A4u;
label_1c615a4:
    // 0x1c615a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c615a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c615a8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C615A8u;
    {
        const bool branch_taken_0x1c615a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C615ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C615A8u;
        // 0x1c615ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c615a8) {
            ctx->pc = 0x1C615CCu;
            goto label_1c615cc;
        }
    }
    ctx->pc = 0x1C615B0u;
    // 0x1c615b0: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C615B0u;
    SET_GPR_U32(ctx, 31, 0x1C615B8u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C615B0u, 0x1C615B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C615B8u;
label_1c615b8:
    // 0x1c615b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c615b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c615bc:
    // 0x1c615bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c615bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c615c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c615c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c615c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C615C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C615C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C615C4u;
        // 0x1c615c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C615C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C615CCu;
label_1c615cc:
    // 0x1c615cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c615ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c615d0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C615D0u;
    SET_GPR_U32(ctx, 31, 0x1C615D8u);
    ctx->pc = 0x1C615D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C615D0u;
    // 0x1c615d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C615D0u, 0x1C615D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C615D8u;
label_1c615d8:
    // 0x1c615d8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c615d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c615dc: 0xc717d64  jal         func_1C5F590
    ctx->pc = 0x1C615DCu;
    SET_GPR_U32(ctx, 31, 0x1C615E4u);
    ctx->pc = 0x1C615E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C615DCu;
    // 0x1c615e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F590u, 0x1C615DCu, 0x1C615E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C615E4u;
label_1c615e4:
    // 0x1c615e4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C615E4u;
    {
        const bool branch_taken_0x1c615e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C615E4u;
        // 0x1c615e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c615e4) {
            ctx->pc = 0x1C615BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c615bc;
        }
    }
    ctx->pc = 0x1C615ECu;
    // 0x1c615ec: 0x0  nop
    ctx->pc = 0x1c615ecu;
    // NOP
    // 0x1c615f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c615f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c615f4: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c615f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c615f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c615f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c615fc: 0x25ee9cf0  addiu       $t6, $t7, -0x6310
    ctx->pc = 0x1c615fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941936));
    // 0x1c61600: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c61600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c61604: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c61604u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C69CF4u));
    // 0x1c61608: 0x8ded9cf0  lw          $t5, -0x6310($t7)
    ctx->pc = 0x1c61608u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C69CF0u));
    // 0x1c6160c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6160cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61610: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c61610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c61614: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c61614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c61618: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c61618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6161c: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C6161Cu;
    SET_GPR_U32(ctx, 31, 0x1C61624u);
    ctx->pc = 0x1C61620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6161Cu;
    // 0x1c61620: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C6161Cu, 0x1C61624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61624u;
label_1c61624:
    // 0x1c61624: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c61624u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c61628: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6162c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6162cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61630: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61634: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c61634u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c61638: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61638u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6163c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c6163cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c61640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61644: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c61644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61648: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61648u;
    SET_GPR_U32(ctx, 31, 0x1C61650u);
    ctx->pc = 0x1C6164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61648u;
    // 0x1c6164c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61648u, 0x1C61650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61650u;
label_1c61650:
    // 0x1c61650: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61654: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61654u;
    SET_GPR_U32(ctx, 31, 0x1C6165Cu);
    ctx->pc = 0x1C61658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61654u;
    // 0x1c61658: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61654u, 0x1C6165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6165Cu;
label_1c6165c:
    // 0x1c6165c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61660: 0xc717d66  jal         func_1C5F598
    ctx->pc = 0x1C61660u;
    SET_GPR_U32(ctx, 31, 0x1C61668u);
    ctx->pc = 0x1C61664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61660u;
    // 0x1c61664: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F598u, 0x1C61660u, 0x1C61668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61668u;
label_1c61668:
    // 0x1c61668: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c61668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6166c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6166cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c61670: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61670u;
        // 0x1c61674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61678u;
}
