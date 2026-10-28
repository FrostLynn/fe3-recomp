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

// Function: sub_01C52558
// Address: 0x1c52558 - 0x1c52688
void sub_01C52558_0x1c52558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52558_0x1c52558");
#endif

    switch (ctx->pc) {
        case 0x1c52584u: goto label_1c52584;
        case 0x1c52594u: goto label_1c52594;
        case 0x1c525a0u: goto label_1c525a0;
        case 0x1c525b0u: goto label_1c525b0;
        case 0x1c525bcu: goto label_1c525bc;
        case 0x1c525ccu: goto label_1c525cc;
        case 0x1c525f8u: goto label_1c525f8;
        case 0x1c52604u: goto label_1c52604;
        case 0x1c52614u: goto label_1c52614;
        case 0x1c52624u: goto label_1c52624;
        case 0x1c52630u: goto label_1c52630;
        case 0x1c52644u: goto label_1c52644;
        default: break;
    }

    ctx->pc = 0x1c52558u;

    // 0x1c52558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c52558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c5255c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c5255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c52560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52564: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c52564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52568: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c52568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c5256c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c5256cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52570: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c52570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c52574: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c52574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c52578: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c52578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c5257c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5257Cu;
    SET_GPR_U32(ctx, 31, 0x1C52584u);
    ctx->pc = 0x1C52580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5257Cu;
    // 0x1c52580: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5257Cu, 0x1C52584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52584u;
label_1c52584:
    // 0x1c52584: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c52584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c52588: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c52588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c5258c: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C5258Cu;
    SET_GPR_U32(ctx, 31, 0x1C52594u);
    ctx->pc = 0x1C52590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5258Cu;
    // 0x1c52590: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C5258Cu, 0x1C52594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52594u;
label_1c52594:
    // 0x1c52594: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c52598: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52598u;
    SET_GPR_U32(ctx, 31, 0x1C525A0u);
    ctx->pc = 0x1C5259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52598u;
    // 0x1c5259c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52598u, 0x1C525A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525A0u;
label_1c525a0:
    // 0x1c525a0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c525a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c525a4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c525a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c525a8: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C525A8u;
    SET_GPR_U32(ctx, 31, 0x1C525B0u);
    ctx->pc = 0x1C525ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C525A8u;
    // 0x1c525ac: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C525A8u, 0x1C525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525B0u;
label_1c525b0:
    // 0x1c525b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c525b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c525b4: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C525B4u;
    SET_GPR_U32(ctx, 31, 0x1C525BCu);
    ctx->pc = 0x1C525B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C525B4u;
    // 0x1c525b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C525B4u, 0x1C525BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525BCu;
label_1c525bc:
    // 0x1c525bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c525bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c525c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c525c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525c4: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C525C4u;
    SET_GPR_U32(ctx, 31, 0x1C525CCu);
    ctx->pc = 0x1C525C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C525C4u;
    // 0x1c525c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C525C4u, 0x1C525CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525CCu;
label_1c525cc:
    // 0x1c525cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c525ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c525d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c525d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c525d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c525d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c525d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525dc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c525dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c525e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c525e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c525e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c525e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c525e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c525ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525f0: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C525F0u;
    SET_GPR_U32(ctx, 31, 0x1C525F8u);
    ctx->pc = 0x1C525F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C525F0u;
    // 0x1c525f4: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C525F0u, 0x1C525F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525F8u;
label_1c525f8:
    // 0x1c525f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c525f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c525fc: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C525FCu;
    SET_GPR_U32(ctx, 31, 0x1C52604u);
    ctx->pc = 0x1C52600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C525FCu;
    // 0x1c52600: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C525FCu, 0x1C52604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52604u;
label_1c52604:
    // 0x1c52604: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c52604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c52608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5260c: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C5260Cu;
    SET_GPR_U32(ctx, 31, 0x1C52614u);
    ctx->pc = 0x1C52610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5260Cu;
    // 0x1c52610: 0x24050123  addiu       $a1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C5260Cu, 0x1C52614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52614u;
label_1c52614:
    // 0x1c52614: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c52614u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c52618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5261c: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C5261Cu;
    SET_GPR_U32(ctx, 31, 0x1C52624u);
    ctx->pc = 0x1C52620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5261Cu;
    // 0x1c52620: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C5261Cu, 0x1C52624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52624u;
label_1c52624:
    // 0x1c52624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52628: 0xc713e6a  jal         func_1C4F9A8
    ctx->pc = 0x1C52628u;
    SET_GPR_U32(ctx, 31, 0x1C52630u);
    ctx->pc = 0x1C5262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52628u;
    // 0x1c5262c: 0x240500be  addiu       $a1, $zero, 0xBE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A8u, 0x1C52628u, 0x1C52630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52630u;
label_1c52630:
    // 0x1c52630: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1c52630u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1c52634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52638: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c52638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c5263c: 0xc713e76  jal         func_1C4F9D8
    ctx->pc = 0x1C5263Cu;
    SET_GPR_U32(ctx, 31, 0x1C52644u);
    ctx->pc = 0x1C52640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5263Cu;
    // 0x1c52640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9D8u, 0x1C5263Cu, 0x1C52644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52644u;
label_1c52644:
    // 0x1c52644: 0x264d0200  addiu       $t5, $s2, 0x200
    ctx->pc = 0x1c52644u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x1c52648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5264c: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1c5264cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1c52650: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1c52650u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52654: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52658: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c52658u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c5265c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c5265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c52660: 0xa1cc6426  sb          $t4, 0x6426($t6)
    ctx->pc = 0x1c52660u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 25638), (uint8_t)GPR_U32(ctx, 12));
    // 0x1c52664: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1c52664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c52668: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1c52668u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1c5266c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c5266cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c52670: 0xa1cc67b6  sb          $t4, 0x67B6($t6)
    ctx->pc = 0x1c52670u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 26550), (uint8_t)GPR_U32(ctx, 12));
    // 0x1c52674: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52678: 0xa24f0025  sb          $t7, 0x25($s2)
    ctx->pc = 0x1c52678u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c5267c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c5267cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52680: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52680u;
        // 0x1c52684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52688u;
}
