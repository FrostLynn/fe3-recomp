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

// Function: sub_01CC4168
// Address: 0x1cc4168 - 0x1cc4294
void sub_01CC4168_0x1cc4168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4168_0x1cc4168");
#endif

    switch (ctx->pc) {
        case 0x1cc4184u: goto label_1cc4184;
        case 0x1cc418cu: goto label_1cc418c;
        case 0x1cc41a0u: goto label_1cc41a0;
        case 0x1cc41a4u: goto label_1cc41a4;
        case 0x1cc41e0u: goto label_1cc41e0;
        case 0x1cc4220u: goto label_1cc4220;
        case 0x1cc4234u: goto label_1cc4234;
        case 0x1cc4240u: goto label_1cc4240;
        case 0x1cc424cu: goto label_1cc424c;
        case 0x1cc4260u: goto label_1cc4260;
        case 0x1cc4278u: goto label_1cc4278;
        default: break;
    }

    ctx->pc = 0x1cc4168u;

    // 0x1cc4168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc416c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc416cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc4170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc417c: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC417Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4184u);
    ctx->pc = 0x1CC4180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC417Cu;
    // 0x1cc4180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC417Cu, 0x1CC4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4184u;
label_1cc4184:
    // 0x1cc4184: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4184u;
    SET_GPR_U32(ctx, 31, 0x1CC418Cu);
    ctx->pc = 0x1CC4188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4184u;
    // 0x1cc4188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4184u, 0x1CC418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC418Cu;
label_1cc418c:
    // 0x1cc418c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc418cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4190: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4190u;
    {
        const bool branch_taken_0x1cc4190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4190u;
        // 0x1cc4194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4190) {
            ctx->pc = 0x1CC41B4u;
            goto label_1cc41b4;
        }
    }
    ctx->pc = 0x1CC4198u;
    // 0x1cc4198: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4198u;
    SET_GPR_U32(ctx, 31, 0x1CC41A0u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4198u, 0x1CC41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC41A0u;
label_1cc41a0:
    // 0x1cc41a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc41a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc41a4:
    // 0x1cc41a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc41a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc41a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc41a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc41ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC41ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC41ACu;
        // 0x1cc41b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC41ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC41B4u;
label_1cc41b4:
    // 0x1cc41b4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC41B4u;
    {
        const bool branch_taken_0x1cc41b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC41B4u;
        // 0x1cc41b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc41b4) {
            ctx->pc = 0x1CC41A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc41a4;
        }
    }
    ctx->pc = 0x1CC41BCu;
    // 0x1cc41bc: 0x0  nop
    ctx->pc = 0x1cc41bcu;
    // NOP
    // 0x1cc41c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc41c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc41c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc41c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc41c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc41c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc41cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc41ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc41d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc41d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc41d4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cc41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cc41d8: 0xc73091a  jal         func_1CC2468
    ctx->pc = 0x1CC41D8u;
    SET_GPR_U32(ctx, 31, 0x1CC41E0u);
    ctx->pc = 0x1CC41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC41D8u;
    // 0x1cc41dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2468u, 0x1CC41D8u, 0x1CC41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC41E0u;
label_1cc41e0:
    // 0x1cc41e0: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cc41e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cc41e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc41e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc41e8: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cc41e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cc41ec: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1cc41ecu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cc41f0: 0x11e00038  beqz        $t7, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CC41F0u;
    {
        const bool branch_taken_0x1cc41f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC41F0u;
        // 0x1cc41f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc41f0) {
            ctx->pc = 0x1CC42D4u;
            return;
        }
    }
    ctx->pc = 0x1CC41F8u;
    // 0x1cc41f8: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cc41f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cc41fc: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cc41fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cc4200: 0x25ce56b0  addiu       $t6, $t6, 0x56B0
    ctx->pc = 0x1cc4200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 22192));
    // 0x1cc4204: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc4204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc4208: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cc4208u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc420c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CC420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC4214u: goto label_1cc4214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC420Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC4214u;
label_1cc4214:
    // 0x1cc4214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4218: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc421c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1cc421cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1cc4220:
    // 0x1cc4220: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc4220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4224: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4224u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4228: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc4228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc422c: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC422Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4234u);
    ctx->pc = 0x1CC4230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC422Cu;
    // 0x1cc4230: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC422Cu, 0x1CC4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4234u;
label_1cc4234:
    // 0x1cc4234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4238: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC4238u;
    SET_GPR_U32(ctx, 31, 0x1CC4240u);
    ctx->pc = 0x1CC423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4238u;
    // 0x1cc423c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC4238u, 0x1CC4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4240u;
label_1cc4240:
    // 0x1cc4240: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc4240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc4244: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4244u;
    SET_GPR_U32(ctx, 31, 0x1CC424Cu);
    ctx->pc = 0x1CC4248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4244u;
    // 0x1cc4248: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4244u, 0x1CC424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC424Cu;
label_1cc424c:
    // 0x1cc424c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cc424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cc4250: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cc4250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cc4254: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc4254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc4258: 0xc73091e  jal         func_1CC2478
    ctx->pc = 0x1CC4258u;
    SET_GPR_U32(ctx, 31, 0x1CC4260u);
    ctx->pc = 0x1CC425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4258u;
    // 0x1cc425c: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2478u, 0x1CC4258u, 0x1CC4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4260u;
label_1cc4260:
    // 0x1cc4260: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc4264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc4268: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1cc4268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cc426c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4270: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC4270u;
    SET_GPR_U32(ctx, 31, 0x1CC4278u);
    ctx->pc = 0x1CC4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4270u;
    // 0x1cc4274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC4270u, 0x1CC4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4278u;
label_1cc4278:
    // 0x1cc4278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc427c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc427cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4284: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x1cc4284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1cc4288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc4288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc428c: 0x8730920  j           func_1CC2480
    ctx->pc = 0x1CC428Cu;
    ctx->pc = 0x1CC4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC428Cu;
    // 0x1cc4290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2480u;
    sub_01CC2480_0x1cc2480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4294u;
}
