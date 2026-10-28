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

// Function: sub_01C76418
// Address: 0x1c76418 - 0x1c76528
void sub_01C76418_0x1c76418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76418_0x1c76418");
#endif

    switch (ctx->pc) {
        case 0x1c76434u: goto label_1c76434;
        case 0x1c7643cu: goto label_1c7643c;
        case 0x1c76450u: goto label_1c76450;
        case 0x1c76454u: goto label_1c76454;
        case 0x1c764acu: goto label_1c764ac;
        case 0x1c764bcu: goto label_1c764bc;
        case 0x1c764d0u: goto label_1c764d0;
        case 0x1c764e4u: goto label_1c764e4;
        case 0x1c764f4u: goto label_1c764f4;
        default: break;
    }

    ctx->pc = 0x1c76418u;

    // 0x1c76418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c76418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7641c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7641cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c76420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c76424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c76428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7642c: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C7642Cu;
    SET_GPR_U32(ctx, 31, 0x1C76434u);
    ctx->pc = 0x1C76430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7642Cu;
    // 0x1c76430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C7642Cu, 0x1C76434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76434u;
label_1c76434:
    // 0x1c76434: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C76434u;
    SET_GPR_U32(ctx, 31, 0x1C7643Cu);
    ctx->pc = 0x1C76438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76434u;
    // 0x1c76438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C76434u, 0x1C7643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7643Cu;
label_1c7643c:
    // 0x1c7643c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c7643cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76440: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C76440u;
    {
        const bool branch_taken_0x1c76440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C76444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76440u;
        // 0x1c76444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76440) {
            ctx->pc = 0x1C76464u;
            goto label_1c76464;
        }
    }
    ctx->pc = 0x1C76448u;
    // 0x1c76448: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C76448u;
    SET_GPR_U32(ctx, 31, 0x1C76450u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C76448u, 0x1C76450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76450u;
label_1c76450:
    // 0x1c76450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c76450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c76454:
    // 0x1c76454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c76458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7645c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7645Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7645Cu;
        // 0x1c76460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7645Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C76464u;
label_1c76464:
    // 0x1c76464: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C76464u;
    {
        const bool branch_taken_0x1c76464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76464u;
        // 0x1c76468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76464) {
            ctx->pc = 0x1C76454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76454;
        }
    }
    ctx->pc = 0x1C7646Cu;
    // 0x1c7646c: 0x0  nop
    ctx->pc = 0x1c7646cu;
    // NOP
    // 0x1c76470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c76470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c76474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76478: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c76478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c7647c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c7647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c76480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c76480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c76484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c76488: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c76488u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7648c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c76490: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c76490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c76494: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c76494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c76498: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c76498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c7649c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c7649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c764a0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c764a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764a4: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C764A4u;
    SET_GPR_U32(ctx, 31, 0x1C764ACu);
    ctx->pc = 0x1C764A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C764A4u;
    // 0x1c764a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C764A4u, 0x1C764ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764ACu;
label_1c764ac:
    // 0x1c764ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c764acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c764b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c764b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764b4: 0xc71d658  jal         func_1C75960
    ctx->pc = 0x1C764B4u;
    SET_GPR_U32(ctx, 31, 0x1C764BCu);
    ctx->pc = 0x1C764B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C764B4u;
    // 0x1c764b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75960u, 0x1C764B4u, 0x1C764BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764BCu;
label_1c764bc:
    // 0x1c764bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c764bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c764c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c764c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c764c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764c8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C764C8u;
    SET_GPR_U32(ctx, 31, 0x1C764D0u);
    ctx->pc = 0x1C764CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C764C8u;
    // 0x1c764cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C764C8u, 0x1C764D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764D0u;
label_1c764d0:
    // 0x1c764d0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c764d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c764d4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c764d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c764d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c764d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764dc: 0xc71d65c  jal         func_1C75970
    ctx->pc = 0x1C764DCu;
    SET_GPR_U32(ctx, 31, 0x1C764E4u);
    ctx->pc = 0x1C764E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C764DCu;
    // 0x1c764e0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75970u, 0x1C764DCu, 0x1C764E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764E4u;
label_1c764e4:
    // 0x1c764e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c764e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c764e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c764e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764ec: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C764ECu;
    SET_GPR_U32(ctx, 31, 0x1C764F4u);
    ctx->pc = 0x1C764F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C764ECu;
    // 0x1c764f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C764ECu, 0x1C764F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C764F4u;
label_1c764f4:
    // 0x1c764f4: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c764f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c764f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c764f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c764fc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c764fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c76504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c76508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7650c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c7650cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c76510: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c76510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c76514: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c76514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c76518: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c76518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7651c: 0x871d65e  j           func_1C75978
    ctx->pc = 0x1C7651Cu;
    ctx->pc = 0x1C76520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7651Cu;
    // 0x1c76520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75978u;
    sub_01C75978_0x1c75978(rdram, ctx, runtime); return;
    ctx->pc = 0x1C76524u;
    // 0x1c76524: 0x0  nop
    ctx->pc = 0x1c76524u;
    // NOP
    ctx->pc = 0x1c76528u;
}
