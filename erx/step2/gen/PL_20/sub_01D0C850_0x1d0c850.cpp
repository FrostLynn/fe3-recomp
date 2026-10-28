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

// Function: sub_01D0C850
// Address: 0x1d0c850 - 0x1d0c960
void sub_01D0C850_0x1d0c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C850_0x1d0c850");
#endif

    switch (ctx->pc) {
        case 0x1d0c86cu: goto label_1d0c86c;
        case 0x1d0c874u: goto label_1d0c874;
        case 0x1d0c888u: goto label_1d0c888;
        case 0x1d0c88cu: goto label_1d0c88c;
        case 0x1d0c8e4u: goto label_1d0c8e4;
        case 0x1d0c8f4u: goto label_1d0c8f4;
        case 0x1d0c908u: goto label_1d0c908;
        case 0x1d0c91cu: goto label_1d0c91c;
        case 0x1d0c92cu: goto label_1d0c92c;
        default: break;
    }

    ctx->pc = 0x1d0c850u;

    // 0x1d0c850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0c854: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0c854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0c858: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0c85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0c85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0c864: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0C864u;
    SET_GPR_U32(ctx, 31, 0x1D0C86Cu);
    ctx->pc = 0x1D0C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C864u;
    // 0x1d0c868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0C864u, 0x1D0C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C86Cu;
label_1d0c86c:
    // 0x1d0c86c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0C86Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C874u);
    ctx->pc = 0x1D0C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C86Cu;
    // 0x1d0c870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0C86Cu, 0x1D0C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C874u;
label_1d0c874:
    // 0x1d0c874: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0c874u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0c878: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0C878u;
    {
        const bool branch_taken_0x1d0c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C878u;
        // 0x1d0c87c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c878) {
            ctx->pc = 0x1D0C89Cu;
            goto label_1d0c89c;
        }
    }
    ctx->pc = 0x1D0C880u;
    // 0x1d0c880: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0C880u;
    SET_GPR_U32(ctx, 31, 0x1D0C888u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0C880u, 0x1D0C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C888u;
label_1d0c888:
    // 0x1d0c888: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0c88c:
    // 0x1d0c88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0c88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c890: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0c890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0c894: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C894u;
        // 0x1d0c898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C89Cu;
label_1d0c89c:
    // 0x1d0c89c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0C89Cu;
    {
        const bool branch_taken_0x1d0c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C89Cu;
        // 0x1d0c8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c89c) {
            ctx->pc = 0x1D0C88Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c88c;
        }
    }
    ctx->pc = 0x1D0C8A4u;
    // 0x1d0c8a4: 0x0  nop
    ctx->pc = 0x1d0c8a4u;
    // NOP
    // 0x1d0c8a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d0c8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d0c8ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0c8b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d0c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d0c8b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d0c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d0c8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0c8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0c8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0c8c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d0c8c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0c8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0c8c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0c8cc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d0c8ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d0c8d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d0c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d0c8d4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0c8d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d0c8d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8dc: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0C8DCu;
    SET_GPR_U32(ctx, 31, 0x1D0C8E4u);
    ctx->pc = 0x1D0C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C8DCu;
    // 0x1d0c8e0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0C8DCu, 0x1D0C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C8E4u;
label_1d0c8e4:
    // 0x1d0c8e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0c8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0c8e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d0c8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8ec: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0C8ECu;
    SET_GPR_U32(ctx, 31, 0x1D0C8F4u);
    ctx->pc = 0x1D0C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C8ECu;
    // 0x1d0c8f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0C8ECu, 0x1D0C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C8F4u;
label_1d0c8f4:
    // 0x1d0c8f4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d0c8f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d0c8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c900: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0C900u;
    SET_GPR_U32(ctx, 31, 0x1D0C908u);
    ctx->pc = 0x1D0C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C900u;
    // 0x1d0c904: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0C900u, 0x1D0C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C908u;
label_1d0c908:
    // 0x1d0c908: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d0c908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d0c90c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d0c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d0c910: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0c910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c914: 0xc742f5c  jal         func_1D0BD70
    ctx->pc = 0x1D0C914u;
    SET_GPR_U32(ctx, 31, 0x1D0C91Cu);
    ctx->pc = 0x1D0C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C914u;
    // 0x1d0c918: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD70u, 0x1D0C914u, 0x1D0C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C91Cu;
label_1d0c91c:
    // 0x1d0c91c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0c91cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0c920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c924: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0C924u;
    SET_GPR_U32(ctx, 31, 0x1D0C92Cu);
    ctx->pc = 0x1D0C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C924u;
    // 0x1d0c928: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0C924u, 0x1D0C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C92Cu;
label_1d0c92c:
    // 0x1d0c92c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d0c92cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d0c930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0c930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c934: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d0c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0c938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c93c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0c93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0c940: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0c940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0c944: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0c944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0c948: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d0c948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0c94c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d0c94cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0c950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d0c950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0c954: 0x8742f5e  j           func_1D0BD78
    ctx->pc = 0x1D0C954u;
    ctx->pc = 0x1D0C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C954u;
    // 0x1d0c958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD78u;
    sub_01D0BD78_0x1d0bd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0C95Cu;
    // 0x1d0c95c: 0x0  nop
    ctx->pc = 0x1d0c95cu;
    // NOP
    ctx->pc = 0x1d0c960u;
}
