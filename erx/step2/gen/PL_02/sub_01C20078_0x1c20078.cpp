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

// Function: sub_01C20078
// Address: 0x1c20078 - 0x1c20140
void sub_01C20078_0x1c20078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20078_0x1c20078");
#endif

    switch (ctx->pc) {
        case 0x1c20094u: goto label_1c20094;
        case 0x1c200a4u: goto label_1c200a4;
        case 0x1c200b0u: goto label_1c200b0;
        case 0x1c200c0u: goto label_1c200c0;
        case 0x1c200d8u: goto label_1c200d8;
        case 0x1c20104u: goto label_1c20104;
        default: break;
    }

    ctx->pc = 0x1c20078u;

    // 0x1c20078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2007c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c2007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c20080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20084: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c20088: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2008c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2008Cu;
    SET_GPR_U32(ctx, 31, 0x1C20094u);
    ctx->pc = 0x1C20090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2008Cu;
    // 0x1c20090: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2008Cu, 0x1C20094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20094u;
label_1c20094:
    // 0x1c20094: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c20094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c20098: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c20098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c2009c: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C2009Cu;
    SET_GPR_U32(ctx, 31, 0x1C200A4u);
    ctx->pc = 0x1C200A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2009Cu;
    // 0x1c200a0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C2009Cu, 0x1C200A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C200A4u;
label_1c200a4:
    // 0x1c200a4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c200a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c200a8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C200A8u;
    SET_GPR_U32(ctx, 31, 0x1C200B0u);
    ctx->pc = 0x1C200ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C200A8u;
    // 0x1c200ac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C200A8u, 0x1C200B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C200B0u;
label_1c200b0:
    // 0x1c200b0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c200b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c200b4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c200b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c200b8: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C200B8u;
    SET_GPR_U32(ctx, 31, 0x1C200C0u);
    ctx->pc = 0x1C200BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C200B8u;
    // 0x1c200bc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C200B8u, 0x1C200C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C200C0u;
label_1c200c0:
    // 0x1c200c0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c200c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c200c4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C200C4u;
    {
        const bool branch_taken_0x1c200c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c200c4) {
            ctx->pc = 0x1C200C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C200C4u;
            // 0x1c200c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2012Cu;
            goto label_1c2012c;
        }
    }
    ctx->pc = 0x1C200CCu;
    // 0x1c200cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c200ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c200d0: 0xc707c6c  jal         func_1C1F1B0
    ctx->pc = 0x1C200D0u;
    SET_GPR_U32(ctx, 31, 0x1C200D8u);
    ctx->pc = 0x1C200D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C200D0u;
    // 0x1c200d4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1B0u, 0x1C200D0u, 0x1C200D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C200D8u;
label_1c200d8:
    // 0x1c200d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c200d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c200dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c200e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c200e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c200e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c200e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c200ec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c200ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c200f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c200f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c200f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C200F4u;
    {
        const bool branch_taken_0x1c200f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C200F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C200F4u;
        // 0x1c200f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c200f4) {
            ctx->pc = 0x1C20128u;
            goto label_1c20128;
        }
    }
    ctx->pc = 0x1C200FCu;
    // 0x1c200fc: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C200FCu;
    SET_GPR_U32(ctx, 31, 0x1C20104u);
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C200FCu, 0x1C20104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20104u;
label_1c20104:
    // 0x1c20104: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c20104u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20108: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c20108u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2010c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c2010cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c20110: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c20110u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c20114: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c20114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20118: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C20118u;
    {
        const bool branch_taken_0x1c20118 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C2011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20118u;
        // 0x1c2011c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20118) {
            ctx->pc = 0x1C2012Cu;
            goto label_1c2012c;
        }
    }
    ctx->pc = 0x1C20120u;
    // 0x1c20120: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c20120u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c20124: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c20124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c20128:
    // 0x1c20128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2012c:
    // 0x1c2012c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2012cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c20130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20134: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20134u;
        // 0x1c20138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2013Cu;
    // 0x1c2013c: 0x0  nop
    ctx->pc = 0x1c2013cu;
    // NOP
    ctx->pc = 0x1c20140u;
}
