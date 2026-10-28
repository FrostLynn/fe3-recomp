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

// Function: sub_01D78560
// Address: 0x1d78560 - 0x1d787a8
void sub_01D78560_0x1d78560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78560_0x1d78560");
#endif

    switch (ctx->pc) {
        case 0x1d78584u: goto label_1d78584;
        case 0x1d78594u: goto label_1d78594;
        case 0x1d785a0u: goto label_1d785a0;
        case 0x1d785b0u: goto label_1d785b0;
        case 0x1d785bcu: goto label_1d785bc;
        case 0x1d785ccu: goto label_1d785cc;
        case 0x1d785f0u: goto label_1d785f0;
        case 0x1d78614u: goto label_1d78614;
        case 0x1d78634u: goto label_1d78634;
        case 0x1d78650u: goto label_1d78650;
        case 0x1d78658u: goto label_1d78658;
        case 0x1d786b0u: goto label_1d786b0;
        case 0x1d78704u: goto label_1d78704;
        case 0x1d78730u: goto label_1d78730;
        case 0x1d78740u: goto label_1d78740;
        case 0x1d78748u: goto label_1d78748;
        case 0x1d78754u: goto label_1d78754;
        case 0x1d7875cu: goto label_1d7875c;
        case 0x1d78764u: goto label_1d78764;
        case 0x1d78774u: goto label_1d78774;
        default: break;
    }

    ctx->pc = 0x1d78560u;

    // 0x1d78560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d78560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d78564: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d78564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d78568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7856c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7856cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d78570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d78570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d78574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d78574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78578: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d78578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7857c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7857Cu;
    SET_GPR_U32(ctx, 31, 0x1D78584u);
    ctx->pc = 0x1D78580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7857Cu;
    // 0x1d78580: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7857Cu, 0x1D78584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78584u;
label_1d78584:
    // 0x1d78584: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d78584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d78588: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d78588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7858c: 0xc75e08a  jal         func_1D78228
    ctx->pc = 0x1D7858Cu;
    SET_GPR_U32(ctx, 31, 0x1D78594u);
    ctx->pc = 0x1D78590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7858Cu;
    // 0x1d78590: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78228u, 0x1D7858Cu, 0x1D78594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78594u;
label_1d78594:
    // 0x1d78594: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1d78594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d78598: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D78598u;
    SET_GPR_U32(ctx, 31, 0x1D785A0u);
    ctx->pc = 0x1D7859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78598u;
    // 0x1d7859c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D78598u, 0x1D785A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785A0u;
label_1d785a0:
    // 0x1d785a0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d785a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d785a4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d785a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d785a8: 0xc75e08a  jal         func_1D78228
    ctx->pc = 0x1D785A8u;
    SET_GPR_U32(ctx, 31, 0x1D785B0u);
    ctx->pc = 0x1D785ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D785A8u;
    // 0x1d785ac: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78228u, 0x1D785A8u, 0x1D785B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785B0u;
label_1d785b0:
    // 0x1d785b0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d785b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d785b4: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D785B4u;
    SET_GPR_U32(ctx, 31, 0x1D785BCu);
    ctx->pc = 0x1D785B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D785B4u;
    // 0x1d785b8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D785B4u, 0x1D785BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785BCu;
label_1d785bc:
    // 0x1d785bc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d785bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d785c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d785c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d785c4: 0xc75ded6  jal         func_1D77B58
    ctx->pc = 0x1D785C4u;
    SET_GPR_U32(ctx, 31, 0x1D785CCu);
    ctx->pc = 0x1D785C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D785C4u;
    // 0x1d785c8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B58u, 0x1D785C4u, 0x1D785CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785CCu;
label_1d785cc:
    // 0x1d785cc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1d785ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d785d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d785d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d785d4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d785d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d785d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d785d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d785dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d785dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d785e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d785e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d785e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d785e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d785e8: 0xc75dece  jal         func_1D77B38
    ctx->pc = 0x1D785E8u;
    SET_GPR_U32(ctx, 31, 0x1D785F0u);
    ctx->pc = 0x1D785ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D785E8u;
    // 0x1d785ec: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B38u, 0x1D785E8u, 0x1D785F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D785F0u;
label_1d785f0:
    // 0x1d785f0: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d785f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d785f4: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d785f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d785f8: 0x25efd5d0  addiu       $t7, $t7, -0x2A30
    ctx->pc = 0x1d785f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956496));
    // 0x1d785fc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d785fcu;
    { uint32_t bits = FAST_READ32(0x1D7D5D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d78600: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d78600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d78604: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1D78604u;
    {
        const bool branch_taken_0x1d78604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D78608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78604u;
        // 0x1d78608: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78604) {
            ctx->pc = 0x1D78674u;
            goto label_1d78674;
        }
    }
    ctx->pc = 0x1D7860Cu;
    // 0x1d7860c: 0xa2000cf9  sb          $zero, 0xCF9($s0)
    ctx->pc = 0x1d7860cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d78610: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x1d78610u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
label_1d78614:
    // 0x1d78614: 0x8e4e024c  lw          $t6, 0x24C($s2)
    ctx->pc = 0x1d78614u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 588)));
    // 0x1d78618: 0x8dcf4888  lw          $t7, 0x4888($t6)
    ctx->pc = 0x1d78618u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18568)));
    // 0x1d7861c: 0x8dcd0020  lw          $t5, 0x20($t6)
    ctx->pc = 0x1d7861cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x1d78620: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d78620u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d78624: 0x8dd04834  lw          $s0, 0x4834($t6)
    ctx->pc = 0x1d78624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 18484)));
    // 0x1d78628: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d78628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d7862c: 0xc75e086  jal         func_1D78218
    ctx->pc = 0x1D7862Cu;
    SET_GPR_U32(ctx, 31, 0x1D78634u);
    ctx->pc = 0x1D78630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7862Cu;
    // 0x1d78630: 0x8de40000  lw          $a0, 0x0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78218u, 0x1D7862Cu, 0x1D78634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78634u;
label_1d78634:
    // 0x1d78634: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1d78634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1d78638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d78638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7863c: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x1d7863cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d78640: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D78640u;
    {
        const bool branch_taken_0x1d78640 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78640u;
        // 0x1d78644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78640) {
            ctx->pc = 0x1D7865Cu;
            goto label_1d7865c;
        }
    }
    ctx->pc = 0x1D78648u;
    // 0x1d78648: 0xc75dee8  jal         func_1D77BA0
    ctx->pc = 0x1D78648u;
    SET_GPR_U32(ctx, 31, 0x1D78650u);
    ctx->pc = 0x1D77BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77BA0u, 0x1D78648u, 0x1D78650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78650u;
label_1d78650:
    // 0x1d78650: 0xc75ded2  jal         func_1D77B48
    ctx->pc = 0x1D78650u;
    SET_GPR_U32(ctx, 31, 0x1D78658u);
    ctx->pc = 0x1D78654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78650u;
    // 0x1d78654: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B48u, 0x1D78650u, 0x1D78658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78658u;
label_1d78658:
    // 0x1d78658: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d78658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7865c:
    // 0x1d7865c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7865cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d78660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d78664: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d78664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d78668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d78668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7866c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7866Cu;
        // 0x1d78670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78674u;
label_1d78674:
    // 0x1d78674: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D78674u;
    {
        const bool branch_taken_0x1d78674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78674u;
        // 0x1d78678: 0xa20f0021  sb          $t7, 0x21($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78674) {
            ctx->pc = 0x1D78614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d78614;
        }
    }
    ctx->pc = 0x1D7867Cu;
    // 0x1d7867c: 0x0  nop
    ctx->pc = 0x1d7867cu;
    // NOP
    // 0x1d78680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d78680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d78684: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1d78684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1d78688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d78688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7868c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d7868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d78690: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d78690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78694: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1d78694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1d78698: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1d78698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1d7869c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d7869cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d786a0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d786a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d786a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d786a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d786a8: 0xc75ded6  jal         func_1D77B58
    ctx->pc = 0x1D786A8u;
    SET_GPR_U32(ctx, 31, 0x1D786B0u);
    ctx->pc = 0x1D786ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D786A8u;
    // 0x1d786ac: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B58u, 0x1D786A8u, 0x1D786B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D786B0u;
label_1d786b0:
    // 0x1d786b0: 0x70007ca9  por         $t7, $zero, $zero
    ctx->pc = 0x1d786b0u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d786b4: 0xa0510d4c  sb          $s1, 0xD4C($v0)
    ctx->pc = 0x1d786b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3404), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d786b8: 0x7faf0000  sq          $t7, 0x0($sp)
    ctx->pc = 0x1d786b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 15));
    // 0x1d786bc: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1d786bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1d786c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d786c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d786c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d786c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d786c8: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d786c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d786cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d786ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d786d0: 0x25efd5d4  addiu       $t7, $t7, -0x2A2C
    ctx->pc = 0x1d786d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956500));
    // 0x1d786d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d786d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d786d8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d786d8u;
    { uint32_t bits = FAST_READ32(0x1D7D5D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d786dc: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d786dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d786e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1d786e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d786e4: 0x25efd5d8  addiu       $t7, $t7, -0x2A28
    ctx->pc = 0x1d786e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956504));
    // 0x1d786e8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d786e8u;
    { uint32_t bits = FAST_READ32(0x1D7D5D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d786ec: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d786ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d786f0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1d786f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d786f4: 0x25efd5dc  addiu       $t7, $t7, -0x2A24
    ctx->pc = 0x1d786f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956508));
    // 0x1d786f8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d786f8u;
    { uint32_t bits = FAST_READ32(0x1D7D5DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d786fc: 0xc75dec6  jal         func_1D77B18
    ctx->pc = 0x1D786FCu;
    SET_GPR_U32(ctx, 31, 0x1D78704u);
    ctx->pc = 0x1D78700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D786FCu;
    // 0x1d78700: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B18u, 0x1D786FCu, 0x1D78704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78704u;
label_1d78704:
    // 0x1d78704: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d78704u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d78708: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1d78708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d7870c: 0x25efd5e0  addiu       $t7, $t7, -0x2A20
    ctx->pc = 0x1d7870cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956512));
    // 0x1d78710: 0x26040580  addiu       $a0, $s0, 0x580
    ctx->pc = 0x1d78710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x1d78714: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d78714u;
    { uint32_t bits = FAST_READ32(0x1D7D5E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d78718: 0x26100390  addiu       $s0, $s0, 0x390
    ctx->pc = 0x1d78718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x1d7871c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1d7871cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1d78720: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d78720u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d78724: 0x25efd5e4  addiu       $t7, $t7, -0x2A1C
    ctx->pc = 0x1d78724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956516));
    // 0x1d78728: 0xc75e066  jal         func_1D78198
    ctx->pc = 0x1D78728u;
    SET_GPR_U32(ctx, 31, 0x1D78730u);
    ctx->pc = 0x1D7872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78728u;
    // 0x1d7872c: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78198u, 0x1D78728u, 0x1D78730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78730u;
label_1d78730:
    // 0x1d78730: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1d78730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d78734: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d78734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d78738: 0xc75deda  jal         func_1D77B68
    ctx->pc = 0x1D78738u;
    SET_GPR_U32(ctx, 31, 0x1D78740u);
    ctx->pc = 0x1D7873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78738u;
    // 0x1d7873c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B68u, 0x1D78738u, 0x1D78740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78740u;
label_1d78740:
    // 0x1d78740: 0xc75dede  jal         func_1D77B78
    ctx->pc = 0x1D78740u;
    SET_GPR_U32(ctx, 31, 0x1D78748u);
    ctx->pc = 0x1D78744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78740u;
    // 0x1d78744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B78u, 0x1D78740u, 0x1D78748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78748u;
label_1d78748:
    // 0x1d78748: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1d78748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d7874c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7874Cu;
    SET_GPR_U32(ctx, 31, 0x1D78754u);
    ctx->pc = 0x1D78750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7874Cu;
    // 0x1d78750: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7874Cu, 0x1D78754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78754u;
label_1d78754:
    // 0x1d78754: 0xa0510950  sb          $s1, 0x950($v0)
    ctx->pc = 0x1d78754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d78758: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1d78758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1d7875c:
    // 0x1d7875c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7875Cu;
    SET_GPR_U32(ctx, 31, 0x1D78764u);
    ctx->pc = 0x1D78760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7875Cu;
    // 0x1d78760: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7875Cu, 0x1D78764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78764u;
label_1d78764:
    // 0x1d78764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D78764u;
    {
        const bool branch_taken_0x1d78764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78764u;
        // 0x1d78768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78764) {
            ctx->pc = 0x1D78778u;
            goto label_1d78778;
        }
    }
    ctx->pc = 0x1D7876Cu;
    // 0x1d7876c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7876Cu;
    SET_GPR_U32(ctx, 31, 0x1D78774u);
    ctx->pc = 0x1D78770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7876Cu;
    // 0x1d78770: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7876Cu, 0x1D78774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78774u;
label_1d78774:
    // 0x1d78774: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1d78774u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1d78778:
    // 0x1d78778: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d78778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d7877c: 0x2a6f0003  slti        $t7, $s3, 0x3
    ctx->pc = 0x1d7877cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d78780: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D78780u;
    {
        const bool branch_taken_0x1d78780 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d78780) {
            ctx->pc = 0x1D78784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D78780u;
            // 0x1d78784: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7875Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7875c;
        }
    }
    ctx->pc = 0x1D78788u;
    // 0x1d78788: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d78788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7878c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d7878cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d78790: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d78790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d78794: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d78794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d78798: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d78798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7879c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7879Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D787A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7879Cu;
        // 0x1d787a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7879Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D787A4u;
    // 0x1d787a4: 0x0  nop
    ctx->pc = 0x1d787a4u;
    // NOP
    ctx->pc = 0x1d787a8u;
}
