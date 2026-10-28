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

// Function: sub_01D3D778
// Address: 0x1d3d778 - 0x1d3d880
void sub_01D3D778_0x1d3d778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3D778_0x1d3d778");
#endif

    switch (ctx->pc) {
        case 0x1d3d794u: goto label_1d3d794;
        case 0x1d3d79cu: goto label_1d3d79c;
        case 0x1d3d7b0u: goto label_1d3d7b0;
        case 0x1d3d7b8u: goto label_1d3d7b8;
        case 0x1d3d7bcu: goto label_1d3d7bc;
        case 0x1d3d7f8u: goto label_1d3d7f8;
        case 0x1d3d824u: goto label_1d3d824;
        case 0x1d3d830u: goto label_1d3d830;
        case 0x1d3d83cu: goto label_1d3d83c;
        case 0x1d3d850u: goto label_1d3d850;
        case 0x1d3d860u: goto label_1d3d860;
        default: break;
    }

    ctx->pc = 0x1d3d778u;

    // 0x1d3d778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3d77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3d788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3d78c: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3D78Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D794u);
    ctx->pc = 0x1D3D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D78Cu;
    // 0x1d3d790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3D78Cu, 0x1D3D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D794u;
label_1d3d794:
    // 0x1d3d794: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3D794u;
    SET_GPR_U32(ctx, 31, 0x1D3D79Cu);
    ctx->pc = 0x1D3D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D794u;
    // 0x1d3d798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3D794u, 0x1D3D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D79Cu;
label_1d3d79c:
    // 0x1d3d79c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3d79cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d7a0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D7A0u;
    {
        const bool branch_taken_0x1d3d7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D7A0u;
        // 0x1d3d7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d7a0) {
            ctx->pc = 0x1D3D7CCu;
            goto label_1d3d7cc;
        }
    }
    ctx->pc = 0x1D3D7A8u;
    // 0x1d3d7a8: 0xc74ef2c  jal         func_1D3BCB0
    ctx->pc = 0x1D3D7A8u;
    SET_GPR_U32(ctx, 31, 0x1D3D7B0u);
    ctx->pc = 0x1D3BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BCB0u, 0x1D3D7A8u, 0x1D3D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D7B0u;
label_1d3d7b0:
    // 0x1d3d7b0: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3D7B0u;
    SET_GPR_U32(ctx, 31, 0x1D3D7B8u);
    ctx->pc = 0x1D3D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D7B0u;
    // 0x1d3d7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3D7B0u, 0x1D3D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D7B8u;
label_1d3d7b8:
    // 0x1d3d7b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3d7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3d7bc:
    // 0x1d3d7bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d7bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d7c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D7C4u;
        // 0x1d3d7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D7CCu;
label_1d3d7cc:
    // 0x1d3d7cc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3D7CCu;
    {
        const bool branch_taken_0x1d3d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D7CCu;
        // 0x1d3d7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d7cc) {
            ctx->pc = 0x1D3D7BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d7bc;
        }
    }
    ctx->pc = 0x1D3D7D4u;
    // 0x1d3d7d4: 0x0  nop
    ctx->pc = 0x1d3d7d4u;
    // NOP
    // 0x1d3d7d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3d7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3d7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d7e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3d7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3d7e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3d7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d7ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3d7f0: 0xc74ef18  jal         func_1D3BC60
    ctx->pc = 0x1D3D7F0u;
    SET_GPR_U32(ctx, 31, 0x1D3D7F8u);
    ctx->pc = 0x1D3D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D7F0u;
    // 0x1d3d7f4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC60u, 0x1D3D7F0u, 0x1D3D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D7F8u;
label_1d3d7f8:
    // 0x1d3d7f8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3d7fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3d7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3d800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d804: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3d804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3d808: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3d808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d80c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3d80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d810: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3d810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3d814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d818: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d81c: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3D81Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D824u);
    ctx->pc = 0x1D3D820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D81Cu;
    // 0x1d3d820: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3D81Cu, 0x1D3D824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D824u;
label_1d3d824:
    // 0x1d3d824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d828: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3D828u;
    SET_GPR_U32(ctx, 31, 0x1D3D830u);
    ctx->pc = 0x1D3D82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D828u;
    // 0x1d3d82c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3D828u, 0x1D3D830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D830u;
label_1d3d830:
    // 0x1d3d830: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3d830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3d834: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3D834u;
    SET_GPR_U32(ctx, 31, 0x1D3D83Cu);
    ctx->pc = 0x1D3D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D834u;
    // 0x1d3d838: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3D834u, 0x1D3D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D83Cu;
label_1d3d83c:
    // 0x1d3d83c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d3d83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d3d840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3d840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d844: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d3d844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3d848: 0xc74ef1c  jal         func_1D3BC70
    ctx->pc = 0x1D3D848u;
    SET_GPR_U32(ctx, 31, 0x1D3D850u);
    ctx->pc = 0x1D3D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D848u;
    // 0x1d3d84c: 0x240500ee  addiu       $a1, $zero, 0xEE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC70u, 0x1D3D848u, 0x1D3D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D850u;
label_1d3d850:
    // 0x1d3d850: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d858: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3D858u;
    SET_GPR_U32(ctx, 31, 0x1D3D860u);
    ctx->pc = 0x1D3D85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D858u;
    // 0x1d3d85c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3D858u, 0x1D3D860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D860u;
label_1d3d860:
    // 0x1d3d860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3d864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d86c: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1d3d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1d3d870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3d874: 0x874ef1e  j           func_1D3BC78
    ctx->pc = 0x1D3D874u;
    ctx->pc = 0x1D3D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D874u;
    // 0x1d3d878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC78u;
    sub_01D3BC78_0x1d3bc78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D87Cu;
    // 0x1d3d87c: 0x0  nop
    ctx->pc = 0x1d3d87cu;
    // NOP
    ctx->pc = 0x1d3d880u;
}
