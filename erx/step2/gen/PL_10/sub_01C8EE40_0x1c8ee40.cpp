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

// Function: sub_01C8EE40
// Address: 0x1c8ee40 - 0x1c8ef28
void sub_01C8EE40_0x1c8ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EE40_0x1c8ee40");
#endif

    switch (ctx->pc) {
        case 0x1c8ee54u: goto label_1c8ee54;
        case 0x1c8ee68u: goto label_1c8ee68;
        case 0x1c8ee6cu: goto label_1c8ee6c;
        case 0x1c8ee88u: goto label_1c8ee88;
        case 0x1c8ee94u: goto label_1c8ee94;
        case 0x1c8eed4u: goto label_1c8eed4;
        case 0x1c8ef00u: goto label_1c8ef00;
        case 0x1c8ef0cu: goto label_1c8ef0c;
        case 0x1c8ef18u: goto label_1c8ef18;
        default: break;
    }

    ctx->pc = 0x1c8ee40u;

    // 0x1c8ee40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ee40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ee44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ee48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8ee4c: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8EE4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EE54u);
    ctx->pc = 0x1C8EE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE4Cu;
    // 0x1c8ee50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8EE4Cu, 0x1C8EE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EE54u;
label_1c8ee54:
    // 0x1c8ee54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8ee54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ee58: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8EE58u;
    {
        const bool branch_taken_0x1c8ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE58u;
        // 0x1c8ee5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ee58) {
            ctx->pc = 0x1C8EE7Cu;
            goto label_1c8ee7c;
        }
    }
    ctx->pc = 0x1C8EE60u;
    // 0x1c8ee60: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8EE60u;
    SET_GPR_U32(ctx, 31, 0x1C8EE68u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8EE60u, 0x1C8EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EE68u;
label_1c8ee68:
    // 0x1c8ee68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8ee6c:
    // 0x1c8ee6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ee6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ee70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8ee70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ee74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE74u;
        // 0x1c8ee78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EE7Cu;
label_1c8ee7c:
    // 0x1c8ee7c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ee80: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EE80u;
    SET_GPR_U32(ctx, 31, 0x1C8EE88u);
    ctx->pc = 0x1C8EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE80u;
    // 0x1c8ee84: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EE80u, 0x1C8EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EE88u;
label_1c8ee88:
    // 0x1c8ee88: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c8ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c8ee8c: 0xc7233e4  jal         func_1C8CF90
    ctx->pc = 0x1C8EE8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EE94u);
    ctx->pc = 0x1C8EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE8Cu;
    // 0x1c8ee90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF90u, 0x1C8EE8Cu, 0x1C8EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EE94u;
label_1c8ee94:
    // 0x1c8ee94: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C8EE94u;
    {
        const bool branch_taken_0x1c8ee94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EE94u;
        // 0x1c8ee98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ee94) {
            ctx->pc = 0x1C8EE6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ee6c;
        }
    }
    ctx->pc = 0x1C8EE9Cu;
    // 0x1c8ee9c: 0x0  nop
    ctx->pc = 0x1c8ee9cu;
    // NOP
    // 0x1c8eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8eea4: 0x3c0f01ca  lui         $t7, 0x1CA
    ctx->pc = 0x1c8eea4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)458 << 16));
    // 0x1c8eea8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c8eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c8eeac: 0x25ee89c8  addiu       $t6, $t7, -0x7638
    ctx->pc = 0x1c8eeacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294937032));
    // 0x1c8eeb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c8eeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c8eeb4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c8eeb4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C989CCu));
    // 0x1c8eeb8: 0x8ded89c8  lw          $t5, -0x7638($t7)
    ctx->pc = 0x1c8eeb8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C989C8u));
    // 0x1c8eebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8eebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eec0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c8eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c8eec4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c8eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c8eec8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c8eec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8eecc: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EECCu;
    SET_GPR_U32(ctx, 31, 0x1C8EED4u);
    ctx->pc = 0x1C8EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EECCu;
    // 0x1c8eed0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EECCu, 0x1C8EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EED4u;
label_1c8eed4:
    // 0x1c8eed4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c8eed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c8eed8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8eed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eedc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8eedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eee0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8eee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eee4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8eee4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8eee8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8eee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eeec: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c8eeecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c8eef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eef4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8eef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8eef8: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8EEF8u;
    SET_GPR_U32(ctx, 31, 0x1C8EF00u);
    ctx->pc = 0x1C8EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EEF8u;
    // 0x1c8eefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8EEF8u, 0x1C8EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF00u;
label_1c8ef00:
    // 0x1c8ef00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ef04: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EF04u;
    SET_GPR_U32(ctx, 31, 0x1C8EF0Cu);
    ctx->pc = 0x1C8EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF04u;
    // 0x1c8ef08: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EF04u, 0x1C8EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF0Cu;
label_1c8ef0c:
    // 0x1c8ef0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8ef0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ef10: 0xc7233e6  jal         func_1C8CF98
    ctx->pc = 0x1C8EF10u;
    SET_GPR_U32(ctx, 31, 0x1C8EF18u);
    ctx->pc = 0x1C8EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EF10u;
    // 0x1c8ef14: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF98u, 0x1C8EF10u, 0x1C8EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EF18u;
label_1c8ef18:
    // 0x1c8ef18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c8ef18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8ef1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8ef1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8ef20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EF20u;
        // 0x1c8ef24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EF28u;
}
