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

// Function: sub_01D0D7D0
// Address: 0x1d0d7d0 - 0x1d0d8f4
void sub_01D0D7D0_0x1d0d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0D7D0_0x1d0d7d0");
#endif

    switch (ctx->pc) {
        case 0x1d0d7ecu: goto label_1d0d7ec;
        case 0x1d0d7f4u: goto label_1d0d7f4;
        case 0x1d0d808u: goto label_1d0d808;
        case 0x1d0d80cu: goto label_1d0d80c;
        case 0x1d0d848u: goto label_1d0d848;
        case 0x1d0d888u: goto label_1d0d888;
        case 0x1d0d89cu: goto label_1d0d89c;
        case 0x1d0d8a8u: goto label_1d0d8a8;
        case 0x1d0d8b4u: goto label_1d0d8b4;
        case 0x1d0d8c8u: goto label_1d0d8c8;
        case 0x1d0d8d8u: goto label_1d0d8d8;
        default: break;
    }

    ctx->pc = 0x1d0d7d0u;

    // 0x1d0d7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0d7d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0d7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0d7d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0d7dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d7e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0d7e4: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0D7E4u;
    SET_GPR_U32(ctx, 31, 0x1D0D7ECu);
    ctx->pc = 0x1D0D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D7E4u;
    // 0x1d0d7e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0D7E4u, 0x1D0D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D7ECu;
label_1d0d7ec:
    // 0x1d0d7ec: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0D7ECu;
    SET_GPR_U32(ctx, 31, 0x1D0D7F4u);
    ctx->pc = 0x1D0D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D7ECu;
    // 0x1d0d7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0D7ECu, 0x1D0D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D7F4u;
label_1d0d7f4:
    // 0x1d0d7f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0d7f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d7f8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0D7F8u;
    {
        const bool branch_taken_0x1d0d7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D7F8u;
        // 0x1d0d7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d7f8) {
            ctx->pc = 0x1D0D81Cu;
            goto label_1d0d81c;
        }
    }
    ctx->pc = 0x1D0D800u;
    // 0x1d0d800: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0D800u;
    SET_GPR_U32(ctx, 31, 0x1D0D808u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0D800u, 0x1D0D808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D808u;
label_1d0d808:
    // 0x1d0d808: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0d80c:
    // 0x1d0d80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0d80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0d810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0d814: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D814u;
        // 0x1d0d818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D81Cu;
label_1d0d81c:
    // 0x1d0d81c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0D81Cu;
    {
        const bool branch_taken_0x1d0d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D81Cu;
        // 0x1d0d820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d81c) {
            ctx->pc = 0x1D0D80Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d80c;
        }
    }
    ctx->pc = 0x1D0D824u;
    // 0x1d0d824: 0x0  nop
    ctx->pc = 0x1d0d824u;
    // NOP
    // 0x1d0d828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d82c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0d82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0d830: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0d834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0d838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0d838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d83c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0d840: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0D840u;
    SET_GPR_U32(ctx, 31, 0x1D0D848u);
    ctx->pc = 0x1D0D844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D840u;
    // 0x1d0d844: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0D840u, 0x1D0D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D848u;
label_1d0d848:
    // 0x1d0d848: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d0d848u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0d84c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0d84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d850: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1d0d850u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1d0d854: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1d0d854u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d0d858: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D0D858u;
    {
        const bool branch_taken_0x1d0d858 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D858u;
        // 0x1d0d85c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d858) {
            ctx->pc = 0x1D0D924u;
            return;
        }
    }
    ctx->pc = 0x1D0D860u;
    // 0x1d0d860: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d0d860u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d0d864: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0d864u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0d868: 0x25cefb10  addiu       $t6, $t6, -0x4F0
    ctx->pc = 0x1d0d868u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966032));
    // 0x1d0d86c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0d86cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0d870: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d0d870u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0d874: 0x1a00008  jr          $t5
    ctx->pc = 0x1D0D874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0D87Cu: goto label_1d0d87c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0D87Cu;
label_1d0d87c:
    // 0x1d0d87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d884: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1d0d884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d0d888:
    // 0x1d0d888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0d888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0d88c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0d88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d890: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0d890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0d894: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0D894u;
    SET_GPR_U32(ctx, 31, 0x1D0D89Cu);
    ctx->pc = 0x1D0D898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D894u;
    // 0x1d0d898: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0D894u, 0x1D0D89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D89Cu;
label_1d0d89c:
    // 0x1d0d89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d8a0: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0D8A0u;
    SET_GPR_U32(ctx, 31, 0x1D0D8A8u);
    ctx->pc = 0x1D0D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D8A0u;
    // 0x1d0d8a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0D8A0u, 0x1D0D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D8A8u;
label_1d0d8a8:
    // 0x1d0d8a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0d8ac: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0D8ACu;
    SET_GPR_U32(ctx, 31, 0x1D0D8B4u);
    ctx->pc = 0x1D0D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D8ACu;
    // 0x1d0d8b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0D8ACu, 0x1D0D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D8B4u;
label_1d0d8b4:
    // 0x1d0d8b4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d0d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d0d8b8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d0d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d0d8bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d0d8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0d8c0: 0xc742f5c  jal         func_1D0BD70
    ctx->pc = 0x1D0D8C0u;
    SET_GPR_U32(ctx, 31, 0x1D0D8C8u);
    ctx->pc = 0x1D0D8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D8C0u;
    // 0x1d0d8c4: 0x240500e2  addiu       $a1, $zero, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD70u, 0x1D0D8C0u, 0x1D0D8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D8C8u;
label_1d0d8c8:
    // 0x1d0d8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0d8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0d8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d8d0: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0D8D0u;
    SET_GPR_U32(ctx, 31, 0x1D0D8D8u);
    ctx->pc = 0x1D0D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D8D0u;
    // 0x1d0d8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0D8D0u, 0x1D0D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D8D8u;
label_1d0d8d8:
    // 0x1d0d8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0d8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0d8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0d8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d8e4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d0d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0d8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d8ec: 0x8742f5e  j           func_1D0BD78
    ctx->pc = 0x1D0D8ECu;
    ctx->pc = 0x1D0D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D8ECu;
    // 0x1d0d8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD78u;
    sub_01D0BD78_0x1d0bd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0D8F4u;
}
