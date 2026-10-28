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

// Function: sub_01D5DBE8
// Address: 0x1d5dbe8 - 0x1d5dcb0
void sub_01D5DBE8_0x1d5dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DBE8_0x1d5dbe8");
#endif

    switch (ctx->pc) {
        case 0x1d5dc04u: goto label_1d5dc04;
        case 0x1d5dc14u: goto label_1d5dc14;
        case 0x1d5dc20u: goto label_1d5dc20;
        case 0x1d5dc30u: goto label_1d5dc30;
        case 0x1d5dc48u: goto label_1d5dc48;
        case 0x1d5dc74u: goto label_1d5dc74;
        default: break;
    }

    ctx->pc = 0x1d5dbe8u;

    // 0x1d5dbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5dbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5dbec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5dbf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5dbf4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5dbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5dbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5dbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dbfc: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DBFCu;
    SET_GPR_U32(ctx, 31, 0x1D5DC04u);
    ctx->pc = 0x1D5DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DBFCu;
    // 0x1d5dc00: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DBFCu, 0x1D5DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC04u;
label_1d5dc04:
    // 0x1d5dc04: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d5dc04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5dc08: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d5dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d5dc0c: 0xc7575f2  jal         func_1D5D7C8
    ctx->pc = 0x1D5DC0Cu;
    SET_GPR_U32(ctx, 31, 0x1D5DC14u);
    ctx->pc = 0x1D5DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DC0Cu;
    // 0x1d5dc10: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D7C8u, 0x1D5DC0Cu, 0x1D5DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC14u;
label_1d5dc14:
    // 0x1d5dc14: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5dc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5dc18: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DC18u;
    SET_GPR_U32(ctx, 31, 0x1D5DC20u);
    ctx->pc = 0x1D5DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DC18u;
    // 0x1d5dc1c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DC18u, 0x1D5DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC20u;
label_1d5dc20:
    // 0x1d5dc20: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d5dc20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5dc24: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d5dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d5dc28: 0xc7575f2  jal         func_1D5D7C8
    ctx->pc = 0x1D5DC28u;
    SET_GPR_U32(ctx, 31, 0x1D5DC30u);
    ctx->pc = 0x1D5DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DC28u;
    // 0x1d5dc2c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D7C8u, 0x1D5DC28u, 0x1D5DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC30u;
label_1d5dc30:
    // 0x1d5dc30: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d5dc30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5dc34: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5DC34u;
    {
        const bool branch_taken_0x1d5dc34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dc34) {
            ctx->pc = 0x1D5DC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5DC34u;
            // 0x1d5dc38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DC9Cu;
            goto label_1d5dc9c;
        }
    }
    ctx->pc = 0x1D5DC3Cu;
    // 0x1d5dc3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d5dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5dc40: 0xc757368  jal         func_1D5CDA0
    ctx->pc = 0x1D5DC40u;
    SET_GPR_U32(ctx, 31, 0x1D5DC48u);
    ctx->pc = 0x1D5DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DC40u;
    // 0x1d5dc44: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CDA0u, 0x1D5DC40u, 0x1D5DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC48u;
label_1d5dc48:
    // 0x1d5dc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dc4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5dc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dc50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5dc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5dc54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5dc54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dc58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5dc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dc5c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5dc5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5dc60: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d5dc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d5dc64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5DC64u;
    {
        const bool branch_taken_0x1d5dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DC64u;
        // 0x1d5dc68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dc64) {
            ctx->pc = 0x1D5DC98u;
            goto label_1d5dc98;
        }
    }
    ctx->pc = 0x1D5DC6Cu;
    // 0x1d5dc6c: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5DC6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5DC74u);
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5DC6Cu, 0x1D5DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC74u;
label_1d5dc74:
    // 0x1d5dc74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5dc74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5dc78: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d5dc78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d5dc7c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d5dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d5dc80: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d5dc80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d5dc84: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d5dc84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5dc88: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5DC88u;
    {
        const bool branch_taken_0x1d5dc88 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DC88u;
        // 0x1d5dc8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dc88) {
            ctx->pc = 0x1D5DC9Cu;
            goto label_1d5dc9c;
        }
    }
    ctx->pc = 0x1D5DC90u;
    // 0x1d5dc90: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d5dc90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5dc94: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d5dc94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d5dc98:
    // 0x1d5dc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5dc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5dc9c:
    // 0x1d5dc9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5dc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DCA4u;
        // 0x1d5dca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DCACu;
    // 0x1d5dcac: 0x0  nop
    ctx->pc = 0x1d5dcacu;
    // NOP
    ctx->pc = 0x1d5dcb0u;
}
