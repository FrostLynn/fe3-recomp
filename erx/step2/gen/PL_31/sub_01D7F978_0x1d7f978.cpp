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

// Function: sub_01D7F978
// Address: 0x1d7f978 - 0x1d7fab0
void sub_01D7F978_0x1d7f978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F978_0x1d7f978");
#endif

    switch (ctx->pc) {
        case 0x1d7f998u: goto label_1d7f998;
        case 0x1d7f9acu: goto label_1d7f9ac;
        case 0x1d7f9b0u: goto label_1d7f9b0;
        case 0x1d7f9ccu: goto label_1d7f9cc;
        case 0x1d7f9dcu: goto label_1d7f9dc;
        case 0x1d7fa28u: goto label_1d7fa28;
        case 0x1d7fa64u: goto label_1d7fa64;
        case 0x1d7fa70u: goto label_1d7fa70;
        case 0x1d7fa80u: goto label_1d7fa80;
        case 0x1d7fa98u: goto label_1d7fa98;
        default: break;
    }

    ctx->pc = 0x1d7f978u;

    // 0x1d7f978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7f988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7f988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f98c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7f990: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F990u;
    SET_GPR_U32(ctx, 31, 0x1D7F998u);
    ctx->pc = 0x1D7F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F990u;
    // 0x1d7f994: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F990u, 0x1D7F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F998u;
label_1d7f998:
    // 0x1d7f998: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d7f998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d7f99c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7F99Cu;
    {
        const bool branch_taken_0x1d7f99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F99Cu;
        // 0x1d7f9a0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f99c) {
            ctx->pc = 0x1D7F9E8u;
            goto label_1d7f9e8;
        }
    }
    ctx->pc = 0x1D7F9A4u;
    // 0x1d7f9a4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7F9A4u;
    {
        const bool branch_taken_0x1d7f9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d7f9a4) {
            ctx->pc = 0x1D7F9C4u;
            goto label_1d7f9c4;
        }
    }
    ctx->pc = 0x1D7F9ACu;
label_1d7f9ac:
    // 0x1d7f9ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7f9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7f9b0:
    // 0x1d7f9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F9BCu;
        // 0x1d7f9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F9C4u;
label_1d7f9c4:
    // 0x1d7f9c4: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F9C4u;
    SET_GPR_U32(ctx, 31, 0x1D7F9CCu);
    ctx->pc = 0x1D7F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F9C4u;
    // 0x1d7f9c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F9C4u, 0x1D7F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F9CCu;
label_1d7f9cc:
    // 0x1d7f9cc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D7F9CCu;
    {
        const bool branch_taken_0x1d7f9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D7F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F9CCu;
        // 0x1d7f9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f9cc) {
            ctx->pc = 0x1D7F9ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f9ac;
        }
    }
    ctx->pc = 0x1D7F9D4u;
    // 0x1d7f9d4: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F9D4u;
    SET_GPR_U32(ctx, 31, 0x1D7F9DCu);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F9D4u, 0x1D7F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F9DCu;
label_1d7f9dc:
    // 0x1d7f9dc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D7F9DCu;
    {
        const bool branch_taken_0x1d7f9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F9DCu;
        // 0x1d7f9e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f9dc) {
            ctx->pc = 0x1D7F9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f9b0;
        }
    }
    ctx->pc = 0x1D7F9E4u;
    // 0x1d7f9e4: 0x0  nop
    ctx->pc = 0x1d7f9e4u;
    // NOP
label_1d7f9e8:
    // 0x1d7f9e8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d7f9e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d7f9ec: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D7F9ECu;
    {
        const bool branch_taken_0x1d7f9ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F9ECu;
        // 0x1d7f9f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f9ec) {
            ctx->pc = 0x1D7F9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f9b0;
        }
    }
    ctx->pc = 0x1D7F9F4u;
    // 0x1d7f9f4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d7f9f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d7f9f8: 0x3c0e01d8  lui         $t6, 0x1D8
    ctx->pc = 0x1d7f9f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
    // 0x1d7f9fc: 0x25ce4320  addiu       $t6, $t6, 0x4320
    ctx->pc = 0x1d7f9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17184));
    // 0x1d7fa00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7fa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7fa04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7fa08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa0c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7fa0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7fa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7fa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7fa18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fa18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7fa1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fa20: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FA20u;
    SET_GPR_U32(ctx, 31, 0x1D7FA28u);
    ctx->pc = 0x1D7FA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA20u;
    // 0x1d7fa24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FA20u, 0x1D7FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA28u;
label_1d7fa28:
    // 0x1d7fa28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fa28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fa2c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D7FA2Cu;
    {
        const bool branch_taken_0x1d7fa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FA2Cu;
        // 0x1d7fa30: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fa2c) {
            ctx->pc = 0x1D7F9ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f9ac;
        }
    }
    ctx->pc = 0x1D7FA34u;
    // 0x1d7fa34: 0x0  nop
    ctx->pc = 0x1d7fa34u;
    // NOP
    // 0x1d7fa38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fa3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7fa40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fa44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7fa44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7fa4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fa4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fa50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7fa54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fa58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7fa58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa5c: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FA5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7FA64u);
    ctx->pc = 0x1D7FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA5Cu;
    // 0x1d7fa60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FA5Cu, 0x1D7FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA64u;
label_1d7fa64:
    // 0x1d7fa64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa68: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7FA68u;
    SET_GPR_U32(ctx, 31, 0x1D7FA70u);
    ctx->pc = 0x1D7FA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA68u;
    // 0x1d7fa6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7FA68u, 0x1D7FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA70u;
label_1d7fa70:
    // 0x1d7fa70: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7fa74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7fa78: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FA78u;
    SET_GPR_U32(ctx, 31, 0x1D7FA80u);
    ctx->pc = 0x1D7FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA78u;
    // 0x1d7fa7c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FA78u, 0x1D7FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA80u;
label_1d7fa80:
    // 0x1d7fa80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fa80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fa84: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d7fa88: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d7fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d7fa8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7fa90: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FA90u;
    SET_GPR_U32(ctx, 31, 0x1D7FA98u);
    ctx->pc = 0x1D7FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FA90u;
    // 0x1d7fa94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FA90u, 0x1D7FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FA98u;
label_1d7fa98:
    // 0x1d7fa98: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d7fa9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fa9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7faa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7faa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7faa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FAA4u;
        // 0x1d7faa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FAACu;
    // 0x1d7faac: 0x0  nop
    ctx->pc = 0x1d7faacu;
    // NOP
    ctx->pc = 0x1d7fab0u;
}
