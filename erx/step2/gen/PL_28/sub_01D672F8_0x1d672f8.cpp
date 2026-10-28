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

// Function: sub_01D672F8
// Address: 0x1d672f8 - 0x1d67400
void sub_01D672F8_0x1d672f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D672F8_0x1d672f8");
#endif

    switch (ctx->pc) {
        case 0x1d67314u: goto label_1d67314;
        case 0x1d6731cu: goto label_1d6731c;
        case 0x1d67330u: goto label_1d67330;
        case 0x1d67338u: goto label_1d67338;
        case 0x1d6733cu: goto label_1d6733c;
        case 0x1d67378u: goto label_1d67378;
        case 0x1d673a4u: goto label_1d673a4;
        case 0x1d673b0u: goto label_1d673b0;
        case 0x1d673bcu: goto label_1d673bc;
        case 0x1d673d0u: goto label_1d673d0;
        case 0x1d673e0u: goto label_1d673e0;
        default: break;
    }

    ctx->pc = 0x1d672f8u;

    // 0x1d672f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d672f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d672fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d672fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d67300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6730c: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D6730Cu;
    SET_GPR_U32(ctx, 31, 0x1D67314u);
    ctx->pc = 0x1D67310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6730Cu;
    // 0x1d67310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D6730Cu, 0x1D67314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67314u;
label_1d67314:
    // 0x1d67314: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67314u;
    SET_GPR_U32(ctx, 31, 0x1D6731Cu);
    ctx->pc = 0x1D67318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67314u;
    // 0x1d67318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67314u, 0x1D6731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6731Cu;
label_1d6731c:
    // 0x1d6731c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d6731cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67320: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D67320u;
    {
        const bool branch_taken_0x1d67320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D67324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67320u;
        // 0x1d67324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67320) {
            ctx->pc = 0x1D6734Cu;
            goto label_1d6734c;
        }
    }
    ctx->pc = 0x1D67328u;
    // 0x1d67328: 0xc7599e0  jal         func_1D66780
    ctx->pc = 0x1D67328u;
    SET_GPR_U32(ctx, 31, 0x1D67330u);
    ctx->pc = 0x1D66780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66780u, 0x1D67328u, 0x1D67330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67330u;
label_1d67330:
    // 0x1d67330: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67330u;
    SET_GPR_U32(ctx, 31, 0x1D67338u);
    ctx->pc = 0x1D67334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67330u;
    // 0x1d67334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67330u, 0x1D67338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67338u;
label_1d67338:
    // 0x1d67338: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d6733c:
    // 0x1d6733c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6733cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67340: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67344: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67344u;
        // 0x1d67348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6734Cu;
label_1d6734c:
    // 0x1d6734c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D6734Cu;
    {
        const bool branch_taken_0x1d6734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6734Cu;
        // 0x1d67350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6734c) {
            ctx->pc = 0x1D6733Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6733c;
        }
    }
    ctx->pc = 0x1D67354u;
    // 0x1d67354: 0x0  nop
    ctx->pc = 0x1d67354u;
    // NOP
    // 0x1d67358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6735c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d67360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d67364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d67364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d67368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6736c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d6736cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67370: 0xc7599ce  jal         func_1D66738
    ctx->pc = 0x1D67370u;
    SET_GPR_U32(ctx, 31, 0x1D67378u);
    ctx->pc = 0x1D67374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67370u;
    // 0x1d67374: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66738u, 0x1D67370u, 0x1D67378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67378u;
label_1d67378:
    // 0x1d67378: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d67378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d6737c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d6737cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67384: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d67384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6738c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6738cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67390: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6739c: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D6739Cu;
    SET_GPR_U32(ctx, 31, 0x1D673A4u);
    ctx->pc = 0x1D673A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6739Cu;
    // 0x1d673a0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D6739Cu, 0x1D673A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D673A4u;
label_1d673a4:
    // 0x1d673a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d673a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d673a8: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D673A8u;
    SET_GPR_U32(ctx, 31, 0x1D673B0u);
    ctx->pc = 0x1D673ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673A8u;
    // 0x1d673ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D673A8u, 0x1D673B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D673B0u;
label_1d673b0:
    // 0x1d673b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d673b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d673b4: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D673B4u;
    SET_GPR_U32(ctx, 31, 0x1D673BCu);
    ctx->pc = 0x1D673B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673B4u;
    // 0x1d673b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D673B4u, 0x1D673BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D673BCu;
label_1d673bc:
    // 0x1d673bc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d673bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d673c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d673c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d673c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d673c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d673c8: 0xc7599d2  jal         func_1D66748
    ctx->pc = 0x1D673C8u;
    SET_GPR_U32(ctx, 31, 0x1D673D0u);
    ctx->pc = 0x1D673CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673C8u;
    // 0x1d673cc: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66748u, 0x1D673C8u, 0x1D673D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D673D0u;
label_1d673d0:
    // 0x1d673d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d673d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d673d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d673d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d673d8: 0xc7599c6  jal         func_1D66718
    ctx->pc = 0x1D673D8u;
    SET_GPR_U32(ctx, 31, 0x1D673E0u);
    ctx->pc = 0x1D673DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673D8u;
    // 0x1d673dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66718u, 0x1D673D8u, 0x1D673E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D673E0u;
label_1d673e0:
    // 0x1d673e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d673e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d673e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d673e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d673e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d673e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d673ec: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x1d673ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d673f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d673f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d673f4: 0x87599d4  j           func_1D66750
    ctx->pc = 0x1D673F4u;
    ctx->pc = 0x1D673F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D673F4u;
    // 0x1d673f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66750u;
    sub_01D66750_0x1d66750(rdram, ctx, runtime); return;
    ctx->pc = 0x1D673FCu;
    // 0x1d673fc: 0x0  nop
    ctx->pc = 0x1d673fcu;
    // NOP
    ctx->pc = 0x1d67400u;
}
