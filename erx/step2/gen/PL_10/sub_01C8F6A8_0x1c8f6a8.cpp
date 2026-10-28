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

// Function: sub_01C8F6A8
// Address: 0x1c8f6a8 - 0x1c8f728
void sub_01C8F6A8_0x1c8f6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F6A8_0x1c8f6a8");
#endif

    switch (ctx->pc) {
        case 0x1c8f6e8u: goto label_1c8f6e8;
        case 0x1c8f6ecu: goto label_1c8f6ec;
        case 0x1c8f708u: goto label_1c8f708;
        case 0x1c8f71cu: goto label_1c8f71c;
        default: break;
    }

    ctx->pc = 0x1c8f6a8u;

    // 0x1c8f6a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f6ac: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c8f6acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f6b0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c8f6b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8f6b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c8f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f6bc: 0x240f0134  addiu       $t7, $zero, 0x134
    ctx->pc = 0x1c8f6bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x1c8f6c0: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8F6C0u;
    {
        const bool branch_taken_0x1c8f6c0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C8F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F6C0u;
        // 0x1c8f6c4: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f6c0) {
            ctx->pc = 0x1C8F710u;
            goto label_1c8f710;
        }
    }
    ctx->pc = 0x1C8F6C8u;
    // 0x1c8f6c8: 0x240f0135  addiu       $t7, $zero, 0x135
    ctx->pc = 0x1c8f6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x1c8f6cc: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8F6CCu;
    {
        const bool branch_taken_0x1c8f6cc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C8F6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F6CCu;
        // 0x1c8f6d0: 0x3c0401c9  lui         $a0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f6cc) {
            ctx->pc = 0x1C8F6F8u;
            goto label_1c8f6f8;
        }
    }
    ctx->pc = 0x1C8F6D4u;
    // 0x1c8f6d4: 0x3c0501c9  lui         $a1, 0x1C9
    ctx->pc = 0x1c8f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f6d8: 0x2484cfb8  addiu       $a0, $a0, -0x3048
    ctx->pc = 0x1c8f6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954936));
    // 0x1c8f6dc: 0x24a50258  addiu       $a1, $a1, 0x258
    ctx->pc = 0x1c8f6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 600));
    // 0x1c8f6e0: 0xc7233f0  jal         func_1C8CFC0
    ctx->pc = 0x1C8F6E0u;
    SET_GPR_U32(ctx, 31, 0x1C8F6E8u);
    ctx->pc = 0x1C8F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F6E0u;
    // 0x1c8f6e4: 0x240602ff  addiu       $a2, $zero, 0x2FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFC0u, 0x1C8F6E0u, 0x1C8F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F6E8u;
label_1c8f6e8:
    // 0x1c8f6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8f6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f6ec:
    // 0x1c8f6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8f6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F6F0u;
        // 0x1c8f6f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F6F8u;
label_1c8f6f8:
    // 0x1c8f6f8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1c8f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f6fc: 0x3c0601c9  lui         $a2, 0x1C9
    ctx->pc = 0x1c8f6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f700: 0xc7237e8  jal         func_1C8DFA0
    ctx->pc = 0x1C8F700u;
    SET_GPR_U32(ctx, 31, 0x1C8F708u);
    ctx->pc = 0x1C8F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F700u;
    // 0x1c8f704: 0x24c648c0  addiu       $a2, $a2, 0x48C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DFA0u, 0x1C8F700u, 0x1C8F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F708u;
label_1c8f708:
    // 0x1c8f708: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C8F708u;
    {
        const bool branch_taken_0x1c8f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F708u;
        // 0x1c8f70c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f708) {
            ctx->pc = 0x1C8F6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f6ec;
        }
    }
    ctx->pc = 0x1C8F710u;
label_1c8f710:
    // 0x1c8f710: 0x3c0601c9  lui         $a2, 0x1C9
    ctx->pc = 0x1c8f710u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f714: 0xc7239f0  jal         func_1C8E7C0
    ctx->pc = 0x1C8F714u;
    SET_GPR_U32(ctx, 31, 0x1C8F71Cu);
    ctx->pc = 0x1C8F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F714u;
    // 0x1c8f718: 0x24c648f0  addiu       $a2, $a2, 0x48F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8E7C0u, 0x1C8F714u, 0x1C8F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F71Cu;
label_1c8f71c:
    // 0x1c8f71c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8F71Cu;
    {
        const bool branch_taken_0x1c8f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F71Cu;
        // 0x1c8f720: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f71c) {
            ctx->pc = 0x1C8F6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f6ec;
        }
    }
    ctx->pc = 0x1C8F724u;
    // 0x1c8f724: 0x0  nop
    ctx->pc = 0x1c8f724u;
    // NOP
    ctx->pc = 0x1c8f728u;
}
