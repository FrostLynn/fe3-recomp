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

// Function: sub_01DE4E98
// Address: 0x1de4e98 - 0x1de4f90
void sub_01DE4E98_0x1de4e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E98_0x1de4e98");
#endif

    switch (ctx->pc) {
        case 0x1de4ed4u: goto label_1de4ed4;
        case 0x1de4ee8u: goto label_1de4ee8;
        case 0x1de4efcu: goto label_1de4efc;
        case 0x1de4f10u: goto label_1de4f10;
        case 0x1de4f34u: goto label_1de4f34;
        case 0x1de4f50u: goto label_1de4f50;
        default: break;
    }

    ctx->pc = 0x1de4e98u;

    // 0x1de4e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de4e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de4e9c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de4e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de4ea0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de4ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de4ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de4ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de4ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de4ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de4eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de4eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de4eb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de4eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de4eb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1de4eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1de4eb8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE4EB8u;
    {
        const bool branch_taken_0x1de4eb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4EB8u;
        // 0x1de4ebc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4eb8) {
            ctx->pc = 0x1DE4F40u;
            goto label_1de4f40;
        }
    }
    ctx->pc = 0x1DE4EC0u;
    // 0x1de4ec0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4ec4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de4ec8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de4ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de4ecc: 0xc779386  jal         func_1DE4E18
    ctx->pc = 0x1DE4ECCu;
    SET_GPR_U32(ctx, 31, 0x1DE4ED4u);
    ctx->pc = 0x1DE4ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4ECCu;
    // 0x1de4ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E18u, 0x1DE4ECCu, 0x1DE4ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4ED4u;
label_1de4ed4:
    // 0x1de4ed4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4ed8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1de4ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de4edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4ee0: 0xc779388  jal         func_1DE4E20
    ctx->pc = 0x1DE4EE0u;
    SET_GPR_U32(ctx, 31, 0x1DE4EE8u);
    ctx->pc = 0x1DE4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4EE0u;
    // 0x1de4ee4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E20u, 0x1DE4EE0u, 0x1DE4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4EE8u;
label_1de4ee8:
    // 0x1de4ee8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de4eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de4ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4ef4: 0xc77938a  jal         func_1DE4E28
    ctx->pc = 0x1DE4EF4u;
    SET_GPR_U32(ctx, 31, 0x1DE4EFCu);
    ctx->pc = 0x1DE4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4EF4u;
    // 0x1de4ef8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E28u, 0x1DE4EF4u, 0x1DE4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4EFCu;
label_1de4efc:
    // 0x1de4efc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4efcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4f00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de4f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de4f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f08: 0xc77938c  jal         func_1DE4E30
    ctx->pc = 0x1DE4F08u;
    SET_GPR_U32(ctx, 31, 0x1DE4F10u);
    ctx->pc = 0x1DE4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4F08u;
    // 0x1de4f0c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E30u, 0x1DE4F08u, 0x1DE4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4F10u;
label_1de4f10:
    // 0x1de4f10: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4f10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4f14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1de4f14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de4f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de4f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f20: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1de4f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de4f24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1de4f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de4f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f2c: 0xc77938e  jal         func_1DE4E38
    ctx->pc = 0x1DE4F2Cu;
    SET_GPR_U32(ctx, 31, 0x1DE4F34u);
    ctx->pc = 0x1DE4F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4F2Cu;
    // 0x1de4f30: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E38u, 0x1DE4F2Cu, 0x1DE4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4F34u;
label_1de4f34:
    // 0x1de4f34: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de4f34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de4f38: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1de4f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1de4f3c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1de4f40:
    // 0x1de4f40: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de4f40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de4f44: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de4f48: 0xc779390  jal         func_1DE4E40
    ctx->pc = 0x1DE4F48u;
    SET_GPR_U32(ctx, 31, 0x1DE4F50u);
    ctx->pc = 0x1DE4F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE4F48u;
    // 0x1de4f4c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E40u, 0x1DE4F48u, 0x1DE4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE4F50u;
label_1de4f50:
    // 0x1de4f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de4f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de4f54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de4f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de4f58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE4F58u;
    {
        const bool branch_taken_0x1de4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F58u;
        // 0x1de4f5c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f58) {
            ctx->pc = 0x1DE4F68u;
            goto label_1de4f68;
        }
    }
    ctx->pc = 0x1DE4F60u;
    // 0x1de4f60: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de4f64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de4f64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de4f68:
    // 0x1de4f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de4f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de4f6c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1de4f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de4f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de4f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de4f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de4f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de4f78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de4f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de4f7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de4f7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de4f80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1de4f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de4f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE4F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE4F84u;
        // 0x1de4f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE4F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE4F8Cu;
    // 0x1de4f8c: 0x0  nop
    ctx->pc = 0x1de4f8cu;
    // NOP
    ctx->pc = 0x1de4f90u;
}
