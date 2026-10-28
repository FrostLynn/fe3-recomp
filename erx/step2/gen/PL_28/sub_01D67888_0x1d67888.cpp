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

// Function: sub_01D67888
// Address: 0x1d67888 - 0x1d67998
void sub_01D67888_0x1d67888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67888_0x1d67888");
#endif

    switch (ctx->pc) {
        case 0x1d678a8u: goto label_1d678a8;
        case 0x1d678bcu: goto label_1d678bc;
        case 0x1d678c0u: goto label_1d678c0;
        case 0x1d678dcu: goto label_1d678dc;
        case 0x1d678ecu: goto label_1d678ec;
        case 0x1d67938u: goto label_1d67938;
        case 0x1d67974u: goto label_1d67974;
        case 0x1d67980u: goto label_1d67980;
        default: break;
    }

    ctx->pc = 0x1d67888u;

    // 0x1d67888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6788c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d67890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d67894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d67894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d67898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d67898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6789c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d6789cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d678a0: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D678A0u;
    SET_GPR_U32(ctx, 31, 0x1D678A8u);
    ctx->pc = 0x1D678A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D678A0u;
    // 0x1d678a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D678A0u, 0x1D678A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D678A8u;
label_1d678a8:
    // 0x1d678a8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d678a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d678ac: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D678ACu;
    {
        const bool branch_taken_0x1d678ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D678B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D678ACu;
        // 0x1d678b0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d678ac) {
            ctx->pc = 0x1D678F8u;
            goto label_1d678f8;
        }
    }
    ctx->pc = 0x1D678B4u;
    // 0x1d678b4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D678B4u;
    {
        const bool branch_taken_0x1d678b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d678b4) {
            ctx->pc = 0x1D678D4u;
            goto label_1d678d4;
        }
    }
    ctx->pc = 0x1D678BCu;
label_1d678bc:
    // 0x1d678bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d678bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d678c0:
    // 0x1d678c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d678c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d678c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d678c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d678c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d678c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d678cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D678CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D678D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D678CCu;
        // 0x1d678d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D678CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D678D4u;
label_1d678d4:
    // 0x1d678d4: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D678D4u;
    SET_GPR_U32(ctx, 31, 0x1D678DCu);
    ctx->pc = 0x1D678D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D678D4u;
    // 0x1d678d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D678D4u, 0x1D678DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D678DCu;
label_1d678dc:
    // 0x1d678dc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D678DCu;
    {
        const bool branch_taken_0x1d678dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D678E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D678DCu;
        // 0x1d678e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d678dc) {
            ctx->pc = 0x1D678BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d678bc;
        }
    }
    ctx->pc = 0x1D678E4u;
    // 0x1d678e4: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D678E4u;
    SET_GPR_U32(ctx, 31, 0x1D678ECu);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D678E4u, 0x1D678ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D678ECu;
label_1d678ec:
    // 0x1d678ec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D678ECu;
    {
        const bool branch_taken_0x1d678ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D678F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D678ECu;
        // 0x1d678f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d678ec) {
            ctx->pc = 0x1D678C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d678c0;
        }
    }
    ctx->pc = 0x1D678F4u;
    // 0x1d678f4: 0x0  nop
    ctx->pc = 0x1d678f4u;
    // NOP
label_1d678f8:
    // 0x1d678f8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d678f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d678fc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D678FCu;
    {
        const bool branch_taken_0x1d678fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D678FCu;
        // 0x1d67900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d678fc) {
            ctx->pc = 0x1D678C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d678c0;
        }
    }
    ctx->pc = 0x1D67904u;
    // 0x1d67904: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d67904u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d67908: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d67908u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d6790c: 0x25ce8b10  addiu       $t6, $t6, -0x74F0
    ctx->pc = 0x1d6790cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294937360));
    // 0x1d67910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67914: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d67914u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d67918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6791c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d6791cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d67920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67924: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d67924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d67928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6792c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d6792cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67930: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67930u;
    SET_GPR_U32(ctx, 31, 0x1D67938u);
    ctx->pc = 0x1D67934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67930u;
    // 0x1d67934: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67930u, 0x1D67938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67938u;
label_1d67938:
    // 0x1d67938: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d67938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6793c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D6793Cu;
    {
        const bool branch_taken_0x1d6793c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6793Cu;
        // 0x1d67940: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6793c) {
            ctx->pc = 0x1D678BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d678bc;
        }
    }
    ctx->pc = 0x1D67944u;
    // 0x1d67944: 0x0  nop
    ctx->pc = 0x1d67944u;
    // NOP
    // 0x1d67948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6794c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d6794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6795c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d6795cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67964: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6796c: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D6796Cu;
    SET_GPR_U32(ctx, 31, 0x1D67974u);
    ctx->pc = 0x1D67970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6796Cu;
    // 0x1d67970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D6796Cu, 0x1D67974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67974u;
label_1d67974:
    // 0x1d67974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67978: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D67978u;
    SET_GPR_U32(ctx, 31, 0x1D67980u);
    ctx->pc = 0x1D6797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67978u;
    // 0x1d6797c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D67978u, 0x1D67980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67980u;
label_1d67980:
    // 0x1d67980: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d67980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d67984: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6798c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6798Cu;
        // 0x1d67990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6798Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67994u;
    // 0x1d67994: 0x0  nop
    ctx->pc = 0x1d67994u;
    // NOP
    ctx->pc = 0x1d67998u;
}
