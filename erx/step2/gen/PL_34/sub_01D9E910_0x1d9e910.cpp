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

// Function: sub_01D9E910
// Address: 0x1d9e910 - 0x1d9e9f8
void sub_01D9E910_0x1d9e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E910_0x1d9e910");
#endif

    switch (ctx->pc) {
        case 0x1d9e924u: goto label_1d9e924;
        case 0x1d9e938u: goto label_1d9e938;
        case 0x1d9e93cu: goto label_1d9e93c;
        case 0x1d9e958u: goto label_1d9e958;
        case 0x1d9e964u: goto label_1d9e964;
        case 0x1d9e9a4u: goto label_1d9e9a4;
        case 0x1d9e9d0u: goto label_1d9e9d0;
        case 0x1d9e9dcu: goto label_1d9e9dc;
        case 0x1d9e9e8u: goto label_1d9e9e8;
        default: break;
    }

    ctx->pc = 0x1d9e910u;

    // 0x1d9e910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9e91c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E91Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E924u);
    ctx->pc = 0x1D9E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E91Cu;
    // 0x1d9e920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E91Cu, 0x1D9E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E924u;
label_1d9e924:
    // 0x1d9e924: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e928: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9E928u;
    {
        const bool branch_taken_0x1d9e928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E928u;
        // 0x1d9e92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e928) {
            ctx->pc = 0x1D9E94Cu;
            goto label_1d9e94c;
        }
    }
    ctx->pc = 0x1D9E930u;
    // 0x1d9e930: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9E930u;
    SET_GPR_U32(ctx, 31, 0x1D9E938u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9E930u, 0x1D9E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E938u;
label_1d9e938:
    // 0x1d9e938: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9e938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9e93c:
    // 0x1d9e93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9e940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e944: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E944u;
        // 0x1d9e948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E94Cu;
label_1d9e94c:
    // 0x1d9e94c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e950: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E950u;
    SET_GPR_U32(ctx, 31, 0x1D9E958u);
    ctx->pc = 0x1D9E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E950u;
    // 0x1d9e954: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E950u, 0x1D9E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E958u;
label_1d9e958:
    // 0x1d9e958: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d9e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9e95c: 0xc767264  jal         func_1D9C990
    ctx->pc = 0x1D9E95Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E964u);
    ctx->pc = 0x1D9E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E95Cu;
    // 0x1d9e960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C990u, 0x1D9E95Cu, 0x1D9E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E964u;
label_1d9e964:
    // 0x1d9e964: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9E964u;
    {
        const bool branch_taken_0x1d9e964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E964u;
        // 0x1d9e968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e964) {
            ctx->pc = 0x1D9E93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e93c;
        }
    }
    ctx->pc = 0x1D9E96Cu;
    // 0x1d9e96c: 0x0  nop
    ctx->pc = 0x1d9e96cu;
    // NOP
    // 0x1d9e970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e974: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d9e974u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d9e978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9e97c: 0x25ee6cf0  addiu       $t6, $t7, 0x6CF0
    ctx->pc = 0x1d9e97cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 27888));
    // 0x1d9e980: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d9e980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d9e984: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d9e984u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DA6CF4u));
    // 0x1d9e988: 0x8ded6cf0  lw          $t5, 0x6CF0($t7)
    ctx->pc = 0x1d9e988u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DA6CF0u));
    // 0x1d9e98c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9e98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e990: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d9e990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d9e994: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d9e994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d9e998: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d9e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9e99c: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E99Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E9A4u);
    ctx->pc = 0x1D9E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E99Cu;
    // 0x1d9e9a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E99Cu, 0x1D9E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E9A4u;
label_1d9e9a4:
    // 0x1d9e9a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d9e9a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d9e9a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e9b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9e9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e9b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9e9b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9e9b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9e9b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e9bc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d9e9bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d9e9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e9c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9e9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9e9c8: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9E9C8u;
    SET_GPR_U32(ctx, 31, 0x1D9E9D0u);
    ctx->pc = 0x1D9E9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E9C8u;
    // 0x1d9e9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9E9C8u, 0x1D9E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E9D0u;
label_1d9e9d0:
    // 0x1d9e9d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e9d4: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E9D4u;
    SET_GPR_U32(ctx, 31, 0x1D9E9DCu);
    ctx->pc = 0x1D9E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E9D4u;
    // 0x1d9e9d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E9D4u, 0x1D9E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E9DCu;
label_1d9e9dc:
    // 0x1d9e9dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9e9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e9e0: 0xc767266  jal         func_1D9C998
    ctx->pc = 0x1D9E9E0u;
    SET_GPR_U32(ctx, 31, 0x1D9E9E8u);
    ctx->pc = 0x1D9E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E9E0u;
    // 0x1d9e9e4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C998u, 0x1D9E9E0u, 0x1D9E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E9E8u;
label_1d9e9e8:
    // 0x1d9e9e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d9e9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e9ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9e9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E9F0u;
        // 0x1d9e9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E9F8u;
}
