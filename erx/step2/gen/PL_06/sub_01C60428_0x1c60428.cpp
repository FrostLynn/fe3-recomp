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

// Function: sub_01C60428
// Address: 0x1c60428 - 0x1c604f0
void sub_01C60428_0x1c60428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60428_0x1c60428");
#endif

    switch (ctx->pc) {
        case 0x1c60444u: goto label_1c60444;
        case 0x1c60454u: goto label_1c60454;
        case 0x1c60460u: goto label_1c60460;
        case 0x1c60470u: goto label_1c60470;
        case 0x1c60488u: goto label_1c60488;
        case 0x1c604b4u: goto label_1c604b4;
        default: break;
    }

    ctx->pc = 0x1c60428u;

    // 0x1c60428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6042c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c60430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60434: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c60434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c60438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c60438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6043c: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C6043Cu;
    SET_GPR_U32(ctx, 31, 0x1C60444u);
    ctx->pc = 0x1C60440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6043Cu;
    // 0x1c60440: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C6043Cu, 0x1C60444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60444u;
label_1c60444:
    // 0x1c60444: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c60444u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c60448: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c60448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6044c: 0xc718002  jal         func_1C60008
    ctx->pc = 0x1C6044Cu;
    SET_GPR_U32(ctx, 31, 0x1C60454u);
    ctx->pc = 0x1C60450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6044Cu;
    // 0x1c60450: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60008u, 0x1C6044Cu, 0x1C60454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60454u;
label_1c60454:
    // 0x1c60454: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c60454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c60458: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60458u;
    SET_GPR_U32(ctx, 31, 0x1C60460u);
    ctx->pc = 0x1C6045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60458u;
    // 0x1c6045c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60458u, 0x1C60460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60460u;
label_1c60460:
    // 0x1c60460: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c60460u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c60464: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c60464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c60468: 0xc718002  jal         func_1C60008
    ctx->pc = 0x1C60468u;
    SET_GPR_U32(ctx, 31, 0x1C60470u);
    ctx->pc = 0x1C6046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60468u;
    // 0x1c6046c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60008u, 0x1C60468u, 0x1C60470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60470u;
label_1c60470:
    // 0x1c60470: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c60470u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c60474: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C60474u;
    {
        const bool branch_taken_0x1c60474 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60474) {
            ctx->pc = 0x1C60478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C60474u;
            // 0x1c60478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C604DCu;
            goto label_1c604dc;
        }
    }
    ctx->pc = 0x1C6047Cu;
    // 0x1c6047c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c6047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c60480: 0xc717d68  jal         func_1C5F5A0
    ctx->pc = 0x1C60480u;
    SET_GPR_U32(ctx, 31, 0x1C60488u);
    ctx->pc = 0x1C60484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60480u;
    // 0x1c60484: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F5A0u, 0x1C60480u, 0x1C60488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60488u;
label_1c60488:
    // 0x1c60488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c60488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6048c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6048cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60490: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c60490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c60494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c60494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c60498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6049c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6049cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c604a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c604a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c604a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C604A4u;
    {
        const bool branch_taken_0x1c604a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C604A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C604A4u;
        // 0x1c604a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c604a4) {
            ctx->pc = 0x1C604D8u;
            goto label_1c604d8;
        }
    }
    ctx->pc = 0x1C604ACu;
    // 0x1c604ac: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C604ACu;
    SET_GPR_U32(ctx, 31, 0x1C604B4u);
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C604ACu, 0x1C604B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C604B4u;
label_1c604b4:
    // 0x1c604b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c604b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c604b8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c604b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c604bc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c604bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c604c0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c604c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c604c4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c604c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c604c8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C604C8u;
    {
        const bool branch_taken_0x1c604c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C604CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C604C8u;
        // 0x1c604cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c604c8) {
            ctx->pc = 0x1C604DCu;
            goto label_1c604dc;
        }
    }
    ctx->pc = 0x1C604D0u;
    // 0x1c604d0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c604d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c604d4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c604d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c604d8:
    // 0x1c604d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c604d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c604dc:
    // 0x1c604dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c604dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c604e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c604e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c604e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C604E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C604E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C604E4u;
        // 0x1c604e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C604E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C604ECu;
    // 0x1c604ec: 0x0  nop
    ctx->pc = 0x1c604ecu;
    // NOP
    ctx->pc = 0x1c604f0u;
}
