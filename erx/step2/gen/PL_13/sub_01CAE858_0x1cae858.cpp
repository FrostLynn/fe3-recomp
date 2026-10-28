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

// Function: sub_01CAE858
// Address: 0x1cae858 - 0x1cae948
void sub_01CAE858_0x1cae858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE858_0x1cae858");
#endif

    switch (ctx->pc) {
        case 0x1cae880u: goto label_1cae880;
        case 0x1cae890u: goto label_1cae890;
        case 0x1cae89cu: goto label_1cae89c;
        case 0x1cae8acu: goto label_1cae8ac;
        case 0x1cae8b8u: goto label_1cae8b8;
        case 0x1cae8e4u: goto label_1cae8e4;
        case 0x1cae8f0u: goto label_1cae8f0;
        case 0x1cae900u: goto label_1cae900;
        case 0x1cae910u: goto label_1cae910;
        case 0x1cae91cu: goto label_1cae91c;
        default: break;
    }

    ctx->pc = 0x1cae858u;

    // 0x1cae858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae864: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae868: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1cae868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cae86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae870: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cae870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cae874: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cae874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cae878: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE878u;
    SET_GPR_U32(ctx, 31, 0x1CAE880u);
    ctx->pc = 0x1CAE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE878u;
    // 0x1cae87c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE878u, 0x1CAE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE880u;
label_1cae880:
    // 0x1cae880: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cae880u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cae884: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cae884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cae888: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAE888u;
    SET_GPR_U32(ctx, 31, 0x1CAE890u);
    ctx->pc = 0x1CAE88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE888u;
    // 0x1cae88c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAE888u, 0x1CAE890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE890u;
label_1cae890:
    // 0x1cae890: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cae890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cae894: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE894u;
    SET_GPR_U32(ctx, 31, 0x1CAE89Cu);
    ctx->pc = 0x1CAE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE894u;
    // 0x1cae898: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE894u, 0x1CAE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE89Cu;
label_1cae89c:
    // 0x1cae89c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cae89cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cae8a0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cae8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cae8a4: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAE8A4u;
    SET_GPR_U32(ctx, 31, 0x1CAE8ACu);
    ctx->pc = 0x1CAE8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8A4u;
    // 0x1cae8a8: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAE8A4u, 0x1CAE8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE8ACu;
label_1cae8ac:
    // 0x1cae8ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae8b0: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CAE8B0u;
    SET_GPR_U32(ctx, 31, 0x1CAE8B8u);
    ctx->pc = 0x1CAE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8B0u;
    // 0x1cae8b4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CAE8B0u, 0x1CAE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE8B8u;
label_1cae8b8:
    // 0x1cae8b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cae8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cae8bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cae8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae8c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae8c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cae8c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae8cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae8ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8dc: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE8DCu;
    SET_GPR_U32(ctx, 31, 0x1CAE8E4u);
    ctx->pc = 0x1CAE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8DCu;
    // 0x1cae8e0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE8DCu, 0x1CAE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE8E4u;
label_1cae8e4:
    // 0x1cae8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8e8: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE8E8u;
    SET_GPR_U32(ctx, 31, 0x1CAE8F0u);
    ctx->pc = 0x1CAE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8E8u;
    // 0x1cae8ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE8E8u, 0x1CAE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE8F0u;
label_1cae8f0:
    // 0x1cae8f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cae8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cae8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae8f8: 0xc72b452  jal         func_1CAD148
    ctx->pc = 0x1CAE8F8u;
    SET_GPR_U32(ctx, 31, 0x1CAE900u);
    ctx->pc = 0x1CAE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE8F8u;
    // 0x1cae8fc: 0x24050129  addiu       $a1, $zero, 0x129 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD148u, 0x1CAE8F8u, 0x1CAE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE900u;
label_1cae900:
    // 0x1cae900: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cae900u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cae904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae908: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAE908u;
    SET_GPR_U32(ctx, 31, 0x1CAE910u);
    ctx->pc = 0x1CAE90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE908u;
    // 0x1cae90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAE908u, 0x1CAE910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE910u;
label_1cae910:
    // 0x1cae910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae914: 0xc72b454  jal         func_1CAD150
    ctx->pc = 0x1CAE914u;
    SET_GPR_U32(ctx, 31, 0x1CAE91Cu);
    ctx->pc = 0x1CAE918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE914u;
    // 0x1cae918: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD150u, 0x1CAE914u, 0x1CAE91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE91Cu;
label_1cae91c:
    // 0x1cae91c: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1cae91cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1cae920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae924: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cae924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cae928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae92c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae938: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1cae938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cae93c: 0x872b45e  j           func_1CAD178
    ctx->pc = 0x1CAE93Cu;
    ctx->pc = 0x1CAE940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE93Cu;
    // 0x1cae940: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD178u;
    sub_01CAD178_0x1cad178(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE944u;
    // 0x1cae944: 0x0  nop
    ctx->pc = 0x1cae944u;
    // NOP
    ctx->pc = 0x1cae948u;
}
