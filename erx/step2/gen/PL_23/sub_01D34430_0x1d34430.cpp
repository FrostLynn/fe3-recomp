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

// Function: sub_01D34430
// Address: 0x1d34430 - 0x1d344f8
void sub_01D34430_0x1d34430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34430_0x1d34430");
#endif

    switch (ctx->pc) {
        case 0x1d3444cu: goto label_1d3444c;
        case 0x1d3445cu: goto label_1d3445c;
        case 0x1d34468u: goto label_1d34468;
        case 0x1d34478u: goto label_1d34478;
        case 0x1d34490u: goto label_1d34490;
        case 0x1d344bcu: goto label_1d344bc;
        default: break;
    }

    ctx->pc = 0x1d34430u;

    // 0x1d34430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34434: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d34434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d34438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3443c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3443cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d34440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d34440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34444: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34444u;
    SET_GPR_U32(ctx, 31, 0x1D3444Cu);
    ctx->pc = 0x1D34448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34444u;
    // 0x1d34448: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34444u, 0x1D3444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3444Cu;
label_1d3444c:
    // 0x1d3444c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3444cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d34450: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d34450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d34454: 0xc74d004  jal         func_1D34010
    ctx->pc = 0x1D34454u;
    SET_GPR_U32(ctx, 31, 0x1D3445Cu);
    ctx->pc = 0x1D34458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34454u;
    // 0x1d34458: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34010u, 0x1D34454u, 0x1D3445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3445Cu;
label_1d3445c:
    // 0x1d3445c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d34460: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34460u;
    SET_GPR_U32(ctx, 31, 0x1D34468u);
    ctx->pc = 0x1D34464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34460u;
    // 0x1d34464: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34460u, 0x1D34468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34468u;
label_1d34468:
    // 0x1d34468: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d34468u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3446c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d34470: 0xc74d004  jal         func_1D34010
    ctx->pc = 0x1D34470u;
    SET_GPR_U32(ctx, 31, 0x1D34478u);
    ctx->pc = 0x1D34474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34470u;
    // 0x1d34474: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34010u, 0x1D34470u, 0x1D34478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34478u;
label_1d34478:
    // 0x1d34478: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d34478u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d3447c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3447Cu;
    {
        const bool branch_taken_0x1d3447c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3447c) {
            ctx->pc = 0x1D34480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3447Cu;
            // 0x1d34480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D344E4u;
            goto label_1d344e4;
        }
    }
    ctx->pc = 0x1D34484u;
    // 0x1d34484: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d34484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d34488: 0xc74cd68  jal         func_1D335A0
    ctx->pc = 0x1D34488u;
    SET_GPR_U32(ctx, 31, 0x1D34490u);
    ctx->pc = 0x1D3448Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34488u;
    // 0x1d3448c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D335A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D335A0u, 0x1D34488u, 0x1D34490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34490u;
label_1d34490:
    // 0x1d34490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d34494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34498: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d34498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3449c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3449cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d344a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d344a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d344a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d344a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d344a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d344a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d344ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D344ACu;
    {
        const bool branch_taken_0x1d344ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D344ACu;
        // 0x1d344b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d344ac) {
            ctx->pc = 0x1D344E0u;
            goto label_1d344e0;
        }
    }
    ctx->pc = 0x1D344B4u;
    // 0x1d344b4: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D344B4u;
    SET_GPR_U32(ctx, 31, 0x1D344BCu);
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D344B4u, 0x1D344BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D344BCu;
label_1d344bc:
    // 0x1d344bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d344bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d344c0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d344c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d344c4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d344c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d344c8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d344c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d344cc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d344ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d344d0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D344D0u;
    {
        const bool branch_taken_0x1d344d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D344D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D344D0u;
        // 0x1d344d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d344d0) {
            ctx->pc = 0x1D344E4u;
            goto label_1d344e4;
        }
    }
    ctx->pc = 0x1D344D8u;
    // 0x1d344d8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d344d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d344dc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d344dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d344e0:
    // 0x1d344e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d344e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d344e4:
    // 0x1d344e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d344e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d344e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d344e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d344ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D344ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D344F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D344ECu;
        // 0x1d344f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D344ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D344F4u;
    // 0x1d344f4: 0x0  nop
    ctx->pc = 0x1d344f4u;
    // NOP
    ctx->pc = 0x1d344f8u;
}
