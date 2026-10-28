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

// Function: sub_01C6C0B0
// Address: 0x1c6c0b0 - 0x1c6c1e8
void sub_01C6C0B0_0x1c6c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C0B0_0x1c6c0b0");
#endif

    switch (ctx->pc) {
        case 0x1c6c0d0u: goto label_1c6c0d0;
        case 0x1c6c0e4u: goto label_1c6c0e4;
        case 0x1c6c0e8u: goto label_1c6c0e8;
        case 0x1c6c104u: goto label_1c6c104;
        case 0x1c6c114u: goto label_1c6c114;
        case 0x1c6c160u: goto label_1c6c160;
        case 0x1c6c19cu: goto label_1c6c19c;
        case 0x1c6c1a8u: goto label_1c6c1a8;
        case 0x1c6c1b8u: goto label_1c6c1b8;
        case 0x1c6c1d0u: goto label_1c6c1d0;
        default: break;
    }

    ctx->pc = 0x1c6c0b0u;

    // 0x1c6c0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6c0b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c0b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6c0bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6c0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6c0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c0c4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6c0c8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C0C8u;
    SET_GPR_U32(ctx, 31, 0x1C6C0D0u);
    ctx->pc = 0x1C6C0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C0C8u;
    // 0x1c6c0cc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C0C8u, 0x1C6C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C0D0u;
label_1c6c0d0:
    // 0x1c6c0d0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c6c0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c6c0d4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6C0D4u;
    {
        const bool branch_taken_0x1c6c0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C0D4u;
        // 0x1c6c0d8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c0d4) {
            ctx->pc = 0x1C6C120u;
            goto label_1c6c120;
        }
    }
    ctx->pc = 0x1C6C0DCu;
    // 0x1c6c0dc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6C0DCu;
    {
        const bool branch_taken_0x1c6c0dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6c0dc) {
            ctx->pc = 0x1C6C0FCu;
            goto label_1c6c0fc;
        }
    }
    ctx->pc = 0x1C6C0E4u;
label_1c6c0e4:
    // 0x1c6c0e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6c0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c0e8:
    // 0x1c6c0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6c0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C0F4u;
        // 0x1c6c0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C0FCu;
label_1c6c0fc:
    // 0x1c6c0fc: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6C0FCu;
    SET_GPR_U32(ctx, 31, 0x1C6C104u);
    ctx->pc = 0x1C6C100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C0FCu;
    // 0x1c6c100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6C0FCu, 0x1C6C104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C104u;
label_1c6c104:
    // 0x1c6c104: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C6C104u;
    {
        const bool branch_taken_0x1c6c104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C104u;
        // 0x1c6c108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c104) {
            ctx->pc = 0x1C6C0E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c0e4;
        }
    }
    ctx->pc = 0x1C6C10Cu;
    // 0x1c6c10c: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6C10Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C114u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6C10Cu, 0x1C6C114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C114u;
label_1c6c114:
    // 0x1c6c114: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C6C114u;
    {
        const bool branch_taken_0x1c6c114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C114u;
        // 0x1c6c118: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c114) {
            ctx->pc = 0x1C6C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c0e8;
        }
    }
    ctx->pc = 0x1C6C11Cu;
    // 0x1c6c11c: 0x0  nop
    ctx->pc = 0x1c6c11cu;
    // NOP
label_1c6c120:
    // 0x1c6c120: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c6c120u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c6c124: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C6C124u;
    {
        const bool branch_taken_0x1c6c124 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C124u;
        // 0x1c6c128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c124) {
            ctx->pc = 0x1C6C0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c0e8;
        }
    }
    ctx->pc = 0x1C6C12Cu;
    // 0x1c6c12c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c6c12cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c6c130: 0x3c0e01c7  lui         $t6, 0x1C7
    ctx->pc = 0x1c6c130u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c134: 0x25cef370  addiu       $t6, $t6, -0xC90
    ctx->pc = 0x1c6c134u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964080));
    // 0x1c6c138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c13c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6c13cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6c140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c144: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6c144u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6c148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6c14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6c150: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c154: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c158: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C158u;
    SET_GPR_U32(ctx, 31, 0x1C6C160u);
    ctx->pc = 0x1C6C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C158u;
    // 0x1c6c15c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C158u, 0x1C6C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C160u;
label_1c6c160:
    // 0x1c6c160: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6c160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c164: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C6C164u;
    {
        const bool branch_taken_0x1c6c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C164u;
        // 0x1c6c168: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c164) {
            ctx->pc = 0x1C6C0E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c0e4;
        }
    }
    ctx->pc = 0x1C6C16Cu;
    // 0x1c6c16c: 0x0  nop
    ctx->pc = 0x1c6c16cu;
    // NOP
    // 0x1c6c170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c174: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6c174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c17c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c17cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6c180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6c184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c188: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c18c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c18cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6c190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c194: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C194u;
    SET_GPR_U32(ctx, 31, 0x1C6C19Cu);
    ctx->pc = 0x1C6C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C194u;
    // 0x1c6c198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C194u, 0x1C6C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C19Cu;
label_1c6c19c:
    // 0x1c6c19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c1a0: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6C1A0u;
    SET_GPR_U32(ctx, 31, 0x1C6C1A8u);
    ctx->pc = 0x1C6C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C1A0u;
    // 0x1c6c1a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6C1A0u, 0x1C6C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1A8u;
label_1c6c1a8:
    // 0x1c6c1a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6c1ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c6c1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6c1b0: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C1B0u;
    SET_GPR_U32(ctx, 31, 0x1C6C1B8u);
    ctx->pc = 0x1C6C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C1B0u;
    // 0x1c6c1b4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C1B0u, 0x1C6C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1B8u;
label_1c6c1b8:
    // 0x1c6c1b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6c1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c1bc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c6c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c6c1c0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c6c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c6c1c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6c1c8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C1C8u;
    SET_GPR_U32(ctx, 31, 0x1C6C1D0u);
    ctx->pc = 0x1C6C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C1C8u;
    // 0x1c6c1cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C1C8u, 0x1C6C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1D0u;
label_1c6c1d0:
    // 0x1c6c1d0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c6c1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c6c1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c1d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C1DCu;
        // 0x1c6c1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C1E4u;
    // 0x1c6c1e4: 0x0  nop
    ctx->pc = 0x1c6c1e4u;
    // NOP
    ctx->pc = 0x1c6c1e8u;
}
