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

// Function: sub_01CC3110
// Address: 0x1cc3110 - 0x1cc31f0
void sub_01CC3110_0x1cc3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3110_0x1cc3110");
#endif

    switch (ctx->pc) {
        case 0x1cc3124u: goto label_1cc3124;
        case 0x1cc3138u: goto label_1cc3138;
        case 0x1cc313cu: goto label_1cc313c;
        case 0x1cc3158u: goto label_1cc3158;
        case 0x1cc3164u: goto label_1cc3164;
        case 0x1cc3194u: goto label_1cc3194;
        case 0x1cc31c0u: goto label_1cc31c0;
        case 0x1cc31ccu: goto label_1cc31cc;
        default: break;
    }

    ctx->pc = 0x1cc3110u;

    // 0x1cc3110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc3114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc3118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc311c: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC311Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3124u);
    ctx->pc = 0x1CC3120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC311Cu;
    // 0x1cc3120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC311Cu, 0x1CC3124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3124u;
label_1cc3124:
    // 0x1cc3124: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc3124u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3128: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC3128u;
    {
        const bool branch_taken_0x1cc3128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3128u;
        // 0x1cc312c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3128) {
            ctx->pc = 0x1CC314Cu;
            goto label_1cc314c;
        }
    }
    ctx->pc = 0x1CC3130u;
    // 0x1cc3130: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC3130u;
    SET_GPR_U32(ctx, 31, 0x1CC3138u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC3130u, 0x1CC3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3138u;
label_1cc3138:
    // 0x1cc3138: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc3138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc313c:
    // 0x1cc313c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc313cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3140: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc3140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3144: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3144u;
        // 0x1cc3148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC314Cu;
label_1cc314c:
    // 0x1cc314c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc3150: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3150u;
    SET_GPR_U32(ctx, 31, 0x1CC3158u);
    ctx->pc = 0x1CC3154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3150u;
    // 0x1cc3154: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3150u, 0x1CC3158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3158u;
label_1cc3158:
    // 0x1cc3158: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cc3158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cc315c: 0xc730926  jal         func_1CC2498
    ctx->pc = 0x1CC315Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3164u);
    ctx->pc = 0x1CC3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC315Cu;
    // 0x1cc3160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2498u, 0x1CC315Cu, 0x1CC3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3164u;
label_1cc3164:
    // 0x1cc3164: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CC3164u;
    {
        const bool branch_taken_0x1cc3164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3164u;
        // 0x1cc3168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3164) {
            ctx->pc = 0x1CC313Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc313c;
        }
    }
    ctx->pc = 0x1CC316Cu;
    // 0x1cc316c: 0x0  nop
    ctx->pc = 0x1cc316cu;
    // NOP
    // 0x1cc3170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc317c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc317cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3184: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc3184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3188: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc3188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc318c: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC318Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3194u);
    ctx->pc = 0x1CC3190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC318Cu;
    // 0x1cc3190: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC318Cu, 0x1CC3194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3194u;
label_1cc3194:
    // 0x1cc3194: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cc3194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cc3198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc319c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc319cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc31a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc31a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc31a4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc31a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc31a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc31a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc31ac: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cc31acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cc31b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc31b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc31b4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc31b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc31b8: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC31B8u;
    SET_GPR_U32(ctx, 31, 0x1CC31C0u);
    ctx->pc = 0x1CC31BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC31B8u;
    // 0x1cc31bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC31B8u, 0x1CC31C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC31C0u;
label_1cc31c0:
    // 0x1cc31c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc31c4: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC31C4u;
    SET_GPR_U32(ctx, 31, 0x1CC31CCu);
    ctx->pc = 0x1CC31C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC31C4u;
    // 0x1cc31c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC31C4u, 0x1CC31CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC31CCu;
label_1cc31cc:
    // 0x1cc31cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc31ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc31d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc31d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc31d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc31d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc31d8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cc31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cc31dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc31dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc31e0: 0x8730928  j           func_1CC24A0
    ctx->pc = 0x1CC31E0u;
    ctx->pc = 0x1CC31E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC31E0u;
    // 0x1cc31e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC24A0u;
    sub_01CC24A0_0x1cc24a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC31E8u;
    // 0x1cc31e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC31E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC31E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC31F0u;
}
