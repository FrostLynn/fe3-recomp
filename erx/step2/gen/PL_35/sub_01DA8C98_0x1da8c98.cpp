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

// Function: sub_01DA8C98
// Address: 0x1da8c98 - 0x1da8d80
void sub_01DA8C98_0x1da8c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8C98_0x1da8c98");
#endif

    switch (ctx->pc) {
        case 0x1da8cacu: goto label_1da8cac;
        case 0x1da8cc0u: goto label_1da8cc0;
        case 0x1da8cc4u: goto label_1da8cc4;
        case 0x1da8ce0u: goto label_1da8ce0;
        case 0x1da8cecu: goto label_1da8cec;
        case 0x1da8d2cu: goto label_1da8d2c;
        case 0x1da8d58u: goto label_1da8d58;
        case 0x1da8d64u: goto label_1da8d64;
        case 0x1da8d70u: goto label_1da8d70;
        default: break;
    }

    ctx->pc = 0x1da8c98u;

    // 0x1da8c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8ca0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8ca4: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA8CA4u;
    SET_GPR_U32(ctx, 31, 0x1DA8CACu);
    ctx->pc = 0x1DA8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8CA4u;
    // 0x1da8ca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA8CA4u, 0x1DA8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8CACu;
label_1da8cac:
    // 0x1da8cac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da8cacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8cb0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA8CB0u;
    {
        const bool branch_taken_0x1da8cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA8CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8CB0u;
        // 0x1da8cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8cb0) {
            ctx->pc = 0x1DA8CD4u;
            goto label_1da8cd4;
        }
    }
    ctx->pc = 0x1DA8CB8u;
    // 0x1da8cb8: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA8CB8u;
    SET_GPR_U32(ctx, 31, 0x1DA8CC0u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA8CB8u, 0x1DA8CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8CC0u;
label_1da8cc0:
    // 0x1da8cc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da8cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1da8cc4:
    // 0x1da8cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8CCCu;
        // 0x1da8cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8CD4u;
label_1da8cd4:
    // 0x1da8cd4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8cd8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8CD8u;
    SET_GPR_U32(ctx, 31, 0x1DA8CE0u);
    ctx->pc = 0x1DA8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8CD8u;
    // 0x1da8cdc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8CD8u, 0x1DA8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8CE0u;
label_1da8ce0:
    // 0x1da8ce0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1da8ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1da8ce4: 0xc769ba6  jal         func_1DA6E98
    ctx->pc = 0x1DA8CE4u;
    SET_GPR_U32(ctx, 31, 0x1DA8CECu);
    ctx->pc = 0x1DA8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8CE4u;
    // 0x1da8ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E98u, 0x1DA8CE4u, 0x1DA8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8CECu;
label_1da8cec:
    // 0x1da8cec: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DA8CECu;
    {
        const bool branch_taken_0x1da8cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8CECu;
        // 0x1da8cf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8cec) {
            ctx->pc = 0x1DA8CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8cc4;
        }
    }
    ctx->pc = 0x1DA8CF4u;
    // 0x1da8cf4: 0x0  nop
    ctx->pc = 0x1da8cf4u;
    // NOP
    // 0x1da8cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da8cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da8cfc: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da8cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da8d00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da8d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1da8d04: 0x25ee0e50  addiu       $t6, $t7, 0xE50
    ctx->pc = 0x1da8d04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3664));
    // 0x1da8d08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1da8d0c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1da8d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DB0E54u));
    // 0x1da8d10: 0x8ded0e50  lw          $t5, 0xE50($t7)
    ctx->pc = 0x1da8d10u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DB0E50u));
    // 0x1da8d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d18: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1da8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1da8d1c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1da8d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1da8d20: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1da8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1da8d24: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8D24u;
    SET_GPR_U32(ctx, 31, 0x1DA8D2Cu);
    ctx->pc = 0x1DA8D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8D24u;
    // 0x1da8d28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8D24u, 0x1DA8D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8D2Cu;
label_1da8d2c:
    // 0x1da8d2c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1da8d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1da8d30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8d34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d38: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8d3c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da8d40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d44: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1da8d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1da8d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d4c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da8d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8d50: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8D50u;
    SET_GPR_U32(ctx, 31, 0x1DA8D58u);
    ctx->pc = 0x1DA8D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8D50u;
    // 0x1da8d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8D50u, 0x1DA8D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8D58u;
label_1da8d58:
    // 0x1da8d58: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8d5c: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8D64u);
    ctx->pc = 0x1DA8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8D5Cu;
    // 0x1da8d60: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8D5Cu, 0x1DA8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8D64u;
label_1da8d64:
    // 0x1da8d64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da8d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d68: 0xc769ba8  jal         func_1DA6EA0
    ctx->pc = 0x1DA8D68u;
    SET_GPR_U32(ctx, 31, 0x1DA8D70u);
    ctx->pc = 0x1DA8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8D68u;
    // 0x1da8d6c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6EA0u, 0x1DA8D68u, 0x1DA8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8D70u;
label_1da8d70:
    // 0x1da8d70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1da8d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8d74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da8d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da8d78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8D78u;
        // 0x1da8d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8D80u;
}
