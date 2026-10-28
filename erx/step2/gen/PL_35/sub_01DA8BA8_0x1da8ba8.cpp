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

// Function: sub_01DA8BA8
// Address: 0x1da8ba8 - 0x1da8c90
void sub_01DA8BA8_0x1da8ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8BA8_0x1da8ba8");
#endif

    switch (ctx->pc) {
        case 0x1da8bbcu: goto label_1da8bbc;
        case 0x1da8bd0u: goto label_1da8bd0;
        case 0x1da8bd4u: goto label_1da8bd4;
        case 0x1da8bf0u: goto label_1da8bf0;
        case 0x1da8bfcu: goto label_1da8bfc;
        case 0x1da8c3cu: goto label_1da8c3c;
        case 0x1da8c68u: goto label_1da8c68;
        case 0x1da8c74u: goto label_1da8c74;
        case 0x1da8c80u: goto label_1da8c80;
        default: break;
    }

    ctx->pc = 0x1da8ba8u;

    // 0x1da8ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8bb4: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA8BB4u;
    SET_GPR_U32(ctx, 31, 0x1DA8BBCu);
    ctx->pc = 0x1DA8BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8BB4u;
    // 0x1da8bb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA8BB4u, 0x1DA8BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8BBCu;
label_1da8bbc:
    // 0x1da8bbc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da8bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8bc0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA8BC0u;
    {
        const bool branch_taken_0x1da8bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8BC0u;
        // 0x1da8bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8bc0) {
            ctx->pc = 0x1DA8BE4u;
            goto label_1da8be4;
        }
    }
    ctx->pc = 0x1DA8BC8u;
    // 0x1da8bc8: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA8BC8u;
    SET_GPR_U32(ctx, 31, 0x1DA8BD0u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA8BC8u, 0x1DA8BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8BD0u;
label_1da8bd0:
    // 0x1da8bd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1da8bd4:
    // 0x1da8bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8BDCu;
        // 0x1da8be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8BE4u;
label_1da8be4:
    // 0x1da8be4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8be8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8BE8u;
    SET_GPR_U32(ctx, 31, 0x1DA8BF0u);
    ctx->pc = 0x1DA8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8BE8u;
    // 0x1da8bec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8BE8u, 0x1DA8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8BF0u;
label_1da8bf0:
    // 0x1da8bf0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1da8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1da8bf4: 0xc769ba6  jal         func_1DA6E98
    ctx->pc = 0x1DA8BF4u;
    SET_GPR_U32(ctx, 31, 0x1DA8BFCu);
    ctx->pc = 0x1DA8BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8BF4u;
    // 0x1da8bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E98u, 0x1DA8BF4u, 0x1DA8BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8BFCu;
label_1da8bfc:
    // 0x1da8bfc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DA8BFCu;
    {
        const bool branch_taken_0x1da8bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8BFCu;
        // 0x1da8c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8bfc) {
            ctx->pc = 0x1DA8BD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8bd4;
        }
    }
    ctx->pc = 0x1DA8C04u;
    // 0x1da8c04: 0x0  nop
    ctx->pc = 0x1da8c04u;
    // NOP
    // 0x1da8c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da8c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da8c0c: 0x3c0f01db  lui         $t7, 0x1DB
    ctx->pc = 0x1da8c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)475 << 16));
    // 0x1da8c10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da8c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1da8c14: 0x25ee0e48  addiu       $t6, $t7, 0xE48
    ctx->pc = 0x1da8c14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3656));
    // 0x1da8c18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1da8c1c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1da8c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DB0E4Cu));
    // 0x1da8c20: 0x8ded0e48  lw          $t5, 0xE48($t7)
    ctx->pc = 0x1da8c20u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DB0E48u));
    // 0x1da8c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8c28: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1da8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1da8c2c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1da8c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1da8c30: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1da8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1da8c34: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8C34u;
    SET_GPR_U32(ctx, 31, 0x1DA8C3Cu);
    ctx->pc = 0x1DA8C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8C34u;
    // 0x1da8c38: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8C34u, 0x1DA8C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8C3Cu;
label_1da8c3c:
    // 0x1da8c3c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1da8c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1da8c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da8c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8c48: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8c48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8c4c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da8c50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8c54: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1da8c54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1da8c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8c5c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da8c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8c60: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8C60u;
    SET_GPR_U32(ctx, 31, 0x1DA8C68u);
    ctx->pc = 0x1DA8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8C60u;
    // 0x1da8c64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8C60u, 0x1DA8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8C68u;
label_1da8c68:
    // 0x1da8c68: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8c6c: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8C6Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8C74u);
    ctx->pc = 0x1DA8C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8C6Cu;
    // 0x1da8c70: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8C6Cu, 0x1DA8C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8C74u;
label_1da8c74:
    // 0x1da8c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da8c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8c78: 0xc769ba8  jal         func_1DA6EA0
    ctx->pc = 0x1DA8C78u;
    SET_GPR_U32(ctx, 31, 0x1DA8C80u);
    ctx->pc = 0x1DA8C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8C78u;
    // 0x1da8c7c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6EA0u, 0x1DA8C78u, 0x1DA8C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8C80u;
label_1da8c80:
    // 0x1da8c80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1da8c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8c84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da8c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da8c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8C88u;
        // 0x1da8c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8C90u;
}
