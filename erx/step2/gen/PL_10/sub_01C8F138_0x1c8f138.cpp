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

// Function: sub_01C8F138
// Address: 0x1c8f138 - 0x1c8f270
void sub_01C8F138_0x1c8f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F138_0x1c8f138");
#endif

    switch (ctx->pc) {
        case 0x1c8f158u: goto label_1c8f158;
        case 0x1c8f16cu: goto label_1c8f16c;
        case 0x1c8f170u: goto label_1c8f170;
        case 0x1c8f18cu: goto label_1c8f18c;
        case 0x1c8f19cu: goto label_1c8f19c;
        case 0x1c8f1e8u: goto label_1c8f1e8;
        case 0x1c8f224u: goto label_1c8f224;
        case 0x1c8f230u: goto label_1c8f230;
        case 0x1c8f240u: goto label_1c8f240;
        case 0x1c8f258u: goto label_1c8f258;
        default: break;
    }

    ctx->pc = 0x1c8f138u;

    // 0x1c8f138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8f13c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f140: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8f140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8f144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8f148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8f148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f14c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8f150: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F150u;
    SET_GPR_U32(ctx, 31, 0x1C8F158u);
    ctx->pc = 0x1C8F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F150u;
    // 0x1c8f154: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F150u, 0x1C8F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F158u;
label_1c8f158:
    // 0x1c8f158: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c8f158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c8f15c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8F15Cu;
    {
        const bool branch_taken_0x1c8f15c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F15Cu;
        // 0x1c8f160: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f15c) {
            ctx->pc = 0x1C8F1A8u;
            goto label_1c8f1a8;
        }
    }
    ctx->pc = 0x1C8F164u;
    // 0x1c8f164: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8F164u;
    {
        const bool branch_taken_0x1c8f164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c8f164) {
            ctx->pc = 0x1C8F184u;
            goto label_1c8f184;
        }
    }
    ctx->pc = 0x1C8F16Cu;
label_1c8f16c:
    // 0x1c8f16c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8f16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f170:
    // 0x1c8f170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8f174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F17Cu;
        // 0x1c8f180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F184u;
label_1c8f184:
    // 0x1c8f184: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8F184u;
    SET_GPR_U32(ctx, 31, 0x1C8F18Cu);
    ctx->pc = 0x1C8F188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F184u;
    // 0x1c8f188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8F184u, 0x1C8F18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F18Cu;
label_1c8f18c:
    // 0x1c8f18c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C8F18Cu;
    {
        const bool branch_taken_0x1c8f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C8F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F18Cu;
        // 0x1c8f190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f18c) {
            ctx->pc = 0x1C8F16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f16c;
        }
    }
    ctx->pc = 0x1C8F194u;
    // 0x1c8f194: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8F194u;
    SET_GPR_U32(ctx, 31, 0x1C8F19Cu);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8F194u, 0x1C8F19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F19Cu;
label_1c8f19c:
    // 0x1c8f19c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C8F19Cu;
    {
        const bool branch_taken_0x1c8f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F19Cu;
        // 0x1c8f1a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f19c) {
            ctx->pc = 0x1C8F170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f170;
        }
    }
    ctx->pc = 0x1C8F1A4u;
    // 0x1c8f1a4: 0x0  nop
    ctx->pc = 0x1c8f1a4u;
    // NOP
label_1c8f1a8:
    // 0x1c8f1a8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c8f1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c8f1ac: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C8F1ACu;
    {
        const bool branch_taken_0x1c8f1ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F1ACu;
        // 0x1c8f1b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f1ac) {
            ctx->pc = 0x1C8F170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f170;
        }
    }
    ctx->pc = 0x1C8F1B4u;
    // 0x1c8f1b4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c8f1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c8f1b8: 0x3c0e01c9  lui         $t6, 0x1C9
    ctx->pc = 0x1c8f1b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f1bc: 0x25ce2900  addiu       $t6, $t6, 0x2900
    ctx->pc = 0x1c8f1bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10496));
    // 0x1c8f1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8f1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f1c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8f1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8f1c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f1cc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8f1ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8f1d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f1d4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8f1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8f1d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f1dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f1e0: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F1E0u;
    SET_GPR_U32(ctx, 31, 0x1C8F1E8u);
    ctx->pc = 0x1C8F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F1E0u;
    // 0x1c8f1e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F1E0u, 0x1C8F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F1E8u;
label_1c8f1e8:
    // 0x1c8f1e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8f1e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f1ec: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C8F1ECu;
    {
        const bool branch_taken_0x1c8f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F1ECu;
        // 0x1c8f1f0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f1ec) {
            ctx->pc = 0x1C8F16Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f16c;
        }
    }
    ctx->pc = 0x1C8F1F4u;
    // 0x1c8f1f4: 0x0  nop
    ctx->pc = 0x1c8f1f4u;
    // NOP
    // 0x1c8f1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f1fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f20c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f214: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f218: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8f218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f21c: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F21Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F224u);
    ctx->pc = 0x1C8F220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F21Cu;
    // 0x1c8f220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F21Cu, 0x1C8F224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F224u;
label_1c8f224:
    // 0x1c8f224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f228: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8F228u;
    SET_GPR_U32(ctx, 31, 0x1C8F230u);
    ctx->pc = 0x1C8F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F228u;
    // 0x1c8f22c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8F228u, 0x1C8F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F230u;
label_1c8f230:
    // 0x1c8f230: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8f234: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8f234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8f238: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F238u;
    SET_GPR_U32(ctx, 31, 0x1C8F240u);
    ctx->pc = 0x1C8F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F238u;
    // 0x1c8f23c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F238u, 0x1C8F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F240u;
label_1c8f240:
    // 0x1c8f240: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8f240u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f244: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c8f244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c8f248: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c8f248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c8f24c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8f250: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F250u;
    SET_GPR_U32(ctx, 31, 0x1C8F258u);
    ctx->pc = 0x1C8F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F250u;
    // 0x1c8f254: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F250u, 0x1C8F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F258u;
label_1c8f258:
    // 0x1c8f258: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c8f258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c8f25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f260: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f264: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F264u;
        // 0x1c8f268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F26Cu;
    // 0x1c8f26c: 0x0  nop
    ctx->pc = 0x1c8f26cu;
    // NOP
    ctx->pc = 0x1c8f270u;
}
