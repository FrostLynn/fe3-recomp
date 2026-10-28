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

// Function: sub_01DE6E80
// Address: 0x1de6e80 - 0x1de6f78
void sub_01DE6E80_0x1de6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6E80_0x1de6e80");
#endif

    switch (ctx->pc) {
        case 0x1de6ebcu: goto label_1de6ebc;
        case 0x1de6ed0u: goto label_1de6ed0;
        case 0x1de6ee4u: goto label_1de6ee4;
        case 0x1de6ef8u: goto label_1de6ef8;
        case 0x1de6f1cu: goto label_1de6f1c;
        case 0x1de6f38u: goto label_1de6f38;
        default: break;
    }

    ctx->pc = 0x1de6e80u;

    // 0x1de6e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de6e84: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de6e84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de6e88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de6e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de6e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de6e90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de6e94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de6e98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de6e9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1de6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1de6ea0: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE6EA0u;
    {
        const bool branch_taken_0x1de6ea0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6EA0u;
        // 0x1de6ea4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6ea0) {
            ctx->pc = 0x1DE6F28u;
            goto label_1de6f28;
        }
    }
    ctx->pc = 0x1DE6EA8u;
    // 0x1de6ea8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6eac: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de6eb0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de6eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de6eb4: 0xc779b88  jal         func_1DE6E20
    ctx->pc = 0x1DE6EB4u;
    SET_GPR_U32(ctx, 31, 0x1DE6EBCu);
    ctx->pc = 0x1DE6EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6EB4u;
    // 0x1de6eb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E20u, 0x1DE6EB4u, 0x1DE6EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6EBCu;
label_1de6ebc:
    // 0x1de6ebc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6ec0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1de6ec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de6ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6ec8: 0xc779b8a  jal         func_1DE6E28
    ctx->pc = 0x1DE6EC8u;
    SET_GPR_U32(ctx, 31, 0x1DE6ED0u);
    ctx->pc = 0x1DE6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6EC8u;
    // 0x1de6ecc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E28u, 0x1DE6EC8u, 0x1DE6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6ED0u;
label_1de6ed0:
    // 0x1de6ed0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6ed4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de6ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de6ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6edc: 0xc779b8c  jal         func_1DE6E30
    ctx->pc = 0x1DE6EDCu;
    SET_GPR_U32(ctx, 31, 0x1DE6EE4u);
    ctx->pc = 0x1DE6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6EDCu;
    // 0x1de6ee0: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E30u, 0x1DE6EDCu, 0x1DE6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6EE4u;
label_1de6ee4:
    // 0x1de6ee4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6ee8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de6ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6eec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de6eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6ef0: 0xc779b8e  jal         func_1DE6E38
    ctx->pc = 0x1DE6EF0u;
    SET_GPR_U32(ctx, 31, 0x1DE6EF8u);
    ctx->pc = 0x1DE6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6EF0u;
    // 0x1de6ef4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E38u, 0x1DE6EF0u, 0x1DE6EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6EF8u;
label_1de6ef8:
    // 0x1de6ef8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6ef8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6efc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1de6efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de6f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f04: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de6f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f08: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1de6f08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de6f0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1de6f0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f10: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de6f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f14: 0xc779b90  jal         func_1DE6E40
    ctx->pc = 0x1DE6F14u;
    SET_GPR_U32(ctx, 31, 0x1DE6F1Cu);
    ctx->pc = 0x1DE6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6F14u;
    // 0x1de6f18: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E40u, 0x1DE6F14u, 0x1DE6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F1Cu;
label_1de6f1c:
    // 0x1de6f1c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de6f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de6f20: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1de6f20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1de6f24: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1de6f28:
    // 0x1de6f28: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de6f28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6f2c: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de6f30: 0xc779b92  jal         func_1DE6E48
    ctx->pc = 0x1DE6F30u;
    SET_GPR_U32(ctx, 31, 0x1DE6F38u);
    ctx->pc = 0x1DE6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6F30u;
    // 0x1de6f34: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE6E48u, 0x1DE6F30u, 0x1DE6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE6F38u;
label_1de6f38:
    // 0x1de6f38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de6f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de6f3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de6f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de6f40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE6F40u;
    {
        const bool branch_taken_0x1de6f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6F40u;
        // 0x1de6f44: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6f40) {
            ctx->pc = 0x1DE6F50u;
            goto label_1de6f50;
        }
    }
    ctx->pc = 0x1DE6F48u;
    // 0x1de6f48: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de6f4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de6f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de6f50:
    // 0x1de6f50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de6f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de6f54: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1de6f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de6f58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de6f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de6f5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de6f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de6f60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de6f60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de6f64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de6f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de6f68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1de6f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de6f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6F6Cu;
        // 0x1de6f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE6F74u;
    // 0x1de6f74: 0x0  nop
    ctx->pc = 0x1de6f74u;
    // NOP
    ctx->pc = 0x1de6f78u;
}
