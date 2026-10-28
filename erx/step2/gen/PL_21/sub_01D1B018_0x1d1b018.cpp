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

// Function: sub_01D1B018
// Address: 0x1d1b018 - 0x1d1b100
void sub_01D1B018_0x1d1b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B018_0x1d1b018");
#endif

    switch (ctx->pc) {
        case 0x1d1b02cu: goto label_1d1b02c;
        case 0x1d1b040u: goto label_1d1b040;
        case 0x1d1b044u: goto label_1d1b044;
        case 0x1d1b060u: goto label_1d1b060;
        case 0x1d1b06cu: goto label_1d1b06c;
        case 0x1d1b0acu: goto label_1d1b0ac;
        case 0x1d1b0d8u: goto label_1d1b0d8;
        case 0x1d1b0e4u: goto label_1d1b0e4;
        case 0x1d1b0f0u: goto label_1d1b0f0;
        default: break;
    }

    ctx->pc = 0x1d1b018u;

    // 0x1d1b018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b01c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b024: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B024u;
    SET_GPR_U32(ctx, 31, 0x1D1B02Cu);
    ctx->pc = 0x1D1B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B024u;
    // 0x1d1b028: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B024u, 0x1D1B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B02Cu;
label_1d1b02c:
    // 0x1d1b02c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b02cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b030: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1B030u;
    {
        const bool branch_taken_0x1d1b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B030u;
        // 0x1d1b034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b030) {
            ctx->pc = 0x1D1B054u;
            goto label_1d1b054;
        }
    }
    ctx->pc = 0x1D1B038u;
    // 0x1d1b038: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B038u;
    SET_GPR_U32(ctx, 31, 0x1D1B040u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B038u, 0x1D1B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B040u;
label_1d1b040:
    // 0x1d1b040: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1b044:
    // 0x1d1b044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B04Cu;
        // 0x1d1b050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B054u;
label_1d1b054:
    // 0x1d1b054: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b058: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B058u;
    SET_GPR_U32(ctx, 31, 0x1D1B060u);
    ctx->pc = 0x1D1B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B058u;
    // 0x1d1b05c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B058u, 0x1D1B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B060u;
label_1d1b060:
    // 0x1d1b060: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d1b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d1b064: 0xc746428  jal         func_1D190A0
    ctx->pc = 0x1D1B064u;
    SET_GPR_U32(ctx, 31, 0x1D1B06Cu);
    ctx->pc = 0x1D1B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B064u;
    // 0x1d1b068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190A0u, 0x1D1B064u, 0x1D1B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B06Cu;
label_1d1b06c:
    // 0x1d1b06c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1B06Cu;
    {
        const bool branch_taken_0x1d1b06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B06Cu;
        // 0x1d1b070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b06c) {
            ctx->pc = 0x1D1B044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b044;
        }
    }
    ctx->pc = 0x1D1B074u;
    // 0x1d1b074: 0x0  nop
    ctx->pc = 0x1d1b074u;
    // NOP
    // 0x1d1b078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b07c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1b07cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1b084: 0x25ee6af0  addiu       $t6, $t7, 0x6AF0
    ctx->pc = 0x1d1b084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 27376));
    // 0x1d1b088: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d1b08c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d1b08cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D26AF4u));
    // 0x1d1b090: 0x8ded6af0  lw          $t5, 0x6AF0($t7)
    ctx->pc = 0x1d1b090u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D26AF0u));
    // 0x1d1b094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b098: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d1b098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d1b09c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d1b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d1b0a0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1b0a4: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B0A4u;
    SET_GPR_U32(ctx, 31, 0x1D1B0ACu);
    ctx->pc = 0x1D1B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B0A4u;
    // 0x1d1b0a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B0A4u, 0x1D1B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B0ACu;
label_1d1b0ac:
    // 0x1d1b0ac: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d1b0acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d1b0b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b0b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b0bc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d1b0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d1b0c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b0c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b0c4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d1b0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d1b0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b0cc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d1b0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1b0d0: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B0D0u;
    SET_GPR_U32(ctx, 31, 0x1D1B0D8u);
    ctx->pc = 0x1D1B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B0D0u;
    // 0x1d1b0d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B0D0u, 0x1D1B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B0D8u;
label_1d1b0d8:
    // 0x1d1b0d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b0dc: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B0DCu;
    SET_GPR_U32(ctx, 31, 0x1D1B0E4u);
    ctx->pc = 0x1D1B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B0DCu;
    // 0x1d1b0e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B0DCu, 0x1D1B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B0E4u;
label_1d1b0e4:
    // 0x1d1b0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b0e8: 0xc74642a  jal         func_1D190A8
    ctx->pc = 0x1D1B0E8u;
    SET_GPR_U32(ctx, 31, 0x1D1B0F0u);
    ctx->pc = 0x1D1B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B0E8u;
    // 0x1d1b0ec: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190A8u, 0x1D1B0E8u, 0x1D1B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B0F0u;
label_1d1b0f0:
    // 0x1d1b0f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d1b0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1b0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1b0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B0F8u;
        // 0x1d1b0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B100u;
}
