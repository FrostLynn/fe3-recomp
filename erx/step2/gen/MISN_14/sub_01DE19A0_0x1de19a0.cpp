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

// Function: sub_01DE19A0
// Address: 0x1de19a0 - 0x1de1a98
void sub_01DE19A0_0x1de19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE19A0_0x1de19a0");
#endif

    switch (ctx->pc) {
        case 0x1de19dcu: goto label_1de19dc;
        case 0x1de19f0u: goto label_1de19f0;
        case 0x1de1a04u: goto label_1de1a04;
        case 0x1de1a18u: goto label_1de1a18;
        case 0x1de1a3cu: goto label_1de1a3c;
        case 0x1de1a58u: goto label_1de1a58;
        default: break;
    }

    ctx->pc = 0x1de19a0u;

    // 0x1de19a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de19a4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de19a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de19a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1de19a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1de19ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de19acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de19b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de19b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de19b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1de19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1de19bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1de19bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1de19c0: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DE19C0u;
    {
        const bool branch_taken_0x1de19c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE19C0u;
        // 0x1de19c4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de19c0) {
            ctx->pc = 0x1DE1A48u;
            goto label_1de1a48;
        }
    }
    ctx->pc = 0x1DE19C8u;
    // 0x1de19c8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de19c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de19cc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de19d0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de19d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de19d4: 0xc77864a  jal         func_1DE1928
    ctx->pc = 0x1DE19D4u;
    SET_GPR_U32(ctx, 31, 0x1DE19DCu);
    ctx->pc = 0x1DE19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE19D4u;
    // 0x1de19d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1928u, 0x1DE19D4u, 0x1DE19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE19DCu;
label_1de19dc:
    // 0x1de19dc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de19dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de19e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1de19e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de19e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de19e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de19e8: 0xc77864c  jal         func_1DE1930
    ctx->pc = 0x1DE19E8u;
    SET_GPR_U32(ctx, 31, 0x1DE19F0u);
    ctx->pc = 0x1DE19ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE19E8u;
    // 0x1de19ec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1930u, 0x1DE19E8u, 0x1DE19F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE19F0u;
label_1de19f0:
    // 0x1de19f0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de19f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de19f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1de19f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de19f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de19f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de19fc: 0xc77864e  jal         func_1DE1938
    ctx->pc = 0x1DE19FCu;
    SET_GPR_U32(ctx, 31, 0x1DE1A04u);
    ctx->pc = 0x1DE1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE19FCu;
    // 0x1de1a00: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1938u, 0x1DE19FCu, 0x1DE1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1A04u;
label_1de1a04:
    // 0x1de1a04: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1a04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1a08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de1a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de1a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a10: 0xc778650  jal         func_1DE1940
    ctx->pc = 0x1DE1A10u;
    SET_GPR_U32(ctx, 31, 0x1DE1A18u);
    ctx->pc = 0x1DE1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1A10u;
    // 0x1de1a14: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1940u, 0x1DE1A10u, 0x1DE1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1A18u;
label_1de1a18:
    // 0x1de1a18: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1a18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1a1c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1de1a1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1de1a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de1a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a28: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1de1a28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1a2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1de1a2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de1a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a34: 0xc778652  jal         func_1DE1948
    ctx->pc = 0x1DE1A34u;
    SET_GPR_U32(ctx, 31, 0x1DE1A3Cu);
    ctx->pc = 0x1DE1A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1A34u;
    // 0x1de1a38: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1948u, 0x1DE1A34u, 0x1DE1A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1A3Cu;
label_1de1a3c:
    // 0x1de1a3c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de1a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de1a40: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1de1a40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1de1a44: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de1a44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1de1a48:
    // 0x1de1a48: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1a48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1a4c: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de1a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1a50: 0xc778654  jal         func_1DE1950
    ctx->pc = 0x1DE1A50u;
    SET_GPR_U32(ctx, 31, 0x1DE1A58u);
    ctx->pc = 0x1DE1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1A50u;
    // 0x1de1a54: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1950u, 0x1DE1A50u, 0x1DE1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1A58u;
label_1de1a58:
    // 0x1de1a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1de1a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1de1a5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1de1a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1de1a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE1A60u;
    {
        const bool branch_taken_0x1de1a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1A60u;
        // 0x1de1a64: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1a60) {
            ctx->pc = 0x1DE1A70u;
            goto label_1de1a70;
        }
    }
    ctx->pc = 0x1DE1A68u;
    // 0x1de1a68: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de1a6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de1a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de1a70:
    // 0x1de1a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1a74: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1de1a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1a78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1a7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de1a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1a80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1de1a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de1a84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1de1a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de1a88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1de1a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de1a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1A8Cu;
        // 0x1de1a90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1A94u;
    // 0x1de1a94: 0x0  nop
    ctx->pc = 0x1de1a94u;
    // NOP
    ctx->pc = 0x1de1a98u;
}
