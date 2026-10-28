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

// Function: sub_01C21278
// Address: 0x1c21278 - 0x1c21360
void sub_01C21278_0x1c21278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21278_0x1c21278");
#endif

    switch (ctx->pc) {
        case 0x1c2128cu: goto label_1c2128c;
        case 0x1c212a0u: goto label_1c212a0;
        case 0x1c212a4u: goto label_1c212a4;
        case 0x1c212c0u: goto label_1c212c0;
        case 0x1c212ccu: goto label_1c212cc;
        case 0x1c2130cu: goto label_1c2130c;
        case 0x1c21338u: goto label_1c21338;
        case 0x1c21344u: goto label_1c21344;
        case 0x1c21350u: goto label_1c21350;
        default: break;
    }

    ctx->pc = 0x1c21278u;

    // 0x1c21278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2127c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21284: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C21284u;
    SET_GPR_U32(ctx, 31, 0x1C2128Cu);
    ctx->pc = 0x1C21288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21284u;
    // 0x1c21288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C21284u, 0x1C2128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2128Cu;
label_1c2128c:
    // 0x1c2128c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c2128cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21290: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C21290u;
    {
        const bool branch_taken_0x1c21290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C21294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21290u;
        // 0x1c21294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21290) {
            ctx->pc = 0x1C212B4u;
            goto label_1c212b4;
        }
    }
    ctx->pc = 0x1C21298u;
    // 0x1c21298: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C21298u;
    SET_GPR_U32(ctx, 31, 0x1C212A0u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C21298u, 0x1C212A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C212A0u;
label_1c212a0:
    // 0x1c212a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c212a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c212a4:
    // 0x1c212a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c212a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c212a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c212a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c212ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C212ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C212B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C212ACu;
        // 0x1c212b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C212ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C212B4u;
label_1c212b4:
    // 0x1c212b4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c212b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c212b8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C212B8u;
    SET_GPR_U32(ctx, 31, 0x1C212C0u);
    ctx->pc = 0x1C212BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C212B8u;
    // 0x1c212bc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C212B8u, 0x1C212C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C212C0u;
label_1c212c0:
    // 0x1c212c0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c212c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c212c4: 0xc707c68  jal         func_1C1F1A0
    ctx->pc = 0x1C212C4u;
    SET_GPR_U32(ctx, 31, 0x1C212CCu);
    ctx->pc = 0x1C212C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C212C4u;
    // 0x1c212c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1A0u, 0x1C212C4u, 0x1C212CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C212CCu;
label_1c212cc:
    // 0x1c212cc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C212CCu;
    {
        const bool branch_taken_0x1c212cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C212D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C212CCu;
        // 0x1c212d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c212cc) {
            ctx->pc = 0x1C212A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c212a4;
        }
    }
    ctx->pc = 0x1C212D4u;
    // 0x1c212d4: 0x0  nop
    ctx->pc = 0x1c212d4u;
    // NOP
    // 0x1c212d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c212d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c212dc: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c212dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c212e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c212e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c212e4: 0x25eef5a8  addiu       $t6, $t7, -0xA58
    ctx->pc = 0x1c212e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964648));
    // 0x1c212e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c212e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c212ec: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c212ecu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C2F5ACu));
    // 0x1c212f0: 0x8dedf5a8  lw          $t5, -0xA58($t7)
    ctx->pc = 0x1c212f0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C2F5A8u));
    // 0x1c212f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c212f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c212f8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c212f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c212fc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c212fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c21300: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c21300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c21304: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21304u;
    SET_GPR_U32(ctx, 31, 0x1C2130Cu);
    ctx->pc = 0x1C21308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21304u;
    // 0x1c21308: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21304u, 0x1C2130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2130Cu;
label_1c2130c:
    // 0x1c2130c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c2130cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c21310: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c21310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21318: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c21318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2131c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c2131cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c21320: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21324: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c21324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c21328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2132c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c2132cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21330: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21330u;
    SET_GPR_U32(ctx, 31, 0x1C21338u);
    ctx->pc = 0x1C21334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21330u;
    // 0x1c21334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21330u, 0x1C21338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21338u;
label_1c21338:
    // 0x1c21338: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c21338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c2133c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2133Cu;
    SET_GPR_U32(ctx, 31, 0x1C21344u);
    ctx->pc = 0x1C21340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2133Cu;
    // 0x1c21340: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2133Cu, 0x1C21344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21344u;
label_1c21344:
    // 0x1c21344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c21344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21348: 0xc707c6a  jal         func_1C1F1A8
    ctx->pc = 0x1C21348u;
    SET_GPR_U32(ctx, 31, 0x1C21350u);
    ctx->pc = 0x1C2134Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21348u;
    // 0x1c2134c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1A8u, 0x1C21348u, 0x1C21350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21350u;
label_1c21350:
    // 0x1c21350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c21350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c21354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c21358: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21358u;
        // 0x1c2135c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21360u;
}
