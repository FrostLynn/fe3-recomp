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

// Function: sub_01CC31F0
// Address: 0x1cc31f0 - 0x1cc3318
void sub_01CC31F0_0x1cc31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC31F0_0x1cc31f0");
#endif

    switch (ctx->pc) {
        case 0x1cc3218u: goto label_1cc3218;
        case 0x1cc322cu: goto label_1cc322c;
        case 0x1cc3230u: goto label_1cc3230;
        case 0x1cc3250u: goto label_1cc3250;
        case 0x1cc3260u: goto label_1cc3260;
        case 0x1cc3294u: goto label_1cc3294;
        case 0x1cc32ccu: goto label_1cc32cc;
        case 0x1cc32d8u: goto label_1cc32d8;
        case 0x1cc32e8u: goto label_1cc32e8;
        case 0x1cc3300u: goto label_1cc3300;
        default: break;
    }

    ctx->pc = 0x1cc31f0u;

    // 0x1cc31f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc31f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc31f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc31f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc31f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc31f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc31fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc31fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3200: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cc3200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3204: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc3204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cc3208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cc3208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc320c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc3210: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3210u;
    SET_GPR_U32(ctx, 31, 0x1CC3218u);
    ctx->pc = 0x1CC3214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3210u;
    // 0x1cc3214: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3210u, 0x1CC3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3218u;
label_1cc3218:
    // 0x1cc3218: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cc3218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cc321c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC321Cu;
    {
        const bool branch_taken_0x1cc321c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC321Cu;
        // 0x1cc3220: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc321c) {
            ctx->pc = 0x1CC3268u;
            goto label_1cc3268;
        }
    }
    ctx->pc = 0x1CC3224u;
    // 0x1cc3224: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC3224u;
    {
        const bool branch_taken_0x1cc3224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cc3224) {
            ctx->pc = 0x1CC3248u;
            goto label_1cc3248;
        }
    }
    ctx->pc = 0x1CC322Cu;
label_1cc322c:
    // 0x1cc322c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc322cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc3230:
    // 0x1cc3230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc3238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc323c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc3240: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3240u;
        // 0x1cc3244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3248u;
label_1cc3248:
    // 0x1cc3248: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC3248u;
    SET_GPR_U32(ctx, 31, 0x1CC3250u);
    ctx->pc = 0x1CC324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3248u;
    // 0x1cc324c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC3248u, 0x1CC3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3250u;
label_1cc3250:
    // 0x1cc3250: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CC3250u;
    {
        const bool branch_taken_0x1cc3250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CC3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3250u;
        // 0x1cc3254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3250) {
            ctx->pc = 0x1CC322Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc322c;
        }
    }
    ctx->pc = 0x1CC3258u;
    // 0x1cc3258: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC3258u;
    SET_GPR_U32(ctx, 31, 0x1CC3260u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC3258u, 0x1CC3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3260u;
label_1cc3260:
    // 0x1cc3260: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CC3260u;
    {
        const bool branch_taken_0x1cc3260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3260u;
        // 0x1cc3264: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3260) {
            ctx->pc = 0x1CC3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc3230;
        }
    }
    ctx->pc = 0x1CC3268u;
label_1cc3268:
    // 0x1cc3268: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cc3268u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cc326c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CC326Cu;
    {
        const bool branch_taken_0x1cc326c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC326Cu;
        // 0x1cc3270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc326c) {
            ctx->pc = 0x1CC3230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc3230;
        }
    }
    ctx->pc = 0x1CC3274u;
    // 0x1cc3274: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cc3274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc3278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc327c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc3280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3284: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc3284u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3288: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc3288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc328c: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC328Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3294u);
    ctx->pc = 0x1CC3290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC328Cu;
    // 0x1cc3290: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC328Cu, 0x1CC3294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3294u;
label_1cc3294:
    // 0x1cc3294: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc3294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3298: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CC3298u;
    {
        const bool branch_taken_0x1cc3298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3298u;
        // 0x1cc329c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3298) {
            ctx->pc = 0x1CC322Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc322c;
        }
    }
    ctx->pc = 0x1CC32A0u;
    // 0x1cc32a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc32a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc32a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc32a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc32a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc32a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc32ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc32acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc32b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc32b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc32b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc32bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc32c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc32c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32c4: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC32C4u;
    SET_GPR_U32(ctx, 31, 0x1CC32CCu);
    ctx->pc = 0x1CC32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32C4u;
    // 0x1cc32c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC32C4u, 0x1CC32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC32CCu;
label_1cc32cc:
    // 0x1cc32cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc32ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc32d0: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC32D0u;
    SET_GPR_U32(ctx, 31, 0x1CC32D8u);
    ctx->pc = 0x1CC32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32D0u;
    // 0x1cc32d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC32D0u, 0x1CC32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC32D8u;
label_1cc32d8:
    // 0x1cc32d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc32d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc32dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc32e0: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC32E0u;
    SET_GPR_U32(ctx, 31, 0x1CC32E8u);
    ctx->pc = 0x1CC32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32E0u;
    // 0x1cc32e4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC32E0u, 0x1CC32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC32E8u;
label_1cc32e8:
    // 0x1cc32e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc32e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc32ec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cc32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cc32f0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cc32f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cc32f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc32f8: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC32F8u;
    SET_GPR_U32(ctx, 31, 0x1CC3300u);
    ctx->pc = 0x1CC32FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC32F8u;
    // 0x1cc32fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC32F8u, 0x1CC3300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3300u;
label_1cc3300:
    // 0x1cc3300: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cc3300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cc3304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3308: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc3308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc330c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC330Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC330Cu;
        // 0x1cc3310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC330Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3314u;
    // 0x1cc3314: 0x0  nop
    ctx->pc = 0x1cc3314u;
    // NOP
    ctx->pc = 0x1cc3318u;
}
