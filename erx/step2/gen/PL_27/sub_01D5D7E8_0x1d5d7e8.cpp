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

// Function: sub_01D5D7E8
// Address: 0x1d5d7e8 - 0x1d5d8f8
void sub_01D5D7E8_0x1d5d7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D7E8_0x1d5d7e8");
#endif

    switch (ctx->pc) {
        case 0x1d5d804u: goto label_1d5d804;
        case 0x1d5d80cu: goto label_1d5d80c;
        case 0x1d5d820u: goto label_1d5d820;
        case 0x1d5d824u: goto label_1d5d824;
        case 0x1d5d87cu: goto label_1d5d87c;
        case 0x1d5d88cu: goto label_1d5d88c;
        case 0x1d5d8a0u: goto label_1d5d8a0;
        case 0x1d5d8b4u: goto label_1d5d8b4;
        case 0x1d5d8c4u: goto label_1d5d8c4;
        default: break;
    }

    ctx->pc = 0x1d5d7e8u;

    // 0x1d5d7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d7ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5d7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5d7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d7f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5d7fc: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5D7FCu;
    SET_GPR_U32(ctx, 31, 0x1D5D804u);
    ctx->pc = 0x1D5D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D7FCu;
    // 0x1d5d800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5D7FCu, 0x1D5D804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D804u;
label_1d5d804:
    // 0x1d5d804: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5D804u;
    SET_GPR_U32(ctx, 31, 0x1D5D80Cu);
    ctx->pc = 0x1D5D808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D804u;
    // 0x1d5d808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5D804u, 0x1D5D80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D80Cu;
label_1d5d80c:
    // 0x1d5d80c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5d80cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d810: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5D810u;
    {
        const bool branch_taken_0x1d5d810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D810u;
        // 0x1d5d814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d810) {
            ctx->pc = 0x1D5D834u;
            goto label_1d5d834;
        }
    }
    ctx->pc = 0x1D5D818u;
    // 0x1d5d818: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5D818u;
    SET_GPR_U32(ctx, 31, 0x1D5D820u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5D818u, 0x1D5D820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D820u;
label_1d5d820:
    // 0x1d5d820: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5d820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5d824:
    // 0x1d5d824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5d824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5d828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D82Cu;
        // 0x1d5d830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D834u;
label_1d5d834:
    // 0x1d5d834: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5D834u;
    {
        const bool branch_taken_0x1d5d834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D834u;
        // 0x1d5d838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d834) {
            ctx->pc = 0x1D5D824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d824;
        }
    }
    ctx->pc = 0x1D5D83Cu;
    // 0x1d5d83c: 0x0  nop
    ctx->pc = 0x1d5d83cu;
    // NOP
    // 0x1d5d840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5d844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d848: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d5d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d5d84c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d5d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5d850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5d850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5d854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5d858: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d5d858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d85c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5d860: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5d864: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d5d864u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d5d868: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5d86c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5d870: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d5d870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d874: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5D874u;
    SET_GPR_U32(ctx, 31, 0x1D5D87Cu);
    ctx->pc = 0x1D5D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D874u;
    // 0x1d5d878: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5D874u, 0x1D5D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D87Cu;
label_1d5d87c:
    // 0x1d5d87c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5d880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d5d880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d884: 0xc757358  jal         func_1D5CD60
    ctx->pc = 0x1D5D884u;
    SET_GPR_U32(ctx, 31, 0x1D5D88Cu);
    ctx->pc = 0x1D5D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D884u;
    // 0x1d5d888: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD60u, 0x1D5D884u, 0x1D5D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D88Cu;
label_1d5d88c:
    // 0x1d5d88c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5d890: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d5d890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d898: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5D898u;
    SET_GPR_U32(ctx, 31, 0x1D5D8A0u);
    ctx->pc = 0x1D5D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D898u;
    // 0x1d5d89c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5D898u, 0x1D5D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D8A0u;
label_1d5d8a0:
    // 0x1d5d8a0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d5d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d5d8a4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d5d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d5d8a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d5d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d8ac: 0xc75735c  jal         func_1D5CD70
    ctx->pc = 0x1D5D8ACu;
    SET_GPR_U32(ctx, 31, 0x1D5D8B4u);
    ctx->pc = 0x1D5D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D8ACu;
    // 0x1d5d8b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD70u, 0x1D5D8ACu, 0x1D5D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D8B4u;
label_1d5d8b4:
    // 0x1d5d8b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5d8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5d8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d8bc: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5D8BCu;
    SET_GPR_U32(ctx, 31, 0x1D5D8C4u);
    ctx->pc = 0x1D5D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D8BCu;
    // 0x1d5d8c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5D8BCu, 0x1D5D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D8C4u;
label_1d5d8c4:
    // 0x1d5d8c4: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d5d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d5d8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d8cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d5d8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5d8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5d8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5d8d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5d8d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5d8dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5d8dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5d8e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5d8e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5d8e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5d8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5d8e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5d8ec: 0x875735e  j           func_1D5CD78
    ctx->pc = 0x1D5D8ECu;
    ctx->pc = 0x1D5D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D8ECu;
    // 0x1d5d8f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD78u;
    sub_01D5CD78_0x1d5cd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5D8F4u;
    // 0x1d5d8f4: 0x0  nop
    ctx->pc = 0x1d5d8f4u;
    // NOP
    ctx->pc = 0x1d5d8f8u;
}
