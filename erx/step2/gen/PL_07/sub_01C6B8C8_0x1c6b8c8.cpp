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

// Function: sub_01C6B8C8
// Address: 0x1c6b8c8 - 0x1c6ba38
void sub_01C6B8C8_0x1c6b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6B8C8_0x1c6b8c8");
#endif

    switch (ctx->pc) {
        case 0x1c6b8f0u: goto label_1c6b8f0;
        case 0x1c6b910u: goto label_1c6b910;
        case 0x1c6b920u: goto label_1c6b920;
        case 0x1c6b928u: goto label_1c6b928;
        case 0x1c6b92cu: goto label_1c6b92c;
        case 0x1c6b96cu: goto label_1c6b96c;
        case 0x1c6b998u: goto label_1c6b998;
        case 0x1c6b9a4u: goto label_1c6b9a4;
        case 0x1c6b9b0u: goto label_1c6b9b0;
        case 0x1c6b9ccu: goto label_1c6b9cc;
        case 0x1c6b9e0u: goto label_1c6b9e0;
        case 0x1c6b9ecu: goto label_1c6b9ec;
        case 0x1c6b9f8u: goto label_1c6b9f8;
        case 0x1c6ba10u: goto label_1c6ba10;
        case 0x1c6ba1cu: goto label_1c6ba1c;
        default: break;
    }

    ctx->pc = 0x1c6b8c8u;

    // 0x1c6b8c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6b8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6b8d8: 0x8c8e0018  lw          $t6, 0x18($a0)
    ctx->pc = 0x1c6b8d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c6b8dc: 0x19c00005  blez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6B8DCu;
    {
        const bool branch_taken_0x1c6b8dc = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1C6B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B8DCu;
        // 0x1c6b8e0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b8dc) {
            ctx->pc = 0x1C6B8F4u;
            goto label_1c6b8f4;
        }
    }
    ctx->pc = 0x1C6B8E4u;
    // 0x1c6b8e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6b8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6b8e8: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6B8E8u;
    SET_GPR_U32(ctx, 31, 0x1C6B8F0u);
    ctx->pc = 0x1C6B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B8E8u;
    // 0x1c6b8ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6B8E8u, 0x1C6B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B8F0u;
label_1c6b8f0:
    // 0x1c6b8f0: 0x8e2e0018  lw          $t6, 0x18($s1)
    ctx->pc = 0x1c6b8f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c6b8f4:
    // 0x1c6b8f4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1c6b8f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6b8f8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1c6b8f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1c6b8fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c6b8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6b900: 0xae2e0018  sw          $t6, 0x18($s1)
    ctx->pc = 0x1c6b900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 14));
    // 0x1c6b904: 0xa1f0039c  sb          $s0, 0x39C($t7)
    ctx->pc = 0x1c6b904u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c6b908: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6B908u;
    SET_GPR_U32(ctx, 31, 0x1C6B910u);
    ctx->pc = 0x1C6B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B908u;
    // 0x1c6b90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6B908u, 0x1C6B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B910u;
label_1c6b910:
    // 0x1c6b910: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6B910u;
    {
        const bool branch_taken_0x1c6b910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B910u;
        // 0x1c6b914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b910) {
            ctx->pc = 0x1C6B940u;
            goto label_1c6b940;
        }
    }
    ctx->pc = 0x1C6B918u;
    // 0x1c6b918: 0xc71a7ae  jal         func_1C69EB8
    ctx->pc = 0x1C6B918u;
    SET_GPR_U32(ctx, 31, 0x1C6B920u);
    ctx->pc = 0x1C69EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EB8u, 0x1C6B918u, 0x1C6B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B920u;
label_1c6b920:
    // 0x1c6b920: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6B920u;
    SET_GPR_U32(ctx, 31, 0x1C6B928u);
    ctx->pc = 0x1C6B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B920u;
    // 0x1c6b924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6B920u, 0x1C6B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B928u;
label_1c6b928:
    // 0x1c6b928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6b92c:
    // 0x1c6b92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B938u;
        // 0x1c6b93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B940u;
label_1c6b940:
    // 0x1c6b940: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6B940u;
    {
        const bool branch_taken_0x1c6b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B940u;
        // 0x1c6b944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b940) {
            ctx->pc = 0x1C6B92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6b92c;
        }
    }
    ctx->pc = 0x1C6B948u;
    // 0x1c6b948: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6b94c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6b950: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c6b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c6b954: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c6b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c6b958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6b958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b95c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c6b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c6b960: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6b960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6b964: 0xc71a79a  jal         func_1C69E68
    ctx->pc = 0x1C6B964u;
    SET_GPR_U32(ctx, 31, 0x1C6B96Cu);
    ctx->pc = 0x1C6B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B964u;
    // 0x1c6b968: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E68u, 0x1C6B964u, 0x1C6B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B96Cu;
label_1c6b96c:
    // 0x1c6b96c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6b970: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6b970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6b974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6b974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b978: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6b978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6b97c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6b97cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b980: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6b980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b984: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6b984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b98c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6b98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b990: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6B990u;
    SET_GPR_U32(ctx, 31, 0x1C6B998u);
    ctx->pc = 0x1C6B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B990u;
    // 0x1c6b994: 0x26520390  addiu       $s2, $s2, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6B990u, 0x1C6B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B998u;
label_1c6b998:
    // 0x1c6b998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b99c: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6B99Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B9A4u);
    ctx->pc = 0x1C6B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B99Cu;
    // 0x1c6b9a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6B99Cu, 0x1C6B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9A4u;
label_1c6b9a4:
    // 0x1c6b9a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6b9a8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6B9A8u;
    SET_GPR_U32(ctx, 31, 0x1C6B9B0u);
    ctx->pc = 0x1C6B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B9A8u;
    // 0x1c6b9ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6B9A8u, 0x1C6B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9B0u;
label_1c6b9b0:
    // 0x1c6b9b0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c6b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c6b9b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9b8: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1c6b9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c6b9bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6b9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c6b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6b9c4: 0xc71a79e  jal         func_1C69E78
    ctx->pc = 0x1C6B9C4u;
    SET_GPR_U32(ctx, 31, 0x1C6B9CCu);
    ctx->pc = 0x1C6B9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B9C4u;
    // 0x1c6b9c8: 0x240500b6  addiu       $a1, $zero, 0xB6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E78u, 0x1C6B9C4u, 0x1C6B9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9CCu;
label_1c6b9cc:
    // 0x1c6b9cc: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1c6b9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1c6b9d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6b9d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6b9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9d8: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6B9D8u;
    SET_GPR_U32(ctx, 31, 0x1C6B9E0u);
    ctx->pc = 0x1C6B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B9D8u;
    // 0x1c6b9dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6B9D8u, 0x1C6B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9E0u;
label_1c6b9e0:
    // 0x1c6b9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9e4: 0xc71a7a0  jal         func_1C69E80
    ctx->pc = 0x1C6B9E4u;
    SET_GPR_U32(ctx, 31, 0x1C6B9ECu);
    ctx->pc = 0x1C6B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B9E4u;
    // 0x1c6b9e8: 0x24050054  addiu       $a1, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E80u, 0x1C6B9E4u, 0x1C6B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9ECu;
label_1c6b9ec:
    // 0x1c6b9ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b9f0: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B9F0u;
    SET_GPR_U32(ctx, 31, 0x1C6B9F8u);
    ctx->pc = 0x1C6B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B9F0u;
    // 0x1c6b9f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B9F0u, 0x1C6B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B9F8u;
label_1c6b9f8:
    // 0x1c6b9f8: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6b9f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6b9fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6b9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ba00: 0x25ef5868  addiu       $t7, $t7, 0x5868
    ctx->pc = 0x1c6ba00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22632));
    // 0x1c6ba04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c6ba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ba08: 0xc71a788  jal         func_1C69E20
    ctx->pc = 0x1C6BA08u;
    SET_GPR_U32(ctx, 31, 0x1C6BA10u);
    ctx->pc = 0x1C6BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA08u;
    // 0x1c6ba0c: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E20u, 0x1C6BA08u, 0x1C6BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BA10u;
label_1c6ba10:
    // 0x1c6ba10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6ba14: 0xc71aa30  jal         func_1C6A8C0
    ctx->pc = 0x1C6BA14u;
    SET_GPR_U32(ctx, 31, 0x1C6BA1Cu);
    ctx->pc = 0x1C6BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA14u;
    // 0x1c6ba18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A8C0u, 0x1C6BA14u, 0x1C6BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BA1Cu;
label_1c6ba1c:
    // 0x1c6ba1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6ba1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ba20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c6ba20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6ba24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c6ba24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6ba28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c6ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6ba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA2Cu;
        // 0x1c6ba30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BA34u;
    // 0x1c6ba34: 0x0  nop
    ctx->pc = 0x1c6ba34u;
    // NOP
    ctx->pc = 0x1c6ba38u;
}
