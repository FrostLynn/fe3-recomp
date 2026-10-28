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

// Function: sub_01D9D830
// Address: 0x1d9d830 - 0x1d9d8f8
void sub_01D9D830_0x1d9d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D830_0x1d9d830");
#endif

    switch (ctx->pc) {
        case 0x1d9d84cu: goto label_1d9d84c;
        case 0x1d9d85cu: goto label_1d9d85c;
        case 0x1d9d868u: goto label_1d9d868;
        case 0x1d9d878u: goto label_1d9d878;
        case 0x1d9d890u: goto label_1d9d890;
        case 0x1d9d8bcu: goto label_1d9d8bc;
        default: break;
    }

    ctx->pc = 0x1d9d830u;

    // 0x1d9d830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d834: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9d838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d83c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9d840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d844: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D844u;
    SET_GPR_U32(ctx, 31, 0x1D9D84Cu);
    ctx->pc = 0x1D9D848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D844u;
    // 0x1d9d848: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D844u, 0x1D9D84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D84Cu;
label_1d9d84c:
    // 0x1d9d84c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d9d84cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9d850: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d9d850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9d854: 0xc767504  jal         func_1D9D410
    ctx->pc = 0x1D9D854u;
    SET_GPR_U32(ctx, 31, 0x1D9D85Cu);
    ctx->pc = 0x1D9D858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D854u;
    // 0x1d9d858: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D410u, 0x1D9D854u, 0x1D9D85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D85Cu;
label_1d9d85c:
    // 0x1d9d85c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9d860: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D860u;
    SET_GPR_U32(ctx, 31, 0x1D9D868u);
    ctx->pc = 0x1D9D864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D860u;
    // 0x1d9d864: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D860u, 0x1D9D868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D868u;
label_1d9d868:
    // 0x1d9d868: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d9d868u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9d86c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d9d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9d870: 0xc767504  jal         func_1D9D410
    ctx->pc = 0x1D9D870u;
    SET_GPR_U32(ctx, 31, 0x1D9D878u);
    ctx->pc = 0x1D9D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D870u;
    // 0x1d9d874: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D410u, 0x1D9D870u, 0x1D9D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D878u;
label_1d9d878:
    // 0x1d9d878: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d9d878u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9d87c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D9D87Cu;
    {
        const bool branch_taken_0x1d9d87c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d87c) {
            ctx->pc = 0x1D9D880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9D87Cu;
            // 0x1d9d880: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9D8E4u;
            goto label_1d9d8e4;
        }
    }
    ctx->pc = 0x1D9D884u;
    // 0x1d9d884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9d884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9d888: 0xc767268  jal         func_1D9C9A0
    ctx->pc = 0x1D9D888u;
    SET_GPR_U32(ctx, 31, 0x1D9D890u);
    ctx->pc = 0x1D9D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D888u;
    // 0x1d9d88c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C9A0u, 0x1D9D888u, 0x1D9D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D890u;
label_1d9d890:
    // 0x1d9d890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9d894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d898: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9d89c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9d89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d8a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d8a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d8a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9d8a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9d8a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d9d8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d9d8ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D9D8ACu;
    {
        const bool branch_taken_0x1d9d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D8ACu;
        // 0x1d9d8b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d8ac) {
            ctx->pc = 0x1D9D8E0u;
            goto label_1d9d8e0;
        }
    }
    ctx->pc = 0x1D9D8B4u;
    // 0x1d9d8b4: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9D8B4u;
    SET_GPR_U32(ctx, 31, 0x1D9D8BCu);
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9D8B4u, 0x1D9D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D8BCu;
label_1d9d8bc:
    // 0x1d9d8bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9d8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d8c0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d9d8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9d8c4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d9d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d9d8c8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d9d8c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d9d8cc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d9d8ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9d8d0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9D8D0u;
    {
        const bool branch_taken_0x1d9d8d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D8D0u;
        // 0x1d9d8d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d8d0) {
            ctx->pc = 0x1D9D8E4u;
            goto label_1d9d8e4;
        }
    }
    ctx->pc = 0x1D9D8D8u;
    // 0x1d9d8d8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d9d8d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d9d8dc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d9d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d9d8e0:
    // 0x1d9d8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d9d8e4:
    // 0x1d9d8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9d8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d8e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D8ECu;
        // 0x1d9d8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D8F4u;
    // 0x1d9d8f4: 0x0  nop
    ctx->pc = 0x1d9d8f4u;
    // NOP
    ctx->pc = 0x1d9d8f8u;
}
