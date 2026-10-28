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

// Function: sub_01C778B8
// Address: 0x1c778b8 - 0x1c779a0
void sub_01C778B8_0x1c778b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C778B8_0x1c778b8");
#endif

    switch (ctx->pc) {
        case 0x1c778ccu: goto label_1c778cc;
        case 0x1c778e0u: goto label_1c778e0;
        case 0x1c778e4u: goto label_1c778e4;
        case 0x1c77900u: goto label_1c77900;
        case 0x1c7790cu: goto label_1c7790c;
        case 0x1c7794cu: goto label_1c7794c;
        case 0x1c77978u: goto label_1c77978;
        case 0x1c77984u: goto label_1c77984;
        case 0x1c77990u: goto label_1c77990;
        default: break;
    }

    ctx->pc = 0x1c778b8u;

    // 0x1c778b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c778b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c778bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c778bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c778c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c778c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c778c4: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C778C4u;
    SET_GPR_U32(ctx, 31, 0x1C778CCu);
    ctx->pc = 0x1C778C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C778C4u;
    // 0x1c778c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C778C4u, 0x1C778CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C778CCu;
label_1c778cc:
    // 0x1c778cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c778ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c778d0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C778D0u;
    {
        const bool branch_taken_0x1c778d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C778D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C778D0u;
        // 0x1c778d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c778d0) {
            ctx->pc = 0x1C778F4u;
            goto label_1c778f4;
        }
    }
    ctx->pc = 0x1C778D8u;
    // 0x1c778d8: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C778D8u;
    SET_GPR_U32(ctx, 31, 0x1C778E0u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C778D8u, 0x1C778E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C778E0u;
label_1c778e0:
    // 0x1c778e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c778e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c778e4:
    // 0x1c778e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c778e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c778e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c778e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c778ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C778ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C778F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C778ECu;
        // 0x1c778f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C778ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C778F4u;
label_1c778f4:
    // 0x1c778f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c778f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c778f8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C778F8u;
    SET_GPR_U32(ctx, 31, 0x1C77900u);
    ctx->pc = 0x1C778FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C778F8u;
    // 0x1c778fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C778F8u, 0x1C77900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77900u;
label_1c77900:
    // 0x1c77900: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c77900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c77904: 0xc71d664  jal         func_1C75990
    ctx->pc = 0x1C77904u;
    SET_GPR_U32(ctx, 31, 0x1C7790Cu);
    ctx->pc = 0x1C77908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77904u;
    // 0x1c77908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75990u, 0x1C77904u, 0x1C7790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7790Cu;
label_1c7790c:
    // 0x1c7790c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C7790Cu;
    {
        const bool branch_taken_0x1c7790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7790Cu;
        // 0x1c77910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7790c) {
            ctx->pc = 0x1C778E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c778e4;
        }
    }
    ctx->pc = 0x1C77914u;
    // 0x1c77914: 0x0  nop
    ctx->pc = 0x1c77914u;
    // NOP
    // 0x1c77918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7791c: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c7791cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77920: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c77920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c77924: 0x25ee0dc8  addiu       $t6, $t7, 0xDC8
    ctx->pc = 0x1c77924u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3528));
    // 0x1c77928: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c77928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c7792c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c7792cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C80DCCu));
    // 0x1c77930: 0x8ded0dc8  lw          $t5, 0xDC8($t7)
    ctx->pc = 0x1c77930u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C80DC8u));
    // 0x1c77934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77938: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c77938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c7793c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c7793cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c77940: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c77940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c77944: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77944u;
    SET_GPR_U32(ctx, 31, 0x1C7794Cu);
    ctx->pc = 0x1C77948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77944u;
    // 0x1c77948: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77944u, 0x1C7794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7794Cu;
label_1c7794c:
    // 0x1c7794c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c7794cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c77950: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c77950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77954: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77958: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7795c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c7795cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c77960: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77964: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c77964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c77968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7796c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c7796cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c77970: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77970u;
    SET_GPR_U32(ctx, 31, 0x1C77978u);
    ctx->pc = 0x1C77974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77970u;
    // 0x1c77974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77970u, 0x1C77978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77978u;
label_1c77978:
    // 0x1c77978: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c77978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c7797c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C7797Cu;
    SET_GPR_U32(ctx, 31, 0x1C77984u);
    ctx->pc = 0x1C77980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7797Cu;
    // 0x1c77980: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C7797Cu, 0x1C77984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77984u;
label_1c77984:
    // 0x1c77984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c77984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77988: 0xc71d666  jal         func_1C75998
    ctx->pc = 0x1C77988u;
    SET_GPR_U32(ctx, 31, 0x1C77990u);
    ctx->pc = 0x1C7798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77988u;
    // 0x1c7798c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75998u, 0x1C77988u, 0x1C77990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77990u;
label_1c77990:
    // 0x1c77990: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c77990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77994: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c77994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c77998: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77998u;
        // 0x1c7799c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C779A0u;
}
