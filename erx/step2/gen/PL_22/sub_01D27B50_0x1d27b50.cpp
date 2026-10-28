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

// Function: sub_01D27B50
// Address: 0x1d27b50 - 0x1d27c18
void sub_01D27B50_0x1d27b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27B50_0x1d27b50");
#endif

    switch (ctx->pc) {
        case 0x1d27b6cu: goto label_1d27b6c;
        case 0x1d27b7cu: goto label_1d27b7c;
        case 0x1d27b88u: goto label_1d27b88;
        case 0x1d27b98u: goto label_1d27b98;
        case 0x1d27bb0u: goto label_1d27bb0;
        case 0x1d27bdcu: goto label_1d27bdc;
        default: break;
    }

    ctx->pc = 0x1d27b50u;

    // 0x1d27b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d27b54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d27b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d27b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27b5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d27b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27b64: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27B64u;
    SET_GPR_U32(ctx, 31, 0x1D27B6Cu);
    ctx->pc = 0x1D27B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B64u;
    // 0x1d27b68: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27B64u, 0x1D27B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B6Cu;
label_1d27b6c:
    // 0x1d27b6c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d27b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d27b70: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d27b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d27b74: 0xc749dcc  jal         func_1D27730
    ctx->pc = 0x1D27B74u;
    SET_GPR_U32(ctx, 31, 0x1D27B7Cu);
    ctx->pc = 0x1D27B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B74u;
    // 0x1d27b78: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27730u, 0x1D27B74u, 0x1D27B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B7Cu;
label_1d27b7c:
    // 0x1d27b7c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d27b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d27b80: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27B80u;
    SET_GPR_U32(ctx, 31, 0x1D27B88u);
    ctx->pc = 0x1D27B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B80u;
    // 0x1d27b84: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27B80u, 0x1D27B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B88u;
label_1d27b88:
    // 0x1d27b88: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d27b88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d27b8c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d27b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d27b90: 0xc749dcc  jal         func_1D27730
    ctx->pc = 0x1D27B90u;
    SET_GPR_U32(ctx, 31, 0x1D27B98u);
    ctx->pc = 0x1D27B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B90u;
    // 0x1d27b94: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27730u, 0x1D27B90u, 0x1D27B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B98u;
label_1d27b98:
    // 0x1d27b98: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d27b98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d27b9c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D27B9Cu;
    {
        const bool branch_taken_0x1d27b9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d27b9c) {
            ctx->pc = 0x1D27BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D27B9Cu;
            // 0x1d27ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D27C04u;
            goto label_1d27c04;
        }
    }
    ctx->pc = 0x1D27BA4u;
    // 0x1d27ba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d27ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d27ba8: 0xc749b2c  jal         func_1D26CB0
    ctx->pc = 0x1D27BA8u;
    SET_GPR_U32(ctx, 31, 0x1D27BB0u);
    ctx->pc = 0x1D27BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27BA8u;
    // 0x1d27bac: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CB0u, 0x1D27BA8u, 0x1D27BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27BB0u;
label_1d27bb0:
    // 0x1d27bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d27bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27bb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d27bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d27bbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d27bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27bc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d27bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27bc4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d27bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d27bc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d27bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d27bcc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D27BCCu;
    {
        const bool branch_taken_0x1d27bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27BCCu;
        // 0x1d27bd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27bcc) {
            ctx->pc = 0x1D27C00u;
            goto label_1d27c00;
        }
    }
    ctx->pc = 0x1D27BD4u;
    // 0x1d27bd4: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D27BD4u;
    SET_GPR_U32(ctx, 31, 0x1D27BDCu);
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D27BD4u, 0x1D27BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27BDCu;
label_1d27bdc:
    // 0x1d27bdc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d27bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27be0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d27be0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d27be4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d27be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d27be8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d27be8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d27bec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d27becu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d27bf0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D27BF0u;
    {
        const bool branch_taken_0x1d27bf0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D27BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27BF0u;
        // 0x1d27bf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27bf0) {
            ctx->pc = 0x1D27C04u;
            goto label_1d27c04;
        }
    }
    ctx->pc = 0x1D27BF8u;
    // 0x1d27bf8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d27bf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d27bfc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d27bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d27c00:
    // 0x1d27c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d27c04:
    // 0x1d27c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d27c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27c08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d27c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27C0Cu;
        // 0x1d27c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27C14u;
    // 0x1d27c14: 0x0  nop
    ctx->pc = 0x1d27c14u;
    // NOP
    ctx->pc = 0x1d27c18u;
}
