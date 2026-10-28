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

// Function: sub_01D94E38
// Address: 0x1d94e38 - 0x1d94f00
void sub_01D94E38_0x1d94e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94E38_0x1d94e38");
#endif

    switch (ctx->pc) {
        case 0x1d94e54u: goto label_1d94e54;
        case 0x1d94e64u: goto label_1d94e64;
        case 0x1d94e70u: goto label_1d94e70;
        case 0x1d94e80u: goto label_1d94e80;
        case 0x1d94e98u: goto label_1d94e98;
        case 0x1d94ec4u: goto label_1d94ec4;
        default: break;
    }

    ctx->pc = 0x1d94e38u;

    // 0x1d94e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d94e3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94e44: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94e48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94e4c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94E4Cu;
    SET_GPR_U32(ctx, 31, 0x1D94E54u);
    ctx->pc = 0x1D94E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E4Cu;
    // 0x1d94e50: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94E4Cu, 0x1D94E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E54u;
label_1d94e54:
    // 0x1d94e54: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d94e54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d94e58: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d94e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d94e5c: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D94E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D94E64u);
    ctx->pc = 0x1D94E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E5Cu;
    // 0x1d94e60: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D94E5Cu, 0x1D94E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E64u;
label_1d94e64:
    // 0x1d94e64: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d94e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94e68: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94E68u;
    SET_GPR_U32(ctx, 31, 0x1D94E70u);
    ctx->pc = 0x1D94E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E68u;
    // 0x1d94e6c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94E68u, 0x1D94E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E70u;
label_1d94e70:
    // 0x1d94e70: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d94e70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d94e74: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d94e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d94e78: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D94E78u;
    SET_GPR_U32(ctx, 31, 0x1D94E80u);
    ctx->pc = 0x1D94E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E78u;
    // 0x1d94e7c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D94E78u, 0x1D94E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E80u;
label_1d94e80:
    // 0x1d94e80: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d94e80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d94e84: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D94E84u;
    {
        const bool branch_taken_0x1d94e84 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d94e84) {
            ctx->pc = 0x1D94E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D94E84u;
            // 0x1d94e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D94EECu;
            goto label_1d94eec;
        }
    }
    ctx->pc = 0x1D94E8Cu;
    // 0x1d94e8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d94e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94e90: 0xc764a28  jal         func_1D928A0
    ctx->pc = 0x1D94E90u;
    SET_GPR_U32(ctx, 31, 0x1D94E98u);
    ctx->pc = 0x1D94E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94E90u;
    // 0x1d94e94: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D928A0u, 0x1D94E90u, 0x1D94E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94E98u;
label_1d94e98:
    // 0x1d94e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ea0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d94ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d94ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ea8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d94ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94eac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94eb0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d94eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d94eb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D94EB4u;
    {
        const bool branch_taken_0x1d94eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94EB4u;
        // 0x1d94eb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94eb4) {
            ctx->pc = 0x1D94EE8u;
            goto label_1d94ee8;
        }
    }
    ctx->pc = 0x1D94EBCu;
    // 0x1d94ebc: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94EBCu;
    SET_GPR_U32(ctx, 31, 0x1D94EC4u);
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94EBCu, 0x1D94EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94EC4u;
label_1d94ec4:
    // 0x1d94ec4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94ec8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d94ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94ecc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d94eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d94ed0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d94ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d94ed4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d94ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94ed8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D94ED8u;
    {
        const bool branch_taken_0x1d94ed8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D94EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94ED8u;
        // 0x1d94edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94ed8) {
            ctx->pc = 0x1D94EECu;
            goto label_1d94eec;
        }
    }
    ctx->pc = 0x1D94EE0u;
    // 0x1d94ee0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d94ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d94ee4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d94ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d94ee8:
    // 0x1d94ee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94ee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d94eec:
    // 0x1d94eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d94eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94EF4u;
        // 0x1d94ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94EFCu;
    // 0x1d94efc: 0x0  nop
    ctx->pc = 0x1d94efcu;
    // NOP
    ctx->pc = 0x1d94f00u;
}
