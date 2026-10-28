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

// Function: sub_01D78470
// Address: 0x1d78470 - 0x1d78560
void sub_01D78470_0x1d78470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78470_0x1d78470");
#endif

    switch (ctx->pc) {
        case 0x1d78498u: goto label_1d78498;
        case 0x1d784a8u: goto label_1d784a8;
        case 0x1d784b4u: goto label_1d784b4;
        case 0x1d784c4u: goto label_1d784c4;
        case 0x1d784d0u: goto label_1d784d0;
        case 0x1d784fcu: goto label_1d784fc;
        case 0x1d78508u: goto label_1d78508;
        case 0x1d78518u: goto label_1d78518;
        case 0x1d78528u: goto label_1d78528;
        case 0x1d78534u: goto label_1d78534;
        default: break;
    }

    ctx->pc = 0x1d78470u;

    // 0x1d78470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d78470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d78474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d78474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d78478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7847c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d78480: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1d78480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d78484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d78484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78488: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d78488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7848c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d7848cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d78490: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D78490u;
    SET_GPR_U32(ctx, 31, 0x1D78498u);
    ctx->pc = 0x1D78494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78490u;
    // 0x1d78494: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D78490u, 0x1D78498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78498u;
label_1d78498:
    // 0x1d78498: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d78498u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7849c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d784a0: 0xc75e08a  jal         func_1D78228
    ctx->pc = 0x1D784A0u;
    SET_GPR_U32(ctx, 31, 0x1D784A8u);
    ctx->pc = 0x1D784A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784A0u;
    // 0x1d784a4: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78228u, 0x1D784A0u, 0x1D784A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D784A8u;
label_1d784a8:
    // 0x1d784a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d784a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d784ac: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D784ACu;
    SET_GPR_U32(ctx, 31, 0x1D784B4u);
    ctx->pc = 0x1D784B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784ACu;
    // 0x1d784b0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D784ACu, 0x1D784B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D784B4u;
label_1d784b4:
    // 0x1d784b4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d784b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d784b8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d784b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d784bc: 0xc75e08a  jal         func_1D78228
    ctx->pc = 0x1D784BCu;
    SET_GPR_U32(ctx, 31, 0x1D784C4u);
    ctx->pc = 0x1D784C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784BCu;
    // 0x1d784c0: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78228u, 0x1D784BCu, 0x1D784C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D784C4u;
label_1d784c4:
    // 0x1d784c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d784c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d784c8: 0xc75ded6  jal         func_1D77B58
    ctx->pc = 0x1D784C8u;
    SET_GPR_U32(ctx, 31, 0x1D784D0u);
    ctx->pc = 0x1D784CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784C8u;
    // 0x1d784cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B58u, 0x1D784C8u, 0x1D784D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D784D0u;
label_1d784d0:
    // 0x1d784d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d784d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d784d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d784d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d784d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d784d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d784dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d784dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d784e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d784e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d784e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d784e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d784e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d784e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d784ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d784ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d784f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d784f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d784f4: 0xc75dee0  jal         func_1D77B80
    ctx->pc = 0x1D784F4u;
    SET_GPR_U32(ctx, 31, 0x1D784FCu);
    ctx->pc = 0x1D784F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D784F4u;
    // 0x1d784f8: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B80u, 0x1D784F4u, 0x1D784FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D784FCu;
label_1d784fc:
    // 0x1d784fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d784fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78500: 0xc75ded8  jal         func_1D77B60
    ctx->pc = 0x1D78500u;
    SET_GPR_U32(ctx, 31, 0x1D78508u);
    ctx->pc = 0x1D78504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78500u;
    // 0x1d78504: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B60u, 0x1D78500u, 0x1D78508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78508u;
label_1d78508:
    // 0x1d78508: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d78508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7850c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78510: 0xc75deda  jal         func_1D77B68
    ctx->pc = 0x1D78510u;
    SET_GPR_U32(ctx, 31, 0x1D78518u);
    ctx->pc = 0x1D78514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78510u;
    // 0x1d78514: 0x2405012e  addiu       $a1, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B68u, 0x1D78510u, 0x1D78518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78518u;
label_1d78518:
    // 0x1d78518: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d78518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d7851c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78520: 0xc75dece  jal         func_1D77B38
    ctx->pc = 0x1D78520u;
    SET_GPR_U32(ctx, 31, 0x1D78528u);
    ctx->pc = 0x1D78524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78520u;
    // 0x1d78524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B38u, 0x1D78520u, 0x1D78528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78528u;
label_1d78528:
    // 0x1d78528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d78528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7852c: 0xc75dedc  jal         func_1D77B70
    ctx->pc = 0x1D7852Cu;
    SET_GPR_U32(ctx, 31, 0x1D78534u);
    ctx->pc = 0x1D78530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7852Cu;
    // 0x1d78530: 0x240500c6  addiu       $a1, $zero, 0xC6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B70u, 0x1D7852Cu, 0x1D78534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78534u;
label_1d78534:
    // 0x1d78534: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1d78534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d78538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d78538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7853c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d7853cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d78540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d78540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d78544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d78548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d78548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7854c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d78550: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1d78550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d78554: 0x875dee6  j           func_1D77B98
    ctx->pc = 0x1D78554u;
    ctx->pc = 0x1D78558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78554u;
    // 0x1d78558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B98u;
    sub_01D77B98_0x1d77b98(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7855Cu;
    // 0x1d7855c: 0x0  nop
    ctx->pc = 0x1d7855cu;
    // NOP
    ctx->pc = 0x1d78560u;
}
