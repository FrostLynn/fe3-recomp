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

// Function: sub_01D34030
// Address: 0x1d34030 - 0x1d34140
void sub_01D34030_0x1d34030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34030_0x1d34030");
#endif

    switch (ctx->pc) {
        case 0x1d3404cu: goto label_1d3404c;
        case 0x1d34054u: goto label_1d34054;
        case 0x1d34068u: goto label_1d34068;
        case 0x1d3406cu: goto label_1d3406c;
        case 0x1d340c4u: goto label_1d340c4;
        case 0x1d340d4u: goto label_1d340d4;
        case 0x1d340e8u: goto label_1d340e8;
        case 0x1d340fcu: goto label_1d340fc;
        case 0x1d3410cu: goto label_1d3410c;
        default: break;
    }

    ctx->pc = 0x1d34030u;

    // 0x1d34030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d34034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d34038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3403c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d34040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d34044: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D34044u;
    SET_GPR_U32(ctx, 31, 0x1D3404Cu);
    ctx->pc = 0x1D34048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34044u;
    // 0x1d34048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D34044u, 0x1D3404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3404Cu;
label_1d3404c:
    // 0x1d3404c: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D3404Cu;
    SET_GPR_U32(ctx, 31, 0x1D34054u);
    ctx->pc = 0x1D34050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3404Cu;
    // 0x1d34050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D3404Cu, 0x1D34054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34054u;
label_1d34054:
    // 0x1d34054: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d34054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34058: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34058u;
    {
        const bool branch_taken_0x1d34058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34058u;
        // 0x1d3405c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34058) {
            ctx->pc = 0x1D3407Cu;
            goto label_1d3407c;
        }
    }
    ctx->pc = 0x1D34060u;
    // 0x1d34060: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D34060u;
    SET_GPR_U32(ctx, 31, 0x1D34068u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D34060u, 0x1D34068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34068u;
label_1d34068:
    // 0x1d34068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d34068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3406c:
    // 0x1d3406c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3406cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d34070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34074: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34074u;
        // 0x1d34078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3407Cu;
label_1d3407c:
    // 0x1d3407c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3407Cu;
    {
        const bool branch_taken_0x1d3407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3407Cu;
        // 0x1d34080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3407c) {
            ctx->pc = 0x1D3406Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3406c;
        }
    }
    ctx->pc = 0x1D34084u;
    // 0x1d34084: 0x0  nop
    ctx->pc = 0x1d34084u;
    // NOP
    // 0x1d34088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d34088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3408c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34090: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d34090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d34094: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d34094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d34098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d34098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3409c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3409cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d340a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d340a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d340a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d340a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d340a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d340ac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d340acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d340b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d340b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d340b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d340b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d340b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d340b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340bc: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D340BCu;
    SET_GPR_U32(ctx, 31, 0x1D340C4u);
    ctx->pc = 0x1D340C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D340BCu;
    // 0x1d340c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D340BCu, 0x1D340C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D340C4u;
label_1d340c4:
    // 0x1d340c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d340c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d340c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d340c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340cc: 0xc74cd58  jal         func_1D33560
    ctx->pc = 0x1D340CCu;
    SET_GPR_U32(ctx, 31, 0x1D340D4u);
    ctx->pc = 0x1D340D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D340CCu;
    // 0x1d340d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33560u, 0x1D340CCu, 0x1D340D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D340D4u;
label_1d340d4:
    // 0x1d340d4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d340d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d340d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d340d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d340dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340e0: 0xc74cd5a  jal         func_1D33568
    ctx->pc = 0x1D340E0u;
    SET_GPR_U32(ctx, 31, 0x1D340E8u);
    ctx->pc = 0x1D340E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D340E0u;
    // 0x1d340e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33568u, 0x1D340E0u, 0x1D340E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D340E8u;
label_1d340e8:
    // 0x1d340e8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d340e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d340ec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d340ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d340f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d340f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d340f4: 0xc74cd5c  jal         func_1D33570
    ctx->pc = 0x1D340F4u;
    SET_GPR_U32(ctx, 31, 0x1D340FCu);
    ctx->pc = 0x1D340F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D340F4u;
    // 0x1d340f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33570u, 0x1D340F4u, 0x1D340FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D340FCu;
label_1d340fc:
    // 0x1d340fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d340fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d34100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34104: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D34104u;
    SET_GPR_U32(ctx, 31, 0x1D3410Cu);
    ctx->pc = 0x1D34108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34104u;
    // 0x1d34108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D34104u, 0x1D3410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3410Cu;
label_1d3410c:
    // 0x1d3410c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d3410cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d34110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34114: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d34114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3411c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3411cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d34120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34124: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d34124u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d34128: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d34128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3412c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d3412cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d34130: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d34130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d34134: 0x874cd5e  j           func_1D33578
    ctx->pc = 0x1D34134u;
    ctx->pc = 0x1D34138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34134u;
    // 0x1d34138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33578u;
    sub_01D33578_0x1d33578(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3413Cu;
    // 0x1d3413c: 0x0  nop
    ctx->pc = 0x1d3413cu;
    // NOP
    ctx->pc = 0x1d34140u;
}
