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

// Function: sub_01D46C38
// Address: 0x1d46c38 - 0x1d46d00
void sub_01D46C38_0x1d46c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46C38_0x1d46c38");
#endif

    switch (ctx->pc) {
        case 0x1d46c54u: goto label_1d46c54;
        case 0x1d46c64u: goto label_1d46c64;
        case 0x1d46c70u: goto label_1d46c70;
        case 0x1d46c80u: goto label_1d46c80;
        case 0x1d46c98u: goto label_1d46c98;
        case 0x1d46cc4u: goto label_1d46cc4;
        default: break;
    }

    ctx->pc = 0x1d46c38u;

    // 0x1d46c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d46c3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d46c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46c44: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d46c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46c4c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D46C54u);
    ctx->pc = 0x1D46C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46C4Cu;
    // 0x1d46c50: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46C4Cu, 0x1D46C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C54u;
label_1d46c54:
    // 0x1d46c54: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d46c54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d46c58: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d46c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d46c5c: 0xc751a06  jal         func_1D46818
    ctx->pc = 0x1D46C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D46C64u);
    ctx->pc = 0x1D46C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46C5Cu;
    // 0x1d46c60: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46818u, 0x1D46C5Cu, 0x1D46C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C64u;
label_1d46c64:
    // 0x1d46c64: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d46c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d46c68: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46C68u;
    SET_GPR_U32(ctx, 31, 0x1D46C70u);
    ctx->pc = 0x1D46C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46C68u;
    // 0x1d46c6c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46C68u, 0x1D46C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C70u;
label_1d46c70:
    // 0x1d46c70: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d46c70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d46c74: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d46c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d46c78: 0xc751a06  jal         func_1D46818
    ctx->pc = 0x1D46C78u;
    SET_GPR_U32(ctx, 31, 0x1D46C80u);
    ctx->pc = 0x1D46C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46C78u;
    // 0x1d46c7c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D46818u, 0x1D46C78u, 0x1D46C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C80u;
label_1d46c80:
    // 0x1d46c80: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d46c80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d46c84: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D46C84u;
    {
        const bool branch_taken_0x1d46c84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d46c84) {
            ctx->pc = 0x1D46C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D46C84u;
            // 0x1d46c88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D46CECu;
            goto label_1d46cec;
        }
    }
    ctx->pc = 0x1D46C8Cu;
    // 0x1d46c8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d46c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d46c90: 0xc751768  jal         func_1D45DA0
    ctx->pc = 0x1D46C90u;
    SET_GPR_U32(ctx, 31, 0x1D46C98u);
    ctx->pc = 0x1D46C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46C90u;
    // 0x1d46c94: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45DA0u, 0x1D46C90u, 0x1D46C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46C98u;
label_1d46c98:
    // 0x1d46c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46c9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d46c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ca0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d46ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d46ca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d46ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d46ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46cac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d46cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d46cb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d46cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d46cb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D46CB4u;
    {
        const bool branch_taken_0x1d46cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CB4u;
        // 0x1d46cb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46cb4) {
            ctx->pc = 0x1D46CE8u;
            goto label_1d46ce8;
        }
    }
    ctx->pc = 0x1D46CBCu;
    // 0x1d46cbc: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D46CBCu;
    SET_GPR_U32(ctx, 31, 0x1D46CC4u);
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D46CBCu, 0x1D46CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46CC4u;
label_1d46cc4:
    // 0x1d46cc4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d46cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46cc8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d46cc8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d46ccc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d46cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d46cd0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d46cd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d46cd4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d46cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d46cd8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D46CD8u;
    {
        const bool branch_taken_0x1d46cd8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D46CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CD8u;
        // 0x1d46cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46cd8) {
            ctx->pc = 0x1D46CECu;
            goto label_1d46cec;
        }
    }
    ctx->pc = 0x1D46CE0u;
    // 0x1d46ce0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d46ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d46ce4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d46ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d46ce8:
    // 0x1d46ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d46cec:
    // 0x1d46cec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d46cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46cf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d46cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46CF4u;
        // 0x1d46cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46CFCu;
    // 0x1d46cfc: 0x0  nop
    ctx->pc = 0x1d46cfcu;
    // NOP
    ctx->pc = 0x1d46d00u;
}
