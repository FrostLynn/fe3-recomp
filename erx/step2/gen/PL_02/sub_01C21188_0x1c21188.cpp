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

// Function: sub_01C21188
// Address: 0x1c21188 - 0x1c21270
void sub_01C21188_0x1c21188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21188_0x1c21188");
#endif

    switch (ctx->pc) {
        case 0x1c2119cu: goto label_1c2119c;
        case 0x1c211b0u: goto label_1c211b0;
        case 0x1c211b4u: goto label_1c211b4;
        case 0x1c211d0u: goto label_1c211d0;
        case 0x1c211dcu: goto label_1c211dc;
        case 0x1c2121cu: goto label_1c2121c;
        case 0x1c21248u: goto label_1c21248;
        case 0x1c21254u: goto label_1c21254;
        case 0x1c21260u: goto label_1c21260;
        default: break;
    }

    ctx->pc = 0x1c21188u;

    // 0x1c21188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2118c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21194: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C21194u;
    SET_GPR_U32(ctx, 31, 0x1C2119Cu);
    ctx->pc = 0x1C21198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21194u;
    // 0x1c21198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C21194u, 0x1C2119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2119Cu;
label_1c2119c:
    // 0x1c2119c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c2119cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c211a0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C211A0u;
    {
        const bool branch_taken_0x1c211a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C211A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C211A0u;
        // 0x1c211a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c211a0) {
            ctx->pc = 0x1C211C4u;
            goto label_1c211c4;
        }
    }
    ctx->pc = 0x1C211A8u;
    // 0x1c211a8: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C211A8u;
    SET_GPR_U32(ctx, 31, 0x1C211B0u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C211A8u, 0x1C211B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C211B0u;
label_1c211b0:
    // 0x1c211b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c211b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c211b4:
    // 0x1c211b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c211b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c211b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c211b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c211bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C211BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C211C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C211BCu;
        // 0x1c211c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C211BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C211C4u;
label_1c211c4:
    // 0x1c211c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c211c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c211c8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C211C8u;
    SET_GPR_U32(ctx, 31, 0x1C211D0u);
    ctx->pc = 0x1C211CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C211C8u;
    // 0x1c211cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C211C8u, 0x1C211D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C211D0u;
label_1c211d0:
    // 0x1c211d0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c211d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c211d4: 0xc707c68  jal         func_1C1F1A0
    ctx->pc = 0x1C211D4u;
    SET_GPR_U32(ctx, 31, 0x1C211DCu);
    ctx->pc = 0x1C211D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C211D4u;
    // 0x1c211d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1A0u, 0x1C211D4u, 0x1C211DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C211DCu;
label_1c211dc:
    // 0x1c211dc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C211DCu;
    {
        const bool branch_taken_0x1c211dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C211E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C211DCu;
        // 0x1c211e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c211dc) {
            ctx->pc = 0x1C211B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c211b4;
        }
    }
    ctx->pc = 0x1C211E4u;
    // 0x1c211e4: 0x0  nop
    ctx->pc = 0x1c211e4u;
    // NOP
    // 0x1c211e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c211e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c211ec: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c211ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c211f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c211f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c211f4: 0x25eef5a0  addiu       $t6, $t7, -0xA60
    ctx->pc = 0x1c211f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964640));
    // 0x1c211f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c211f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c211fc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c211fcu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C2F5A4u));
    // 0x1c21200: 0x8dedf5a0  lw          $t5, -0xA60($t7)
    ctx->pc = 0x1c21200u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C2F5A0u));
    // 0x1c21204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21208: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c21208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c2120c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c2120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c21210: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c21210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c21214: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21214u;
    SET_GPR_U32(ctx, 31, 0x1C2121Cu);
    ctx->pc = 0x1C21218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21214u;
    // 0x1c21218: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21214u, 0x1C2121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2121Cu;
label_1c2121c:
    // 0x1c2121c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c2121cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c21220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c21220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21228: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c21228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2122c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c2122cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c21230: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21230u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21234: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c21234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c21238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2123c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c2123cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21240: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21240u;
    SET_GPR_U32(ctx, 31, 0x1C21248u);
    ctx->pc = 0x1C21244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21240u;
    // 0x1c21244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21240u, 0x1C21248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21248u;
label_1c21248:
    // 0x1c21248: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c21248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c2124c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2124Cu;
    SET_GPR_U32(ctx, 31, 0x1C21254u);
    ctx->pc = 0x1C21250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2124Cu;
    // 0x1c21250: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2124Cu, 0x1C21254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21254u;
label_1c21254:
    // 0x1c21254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c21254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21258: 0xc707c6a  jal         func_1C1F1A8
    ctx->pc = 0x1C21258u;
    SET_GPR_U32(ctx, 31, 0x1C21260u);
    ctx->pc = 0x1C2125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21258u;
    // 0x1c2125c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1A8u, 0x1C21258u, 0x1C21260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21260u;
label_1c21260:
    // 0x1c21260: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c21260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21264: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c21264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c21268: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21268u;
        // 0x1c2126c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21270u;
}
