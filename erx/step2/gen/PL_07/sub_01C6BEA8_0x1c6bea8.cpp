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

// Function: sub_01C6BEA8
// Address: 0x1c6bea8 - 0x1c6bf90
void sub_01C6BEA8_0x1c6bea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BEA8_0x1c6bea8");
#endif

    switch (ctx->pc) {
        case 0x1c6bebcu: goto label_1c6bebc;
        case 0x1c6bed0u: goto label_1c6bed0;
        case 0x1c6bed4u: goto label_1c6bed4;
        case 0x1c6bef0u: goto label_1c6bef0;
        case 0x1c6befcu: goto label_1c6befc;
        case 0x1c6bf3cu: goto label_1c6bf3c;
        case 0x1c6bf68u: goto label_1c6bf68;
        case 0x1c6bf74u: goto label_1c6bf74;
        case 0x1c6bf80u: goto label_1c6bf80;
        default: break;
    }

    ctx->pc = 0x1c6bea8u;

    // 0x1c6bea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6beac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6beb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6beb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6beb4: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6BEB4u;
    SET_GPR_U32(ctx, 31, 0x1C6BEBCu);
    ctx->pc = 0x1C6BEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BEB4u;
    // 0x1c6beb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6BEB4u, 0x1C6BEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BEBCu;
label_1c6bebc:
    // 0x1c6bebc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6bebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bec0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6BEC0u;
    {
        const bool branch_taken_0x1c6bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BEC0u;
        // 0x1c6bec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bec0) {
            ctx->pc = 0x1C6BEE4u;
            goto label_1c6bee4;
        }
    }
    ctx->pc = 0x1C6BEC8u;
    // 0x1c6bec8: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6BEC8u;
    SET_GPR_U32(ctx, 31, 0x1C6BED0u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6BEC8u, 0x1C6BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BED0u;
label_1c6bed0:
    // 0x1c6bed0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6bed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6bed4:
    // 0x1c6bed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bed8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6bed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bedc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BEDCu;
        // 0x1c6bee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BEE4u;
label_1c6bee4:
    // 0x1c6bee4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6bee8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BEE8u;
    SET_GPR_U32(ctx, 31, 0x1C6BEF0u);
    ctx->pc = 0x1C6BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BEE8u;
    // 0x1c6beec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BEE8u, 0x1C6BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BEF0u;
label_1c6bef0:
    // 0x1c6bef0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c6bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c6bef4: 0xc71a7a6  jal         func_1C69E98
    ctx->pc = 0x1C6BEF4u;
    SET_GPR_U32(ctx, 31, 0x1C6BEFCu);
    ctx->pc = 0x1C6BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BEF4u;
    // 0x1c6bef8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E98u, 0x1C6BEF4u, 0x1C6BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BEFCu;
label_1c6befc:
    // 0x1c6befc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C6BEFCu;
    {
        const bool branch_taken_0x1c6befc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BEFCu;
        // 0x1c6bf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6befc) {
            ctx->pc = 0x1C6BED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bed4;
        }
    }
    ctx->pc = 0x1C6BF04u;
    // 0x1c6bf04: 0x0  nop
    ctx->pc = 0x1c6bf04u;
    // NOP
    // 0x1c6bf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6bf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6bf0c: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6bf0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6bf10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6bf14: 0x25ee5878  addiu       $t6, $t7, 0x5878
    ctx->pc = 0x1c6bf14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 22648));
    // 0x1c6bf18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6bf1c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c6bf1cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C7587Cu));
    // 0x1c6bf20: 0x8ded5878  lw          $t5, 0x5878($t7)
    ctx->pc = 0x1c6bf20u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C75878u));
    // 0x1c6bf24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6bf24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf28: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c6bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c6bf2c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c6bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c6bf30: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c6bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6bf34: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BF34u;
    SET_GPR_U32(ctx, 31, 0x1C6BF3Cu);
    ctx->pc = 0x1C6BF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF34u;
    // 0x1c6bf38: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BF34u, 0x1C6BF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF3Cu;
label_1c6bf3c:
    // 0x1c6bf3c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c6bf3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c6bf40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6bf40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bf44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6bf44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6bf48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bf4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6bf4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6bf50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6bf50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf54: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c6bf54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c6bf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6bf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf5c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6bf60: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6BF60u;
    SET_GPR_U32(ctx, 31, 0x1C6BF68u);
    ctx->pc = 0x1C6BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF60u;
    // 0x1c6bf64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6BF60u, 0x1C6BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF68u;
label_1c6bf68:
    // 0x1c6bf68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6bf6c: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BF6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BF74u);
    ctx->pc = 0x1C6BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF6Cu;
    // 0x1c6bf70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BF6Cu, 0x1C6BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF74u;
label_1c6bf74:
    // 0x1c6bf74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6bf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf78: 0xc71a7a8  jal         func_1C69EA0
    ctx->pc = 0x1C6BF78u;
    SET_GPR_U32(ctx, 31, 0x1C6BF80u);
    ctx->pc = 0x1C6BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF78u;
    // 0x1c6bf7c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EA0u, 0x1C6BF78u, 0x1C6BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BF80u;
label_1c6bf80:
    // 0x1c6bf80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6bf80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bf84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6bf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6bf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BF88u;
        // 0x1c6bf8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BF90u;
}
