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

// Function: sub_01CFF1A0
// Address: 0x1cff1a0 - 0x1cff288
void sub_01CFF1A0_0x1cff1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF1A0_0x1cff1a0");
#endif

    switch (ctx->pc) {
        case 0x1cff1b4u: goto label_1cff1b4;
        case 0x1cff1c8u: goto label_1cff1c8;
        case 0x1cff1ccu: goto label_1cff1cc;
        case 0x1cff1e8u: goto label_1cff1e8;
        case 0x1cff1f4u: goto label_1cff1f4;
        case 0x1cff234u: goto label_1cff234;
        case 0x1cff260u: goto label_1cff260;
        case 0x1cff26cu: goto label_1cff26c;
        case 0x1cff278u: goto label_1cff278;
        default: break;
    }

    ctx->pc = 0x1cff1a0u;

    // 0x1cff1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff1a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff1ac: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF1ACu;
    SET_GPR_U32(ctx, 31, 0x1CFF1B4u);
    ctx->pc = 0x1CFF1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF1ACu;
    // 0x1cff1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF1ACu, 0x1CFF1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1B4u;
label_1cff1b4:
    // 0x1cff1b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff1b8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFF1B8u;
    {
        const bool branch_taken_0x1cff1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF1B8u;
        // 0x1cff1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff1b8) {
            ctx->pc = 0x1CFF1DCu;
            goto label_1cff1dc;
        }
    }
    ctx->pc = 0x1CFF1C0u;
    // 0x1cff1c0: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF1C0u;
    SET_GPR_U32(ctx, 31, 0x1CFF1C8u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF1C0u, 0x1CFF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1C8u;
label_1cff1c8:
    // 0x1cff1c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cff1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cff1cc:
    // 0x1cff1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff1d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF1D4u;
        // 0x1cff1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF1DCu;
label_1cff1dc:
    // 0x1cff1dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff1e0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF1E0u;
    SET_GPR_U32(ctx, 31, 0x1CFF1E8u);
    ctx->pc = 0x1CFF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF1E0u;
    // 0x1cff1e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF1E0u, 0x1CFF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1E8u;
label_1cff1e8:
    // 0x1cff1e8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cff1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cff1ec: 0xc73f4a8  jal         func_1CFD2A0
    ctx->pc = 0x1CFF1ECu;
    SET_GPR_U32(ctx, 31, 0x1CFF1F4u);
    ctx->pc = 0x1CFF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF1ECu;
    // 0x1cff1f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2A0u, 0x1CFF1ECu, 0x1CFF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF1F4u;
label_1cff1f4:
    // 0x1cff1f4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFF1F4u;
    {
        const bool branch_taken_0x1cff1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF1F4u;
        // 0x1cff1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff1f4) {
            ctx->pc = 0x1CFF1CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff1cc;
        }
    }
    ctx->pc = 0x1CFF1FCu;
    // 0x1cff1fc: 0x0  nop
    ctx->pc = 0x1cff1fcu;
    // NOP
    // 0x1cff200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff204: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff204u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff208: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cff208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cff20c: 0x25eebc18  addiu       $t6, $t7, -0x43E8
    ctx->pc = 0x1cff20cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949912));
    // 0x1cff210: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cff210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cff214: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cff214u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D0BC1Cu));
    // 0x1cff218: 0x8dedbc18  lw          $t5, -0x43E8($t7)
    ctx->pc = 0x1cff218u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D0BC18u));
    // 0x1cff21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff220: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cff220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cff224: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cff224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cff228: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cff228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cff22c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF22Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF234u);
    ctx->pc = 0x1CFF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF22Cu;
    // 0x1cff230: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF22Cu, 0x1CFF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF234u;
label_1cff234:
    // 0x1cff234: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cff234u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cff238: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff240: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff244: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cff244u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cff248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff24c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cff24cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cff250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff254: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cff254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cff258: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF258u;
    SET_GPR_U32(ctx, 31, 0x1CFF260u);
    ctx->pc = 0x1CFF25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF258u;
    // 0x1cff25c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF258u, 0x1CFF260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF260u;
label_1cff260:
    // 0x1cff260: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff264: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF264u;
    SET_GPR_U32(ctx, 31, 0x1CFF26Cu);
    ctx->pc = 0x1CFF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF264u;
    // 0x1cff268: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF264u, 0x1CFF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF26Cu;
label_1cff26c:
    // 0x1cff26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cff26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff270: 0xc73f4aa  jal         func_1CFD2A8
    ctx->pc = 0x1CFF270u;
    SET_GPR_U32(ctx, 31, 0x1CFF278u);
    ctx->pc = 0x1CFF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF270u;
    // 0x1cff274: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2A8u, 0x1CFF270u, 0x1CFF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF278u;
label_1cff278:
    // 0x1cff278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cff278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff27c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cff27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cff280: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF280u;
        // 0x1cff284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF288u;
}
