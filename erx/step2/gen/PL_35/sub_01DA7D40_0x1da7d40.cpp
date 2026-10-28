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

// Function: sub_01DA7D40
// Address: 0x1da7d40 - 0x1da7e08
void sub_01DA7D40_0x1da7d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7D40_0x1da7d40");
#endif

    switch (ctx->pc) {
        case 0x1da7d5cu: goto label_1da7d5c;
        case 0x1da7d6cu: goto label_1da7d6c;
        case 0x1da7d78u: goto label_1da7d78;
        case 0x1da7d88u: goto label_1da7d88;
        case 0x1da7da0u: goto label_1da7da0;
        case 0x1da7dccu: goto label_1da7dcc;
        default: break;
    }

    ctx->pc = 0x1da7d40u;

    // 0x1da7d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7d44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7d48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7d4c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da7d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da7d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da7d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7d54: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7D54u;
    SET_GPR_U32(ctx, 31, 0x1DA7D5Cu);
    ctx->pc = 0x1DA7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D54u;
    // 0x1da7d58: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7D54u, 0x1DA7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D5Cu;
label_1da7d5c:
    // 0x1da7d5c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1da7d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1da7d60: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1da7d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1da7d64: 0xc769e48  jal         func_1DA7920
    ctx->pc = 0x1DA7D64u;
    SET_GPR_U32(ctx, 31, 0x1DA7D6Cu);
    ctx->pc = 0x1DA7D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D64u;
    // 0x1da7d68: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA7920u, 0x1DA7D64u, 0x1DA7D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D6Cu;
label_1da7d6c:
    // 0x1da7d6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da7d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da7d70: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7D70u;
    SET_GPR_U32(ctx, 31, 0x1DA7D78u);
    ctx->pc = 0x1DA7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D70u;
    // 0x1da7d74: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7D70u, 0x1DA7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D78u;
label_1da7d78:
    // 0x1da7d78: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1da7d78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1da7d7c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1da7d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1da7d80: 0xc769e48  jal         func_1DA7920
    ctx->pc = 0x1DA7D80u;
    SET_GPR_U32(ctx, 31, 0x1DA7D88u);
    ctx->pc = 0x1DA7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D80u;
    // 0x1da7d84: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA7920u, 0x1DA7D80u, 0x1DA7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D88u;
label_1da7d88:
    // 0x1da7d88: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1da7d88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da7d8c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DA7D8Cu;
    {
        const bool branch_taken_0x1da7d8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da7d8c) {
            ctx->pc = 0x1DA7D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA7D8Cu;
            // 0x1da7d90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA7DF4u;
            goto label_1da7df4;
        }
    }
    ctx->pc = 0x1DA7D94u;
    // 0x1da7d94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1da7d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da7d98: 0xc769baa  jal         func_1DA6EA8
    ctx->pc = 0x1DA7D98u;
    SET_GPR_U32(ctx, 31, 0x1DA7DA0u);
    ctx->pc = 0x1DA7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D98u;
    // 0x1da7d9c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6EA8u, 0x1DA7D98u, 0x1DA7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7DA0u;
label_1da7da0:
    // 0x1da7da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da7da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7da8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da7da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da7dac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da7dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7db0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da7db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7db4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da7db4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da7db8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1da7db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1da7dbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DA7DBCu;
    {
        const bool branch_taken_0x1da7dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7DBCu;
        // 0x1da7dc0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7dbc) {
            ctx->pc = 0x1DA7DF0u;
            goto label_1da7df0;
        }
    }
    ctx->pc = 0x1DA7DC4u;
    // 0x1da7dc4: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA7DC4u;
    SET_GPR_U32(ctx, 31, 0x1DA7DCCu);
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA7DC4u, 0x1DA7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7DCCu;
label_1da7dcc:
    // 0x1da7dcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7dd0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1da7dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1da7dd4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1da7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1da7dd8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1da7dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1da7ddc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1da7ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da7de0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA7DE0u;
    {
        const bool branch_taken_0x1da7de0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7DE0u;
        // 0x1da7de4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7de0) {
            ctx->pc = 0x1DA7DF4u;
            goto label_1da7df4;
        }
    }
    ctx->pc = 0x1DA7DE8u;
    // 0x1da7de8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1da7de8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1da7dec: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1da7decu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1da7df0:
    // 0x1da7df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da7df4:
    // 0x1da7df4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da7df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7DFCu;
        // 0x1da7e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7E04u;
    // 0x1da7e04: 0x0  nop
    ctx->pc = 0x1da7e04u;
    // NOP
    ctx->pc = 0x1da7e08u;
}
