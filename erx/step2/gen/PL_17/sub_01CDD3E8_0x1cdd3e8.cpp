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

// Function: sub_01CDD3E8
// Address: 0x1cdd3e8 - 0x1cdd560
void sub_01CDD3E8_0x1cdd3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD3E8_0x1cdd3e8");
#endif

    switch (ctx->pc) {
        case 0x1cdd408u: goto label_1cdd408;
        case 0x1cdd40cu: goto label_1cdd40c;
        case 0x1cdd410u: goto label_1cdd410;
        case 0x1cdd42cu: goto label_1cdd42c;
        case 0x1cdd43cu: goto label_1cdd43c;
        case 0x1cdd474u: goto label_1cdd474;
        case 0x1cdd488u: goto label_1cdd488;
        case 0x1cdd48cu: goto label_1cdd48c;
        case 0x1cdd4f8u: goto label_1cdd4f8;
        case 0x1cdd4fcu: goto label_1cdd4fc;
        case 0x1cdd510u: goto label_1cdd510;
        case 0x1cdd518u: goto label_1cdd518;
        default: break;
    }

    ctx->pc = 0x1cdd3e8u;

label_1cdd3e8:
    // 0x1cdd3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd3f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdd3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdd3f4: 0x8c8f0024  lw          $t7, 0x24($a0)
    ctx->pc = 0x1cdd3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1cdd3f8: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDD3F8u;
    {
        const bool branch_taken_0x1cdd3f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD3F8u;
        // 0x1cdd3fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd3f8) {
            ctx->pc = 0x1CDD420u;
            goto label_1cdd420;
        }
    }
    ctx->pc = 0x1CDD400u;
    // 0x1cdd400: 0xc7374d4  jal         func_1CDD350
    ctx->pc = 0x1CDD400u;
    SET_GPR_U32(ctx, 31, 0x1CDD408u);
    ctx->pc = 0x1CDD350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD350u, 0x1CDD400u, 0x1CDD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD408u;
label_1cdd408:
    // 0x1cdd408: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1cdd408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1cdd40c:
    // 0x1cdd40c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdd40cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd410:
    // 0x1cdd410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd414: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd418: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD418u;
        // 0x1cdd41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD420u;
label_1cdd420:
    // 0x1cdd420: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cdd420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cdd424: 0xc7368a8  jal         func_1CDA2A0
    ctx->pc = 0x1CDD424u;
    SET_GPR_U32(ctx, 31, 0x1CDD42Cu);
    ctx->pc = 0x1CDD428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD424u;
    // 0x1cdd428: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA2A0u, 0x1CDD424u, 0x1CDD42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD42Cu;
label_1cdd42c:
    // 0x1cdd42c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDD42Cu;
    {
        const bool branch_taken_0x1cdd42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD42Cu;
        // 0x1cdd430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd42c) {
            ctx->pc = 0x1CDD40Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd40c;
        }
    }
    ctx->pc = 0x1CDD434u;
    // 0x1cdd434: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDD434u;
    SET_GPR_U32(ctx, 31, 0x1CDD43Cu);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDD434u, 0x1CDD43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD43Cu;
label_1cdd43c:
    // 0x1cdd43c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDD43Cu;
    {
        const bool branch_taken_0x1cdd43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD43Cu;
        // 0x1cdd440: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd43c) {
            ctx->pc = 0x1CDD410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd410;
        }
    }
    ctx->pc = 0x1CDD444u;
    // 0x1cdd444: 0x0  nop
    ctx->pc = 0x1cdd444u;
    // NOP
    // 0x1cdd448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd44c: 0x8f8e8084  lw          $t6, -0x7F7C($gp)
    ctx->pc = 0x1cdd44cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934660)));
    // 0x1cdd450: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd454: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd458: 0x11cf0018  beq         $t6, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CDD458u;
    {
        const bool branch_taken_0x1cdd458 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD458u;
        // 0x1cdd45c: 0x29cf0002  slti        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd458) {
            ctx->pc = 0x1CDD4BCu;
            goto label_1cdd4bc;
        }
    }
    ctx->pc = 0x1CDD460u;
    // 0x1cdd460: 0x51e0000c  beql        $t7, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDD460u;
    {
        const bool branch_taken_0x1cdd460 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd460) {
            ctx->pc = 0x1CDD464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD460u;
            // 0x1cdd464: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD494u;
            goto label_1cdd494;
        }
    }
    ctx->pc = 0x1CDD468u;
    // 0x1cdd468: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDD468u;
    {
        const bool branch_taken_0x1cdd468 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD468u;
        // 0x1cdd46c: 0x3c0501ce  lui         $a1, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd468) {
            ctx->pc = 0x1CDD480u;
            goto label_1cdd480;
        }
    }
    ctx->pc = 0x1CDD470u;
    // 0x1cdd470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd474:
    // 0x1cdd474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdd474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd478: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD478u;
        // 0x1cdd47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD480u;
label_1cdd480:
    // 0x1cdd480: 0x24a54200  addiu       $a1, $a1, 0x4200
    ctx->pc = 0x1cdd480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16896));
    // 0x1cdd484: 0x0  nop
    ctx->pc = 0x1cdd484u;
    // NOP
label_1cdd488:
    // 0x1cdd488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd48c:
    // 0x1cdd48c: 0x87374fa  j           func_1CDD3E8
    ctx->pc = 0x1CDD48Cu;
    ctx->pc = 0x1CDD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD48Cu;
    // 0x1cdd490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD3E8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1cdd3e8;
    ctx->pc = 0x1CDD494u;
label_1cdd494:
    // 0x1cdd494: 0x11cf0007  beq         $t6, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDD494u;
    {
        const bool branch_taken_0x1cdd494 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD494u;
        // 0x1cdd498: 0x3c0501ce  lui         $a1, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd494) {
            ctx->pc = 0x1CDD4B4u;
            goto label_1cdd4b4;
        }
    }
    ctx->pc = 0x1CDD49Cu;
    // 0x1cdd49c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cdd49cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdd4a0: 0x15cffff4  bne         $t6, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDD4A0u;
    {
        const bool branch_taken_0x1cdd4a0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4A0u;
        // 0x1cdd4a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4a0) {
            ctx->pc = 0x1CDD474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd474;
        }
    }
    ctx->pc = 0x1CDD4A8u;
    // 0x1cdd4a8: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd4ac: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDD4ACu;
    {
        const bool branch_taken_0x1cdd4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4ACu;
        // 0x1cdd4b0: 0x24a548c0  addiu       $a1, $a1, 0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4ac) {
            ctx->pc = 0x1CDD48Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd48c;
        }
    }
    ctx->pc = 0x1CDD4B4u;
label_1cdd4b4:
    // 0x1cdd4b4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDD4B4u;
    {
        const bool branch_taken_0x1cdd4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4B4u;
        // 0x1cdd4b8: 0x24a54680  addiu       $a1, $a1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4b4) {
            ctx->pc = 0x1CDD488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd488;
        }
    }
    ctx->pc = 0x1CDD4BCu;
label_1cdd4bc:
    // 0x1cdd4bc: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd4c0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1CDD4C0u;
    {
        const bool branch_taken_0x1cdd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4C0u;
        // 0x1cdd4c4: 0x24a54400  addiu       $a1, $a1, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4c0) {
            ctx->pc = 0x1CDD488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd488;
        }
    }
    ctx->pc = 0x1CDD4C8u;
    // 0x1cdd4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd4cc: 0x8f8e8084  lw          $t6, -0x7F7C($gp)
    ctx->pc = 0x1cdd4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934660)));
    // 0x1cdd4d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd4d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd4d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdd4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdd4dc: 0x11cf001a  beq         $t6, $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x1CDD4DCu;
    {
        const bool branch_taken_0x1cdd4dc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4DCu;
        // 0x1cdd4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4dc) {
            ctx->pc = 0x1CDD548u;
            goto label_1cdd548;
        }
    }
    ctx->pc = 0x1CDD4E4u;
    // 0x1cdd4e4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cdd4e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cdd4e8: 0x51e0000d  beql        $t7, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CDD4E8u;
    {
        const bool branch_taken_0x1cdd4e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd4e8) {
            ctx->pc = 0x1CDD4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD4E8u;
            // 0x1cdd4ec: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD520u;
            goto label_1cdd520;
        }
    }
    ctx->pc = 0x1CDD4F0u;
    // 0x1cdd4f0: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDD4F0u;
    {
        const bool branch_taken_0x1cdd4f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD4F0u;
        // 0x1cdd4f4: 0x3c0501ce  lui         $a1, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd4f0) {
            ctx->pc = 0x1CDD508u;
            goto label_1cdd508;
        }
    }
    ctx->pc = 0x1CDD4F8u;
label_1cdd4f8:
    // 0x1cdd4f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd4f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdd4fc:
    // 0x1cdd4fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd500: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD500u;
        // 0x1cdd504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD508u;
label_1cdd508:
    // 0x1cdd508: 0x24a54200  addiu       $a1, $a1, 0x4200
    ctx->pc = 0x1cdd508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16896));
    // 0x1cdd50c: 0x0  nop
    ctx->pc = 0x1cdd50cu;
    // NOP
label_1cdd510:
    // 0x1cdd510: 0xc7374d4  jal         func_1CDD350
    ctx->pc = 0x1CDD510u;
    SET_GPR_U32(ctx, 31, 0x1CDD518u);
    ctx->pc = 0x1CDD350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD350u, 0x1CDD510u, 0x1CDD518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD518u;
label_1cdd518:
    // 0x1cdd518: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDD518u;
    {
        const bool branch_taken_0x1cdd518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD518u;
        // 0x1cdd51c: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd518) {
            ctx->pc = 0x1CDD4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd4f8;
        }
    }
    ctx->pc = 0x1CDD520u;
label_1cdd520:
    // 0x1cdd520: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDD520u;
    {
        const bool branch_taken_0x1cdd520 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD520u;
        // 0x1cdd524: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd520) {
            ctx->pc = 0x1CDD53Cu;
            goto label_1cdd53c;
        }
    }
    ctx->pc = 0x1CDD528u;
    // 0x1cdd528: 0x55cffff4  bnel        $t6, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDD528u;
    {
        const bool branch_taken_0x1cdd528 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdd528) {
            ctx->pc = 0x1CDD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDD528u;
            // 0x1cdd52c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDD4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd4fc;
        }
    }
    ctx->pc = 0x1CDD530u;
    // 0x1cdd530: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd534: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1CDD534u;
    {
        const bool branch_taken_0x1cdd534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD534u;
        // 0x1cdd538: 0x24a548c0  addiu       $a1, $a1, 0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd534) {
            ctx->pc = 0x1CDD510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd510;
        }
    }
    ctx->pc = 0x1CDD53Cu;
label_1cdd53c:
    // 0x1cdd53c: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd540: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CDD540u;
    {
        const bool branch_taken_0x1cdd540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD540u;
        // 0x1cdd544: 0x24a54680  addiu       $a1, $a1, 0x4680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd540) {
            ctx->pc = 0x1CDD510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd510;
        }
    }
    ctx->pc = 0x1CDD548u;
label_1cdd548:
    // 0x1cdd548: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd548u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd54c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDD54Cu;
    {
        const bool branch_taken_0x1cdd54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD54Cu;
        // 0x1cdd550: 0x24a54400  addiu       $a1, $a1, 0x4400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd54c) {
            ctx->pc = 0x1CDD510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdd510;
        }
    }
    ctx->pc = 0x1CDD554u;
    // 0x1cdd554: 0x0  nop
    ctx->pc = 0x1cdd554u;
    // NOP
    // 0x1cdd558: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD560u;
}
