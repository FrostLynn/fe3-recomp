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

// Function: sub_01D3D9C0
// Address: 0x1d3d9c0 - 0x1d3dac0
void sub_01D3D9C0_0x1d3d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3D9C0_0x1d3d9c0");
#endif

    switch (ctx->pc) {
        case 0x1d3d9dcu: goto label_1d3d9dc;
        case 0x1d3d9e4u: goto label_1d3d9e4;
        case 0x1d3d9f8u: goto label_1d3d9f8;
        case 0x1d3d9fcu: goto label_1d3d9fc;
        case 0x1d3da38u: goto label_1d3da38;
        case 0x1d3da60u: goto label_1d3da60;
        case 0x1d3da6cu: goto label_1d3da6c;
        case 0x1d3da78u: goto label_1d3da78;
        case 0x1d3da8cu: goto label_1d3da8c;
        case 0x1d3daa4u: goto label_1d3daa4;
        default: break;
    }

    ctx->pc = 0x1d3d9c0u;

    // 0x1d3d9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3d9c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d9c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d9d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3d9d4: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3D9D4u;
    SET_GPR_U32(ctx, 31, 0x1D3D9DCu);
    ctx->pc = 0x1D3D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D9D4u;
    // 0x1d3d9d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3D9D4u, 0x1D3D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D9DCu;
label_1d3d9dc:
    // 0x1d3d9dc: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3D9DCu;
    SET_GPR_U32(ctx, 31, 0x1D3D9E4u);
    ctx->pc = 0x1D3D9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D9DCu;
    // 0x1d3d9e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3D9DCu, 0x1D3D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D9E4u;
label_1d3d9e4:
    // 0x1d3d9e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3d9e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d9e8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3D9E8u;
    {
        const bool branch_taken_0x1d3d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D9E8u;
        // 0x1d3d9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d9e8) {
            ctx->pc = 0x1D3DA0Cu;
            goto label_1d3da0c;
        }
    }
    ctx->pc = 0x1D3D9F0u;
    // 0x1d3d9f0: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3D9F0u;
    SET_GPR_U32(ctx, 31, 0x1D3D9F8u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3D9F0u, 0x1D3D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D9F8u;
label_1d3d9f8:
    // 0x1d3d9f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3d9fc:
    // 0x1d3d9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3da00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3da04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA04u;
        // 0x1d3da08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DA0Cu;
label_1d3da0c:
    // 0x1d3da0c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3DA0Cu;
    {
        const bool branch_taken_0x1d3da0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DA0Cu;
        // 0x1d3da10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3da0c) {
            ctx->pc = 0x1D3D9FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d9fc;
        }
    }
    ctx->pc = 0x1D3DA14u;
    // 0x1d3da14: 0x0  nop
    ctx->pc = 0x1d3da14u;
    // NOP
    // 0x1d3da18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3da1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3da20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3da24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3da28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3da28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da2c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3da30: 0xc74ef18  jal         func_1D3BC60
    ctx->pc = 0x1D3DA30u;
    SET_GPR_U32(ctx, 31, 0x1D3DA38u);
    ctx->pc = 0x1D3DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA30u;
    // 0x1d3da34: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC60u, 0x1D3DA30u, 0x1D3DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA38u;
label_1d3da38:
    // 0x1d3da38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3da38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3da3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3da3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3da40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3da44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3da44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da48: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3da48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3da4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3da4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3da50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3da54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3da54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da58: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DA58u;
    SET_GPR_U32(ctx, 31, 0x1D3DA60u);
    ctx->pc = 0x1D3DA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA58u;
    // 0x1d3da5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DA58u, 0x1D3DA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA60u;
label_1d3da60:
    // 0x1d3da60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da64: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3DA64u;
    SET_GPR_U32(ctx, 31, 0x1D3DA6Cu);
    ctx->pc = 0x1D3DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA64u;
    // 0x1d3da68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3DA64u, 0x1D3DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA6Cu;
label_1d3da6c:
    // 0x1d3da6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3da70: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DA70u;
    SET_GPR_U32(ctx, 31, 0x1D3DA78u);
    ctx->pc = 0x1D3DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA70u;
    // 0x1d3da74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DA70u, 0x1D3DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA78u;
label_1d3da78:
    // 0x1d3da78: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d3da78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d3da7c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d3da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d3da80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d3da80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3da84: 0xc74ef1c  jal         func_1D3BC70
    ctx->pc = 0x1D3DA84u;
    SET_GPR_U32(ctx, 31, 0x1D3DA8Cu);
    ctx->pc = 0x1D3DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA84u;
    // 0x1d3da88: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC70u, 0x1D3DA84u, 0x1D3DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DA8Cu;
label_1d3da8c:
    // 0x1d3da8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3da8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3da90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3da90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3da94: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d3da94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d3da98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3da9c: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3DA9Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DAA4u);
    ctx->pc = 0x1D3DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DA9Cu;
    // 0x1d3daa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3DA9Cu, 0x1D3DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DAA4u;
label_1d3daa4:
    // 0x1d3daa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3daa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3daa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3daac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3daacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dab0: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x1d3dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x1d3dab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3dab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dab8: 0x874ef1e  j           func_1D3BC78
    ctx->pc = 0x1D3DAB8u;
    ctx->pc = 0x1D3DABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DAB8u;
    // 0x1d3dabc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC78u;
    sub_01D3BC78_0x1d3bc78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3DAC0u;
}
