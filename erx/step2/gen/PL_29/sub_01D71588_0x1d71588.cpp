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

// Function: sub_01D71588
// Address: 0x1d71588 - 0x1d71678
void sub_01D71588_0x1d71588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71588_0x1d71588");
#endif

    switch (ctx->pc) {
        case 0x1d715b0u: goto label_1d715b0;
        case 0x1d715c0u: goto label_1d715c0;
        case 0x1d715ccu: goto label_1d715cc;
        case 0x1d715dcu: goto label_1d715dc;
        case 0x1d715e8u: goto label_1d715e8;
        case 0x1d71614u: goto label_1d71614;
        case 0x1d71620u: goto label_1d71620;
        case 0x1d71630u: goto label_1d71630;
        case 0x1d71640u: goto label_1d71640;
        case 0x1d7164cu: goto label_1d7164c;
        default: break;
    }

    ctx->pc = 0x1d71588u;

    // 0x1d71588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d71588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7158c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d71590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d71590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d71594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d71594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d71598: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1d71598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d7159c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7159cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d715a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d715a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d715a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d715a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d715a8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D715A8u;
    SET_GPR_U32(ctx, 31, 0x1D715B0u);
    ctx->pc = 0x1D715ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D715A8u;
    // 0x1d715ac: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D715A8u, 0x1D715B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D715B0u;
label_1d715b0:
    // 0x1d715b0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d715b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d715b4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d715b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d715b8: 0xc75c2ba  jal         func_1D70AE8
    ctx->pc = 0x1D715B8u;
    SET_GPR_U32(ctx, 31, 0x1D715C0u);
    ctx->pc = 0x1D715BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D715B8u;
    // 0x1d715bc: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70AE8u, 0x1D715B8u, 0x1D715C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D715C0u;
label_1d715c0:
    // 0x1d715c0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d715c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d715c4: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D715C4u;
    SET_GPR_U32(ctx, 31, 0x1D715CCu);
    ctx->pc = 0x1D715C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D715C4u;
    // 0x1d715c8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D715C4u, 0x1D715CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D715CCu;
label_1d715cc:
    // 0x1d715cc: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d715ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d715d0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d715d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d715d4: 0xc75c2ba  jal         func_1D70AE8
    ctx->pc = 0x1D715D4u;
    SET_GPR_U32(ctx, 31, 0x1D715DCu);
    ctx->pc = 0x1D715D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D715D4u;
    // 0x1d715d8: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70AE8u, 0x1D715D4u, 0x1D715DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D715DCu;
label_1d715dc:
    // 0x1d715dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d715dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d715e0: 0xc75c00e  jal         func_1D70038
    ctx->pc = 0x1D715E0u;
    SET_GPR_U32(ctx, 31, 0x1D715E8u);
    ctx->pc = 0x1D715E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D715E0u;
    // 0x1d715e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70038u, 0x1D715E0u, 0x1D715E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D715E8u;
label_1d715e8:
    // 0x1d715e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d715e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d715ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d715ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d715f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d715f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d715f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d715f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d715f8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d715f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d715fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d715fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71600: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d71600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d71604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d71608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7160c: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D7160Cu;
    SET_GPR_U32(ctx, 31, 0x1D71614u);
    ctx->pc = 0x1D71610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7160Cu;
    // 0x1d71610: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D7160Cu, 0x1D71614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71614u;
label_1d71614:
    // 0x1d71614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71618: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D71618u;
    SET_GPR_U32(ctx, 31, 0x1D71620u);
    ctx->pc = 0x1D7161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71618u;
    // 0x1d7161c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D71618u, 0x1D71620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71620u;
label_1d71620:
    // 0x1d71620: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d71620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d71624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d71624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71628: 0xc75c012  jal         func_1D70048
    ctx->pc = 0x1D71628u;
    SET_GPR_U32(ctx, 31, 0x1D71630u);
    ctx->pc = 0x1D7162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71628u;
    // 0x1d7162c: 0x2405012d  addiu       $a1, $zero, 0x12D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70048u, 0x1D71628u, 0x1D71630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71630u;
label_1d71630:
    // 0x1d71630: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d71630u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d71634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71638: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D71638u;
    SET_GPR_U32(ctx, 31, 0x1D71640u);
    ctx->pc = 0x1D7163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71638u;
    // 0x1d7163c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D71638u, 0x1D71640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71640u;
label_1d71640:
    // 0x1d71640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71644: 0xc75c014  jal         func_1D70050
    ctx->pc = 0x1D71644u;
    SET_GPR_U32(ctx, 31, 0x1D7164Cu);
    ctx->pc = 0x1D71648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71644u;
    // 0x1d71648: 0x240500c5  addiu       $a1, $zero, 0xC5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70050u, 0x1D71644u, 0x1D7164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7164Cu;
label_1d7164c:
    // 0x1d7164c: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1d7164cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d71650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71654: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d71654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d71658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d71658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7165c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7165cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71660: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71660u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d71664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d71664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71668: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1d71668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7166c: 0x875c01e  j           func_1D70078
    ctx->pc = 0x1D7166Cu;
    ctx->pc = 0x1D71670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7166Cu;
    // 0x1d71670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70078u;
    sub_01D70078_0x1d70078(rdram, ctx, runtime); return;
    ctx->pc = 0x1D71674u;
    // 0x1d71674: 0x0  nop
    ctx->pc = 0x1d71674u;
    // NOP
    ctx->pc = 0x1d71678u;
}
