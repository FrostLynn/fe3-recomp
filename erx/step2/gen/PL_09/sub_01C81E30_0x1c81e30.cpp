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

// Function: sub_01C81E30
// Address: 0x1c81e30 - 0x1c81ef8
void sub_01C81E30_0x1c81e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81E30_0x1c81e30");
#endif

    switch (ctx->pc) {
        case 0x1c81e4cu: goto label_1c81e4c;
        case 0x1c81e5cu: goto label_1c81e5c;
        case 0x1c81e68u: goto label_1c81e68;
        case 0x1c81e78u: goto label_1c81e78;
        case 0x1c81e90u: goto label_1c81e90;
        case 0x1c81ebcu: goto label_1c81ebc;
        default: break;
    }

    ctx->pc = 0x1c81e30u;

    // 0x1c81e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81e34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c81e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c81e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81e3c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c81e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c81e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81e44: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81E44u;
    SET_GPR_U32(ctx, 31, 0x1C81E4Cu);
    ctx->pc = 0x1C81E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81E44u;
    // 0x1c81e48: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81E44u, 0x1C81E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E4Cu;
label_1c81e4c:
    // 0x1c81e4c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c81e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c81e50: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c81e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c81e54: 0xc720684  jal         func_1C81A10
    ctx->pc = 0x1C81E54u;
    SET_GPR_U32(ctx, 31, 0x1C81E5Cu);
    ctx->pc = 0x1C81E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81E54u;
    // 0x1c81e58: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81A10u, 0x1C81E54u, 0x1C81E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E5Cu;
label_1c81e5c:
    // 0x1c81e5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c81e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c81e60: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81E60u;
    SET_GPR_U32(ctx, 31, 0x1C81E68u);
    ctx->pc = 0x1C81E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81E60u;
    // 0x1c81e64: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81E60u, 0x1C81E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E68u;
label_1c81e68:
    // 0x1c81e68: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c81e68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c81e6c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c81e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c81e70: 0xc720684  jal         func_1C81A10
    ctx->pc = 0x1C81E70u;
    SET_GPR_U32(ctx, 31, 0x1C81E78u);
    ctx->pc = 0x1C81E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81E70u;
    // 0x1c81e74: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C81A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C81A10u, 0x1C81E70u, 0x1C81E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E78u;
label_1c81e78:
    // 0x1c81e78: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c81e78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c81e7c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C81E7Cu;
    {
        const bool branch_taken_0x1c81e7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c81e7c) {
            ctx->pc = 0x1C81E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81E7Cu;
            // 0x1c81e80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81EE4u;
            goto label_1c81ee4;
        }
    }
    ctx->pc = 0x1C81E84u;
    // 0x1c81e84: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c81e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c81e88: 0xc7203e8  jal         func_1C80FA0
    ctx->pc = 0x1C81E88u;
    SET_GPR_U32(ctx, 31, 0x1C81E90u);
    ctx->pc = 0x1C81E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81E88u;
    // 0x1c81e8c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80FA0u, 0x1C81E88u, 0x1C81E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81E90u;
label_1c81e90:
    // 0x1c81e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c81e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81e98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c81e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c81e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c81e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ea0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ea4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c81ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81ea8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c81ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c81eac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C81EACu;
    {
        const bool branch_taken_0x1c81eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81EACu;
        // 0x1c81eb0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81eac) {
            ctx->pc = 0x1C81EE0u;
            goto label_1c81ee0;
        }
    }
    ctx->pc = 0x1C81EB4u;
    // 0x1c81eb4: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C81EB4u;
    SET_GPR_U32(ctx, 31, 0x1C81EBCu);
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C81EB4u, 0x1C81EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81EBCu;
label_1c81ebc:
    // 0x1c81ebc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c81ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81ec0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c81ec0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c81ec4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c81ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c81ec8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c81ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c81ecc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c81eccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81ed0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C81ED0u;
    {
        const bool branch_taken_0x1c81ed0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C81ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81ED0u;
        // 0x1c81ed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81ed0) {
            ctx->pc = 0x1C81EE4u;
            goto label_1c81ee4;
        }
    }
    ctx->pc = 0x1C81ED8u;
    // 0x1c81ed8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c81ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c81edc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c81edcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c81ee0:
    // 0x1c81ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c81ee4:
    // 0x1c81ee4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c81ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c81ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81EECu;
        // 0x1c81ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81EF4u;
    // 0x1c81ef4: 0x0  nop
    ctx->pc = 0x1c81ef4u;
    // NOP
    ctx->pc = 0x1c81ef8u;
}
