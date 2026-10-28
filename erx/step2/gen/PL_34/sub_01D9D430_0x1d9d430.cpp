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

// Function: sub_01D9D430
// Address: 0x1d9d430 - 0x1d9d540
void sub_01D9D430_0x1d9d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D430_0x1d9d430");
#endif

    switch (ctx->pc) {
        case 0x1d9d44cu: goto label_1d9d44c;
        case 0x1d9d454u: goto label_1d9d454;
        case 0x1d9d468u: goto label_1d9d468;
        case 0x1d9d46cu: goto label_1d9d46c;
        case 0x1d9d4c4u: goto label_1d9d4c4;
        case 0x1d9d4d4u: goto label_1d9d4d4;
        case 0x1d9d4e8u: goto label_1d9d4e8;
        case 0x1d9d4fcu: goto label_1d9d4fc;
        case 0x1d9d50cu: goto label_1d9d50c;
        default: break;
    }

    ctx->pc = 0x1d9d430u;

    // 0x1d9d430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9d434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9d438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9d43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9d440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9d444: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9D444u;
    SET_GPR_U32(ctx, 31, 0x1D9D44Cu);
    ctx->pc = 0x1D9D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D444u;
    // 0x1d9d448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9D444u, 0x1D9D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D44Cu;
label_1d9d44c:
    // 0x1d9d44c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9D44Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D454u);
    ctx->pc = 0x1D9D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D44Cu;
    // 0x1d9d450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9D44Cu, 0x1D9D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D454u;
label_1d9d454:
    // 0x1d9d454: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9d454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d458: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D458u;
    {
        const bool branch_taken_0x1d9d458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D458u;
        // 0x1d9d45c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d458) {
            ctx->pc = 0x1D9D47Cu;
            goto label_1d9d47c;
        }
    }
    ctx->pc = 0x1D9D460u;
    // 0x1d9d460: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9D460u;
    SET_GPR_U32(ctx, 31, 0x1D9D468u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9D460u, 0x1D9D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D468u;
label_1d9d468:
    // 0x1d9d468: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9d46c:
    // 0x1d9d46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d470: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d474: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D474u;
        // 0x1d9d478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D47Cu;
label_1d9d47c:
    // 0x1d9d47c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9D47Cu;
    {
        const bool branch_taken_0x1d9d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D47Cu;
        // 0x1d9d480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d47c) {
            ctx->pc = 0x1D9D46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d46c;
        }
    }
    ctx->pc = 0x1D9D484u;
    // 0x1d9d484: 0x0  nop
    ctx->pc = 0x1d9d484u;
    // NOP
    // 0x1d9d488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d9d48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d490: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d9d490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d9d494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9d498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d49c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9d4a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d9d4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9d4a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9d4ac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d9d4acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d9d4b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d9d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d9d4b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9d4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9d4b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d9d4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4bc: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D4BCu;
    SET_GPR_U32(ctx, 31, 0x1D9D4C4u);
    ctx->pc = 0x1D9D4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D4BCu;
    // 0x1d9d4c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D4BCu, 0x1D9D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4C4u;
label_1d9d4c4:
    // 0x1d9d4c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9d4c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d9d4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4cc: 0xc767258  jal         func_1D9C960
    ctx->pc = 0x1D9D4CCu;
    SET_GPR_U32(ctx, 31, 0x1D9D4D4u);
    ctx->pc = 0x1D9D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D4CCu;
    // 0x1d9d4d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C960u, 0x1D9D4CCu, 0x1D9D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4D4u;
label_1d9d4d4:
    // 0x1d9d4d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d9d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d9d4d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d9d4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4e0: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9D4E0u;
    SET_GPR_U32(ctx, 31, 0x1D9D4E8u);
    ctx->pc = 0x1D9D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D4E0u;
    // 0x1d9d4e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9D4E0u, 0x1D9D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4E8u;
label_1d9d4e8:
    // 0x1d9d4e8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d9d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d9d4ec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d9d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d9d4f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d9d4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d4f4: 0xc76725c  jal         func_1D9C970
    ctx->pc = 0x1D9D4F4u;
    SET_GPR_U32(ctx, 31, 0x1D9D4FCu);
    ctx->pc = 0x1D9D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D4F4u;
    // 0x1d9d4f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C970u, 0x1D9D4F4u, 0x1D9D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D4FCu;
label_1d9d4fc:
    // 0x1d9d4fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9d4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9d500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d504: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9D504u;
    SET_GPR_U32(ctx, 31, 0x1D9D50Cu);
    ctx->pc = 0x1D9D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D504u;
    // 0x1d9d508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9D504u, 0x1D9D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D50Cu;
label_1d9d50c:
    // 0x1d9d50c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d9d50cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d9d510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d514: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d9d514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d51c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d51cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9d520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d524: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9d524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9d528: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d9d528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9d52c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d9d52cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9d530: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9d530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9d534: 0x876725e  j           func_1D9C978
    ctx->pc = 0x1D9D534u;
    ctx->pc = 0x1D9D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D534u;
    // 0x1d9d538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C978u;
    sub_01D9C978_0x1d9c978(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D53Cu;
    // 0x1d9d53c: 0x0  nop
    ctx->pc = 0x1d9d53cu;
    // NOP
    ctx->pc = 0x1d9d540u;
}
