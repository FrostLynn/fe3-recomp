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

// Function: sub_01D28D38
// Address: 0x1d28d38 - 0x1d28e20
void sub_01D28D38_0x1d28d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28D38_0x1d28d38");
#endif

    switch (ctx->pc) {
        case 0x1d28d4cu: goto label_1d28d4c;
        case 0x1d28d60u: goto label_1d28d60;
        case 0x1d28d64u: goto label_1d28d64;
        case 0x1d28d80u: goto label_1d28d80;
        case 0x1d28d8cu: goto label_1d28d8c;
        case 0x1d28dccu: goto label_1d28dcc;
        case 0x1d28df8u: goto label_1d28df8;
        case 0x1d28e04u: goto label_1d28e04;
        case 0x1d28e10u: goto label_1d28e10;
        default: break;
    }

    ctx->pc = 0x1d28d38u;

    // 0x1d28d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28d40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28d44: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28D44u;
    SET_GPR_U32(ctx, 31, 0x1D28D4Cu);
    ctx->pc = 0x1D28D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D44u;
    // 0x1d28d48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28D44u, 0x1D28D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D4Cu;
label_1d28d4c:
    // 0x1d28d4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28d4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28d50: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D28D50u;
    {
        const bool branch_taken_0x1d28d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D28D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D50u;
        // 0x1d28d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d50) {
            ctx->pc = 0x1D28D74u;
            goto label_1d28d74;
        }
    }
    ctx->pc = 0x1D28D58u;
    // 0x1d28d58: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28D58u;
    SET_GPR_U32(ctx, 31, 0x1D28D60u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28D58u, 0x1D28D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D60u;
label_1d28d60:
    // 0x1d28d60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d28d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d28d64:
    // 0x1d28d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28d68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D6Cu;
        // 0x1d28d70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28D74u;
label_1d28d74:
    // 0x1d28d74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28d78: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28D78u;
    SET_GPR_U32(ctx, 31, 0x1D28D80u);
    ctx->pc = 0x1D28D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D78u;
    // 0x1d28d7c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28D78u, 0x1D28D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D80u;
label_1d28d80:
    // 0x1d28d80: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d28d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d28d84: 0xc749b28  jal         func_1D26CA0
    ctx->pc = 0x1D28D84u;
    SET_GPR_U32(ctx, 31, 0x1D28D8Cu);
    ctx->pc = 0x1D28D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D84u;
    // 0x1d28d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CA0u, 0x1D28D84u, 0x1D28D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D8Cu;
label_1d28d8c:
    // 0x1d28d8c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D28D8Cu;
    {
        const bool branch_taken_0x1d28d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D8Cu;
        // 0x1d28d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d8c) {
            ctx->pc = 0x1D28D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28d64;
        }
    }
    ctx->pc = 0x1D28D94u;
    // 0x1d28d94: 0x0  nop
    ctx->pc = 0x1d28d94u;
    // NOP
    // 0x1d28d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d28d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d28d9c: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28da0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d28da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d28da4: 0x25ee3388  addiu       $t6, $t7, 0x3388
    ctx->pc = 0x1d28da4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 13192));
    // 0x1d28da8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d28da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d28dac: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d28dacu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D3338Cu));
    // 0x1d28db0: 0x8ded3388  lw          $t5, 0x3388($t7)
    ctx->pc = 0x1d28db0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D33388u));
    // 0x1d28db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28db8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d28db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d28dbc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d28dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d28dc0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d28dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d28dc4: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28DC4u;
    SET_GPR_U32(ctx, 31, 0x1D28DCCu);
    ctx->pc = 0x1D28DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DC4u;
    // 0x1d28dc8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28DC4u, 0x1D28DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28DCCu;
label_1d28dcc:
    // 0x1d28dcc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d28dccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d28dd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d28dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28dd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28dd8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d28dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28ddc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d28ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d28de0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d28de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28de4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d28de4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d28de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28dec: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d28decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d28df0: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D28DF0u;
    SET_GPR_U32(ctx, 31, 0x1D28DF8u);
    ctx->pc = 0x1D28DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DF0u;
    // 0x1d28df4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D28DF0u, 0x1D28DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28DF8u;
label_1d28df8:
    // 0x1d28df8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28dfc: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28DFCu;
    SET_GPR_U32(ctx, 31, 0x1D28E04u);
    ctx->pc = 0x1D28E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DFCu;
    // 0x1d28e00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28DFCu, 0x1D28E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E04u;
label_1d28e04:
    // 0x1d28e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d28e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28e08: 0xc749b2a  jal         func_1D26CA8
    ctx->pc = 0x1D28E08u;
    SET_GPR_U32(ctx, 31, 0x1D28E10u);
    ctx->pc = 0x1D28E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28E08u;
    // 0x1d28e0c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CA8u, 0x1D28E08u, 0x1D28E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E10u;
label_1d28e10:
    // 0x1d28e10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d28e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28e14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d28e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d28e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28E18u;
        // 0x1d28e1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28E20u;
}
