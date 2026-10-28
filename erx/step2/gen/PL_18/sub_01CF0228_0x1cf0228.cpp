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

// Function: sub_01CF0228
// Address: 0x1cf0228 - 0x1cf0308
void sub_01CF0228_0x1cf0228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0228_0x1cf0228");
#endif

    switch (ctx->pc) {
        case 0x1cf023cu: goto label_1cf023c;
        case 0x1cf0250u: goto label_1cf0250;
        case 0x1cf0254u: goto label_1cf0254;
        case 0x1cf0270u: goto label_1cf0270;
        case 0x1cf027cu: goto label_1cf027c;
        case 0x1cf02acu: goto label_1cf02ac;
        case 0x1cf02d8u: goto label_1cf02d8;
        case 0x1cf02e4u: goto label_1cf02e4;
        default: break;
    }

    ctx->pc = 0x1cf0228u;

    // 0x1cf0228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf022c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0230: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf0230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf0234: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF0234u;
    SET_GPR_U32(ctx, 31, 0x1CF023Cu);
    ctx->pc = 0x1CF0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0234u;
    // 0x1cf0238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF0234u, 0x1CF023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF023Cu;
label_1cf023c:
    // 0x1cf023c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf023cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0240: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF0240u;
    {
        const bool branch_taken_0x1cf0240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0240u;
        // 0x1cf0244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0240) {
            ctx->pc = 0x1CF0264u;
            goto label_1cf0264;
        }
    }
    ctx->pc = 0x1CF0248u;
    // 0x1cf0248: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF0248u;
    SET_GPR_U32(ctx, 31, 0x1CF0250u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF0248u, 0x1CF0250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0250u;
label_1cf0250:
    // 0x1cf0250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf0250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf0254:
    // 0x1cf0254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf0258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf025c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF025Cu;
        // 0x1cf0260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0264u;
label_1cf0264:
    // 0x1cf0264: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf0264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf0268: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0268u;
    SET_GPR_U32(ctx, 31, 0x1CF0270u);
    ctx->pc = 0x1CF026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0268u;
    // 0x1cf026c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0268u, 0x1CF0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0270u;
label_1cf0270:
    // 0x1cf0270: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cf0270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cf0274: 0xc73bd66  jal         func_1CEF598
    ctx->pc = 0x1CF0274u;
    SET_GPR_U32(ctx, 31, 0x1CF027Cu);
    ctx->pc = 0x1CF0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0274u;
    // 0x1cf0278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF598u, 0x1CF0274u, 0x1CF027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF027Cu;
label_1cf027c:
    // 0x1cf027c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF027Cu;
    {
        const bool branch_taken_0x1cf027c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF027Cu;
        // 0x1cf0280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf027c) {
            ctx->pc = 0x1CF0254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0254;
        }
    }
    ctx->pc = 0x1CF0284u;
    // 0x1cf0284: 0x0  nop
    ctx->pc = 0x1cf0284u;
    // NOP
    // 0x1cf0288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf0288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf028c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf0290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf0294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf0294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf0298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf0298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf029c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cf029cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf02a0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf02a4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF02A4u;
    SET_GPR_U32(ctx, 31, 0x1CF02ACu);
    ctx->pc = 0x1CF02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF02A4u;
    // 0x1cf02a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF02A4u, 0x1CF02ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF02ACu;
label_1cf02ac:
    // 0x1cf02ac: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cf02acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cf02b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf02b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf02b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf02b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf02b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf02b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf02bc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf02bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf02c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf02c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf02c4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cf02c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cf02c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf02c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf02cc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cf02ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf02d0: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF02D0u;
    SET_GPR_U32(ctx, 31, 0x1CF02D8u);
    ctx->pc = 0x1CF02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF02D0u;
    // 0x1cf02d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF02D0u, 0x1CF02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF02D8u;
label_1cf02d8:
    // 0x1cf02d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf02d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf02dc: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF02DCu;
    SET_GPR_U32(ctx, 31, 0x1CF02E4u);
    ctx->pc = 0x1CF02E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF02DCu;
    // 0x1cf02e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF02DCu, 0x1CF02E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF02E4u;
label_1cf02e4:
    // 0x1cf02e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf02e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf02e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf02e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf02ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf02ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf02f0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cf02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cf02f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf02f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf02f8: 0x873bd68  j           func_1CEF5A0
    ctx->pc = 0x1CF02F8u;
    ctx->pc = 0x1CF02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF02F8u;
    // 0x1cf02fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5A0u;
    sub_01CEF5A0_0x1cef5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF0300u;
    // 0x1cf0300: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0308u;
}
