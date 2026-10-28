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

// Function: sub_01DBD568
// Address: 0x1dbd568 - 0x1dbd800
void sub_01DBD568_0x1dbd568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD568_0x1dbd568");
#endif

    switch (ctx->pc) {
        case 0x1dbd5a4u: goto label_1dbd5a4;
        case 0x1dbd5c0u: goto label_1dbd5c0;
        case 0x1dbd5d0u: goto label_1dbd5d0;
        case 0x1dbd5e0u: goto label_1dbd5e0;
        case 0x1dbd600u: goto label_1dbd600;
        case 0x1dbd618u: goto label_1dbd618;
        case 0x1dbd634u: goto label_1dbd634;
        case 0x1dbd670u: goto label_1dbd670;
        case 0x1dbd68cu: goto label_1dbd68c;
        case 0x1dbd6b0u: goto label_1dbd6b0;
        case 0x1dbd6e0u: goto label_1dbd6e0;
        case 0x1dbd700u: goto label_1dbd700;
        case 0x1dbd704u: goto label_1dbd704;
        case 0x1dbd764u: goto label_1dbd764;
        default: break;
    }

    ctx->pc = 0x1dbd568u;

    // 0x1dbd568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dbd568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dbd56c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dbd56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dbd570: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dbd570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dbd574: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dbd574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1dbd578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dbd578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd57c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x1dbd57cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1dbd580: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dbd580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dbd584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dbd588: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dbd588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dbd58c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dbd58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1dbd590: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dbd590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dbd594: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1dbd594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dbd598: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1dbd598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dbd59c: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD59Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD5A4u);
    ctx->pc = 0x1DBD5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD59Cu;
    // 0x1dbd5a0: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD59Cu, 0x1DBD5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD5A4u;
label_1dbd5a4:
    // 0x1dbd5a4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1dbd5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd5a8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1dbd5a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbd5ac: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1DBD5ACu;
    {
        const bool branch_taken_0x1dbd5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBD5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD5ACu;
        // 0x1dbd5b0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd5ac) {
            ctx->pc = 0x1DBD63Cu;
            goto label_1dbd63c;
        }
    }
    ctx->pc = 0x1DBD5B4u;
    // 0x1dbd5b4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1dbd5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbd5b8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD5B8u;
    SET_GPR_U32(ctx, 31, 0x1DBD5C0u);
    ctx->pc = 0x1DBD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD5B8u;
    // 0x1dbd5bc: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD5B8u, 0x1DBD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD5C0u;
label_1dbd5c0:
    // 0x1dbd5c0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1dbd5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbd5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbd5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd5c8: 0xc76ef3c  jal         func_1DBBCF0
    ctx->pc = 0x1DBD5C8u;
    SET_GPR_U32(ctx, 31, 0x1DBD5D0u);
    ctx->pc = 0x1DBD5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD5C8u;
    // 0x1dbd5cc: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCF0u, 0x1DBD5C8u, 0x1DBD5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD5D0u;
label_1dbd5d0:
    // 0x1dbd5d0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1dbd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbd5d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbd5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd5d8: 0xc76ef3e  jal         func_1DBBCF8
    ctx->pc = 0x1DBD5D8u;
    SET_GPR_U32(ctx, 31, 0x1DBD5E0u);
    ctx->pc = 0x1DBD5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD5D8u;
    // 0x1dbd5dc: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCF8u, 0x1DBD5D8u, 0x1DBD5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD5E0u;
label_1dbd5e0:
    // 0x1dbd5e0: 0x8e0e024c  lw          $t6, 0x24C($s0)
    ctx->pc = 0x1dbd5e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1dbd5e4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbd5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbd5e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1dbd5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd5ec: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1dbd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1dbd5f0: 0x25f04110  addiu       $s0, $t7, 0x4110
    ctx->pc = 0x1dbd5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16656));
    // 0x1dbd5f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd5f8: 0xc76ee4a  jal         func_1DBB928
    ctx->pc = 0x1DBD5F8u;
    SET_GPR_U32(ctx, 31, 0x1DBD600u);
    ctx->pc = 0x1DBD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD5F8u;
    // 0x1dbd5fc: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB928u, 0x1DBD5F8u, 0x1DBD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD600u;
label_1dbd600:
    // 0x1dbd600: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1dbd600u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1dbd604: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1dbd604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1dbd608: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x1dbd608u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1dbd60c: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dbd60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dbd610: 0xc76ee4a  jal         func_1DBB928
    ctx->pc = 0x1DBD610u;
    SET_GPR_U32(ctx, 31, 0x1DBD618u);
    ctx->pc = 0x1DBD614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD610u;
    // 0x1dbd614: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB928u, 0x1DBD610u, 0x1DBD618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD618u;
label_1dbd618:
    // 0x1dbd618: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBD618u;
    {
        const bool branch_taken_0x1dbd618 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD618u;
        // 0x1dbd61c: 0xe6140074  swc1        $f20, 0x74($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd618) {
            ctx->pc = 0x1DBD638u;
            goto label_1dbd638;
        }
    }
    ctx->pc = 0x1DBD620u;
    // 0x1dbd620: 0x8eaf024c  lw          $t7, 0x24C($s5)
    ctx->pc = 0x1dbd620u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 588)));
    // 0x1dbd624: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1dbd624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1dbd628: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dbd628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dbd62c: 0xc76ee4a  jal         func_1DBB928
    ctx->pc = 0x1DBD62Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD634u);
    ctx->pc = 0x1DBD630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD62Cu;
    // 0x1dbd630: 0x24a500e0  addiu       $a1, $a1, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB928u, 0x1DBD62Cu, 0x1DBD634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD634u;
label_1dbd634:
    // 0x1dbd634: 0xe61400b4  swc1        $f20, 0xB4($s0)
    ctx->pc = 0x1dbd634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_1dbd638:
    // 0x1dbd638: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1dbd638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dbd63c:
    // 0x1dbd63c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1dbd63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd640: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1dbd640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1dbd644: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1dbd644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dbd648: 0x67940  sll         $t7, $a2, 5
    ctx->pc = 0x1dbd648u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1dbd64c: 0x1f37021  addu        $t6, $t7, $s3
    ctx->pc = 0x1dbd64cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1dbd650: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x1dbd650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1dbd654: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1dbd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd658: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dbd658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbd65c: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1DBD65Cu;
    {
        const bool branch_taken_0x1dbd65c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DBD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD65Cu;
        // 0x1dbd660: 0x3c0f01dc  lui         $t7, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd65c) {
            ctx->pc = 0x1DBD72Cu;
            goto label_1dbd72c;
        }
    }
    ctx->pc = 0x1DBD664u;
    // 0x1dbd664: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1dbd664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbd668: 0x25f14110  addiu       $s1, $t7, 0x4110
    ctx->pc = 0x1dbd668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 16656));
    // 0x1dbd66c: 0x8dce0004  lw          $t6, 0x4($t6)
    ctx->pc = 0x1dbd66cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
label_1dbd670:
    // 0x1dbd670: 0x11d00039  beq         $t6, $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DBD670u;
    {
        const bool branch_taken_0x1dbd670 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 16));
        ctx->pc = 0x1DBD674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD670u;
        // 0x1dbd674: 0x29cf0003  slti        $t7, $t6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd670) {
            ctx->pc = 0x1DBD758u;
            goto label_1dbd758;
        }
    }
    ctx->pc = 0x1DBD678u;
    // 0x1dbd678: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBD678u;
    {
        const bool branch_taken_0x1dbd678 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd678) {
            ctx->pc = 0x1DBD67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD678u;
            // 0x1dbd67c: 0x63140  sll         $a2, $a2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD690u;
            goto label_1dbd690;
        }
    }
    ctx->pc = 0x1DBD680u;
    // 0x1dbd680: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dbd680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbd684: 0x11cf002a  beq         $t6, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DBD684u;
    {
        const bool branch_taken_0x1dbd684 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DBD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD684u;
        // 0x1dbd688: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd684) {
            ctx->pc = 0x1DBD730u;
            goto label_1dbd730;
        }
    }
    ctx->pc = 0x1DBD68Cu;
label_1dbd68c:
    // 0x1dbd68c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1dbd68cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1dbd690:
    // 0x1dbd690: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dbd690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd694: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x1dbd694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1dbd698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbd698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd69c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x1dbd69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dbd6a0: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1dbd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1dbd6a4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1dbd6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1dbd6a8: 0xc76ef40  jal         func_1DBBD00
    ctx->pc = 0x1DBD6A8u;
    SET_GPR_U32(ctx, 31, 0x1DBD6B0u);
    ctx->pc = 0x1DBD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD6A8u;
    // 0x1dbd6ac: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD00u, 0x1DBD6A8u, 0x1DBD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD6B0u;
label_1dbd6b0:
    // 0x1dbd6b0: 0x8e4f0024  lw          $t7, 0x24($s2)
    ctx->pc = 0x1dbd6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1dbd6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbd6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd6b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dbd6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1dbd6bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dbd6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbd6c0: 0xf7940  sll         $t7, $t7, 5
    ctx->pc = 0x1dbd6c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x1dbd6c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbd6c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd6c8: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x1dbd6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1dbd6cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbd6ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd6d0: 0x8de5000c  lw          $a1, 0xC($t7)
    ctx->pc = 0x1dbd6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x1dbd6d4: 0x8de60008  lw          $a2, 0x8($t7)
    ctx->pc = 0x1dbd6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x1dbd6d8: 0xc76ef24  jal         func_1DBBC90
    ctx->pc = 0x1DBD6D8u;
    SET_GPR_U32(ctx, 31, 0x1DBD6E0u);
    ctx->pc = 0x1DBD6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD6D8u;
    // 0x1dbd6dc: 0x24a8ffff  addiu       $t0, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBC90u, 0x1DBD6D8u, 0x1DBD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD6E0u;
label_1dbd6e0:
    // 0x1dbd6e0: 0x8e4f0024  lw          $t7, 0x24($s2)
    ctx->pc = 0x1dbd6e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1dbd6e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1dbd6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd6e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dbd6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd6ec: 0xf7940  sll         $t7, $t7, 5
    ctx->pc = 0x1dbd6ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 5));
    // 0x1dbd6f0: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x1dbd6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1dbd6f4: 0x8de6000c  lw          $a2, 0xC($t7)
    ctx->pc = 0x1dbd6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x1dbd6f8: 0xc76ef38  jal         func_1DBBCE0
    ctx->pc = 0x1DBD6F8u;
    SET_GPR_U32(ctx, 31, 0x1DBD700u);
    ctx->pc = 0x1DBD6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD6F8u;
    // 0x1dbd6fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCE0u, 0x1DBD6F8u, 0x1DBD700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD700u;
label_1dbd700:
    // 0x1dbd700: 0x8e4f0024  lw          $t7, 0x24($s2)
    ctx->pc = 0x1dbd700u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1dbd704:
    // 0x1dbd704: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x1dbd704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd708: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dbd708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dbd70c: 0xae4f0024  sw          $t7, 0x24($s2)
    ctx->pc = 0x1dbd70cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 15));
    // 0x1dbd710: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x1dbd710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1dbd714: 0x67940  sll         $t7, $a2, 5
    ctx->pc = 0x1dbd714u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1dbd718: 0x1f37021  addu        $t6, $t7, $s3
    ctx->pc = 0x1dbd718u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x1dbd71c: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1dbd71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd720: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1dbd720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dbd724: 0x4503ffd2  bc1tl       . + 4 + (-0x2E << 2)
    ctx->pc = 0x1DBD724u;
    {
        const bool branch_taken_0x1dbd724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dbd724) {
            ctx->pc = 0x1DBD728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD724u;
            // 0x1dbd728: 0x8dce0004  lw          $t6, 0x4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd670;
        }
    }
    ctx->pc = 0x1DBD72Cu;
label_1dbd72c:
    // 0x1dbd72c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbd72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd730:
    // 0x1dbd730: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dbd730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbd734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dbd734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbd738: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dbd738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbd73c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dbd73cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbd740: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dbd740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbd744: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dbd744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dbd748: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dbd748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dbd74c: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x1dbd74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbd750: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD750u;
        // 0x1dbd754: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD758u;
label_1dbd758:
    // 0x1dbd758: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1dbd758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1dbd75c: 0xc76ef3e  jal         func_1DBBCF8
    ctx->pc = 0x1DBD75Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD764u);
    ctx->pc = 0x1DBD760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD75Cu;
    // 0x1dbd760: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCF8u, 0x1DBD75Cu, 0x1DBD764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD764u;
label_1dbd764:
    // 0x1dbd764: 0x5040ffe7  beql        $v0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1DBD764u;
    {
        const bool branch_taken_0x1dbd764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbd764) {
            ctx->pc = 0x1DBD768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBD764u;
            // 0x1dbd768: 0x8e4f0024  lw          $t7, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd704;
        }
    }
    ctx->pc = 0x1DBD76Cu;
    // 0x1dbd76c: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x1DBD76Cu;
    {
        const bool branch_taken_0x1dbd76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD76Cu;
        // 0x1dbd770: 0x8e460024  lw          $a2, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd76c) {
            ctx->pc = 0x1DBD68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbd68c;
        }
    }
    ctx->pc = 0x1DBD774u;
    // 0x1dbd774: 0x0  nop
    ctx->pc = 0x1dbd774u;
    // NOP
    // 0x1dbd778: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbd778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd77c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1dbd77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1dbd780: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1dbd780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd784: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1dbd784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1dbd788: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1dbd788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd78c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1dbd78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1dbd790: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1dbd790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd794: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1dbd794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1dbd798: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1dbd798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd79c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1dbd79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1dbd7a0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x1dbd7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7a4: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x1dbd7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1dbd7a8: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1dbd7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd7ac: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1dbd7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1dbd7b0: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x1dbd7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7b4: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x1dbd7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1dbd7b8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1dbd7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd7bc: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1dbd7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1dbd7c0: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1dbd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7c4: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1dbd7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1dbd7c8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1dbd7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd7cc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1dbd7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1dbd7d0: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x1dbd7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7d4: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x1dbd7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1dbd7d8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x1dbd7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd7dc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1dbd7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1dbd7e0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x1dbd7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7e4: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x1dbd7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1dbd7e8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x1dbd7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbd7ec: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1dbd7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1dbd7f0: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x1dbd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbd7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD7F4u;
        // 0x1dbd7f8: 0xe481003c  swc1        $f1, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBD7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBD7FCu;
    // 0x1dbd7fc: 0x0  nop
    ctx->pc = 0x1dbd7fcu;
    // NOP
    ctx->pc = 0x1dbd800u;
}
