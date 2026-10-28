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

// Function: sub_01D1B108
// Address: 0x1d1b108 - 0x1d1b218
void sub_01D1B108_0x1d1b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B108_0x1d1b108");
#endif

    switch (ctx->pc) {
        case 0x1d1b128u: goto label_1d1b128;
        case 0x1d1b13cu: goto label_1d1b13c;
        case 0x1d1b140u: goto label_1d1b140;
        case 0x1d1b15cu: goto label_1d1b15c;
        case 0x1d1b16cu: goto label_1d1b16c;
        case 0x1d1b1b8u: goto label_1d1b1b8;
        case 0x1d1b1f4u: goto label_1d1b1f4;
        case 0x1d1b200u: goto label_1d1b200;
        default: break;
    }

    ctx->pc = 0x1d1b108u;

    // 0x1d1b108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1b110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1b114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1b114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1b118: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1b118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b11c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1b120: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B120u;
    SET_GPR_U32(ctx, 31, 0x1D1B128u);
    ctx->pc = 0x1D1B124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B120u;
    // 0x1d1b124: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B120u, 0x1D1B128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B128u;
label_1d1b128:
    // 0x1d1b128: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d1b128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1b12c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1B12Cu;
    {
        const bool branch_taken_0x1d1b12c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B12Cu;
        // 0x1d1b130: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b12c) {
            ctx->pc = 0x1D1B178u;
            goto label_1d1b178;
        }
    }
    ctx->pc = 0x1D1B134u;
    // 0x1d1b134: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B134u;
    {
        const bool branch_taken_0x1d1b134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d1b134) {
            ctx->pc = 0x1D1B154u;
            goto label_1d1b154;
        }
    }
    ctx->pc = 0x1D1B13Cu;
label_1d1b13c:
    // 0x1d1b13c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b13cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b140:
    // 0x1d1b140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1b144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B14Cu;
        // 0x1d1b150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B154u;
label_1d1b154:
    // 0x1d1b154: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B154u;
    SET_GPR_U32(ctx, 31, 0x1D1B15Cu);
    ctx->pc = 0x1D1B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B154u;
    // 0x1d1b158: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B154u, 0x1D1B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B15Cu;
label_1d1b15c:
    // 0x1d1b15c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1B15Cu;
    {
        const bool branch_taken_0x1d1b15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B15Cu;
        // 0x1d1b160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b15c) {
            ctx->pc = 0x1D1B13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b13c;
        }
    }
    ctx->pc = 0x1D1B164u;
    // 0x1d1b164: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B164u;
    SET_GPR_U32(ctx, 31, 0x1D1B16Cu);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B164u, 0x1D1B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B16Cu;
label_1d1b16c:
    // 0x1d1b16c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1B16Cu;
    {
        const bool branch_taken_0x1d1b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B16Cu;
        // 0x1d1b170: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b16c) {
            ctx->pc = 0x1D1B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b140;
        }
    }
    ctx->pc = 0x1D1B174u;
    // 0x1d1b174: 0x0  nop
    ctx->pc = 0x1d1b174u;
    // NOP
label_1d1b178:
    // 0x1d1b178: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d1b178u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d1b17c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D1B17Cu;
    {
        const bool branch_taken_0x1d1b17c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B17Cu;
        // 0x1d1b180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b17c) {
            ctx->pc = 0x1D1B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b140;
        }
    }
    ctx->pc = 0x1D1B184u;
    // 0x1d1b184: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d1b184u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d1b188: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1b188u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b18c: 0x25ce0720  addiu       $t6, $t6, 0x720
    ctx->pc = 0x1d1b18cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1824));
    // 0x1d1b190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b194: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d1b194u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d1b198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b19c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1b19cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1b1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d1b1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1b1a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b1a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b1acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b1b0: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B1B0u;
    SET_GPR_U32(ctx, 31, 0x1D1B1B8u);
    ctx->pc = 0x1D1B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B1B0u;
    // 0x1d1b1b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B1B0u, 0x1D1B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B1B8u;
label_1d1b1b8:
    // 0x1d1b1b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b1bc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D1B1BCu;
    {
        const bool branch_taken_0x1d1b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B1BCu;
        // 0x1d1b1c0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b1bc) {
            ctx->pc = 0x1D1B13Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b13c;
        }
    }
    ctx->pc = 0x1D1B1C4u;
    // 0x1d1b1c4: 0x0  nop
    ctx->pc = 0x1d1b1c4u;
    // NOP
    // 0x1d1b1c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b1cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b1d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b1d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b1dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b1dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b1e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b1e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1ec: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B1ECu;
    SET_GPR_U32(ctx, 31, 0x1D1B1F4u);
    ctx->pc = 0x1D1B1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B1ECu;
    // 0x1d1b1f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B1ECu, 0x1D1B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B1F4u;
label_1d1b1f4:
    // 0x1d1b1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b1f8: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1B1F8u;
    SET_GPR_U32(ctx, 31, 0x1D1B200u);
    ctx->pc = 0x1D1B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B1F8u;
    // 0x1d1b1fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1B1F8u, 0x1D1B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B200u;
label_1d1b200:
    // 0x1d1b200: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1b200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1b204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B20Cu;
        // 0x1d1b210: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B214u;
    // 0x1d1b214: 0x0  nop
    ctx->pc = 0x1d1b214u;
    // NOP
    ctx->pc = 0x1d1b218u;
}
