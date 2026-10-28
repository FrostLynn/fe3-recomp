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

// Function: sub_01D28C48
// Address: 0x1d28c48 - 0x1d28d30
void sub_01D28C48_0x1d28c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28C48_0x1d28c48");
#endif

    switch (ctx->pc) {
        case 0x1d28c5cu: goto label_1d28c5c;
        case 0x1d28c70u: goto label_1d28c70;
        case 0x1d28c74u: goto label_1d28c74;
        case 0x1d28c90u: goto label_1d28c90;
        case 0x1d28c9cu: goto label_1d28c9c;
        case 0x1d28cdcu: goto label_1d28cdc;
        case 0x1d28d08u: goto label_1d28d08;
        case 0x1d28d14u: goto label_1d28d14;
        case 0x1d28d20u: goto label_1d28d20;
        default: break;
    }

    ctx->pc = 0x1d28c48u;

    // 0x1d28c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28c50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28c54: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28C54u;
    SET_GPR_U32(ctx, 31, 0x1D28C5Cu);
    ctx->pc = 0x1D28C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C54u;
    // 0x1d28c58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28C54u, 0x1D28C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C5Cu;
label_1d28c5c:
    // 0x1d28c5c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28c60: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D28C60u;
    {
        const bool branch_taken_0x1d28c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D28C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C60u;
        // 0x1d28c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c60) {
            ctx->pc = 0x1D28C84u;
            goto label_1d28c84;
        }
    }
    ctx->pc = 0x1D28C68u;
    // 0x1d28c68: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28C68u;
    SET_GPR_U32(ctx, 31, 0x1D28C70u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28C68u, 0x1D28C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C70u;
label_1d28c70:
    // 0x1d28c70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d28c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d28c74:
    // 0x1d28c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28c78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C7Cu;
        // 0x1d28c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28C84u;
label_1d28c84:
    // 0x1d28c84: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28c88: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28C88u;
    SET_GPR_U32(ctx, 31, 0x1D28C90u);
    ctx->pc = 0x1D28C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C88u;
    // 0x1d28c8c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28C88u, 0x1D28C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C90u;
label_1d28c90:
    // 0x1d28c90: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d28c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d28c94: 0xc749b28  jal         func_1D26CA0
    ctx->pc = 0x1D28C94u;
    SET_GPR_U32(ctx, 31, 0x1D28C9Cu);
    ctx->pc = 0x1D28C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C94u;
    // 0x1d28c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CA0u, 0x1D28C94u, 0x1D28C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28C9Cu;
label_1d28c9c:
    // 0x1d28c9c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D28C9Cu;
    {
        const bool branch_taken_0x1d28c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C9Cu;
        // 0x1d28ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c9c) {
            ctx->pc = 0x1D28C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28c74;
        }
    }
    ctx->pc = 0x1D28CA4u;
    // 0x1d28ca4: 0x0  nop
    ctx->pc = 0x1d28ca4u;
    // NOP
    // 0x1d28ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d28ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d28cac: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d28cacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d28cb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d28cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d28cb4: 0x25ee3380  addiu       $t6, $t7, 0x3380
    ctx->pc = 0x1d28cb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 13184));
    // 0x1d28cb8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d28cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d28cbc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d28cbcu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D33384u));
    // 0x1d28cc0: 0x8ded3380  lw          $t5, 0x3380($t7)
    ctx->pc = 0x1d28cc0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D33380u));
    // 0x1d28cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28cc8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d28cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d28ccc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d28cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d28cd0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d28cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d28cd4: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28CD4u;
    SET_GPR_U32(ctx, 31, 0x1D28CDCu);
    ctx->pc = 0x1D28CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28CD4u;
    // 0x1d28cd8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28CD4u, 0x1D28CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28CDCu;
label_1d28cdc:
    // 0x1d28cdc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d28cdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d28ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d28ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28ce4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28ce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28ce8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d28ce8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28cec: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d28cecu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d28cf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d28cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28cf4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d28cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d28cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28cfc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d28cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d28d00: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D28D00u;
    SET_GPR_U32(ctx, 31, 0x1D28D08u);
    ctx->pc = 0x1D28D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D00u;
    // 0x1d28d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D28D00u, 0x1D28D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D08u;
label_1d28d08:
    // 0x1d28d08: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28d0c: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D28D14u);
    ctx->pc = 0x1D28D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D0Cu;
    // 0x1d28d10: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28D0Cu, 0x1D28D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D14u;
label_1d28d14:
    // 0x1d28d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d28d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28d18: 0xc749b2a  jal         func_1D26CA8
    ctx->pc = 0x1D28D18u;
    SET_GPR_U32(ctx, 31, 0x1D28D20u);
    ctx->pc = 0x1D28D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D18u;
    // 0x1d28d1c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CA8u, 0x1D28D18u, 0x1D28D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28D20u;
label_1d28d20:
    // 0x1d28d20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d28d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28d24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d28d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d28d28: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D28u;
        // 0x1d28d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28D30u;
}
