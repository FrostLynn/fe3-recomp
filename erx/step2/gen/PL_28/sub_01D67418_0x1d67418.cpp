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

// Function: sub_01D67418
// Address: 0x1d67418 - 0x1d67520
void sub_01D67418_0x1d67418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67418_0x1d67418");
#endif

    switch (ctx->pc) {
        case 0x1d67434u: goto label_1d67434;
        case 0x1d6743cu: goto label_1d6743c;
        case 0x1d67450u: goto label_1d67450;
        case 0x1d67454u: goto label_1d67454;
        case 0x1d67494u: goto label_1d67494;
        case 0x1d674a4u: goto label_1d674a4;
        case 0x1d674b8u: goto label_1d674b8;
        case 0x1d674e0u: goto label_1d674e0;
        case 0x1d674ecu: goto label_1d674ec;
        case 0x1d674fcu: goto label_1d674fc;
        default: break;
    }

    ctx->pc = 0x1d67418u;

    // 0x1d67418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6741c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6741cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6742c: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D6742Cu;
    SET_GPR_U32(ctx, 31, 0x1D67434u);
    ctx->pc = 0x1D67430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6742Cu;
    // 0x1d67430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D6742Cu, 0x1D67434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67434u;
label_1d67434:
    // 0x1d67434: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67434u;
    SET_GPR_U32(ctx, 31, 0x1D6743Cu);
    ctx->pc = 0x1D67438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67434u;
    // 0x1d67438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67434u, 0x1D6743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6743Cu;
label_1d6743c:
    // 0x1d6743c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d6743cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67440: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67440u;
    {
        const bool branch_taken_0x1d67440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D67444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67440u;
        // 0x1d67444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67440) {
            ctx->pc = 0x1D67464u;
            goto label_1d67464;
        }
    }
    ctx->pc = 0x1D67448u;
    // 0x1d67448: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67448u;
    SET_GPR_U32(ctx, 31, 0x1D67450u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67448u, 0x1D67450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67450u;
label_1d67450:
    // 0x1d67450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d67454:
    // 0x1d67454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6745c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6745Cu;
        // 0x1d67460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6745Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67464u;
label_1d67464:
    // 0x1d67464: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D67464u;
    {
        const bool branch_taken_0x1d67464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67464u;
        // 0x1d67468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67464) {
            ctx->pc = 0x1D67454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67454;
        }
    }
    ctx->pc = 0x1D6746Cu;
    // 0x1d6746c: 0x0  nop
    ctx->pc = 0x1d6746cu;
    // NOP
    // 0x1d67470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d67474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67478: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d67478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d6747c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d67480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d67484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d67488: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d6748c: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D6748Cu;
    SET_GPR_U32(ctx, 31, 0x1D67494u);
    ctx->pc = 0x1D67490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6748Cu;
    // 0x1d67490: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D6748Cu, 0x1D67494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67494u;
label_1d67494:
    // 0x1d67494: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67498: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d67498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6749c: 0xc7599ce  jal         func_1D66738
    ctx->pc = 0x1D6749Cu;
    SET_GPR_U32(ctx, 31, 0x1D674A4u);
    ctx->pc = 0x1D674A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6749Cu;
    // 0x1d674a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66738u, 0x1D6749Cu, 0x1D674A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674A4u;
label_1d674a4:
    // 0x1d674a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d674a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d674a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674ac: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x1d674acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x1d674b0: 0xc7599d4  jal         func_1D66750
    ctx->pc = 0x1D674B0u;
    SET_GPR_U32(ctx, 31, 0x1D674B8u);
    ctx->pc = 0x1D674B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D674B0u;
    // 0x1d674b4: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66750u, 0x1D674B0u, 0x1D674B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674B8u;
label_1d674b8:
    // 0x1d674b8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d674b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d674bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d674bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d674c0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d674c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d674c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d674c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d674c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d674cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d674ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d674d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d674d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d674d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674d8: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D674D8u;
    SET_GPR_U32(ctx, 31, 0x1D674E0u);
    ctx->pc = 0x1D674DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D674D8u;
    // 0x1d674dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D674D8u, 0x1D674E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674E0u;
label_1d674e0:
    // 0x1d674e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d674e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674e4: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D674E4u;
    SET_GPR_U32(ctx, 31, 0x1D674ECu);
    ctx->pc = 0x1D674E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D674E4u;
    // 0x1d674e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D674E4u, 0x1D674ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674ECu;
label_1d674ec:
    // 0x1d674ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d674ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d674f0: 0x240500fb  addiu       $a1, $zero, 0xFB
    ctx->pc = 0x1d674f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1d674f4: 0xc7599d2  jal         func_1D66748
    ctx->pc = 0x1D674F4u;
    SET_GPR_U32(ctx, 31, 0x1D674FCu);
    ctx->pc = 0x1D674F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D674F4u;
    // 0x1d674f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66748u, 0x1D674F4u, 0x1D674FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D674FCu;
label_1d674fc:
    // 0x1d674fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d674fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67500: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d67500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6750c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6750cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d67510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d67514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67518: 0x87599c6  j           func_1D66718
    ctx->pc = 0x1D67518u;
    ctx->pc = 0x1D6751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67518u;
    // 0x1d6751c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    sub_01D66718_0x1d66718(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67520u;
}
