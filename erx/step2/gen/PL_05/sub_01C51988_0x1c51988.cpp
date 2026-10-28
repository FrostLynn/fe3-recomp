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

// Function: sub_01C51988
// Address: 0x1c51988 - 0x1c51a70
void sub_01C51988_0x1c51988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51988_0x1c51988");
#endif

    switch (ctx->pc) {
        case 0x1c5199cu: goto label_1c5199c;
        case 0x1c519b0u: goto label_1c519b0;
        case 0x1c519b4u: goto label_1c519b4;
        case 0x1c519d0u: goto label_1c519d0;
        case 0x1c519dcu: goto label_1c519dc;
        case 0x1c51a1cu: goto label_1c51a1c;
        case 0x1c51a48u: goto label_1c51a48;
        case 0x1c51a54u: goto label_1c51a54;
        case 0x1c51a60u: goto label_1c51a60;
        default: break;
    }

    ctx->pc = 0x1c51988u;

    // 0x1c51988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5198c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51994: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51994u;
    SET_GPR_U32(ctx, 31, 0x1C5199Cu);
    ctx->pc = 0x1C51998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51994u;
    // 0x1c51998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51994u, 0x1C5199Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5199Cu;
label_1c5199c:
    // 0x1c5199c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c5199cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c519a0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C519A0u;
    {
        const bool branch_taken_0x1c519a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C519A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C519A0u;
        // 0x1c519a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c519a0) {
            ctx->pc = 0x1C519C4u;
            goto label_1c519c4;
        }
    }
    ctx->pc = 0x1C519A8u;
    // 0x1c519a8: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C519A8u;
    SET_GPR_U32(ctx, 31, 0x1C519B0u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C519A8u, 0x1C519B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519B0u;
label_1c519b0:
    // 0x1c519b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c519b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c519b4:
    // 0x1c519b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c519b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c519b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c519b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c519bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C519BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C519C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C519BCu;
        // 0x1c519c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C519BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C519C4u;
label_1c519c4:
    // 0x1c519c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c519c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c519c8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C519C8u;
    SET_GPR_U32(ctx, 31, 0x1C519D0u);
    ctx->pc = 0x1C519CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C519C8u;
    // 0x1c519cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C519C8u, 0x1C519D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519D0u;
label_1c519d0:
    // 0x1c519d0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c519d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c519d4: 0xc713e70  jal         func_1C4F9C0
    ctx->pc = 0x1C519D4u;
    SET_GPR_U32(ctx, 31, 0x1C519DCu);
    ctx->pc = 0x1C519D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C519D4u;
    // 0x1c519d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9C0u, 0x1C519D4u, 0x1C519DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519DCu;
label_1c519dc:
    // 0x1c519dc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C519DCu;
    {
        const bool branch_taken_0x1c519dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C519E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C519DCu;
        // 0x1c519e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c519dc) {
            ctx->pc = 0x1C519B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c519b4;
        }
    }
    ctx->pc = 0x1C519E4u;
    // 0x1c519e4: 0x0  nop
    ctx->pc = 0x1c519e4u;
    // NOP
    // 0x1c519e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c519e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c519ec: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c519ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c519f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c519f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c519f4: 0x25eef458  addiu       $t6, $t7, -0xBA8
    ctx->pc = 0x1c519f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964312));
    // 0x1c519f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c519f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c519fc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c519fcu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C5F45Cu));
    // 0x1c51a00: 0x8dedf458  lw          $t5, -0xBA8($t7)
    ctx->pc = 0x1c51a00u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C5F458u));
    // 0x1c51a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a08: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c51a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c51a0c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c51a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c51a10: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c51a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c51a14: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51A14u;
    SET_GPR_U32(ctx, 31, 0x1C51A1Cu);
    ctx->pc = 0x1C51A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A14u;
    // 0x1c51a18: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51A14u, 0x1C51A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A1Cu;
label_1c51a1c:
    // 0x1c51a1c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c51a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c51a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a28: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51a2c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c51a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c51a30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c51a30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a34: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c51a34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c51a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a3c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c51a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c51a40: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51A40u;
    SET_GPR_U32(ctx, 31, 0x1C51A48u);
    ctx->pc = 0x1C51A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A40u;
    // 0x1c51a44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51A40u, 0x1C51A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A48u;
label_1c51a48:
    // 0x1c51a48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51a4c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C51A54u);
    ctx->pc = 0x1C51A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A4Cu;
    // 0x1c51a50: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51A4Cu, 0x1C51A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A54u;
label_1c51a54:
    // 0x1c51a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a58: 0xc713e72  jal         func_1C4F9C8
    ctx->pc = 0x1C51A58u;
    SET_GPR_U32(ctx, 31, 0x1C51A60u);
    ctx->pc = 0x1C51A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A58u;
    // 0x1c51a5c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9C8u, 0x1C51A58u, 0x1C51A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A60u;
label_1c51a60:
    // 0x1c51a60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c51a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51a64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c51a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c51a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A68u;
        // 0x1c51a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51A70u;
}
