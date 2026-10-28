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

// Function: sub_01C77758
// Address: 0x1c77758 - 0x1c77858
void sub_01C77758_0x1c77758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77758_0x1c77758");
#endif

    switch (ctx->pc) {
        case 0x1c77774u: goto label_1c77774;
        case 0x1c7777cu: goto label_1c7777c;
        case 0x1c77790u: goto label_1c77790;
        case 0x1c77794u: goto label_1c77794;
        case 0x1c777d0u: goto label_1c777d0;
        case 0x1c777f8u: goto label_1c777f8;
        case 0x1c77804u: goto label_1c77804;
        case 0x1c77810u: goto label_1c77810;
        case 0x1c77824u: goto label_1c77824;
        case 0x1c7783cu: goto label_1c7783c;
        default: break;
    }

    ctx->pc = 0x1c77758u;

    // 0x1c77758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7775c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7775cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c77760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77768: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7776c: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C7776Cu;
    SET_GPR_U32(ctx, 31, 0x1C77774u);
    ctx->pc = 0x1C77770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7776Cu;
    // 0x1c77770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C7776Cu, 0x1C77774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77774u;
label_1c77774:
    // 0x1c77774: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77774u;
    SET_GPR_U32(ctx, 31, 0x1C7777Cu);
    ctx->pc = 0x1C77778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77774u;
    // 0x1c77778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77774u, 0x1C7777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7777Cu;
label_1c7777c:
    // 0x1c7777c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c7777cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77780: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C77780u;
    {
        const bool branch_taken_0x1c77780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C77784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77780u;
        // 0x1c77784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77780) {
            ctx->pc = 0x1C777A4u;
            goto label_1c777a4;
        }
    }
    ctx->pc = 0x1C77788u;
    // 0x1c77788: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77788u;
    SET_GPR_U32(ctx, 31, 0x1C77790u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77788u, 0x1C77790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77790u;
label_1c77790:
    // 0x1c77790: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c77790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c77794:
    // 0x1c77794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7779c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7779Cu;
        // 0x1c777a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C777A4u;
label_1c777a4:
    // 0x1c777a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C777A4u;
    {
        const bool branch_taken_0x1c777a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C777A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C777A4u;
        // 0x1c777a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c777a4) {
            ctx->pc = 0x1C77794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77794;
        }
    }
    ctx->pc = 0x1C777ACu;
    // 0x1c777ac: 0x0  nop
    ctx->pc = 0x1c777acu;
    // NOP
    // 0x1c777b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c777b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c777b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c777b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c777b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c777b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c777bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c777bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c777c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c777c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c777c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c777c8: 0xc71d658  jal         func_1C75960
    ctx->pc = 0x1C777C8u;
    SET_GPR_U32(ctx, 31, 0x1C777D0u);
    ctx->pc = 0x1C777CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C777C8u;
    // 0x1c777cc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75960u, 0x1C777C8u, 0x1C777D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C777D0u;
label_1c777d0:
    // 0x1c777d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c777d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c777d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c777d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c777d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c777dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c777dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c777e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c777e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c777e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c777e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c777ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c777ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777f0: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C777F0u;
    SET_GPR_U32(ctx, 31, 0x1C777F8u);
    ctx->pc = 0x1C777F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C777F0u;
    // 0x1c777f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C777F0u, 0x1C777F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C777F8u;
label_1c777f8:
    // 0x1c777f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c777f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c777fc: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C777FCu;
    SET_GPR_U32(ctx, 31, 0x1C77804u);
    ctx->pc = 0x1C77800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C777FCu;
    // 0x1c77800: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C777FCu, 0x1C77804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77804u;
label_1c77804:
    // 0x1c77804: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c77804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c77808: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77808u;
    SET_GPR_U32(ctx, 31, 0x1C77810u);
    ctx->pc = 0x1C7780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77808u;
    // 0x1c7780c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77808u, 0x1C77810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77810u;
label_1c77810:
    // 0x1c77810: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c77810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c77814: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c77814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c77818: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c77818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7781c: 0xc71d65c  jal         func_1C75970
    ctx->pc = 0x1C7781Cu;
    SET_GPR_U32(ctx, 31, 0x1C77824u);
    ctx->pc = 0x1C77820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7781Cu;
    // 0x1c77820: 0x240500bb  addiu       $a1, $zero, 0xBB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75970u, 0x1C7781Cu, 0x1C77824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77824u;
label_1c77824:
    // 0x1c77824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77828: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c77828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7782c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c7782cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c77830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77834: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C77834u;
    SET_GPR_U32(ctx, 31, 0x1C7783Cu);
    ctx->pc = 0x1C77838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77834u;
    // 0x1c77838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C77834u, 0x1C7783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7783Cu;
label_1c7783c:
    // 0x1c7783c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7783cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77848: 0x24050059  addiu       $a1, $zero, 0x59
    ctx->pc = 0x1c77848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1c7784c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77850: 0x871d65e  j           func_1C75978
    ctx->pc = 0x1C77850u;
    ctx->pc = 0x1C77854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77850u;
    // 0x1c77854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75978u;
    sub_01C75978_0x1c75978(rdram, ctx, runtime); return;
    ctx->pc = 0x1C77858u;
}
