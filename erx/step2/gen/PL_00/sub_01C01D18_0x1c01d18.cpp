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

// Function: sub_01C01D18
// Address: 0x1c01d18 - 0x1c01e00
void sub_01C01D18_0x1c01d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01D18_0x1c01d18");
#endif

    switch (ctx->pc) {
        case 0x1c01d2cu: goto label_1c01d2c;
        case 0x1c01d3cu: goto label_1c01d3c;
        case 0x1c01d40u: goto label_1c01d40;
        case 0x1c01d74u: goto label_1c01d74;
        case 0x1c01dd8u: goto label_1c01dd8;
        case 0x1c01de0u: goto label_1c01de0;
        default: break;
    }

    ctx->pc = 0x1c01d18u;

    // 0x1c01d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01d20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c01d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c01d24: 0xc7002d4  jal         func_1C00B50
    ctx->pc = 0x1C01D24u;
    SET_GPR_U32(ctx, 31, 0x1C01D2Cu);
    ctx->pc = 0x1C01D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01D24u;
    // 0x1c01d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00B50u, 0x1C01D24u, 0x1C01D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01D2Cu;
label_1c01d2c:
    // 0x1c01d2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C01D2Cu;
    {
        const bool branch_taken_0x1c01d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D2Cu;
        // 0x1c01d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d2c) {
            ctx->pc = 0x1C01D50u;
            goto label_1c01d50;
        }
    }
    ctx->pc = 0x1C01D34u;
    // 0x1c01d34: 0xc70002e  jal         func_1C000B8
    ctx->pc = 0x1C01D34u;
    SET_GPR_U32(ctx, 31, 0x1C01D3Cu);
    ctx->pc = 0x1C000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000B8u, 0x1C01D34u, 0x1C01D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01D3Cu;
label_1c01d3c:
    // 0x1c01d3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c01d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c01d40:
    // 0x1c01d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01d44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01d48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D48u;
        // 0x1c01d4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C01D50u;
label_1c01d50:
    // 0x1c01d50: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C01D50u;
    {
        const bool branch_taken_0x1c01d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D50u;
        // 0x1c01d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d50) {
            ctx->pc = 0x1C01D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01d40;
        }
    }
    ctx->pc = 0x1C01D58u;
    // 0x1c01d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01d60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c01d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c01d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c01d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01d68: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c01d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c01d6c: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C01D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C01D74u);
    ctx->pc = 0x1C01D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01D6Cu;
    // 0x1c01d70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C01D6Cu, 0x1C01D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01D74u;
label_1c01d74:
    // 0x1c01d74: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1c01d74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c01d78: 0x25effff7  addiu       $t7, $t7, -0x9
    ctx->pc = 0x1c01d78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967287));
    // 0x1c01d7c: 0x2dee0017  sltiu       $t6, $t7, 0x17
    ctx->pc = 0x1c01d7cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1c01d80: 0x11c00030  beqz        $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C01D80u;
    {
        const bool branch_taken_0x1c01d80 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D80u;
        // 0x1c01d84: 0x3c0e01c0  lui         $t6, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d80) {
            ctx->pc = 0x1C01E44u;
            return;
        }
    }
    ctx->pc = 0x1C01D88u;
    // 0x1c01d88: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c01d88u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c01d8c: 0x25ce36f4  addiu       $t6, $t6, 0x36F4
    ctx->pc = 0x1c01d8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14068));
    // 0x1c01d90: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c01d90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c01d94: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c01d94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c01d98: 0x1a00008  jr          $t5
    ctx->pc = 0x1C01D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C01DA0u: goto label_1c01da0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01D98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C01DA0u;
label_1c01da0:
    // 0x1c01da0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c01da0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c01da4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1c01da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c01da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01db0: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c01db0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c01db4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c01db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01dbc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c01dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01dc0: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1c01dc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c01dc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c01dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01dc8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c01dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c01dcc: 0x91cd1606  lbu         $t5, 0x1606($t6)
    ctx->pc = 0x1c01dccu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5638)));
    // 0x1c01dd0: 0x240f004e  addiu       $t7, $zero, 0x4E
    ctx->pc = 0x1c01dd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1c01dd4: 0x1ed300a  movz        $a2, $t7, $t5
    ctx->pc = 0x1c01dd4u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 15));
label_1c01dd8:
    // 0x1c01dd8: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C01DD8u;
    SET_GPR_U32(ctx, 31, 0x1C01DE0u);
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C01DD8u, 0x1C01DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01DE0u;
label_1c01de0:
    // 0x1c01de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01dec: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1c01decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c01df0: 0x240600a3  addiu       $a2, $zero, 0xA3
    ctx->pc = 0x1c01df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x1c01df4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01df8: 0x87002ea  j           func_1C00BA8
    ctx->pc = 0x1C01DF8u;
    ctx->pc = 0x1C01DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01DF8u;
    // 0x1c01dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00BA8u;
    sub_01C00BA8_0x1c00ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01E00u;
}
