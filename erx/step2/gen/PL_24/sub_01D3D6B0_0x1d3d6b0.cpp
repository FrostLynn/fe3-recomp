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

// Function: sub_01D3D6B0
// Address: 0x1d3d6b0 - 0x1d3d770
void sub_01D3D6B0_0x1d3d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3D6B0_0x1d3d6b0");
#endif

    switch (ctx->pc) {
        case 0x1d3d6c4u: goto label_1d3d6c4;
        case 0x1d3d6d8u: goto label_1d3d6d8;
        case 0x1d3d6dcu: goto label_1d3d6dc;
        case 0x1d3d714u: goto label_1d3d714;
        case 0x1d3d748u: goto label_1d3d748;
        case 0x1d3d754u: goto label_1d3d754;
        default: break;
    }

    ctx->pc = 0x1d3d6b0u;

    // 0x1d3d6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3d6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d6b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3d6bc: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3D6BCu;
    SET_GPR_U32(ctx, 31, 0x1D3D6C4u);
    ctx->pc = 0x1D3D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D6BCu;
    // 0x1d3d6c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3D6BCu, 0x1D3D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D6C4u;
label_1d3d6c4:
    // 0x1d3d6c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3d6c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d6c8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3D6C8u;
    {
        const bool branch_taken_0x1d3d6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6C8u;
        // 0x1d3d6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6c8) {
            ctx->pc = 0x1D3D6ECu;
            goto label_1d3d6ec;
        }
    }
    ctx->pc = 0x1D3D6D0u;
    // 0x1d3d6d0: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3D6D0u;
    SET_GPR_U32(ctx, 31, 0x1D3D6D8u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3D6D0u, 0x1D3D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D6D8u;
label_1d3d6d8:
    // 0x1d3d6d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3d6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3d6dc:
    // 0x1d3d6dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d6e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3d6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6E4u;
        // 0x1d3d6e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D6ECu;
label_1d3d6ec:
    // 0x1d3d6ec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3D6ECu;
    {
        const bool branch_taken_0x1d3d6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D6ECu;
        // 0x1d3d6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d6ec) {
            ctx->pc = 0x1D3D6DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d6dc;
        }
    }
    ctx->pc = 0x1D3D6F4u;
    // 0x1d3d6f4: 0x0  nop
    ctx->pc = 0x1d3d6f4u;
    // NOP
    // 0x1d3d6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3d6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3d700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3d704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3d704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d708: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d3d708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d3d70c: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3D70Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D714u);
    ctx->pc = 0x1D3D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D70Cu;
    // 0x1d3d710: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3D70Cu, 0x1D3D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D714u;
label_1d3d714:
    // 0x1d3d714: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3d714u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3d718: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3d718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3d71c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3d71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3d720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d724: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1d3d724u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d3d728: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3d728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3d72c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3d72cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d734: 0x91cf7266  lbu         $t7, 0x7266($t6)
    ctx->pc = 0x1d3d734u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 29286)));
    // 0x1d3d738: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3D738u;
    {
        const bool branch_taken_0x1d3d738 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D738u;
        // 0x1d3d73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d738) {
            ctx->pc = 0x1D3D74Cu;
            goto label_1d3d74c;
        }
    }
    ctx->pc = 0x1D3D740u;
    // 0x1d3d740: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3D740u;
    SET_GPR_U32(ctx, 31, 0x1D3D748u);
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3D740u, 0x1D3D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D748u;
label_1d3d748:
    // 0x1d3d748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3d74c:
    // 0x1d3d74c: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3D74Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D754u);
    ctx->pc = 0x1D3D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D74Cu;
    // 0x1d3d750: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3D74Cu, 0x1D3D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D754u;
label_1d3d754:
    // 0x1d3d754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3d764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d768: 0x874ef10  j           func_1D3BC40
    ctx->pc = 0x1D3D768u;
    ctx->pc = 0x1D3D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D768u;
    // 0x1d3d76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    sub_01D3BC40_0x1d3bc40(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D770u;
}
