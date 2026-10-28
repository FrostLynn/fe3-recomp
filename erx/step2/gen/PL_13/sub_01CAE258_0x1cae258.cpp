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

// Function: sub_01CAE258
// Address: 0x1cae258 - 0x1cae340
void sub_01CAE258_0x1cae258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE258_0x1cae258");
#endif

    switch (ctx->pc) {
        case 0x1cae26cu: goto label_1cae26c;
        case 0x1cae280u: goto label_1cae280;
        case 0x1cae284u: goto label_1cae284;
        case 0x1cae2a0u: goto label_1cae2a0;
        case 0x1cae2acu: goto label_1cae2ac;
        case 0x1cae2ecu: goto label_1cae2ec;
        case 0x1cae318u: goto label_1cae318;
        case 0x1cae324u: goto label_1cae324;
        case 0x1cae330u: goto label_1cae330;
        default: break;
    }

    ctx->pc = 0x1cae258u;

    // 0x1cae258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae264: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE264u;
    SET_GPR_U32(ctx, 31, 0x1CAE26Cu);
    ctx->pc = 0x1CAE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE264u;
    // 0x1cae268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE264u, 0x1CAE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE26Cu;
label_1cae26c:
    // 0x1cae26c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae26cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae270: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE270u;
    {
        const bool branch_taken_0x1cae270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE270u;
        // 0x1cae274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae270) {
            ctx->pc = 0x1CAE294u;
            goto label_1cae294;
        }
    }
    ctx->pc = 0x1CAE278u;
    // 0x1cae278: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE278u;
    SET_GPR_U32(ctx, 31, 0x1CAE280u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE278u, 0x1CAE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE280u;
label_1cae280:
    // 0x1cae280: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cae280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cae284:
    // 0x1cae284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE28Cu;
        // 0x1cae290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE294u;
label_1cae294:
    // 0x1cae294: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae298: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE298u;
    SET_GPR_U32(ctx, 31, 0x1CAE2A0u);
    ctx->pc = 0x1CAE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE298u;
    // 0x1cae29c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE298u, 0x1CAE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE2A0u;
label_1cae2a0:
    // 0x1cae2a0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cae2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cae2a4: 0xc72b45a  jal         func_1CAD168
    ctx->pc = 0x1CAE2A4u;
    SET_GPR_U32(ctx, 31, 0x1CAE2ACu);
    ctx->pc = 0x1CAE2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE2A4u;
    // 0x1cae2a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD168u, 0x1CAE2A4u, 0x1CAE2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE2ACu;
label_1cae2ac:
    // 0x1cae2ac: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CAE2ACu;
    {
        const bool branch_taken_0x1cae2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE2ACu;
        // 0x1cae2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae2ac) {
            ctx->pc = 0x1CAE284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae284;
        }
    }
    ctx->pc = 0x1CAE2B4u;
    // 0x1cae2b4: 0x0  nop
    ctx->pc = 0x1cae2b4u;
    // NOP
    // 0x1cae2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae2bc: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1cae2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1cae2c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cae2c4: 0x25ee6670  addiu       $t6, $t7, 0x6670
    ctx->pc = 0x1cae2c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 26224));
    // 0x1cae2c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cae2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cae2cc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cae2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CB6674u));
    // 0x1cae2d0: 0x8ded6670  lw          $t5, 0x6670($t7)
    ctx->pc = 0x1cae2d0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CB6670u));
    // 0x1cae2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae2d8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cae2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cae2dc: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cae2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cae2e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cae2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cae2e4: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE2E4u;
    SET_GPR_U32(ctx, 31, 0x1CAE2ECu);
    ctx->pc = 0x1CAE2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE2E4u;
    // 0x1cae2e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE2E4u, 0x1CAE2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE2ECu;
label_1cae2ec:
    // 0x1cae2ec: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cae2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cae2f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae2f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae2f8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae2fc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cae2fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cae300: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae304: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cae304u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cae308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae30c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cae30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cae310: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE310u;
    SET_GPR_U32(ctx, 31, 0x1CAE318u);
    ctx->pc = 0x1CAE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE310u;
    // 0x1cae314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE310u, 0x1CAE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE318u;
label_1cae318:
    // 0x1cae318: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae31c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE31Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE324u);
    ctx->pc = 0x1CAE320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE31Cu;
    // 0x1cae320: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE31Cu, 0x1CAE324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE324u;
label_1cae324:
    // 0x1cae324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cae324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae328: 0xc72b45c  jal         func_1CAD170
    ctx->pc = 0x1CAE328u;
    SET_GPR_U32(ctx, 31, 0x1CAE330u);
    ctx->pc = 0x1CAE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE328u;
    // 0x1cae32c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD170u, 0x1CAE328u, 0x1CAE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE330u;
label_1cae330:
    // 0x1cae330: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cae330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cae334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cae338: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE338u;
        // 0x1cae33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE340u;
}
