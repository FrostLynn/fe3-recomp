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

// Function: sub_01D3DC20
// Address: 0x1d3dc20 - 0x1d3dd08
void sub_01D3DC20_0x1d3dc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DC20_0x1d3dc20");
#endif

    switch (ctx->pc) {
        case 0x1d3dc34u: goto label_1d3dc34;
        case 0x1d3dc48u: goto label_1d3dc48;
        case 0x1d3dc4cu: goto label_1d3dc4c;
        case 0x1d3dc68u: goto label_1d3dc68;
        case 0x1d3dc74u: goto label_1d3dc74;
        case 0x1d3dcb4u: goto label_1d3dcb4;
        case 0x1d3dce0u: goto label_1d3dce0;
        case 0x1d3dcecu: goto label_1d3dcec;
        case 0x1d3dcf8u: goto label_1d3dcf8;
        default: break;
    }

    ctx->pc = 0x1d3dc20u;

    // 0x1d3dc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3dc24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3dc28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3dc2c: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3DC2Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DC34u);
    ctx->pc = 0x1D3DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC2Cu;
    // 0x1d3dc30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3DC2Cu, 0x1D3DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC34u;
label_1d3dc34:
    // 0x1d3dc34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3dc34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dc38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3DC38u;
    {
        const bool branch_taken_0x1d3dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC38u;
        // 0x1d3dc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dc38) {
            ctx->pc = 0x1D3DC5Cu;
            goto label_1d3dc5c;
        }
    }
    ctx->pc = 0x1D3DC40u;
    // 0x1d3dc40: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3DC40u;
    SET_GPR_U32(ctx, 31, 0x1D3DC48u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3DC40u, 0x1D3DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC48u;
label_1d3dc48:
    // 0x1d3dc48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3dc4c:
    // 0x1d3dc4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3dc4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3dc50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3dc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3dc54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC54u;
        // 0x1d3dc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DC5Cu;
label_1d3dc5c:
    // 0x1d3dc5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3dc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3dc60: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DC60u;
    SET_GPR_U32(ctx, 31, 0x1D3DC68u);
    ctx->pc = 0x1D3DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC60u;
    // 0x1d3dc64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DC60u, 0x1D3DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC68u;
label_1d3dc68:
    // 0x1d3dc68: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d3dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d3dc6c: 0xc74ef24  jal         func_1D3BC90
    ctx->pc = 0x1D3DC6Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DC74u);
    ctx->pc = 0x1D3DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DC6Cu;
    // 0x1d3dc70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC90u, 0x1D3DC6Cu, 0x1D3DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DC74u;
label_1d3dc74:
    // 0x1d3dc74: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D3DC74u;
    {
        const bool branch_taken_0x1d3dc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DC74u;
        // 0x1d3dc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dc74) {
            ctx->pc = 0x1D3DC4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dc4c;
        }
    }
    ctx->pc = 0x1D3DC7Cu;
    // 0x1d3dc7c: 0x0  nop
    ctx->pc = 0x1d3dc7cu;
    // NOP
    // 0x1d3dc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3dc84: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d3dc84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d3dc88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3dc8c: 0x25ee5c48  addiu       $t6, $t7, 0x5C48
    ctx->pc = 0x1d3dc8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 23624));
    // 0x1d3dc90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d3dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d3dc94: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d3dc94u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D45C4Cu));
    // 0x1d3dc98: 0x8ded5c48  lw          $t5, 0x5C48($t7)
    ctx->pc = 0x1d3dc98u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D45C48u));
    // 0x1d3dc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3dc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dca0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d3dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d3dca4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d3dca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d3dca8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d3dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d3dcac: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DCACu;
    SET_GPR_U32(ctx, 31, 0x1D3DCB4u);
    ctx->pc = 0x1D3DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DCACu;
    // 0x1d3dcb0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DCACu, 0x1D3DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DCB4u;
label_1d3dcb4:
    // 0x1d3dcb4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d3dcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d3dcb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3dcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dcbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3dcbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dcc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3dcc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dcc4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3dcc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3dcc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3dcc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dccc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d3dcccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d3dcd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3dcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dcd4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3dcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dcd8: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DCD8u;
    SET_GPR_U32(ctx, 31, 0x1D3DCE0u);
    ctx->pc = 0x1D3DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DCD8u;
    // 0x1d3dcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DCD8u, 0x1D3DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DCE0u;
label_1d3dce0:
    // 0x1d3dce0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3dce4: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DCE4u;
    SET_GPR_U32(ctx, 31, 0x1D3DCECu);
    ctx->pc = 0x1D3DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DCE4u;
    // 0x1d3dce8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DCE4u, 0x1D3DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DCECu;
label_1d3dcec:
    // 0x1d3dcec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dcf0: 0xc74ef26  jal         func_1D3BC98
    ctx->pc = 0x1D3DCF0u;
    SET_GPR_U32(ctx, 31, 0x1D3DCF8u);
    ctx->pc = 0x1D3DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DCF0u;
    // 0x1d3dcf4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC98u, 0x1D3DCF0u, 0x1D3DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DCF8u;
label_1d3dcf8:
    // 0x1d3dcf8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d3dcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3dcfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3dcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3dd00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DD00u;
        // 0x1d3dd04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DD08u;
}
