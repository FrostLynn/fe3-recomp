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

// Function: sub_01DD3D98
// Address: 0x1dd3d98 - 0x1dd3e90
void sub_01DD3D98_0x1dd3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3D98_0x1dd3d98");
#endif

    switch (ctx->pc) {
        case 0x1dd3dd4u: goto label_1dd3dd4;
        case 0x1dd3de8u: goto label_1dd3de8;
        case 0x1dd3dfcu: goto label_1dd3dfc;
        case 0x1dd3e10u: goto label_1dd3e10;
        case 0x1dd3e34u: goto label_1dd3e34;
        case 0x1dd3e50u: goto label_1dd3e50;
        default: break;
    }

    ctx->pc = 0x1dd3d98u;

    // 0x1dd3d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd3d9c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd3d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd3da0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd3da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd3da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd3da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd3da8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd3dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd3dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd3db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd3db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd3db4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd3db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd3db8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD3DB8u;
    {
        const bool branch_taken_0x1dd3db8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3DB8u;
        // 0x1dd3dbc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3db8) {
            ctx->pc = 0x1DD3E40u;
            goto label_1dd3e40;
        }
    }
    ctx->pc = 0x1DD3DC0u;
    // 0x1dd3dc0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3dc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3dc4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd3dc8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd3dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd3dcc: 0xc774f46  jal         func_1DD3D18
    ctx->pc = 0x1DD3DCCu;
    SET_GPR_U32(ctx, 31, 0x1DD3DD4u);
    ctx->pc = 0x1DD3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3DCCu;
    // 0x1dd3dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D18u, 0x1DD3DCCu, 0x1DD3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3DD4u;
label_1dd3dd4:
    // 0x1dd3dd4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3dd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3dd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd3dd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3ddc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd3ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3de0: 0xc774f48  jal         func_1DD3D20
    ctx->pc = 0x1DD3DE0u;
    SET_GPR_U32(ctx, 31, 0x1DD3DE8u);
    ctx->pc = 0x1DD3DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3DE0u;
    // 0x1dd3de4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D20u, 0x1DD3DE0u, 0x1DD3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3DE8u;
label_1dd3de8:
    // 0x1dd3de8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3de8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3dec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd3decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3df0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd3df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3df4: 0xc774f4a  jal         func_1DD3D28
    ctx->pc = 0x1DD3DF4u;
    SET_GPR_U32(ctx, 31, 0x1DD3DFCu);
    ctx->pc = 0x1DD3DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3DF4u;
    // 0x1dd3df8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D28u, 0x1DD3DF4u, 0x1DD3DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3DFCu;
label_1dd3dfc:
    // 0x1dd3dfc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3dfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3e00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd3e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd3e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e08: 0xc774f4c  jal         func_1DD3D30
    ctx->pc = 0x1DD3E08u;
    SET_GPR_U32(ctx, 31, 0x1DD3E10u);
    ctx->pc = 0x1DD3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E08u;
    // 0x1dd3e0c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D30u, 0x1DD3E08u, 0x1DD3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3E10u;
label_1dd3e10:
    // 0x1dd3e10: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3e10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3e14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd3e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd3e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd3e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e20: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd3e20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd3e24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd3e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd3e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e2c: 0xc774f4e  jal         func_1DD3D38
    ctx->pc = 0x1DD3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1DD3E34u);
    ctx->pc = 0x1DD3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E2Cu;
    // 0x1dd3e30: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D38u, 0x1DD3E2Cu, 0x1DD3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3E34u;
label_1dd3e34:
    // 0x1dd3e34: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd3e34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd3e38: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd3e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd3e3c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1dd3e40:
    // 0x1dd3e40: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3e40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3e44: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd3e48: 0xc774f50  jal         func_1DD3D40
    ctx->pc = 0x1DD3E48u;
    SET_GPR_U32(ctx, 31, 0x1DD3E50u);
    ctx->pc = 0x1DD3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E48u;
    // 0x1dd3e4c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D40u, 0x1DD3E48u, 0x1DD3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3E50u;
label_1dd3e50:
    // 0x1dd3e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd3e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd3e54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd3e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD3E58u;
    {
        const bool branch_taken_0x1dd3e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3E58u;
        // 0x1dd3e5c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3e58) {
            ctx->pc = 0x1DD3E68u;
            goto label_1dd3e68;
        }
    }
    ctx->pc = 0x1DD3E60u;
    // 0x1dd3e60: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd3e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd3e64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd3e64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd3e68:
    // 0x1dd3e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd3e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3e6c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd3e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd3e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd3e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd3e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd3e78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd3e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd3e7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd3e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd3e80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd3e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd3e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3E84u;
        // 0x1dd3e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3E8Cu;
    // 0x1dd3e8c: 0x0  nop
    ctx->pc = 0x1dd3e8cu;
    // NOP
    ctx->pc = 0x1dd3e90u;
}
