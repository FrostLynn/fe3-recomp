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

// Function: sub_01D34FB0
// Address: 0x1d34fb0 - 0x1d350e0
void sub_01D34FB0_0x1d34fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34FB0_0x1d34fb0");
#endif

    switch (ctx->pc) {
        case 0x1d34fccu: goto label_1d34fcc;
        case 0x1d34fd4u: goto label_1d34fd4;
        case 0x1d34fe8u: goto label_1d34fe8;
        case 0x1d34fecu: goto label_1d34fec;
        case 0x1d35028u: goto label_1d35028;
        case 0x1d35088u: goto label_1d35088;
        case 0x1d35094u: goto label_1d35094;
        case 0x1d350a0u: goto label_1d350a0;
        case 0x1d350b4u: goto label_1d350b4;
        case 0x1d350c4u: goto label_1d350c4;
        default: break;
    }

    ctx->pc = 0x1d34fb0u;

    // 0x1d34fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34fb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d34fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d34fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d34fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34fc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d34fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d34fc4: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D34FC4u;
    SET_GPR_U32(ctx, 31, 0x1D34FCCu);
    ctx->pc = 0x1D34FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34FC4u;
    // 0x1d34fc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D34FC4u, 0x1D34FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34FCCu;
label_1d34fcc:
    // 0x1d34fcc: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D34FCCu;
    SET_GPR_U32(ctx, 31, 0x1D34FD4u);
    ctx->pc = 0x1D34FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34FCCu;
    // 0x1d34fd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D34FCCu, 0x1D34FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34FD4u;
label_1d34fd4:
    // 0x1d34fd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d34fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34fd8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34FD8u;
    {
        const bool branch_taken_0x1d34fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D34FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34FD8u;
        // 0x1d34fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34fd8) {
            ctx->pc = 0x1D34FFCu;
            goto label_1d34ffc;
        }
    }
    ctx->pc = 0x1D34FE0u;
    // 0x1d34fe0: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D34FE0u;
    SET_GPR_U32(ctx, 31, 0x1D34FE8u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D34FE0u, 0x1D34FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34FE8u;
label_1d34fe8:
    // 0x1d34fe8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d34fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d34fec:
    // 0x1d34fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34ff0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d34ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34FF4u;
        // 0x1d34ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34FFCu;
label_1d34ffc:
    // 0x1d34ffc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D34FFCu;
    {
        const bool branch_taken_0x1d34ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34FFCu;
        // 0x1d35000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34ffc) {
            ctx->pc = 0x1D34FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34fec;
        }
    }
    ctx->pc = 0x1D35004u;
    // 0x1d35004: 0x0  nop
    ctx->pc = 0x1d35004u;
    // NOP
    // 0x1d35008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d35008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3500c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d35010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d35014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d35014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d35018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d35018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3501c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d3501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d35020: 0xc74cd58  jal         func_1D33560
    ctx->pc = 0x1D35020u;
    SET_GPR_U32(ctx, 31, 0x1D35028u);
    ctx->pc = 0x1D35024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35020u;
    // 0x1d35024: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33560u, 0x1D35020u, 0x1D35028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35028u;
label_1d35028:
    // 0x1d35028: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d35028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3502c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3502cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35030: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d35030u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d35034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3503c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1d3503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1d35040: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d35040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d35044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35048: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d35048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3504c: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1d3504cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d35050: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D35050u;
    {
        const bool branch_taken_0x1d35050 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D35054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35050u;
        // 0x1d35054: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35050) {
            ctx->pc = 0x1D35080u;
            goto label_1d35080;
        }
    }
    ctx->pc = 0x1D35058u;
    // 0x1d35058: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1d35058u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d3505c: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3505Cu;
    {
        const bool branch_taken_0x1d3505c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D35060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3505Cu;
        // 0x1d35060: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3505c) {
            ctx->pc = 0x1D35080u;
            goto label_1d35080;
        }
    }
    ctx->pc = 0x1D35064u;
    // 0x1d35064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3506c: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x1d3506cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1d35070: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d35070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35074: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d35074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35078: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d35078u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3507c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3507cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d35080:
    // 0x1d35080: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D35080u;
    SET_GPR_U32(ctx, 31, 0x1D35088u);
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D35080u, 0x1D35088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35088u;
label_1d35088:
    // 0x1d35088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3508c: 0xc74cd5a  jal         func_1D33568
    ctx->pc = 0x1D3508Cu;
    SET_GPR_U32(ctx, 31, 0x1D35094u);
    ctx->pc = 0x1D35090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3508Cu;
    // 0x1d35090: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33568u, 0x1D3508Cu, 0x1D35094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35094u;
label_1d35094:
    // 0x1d35094: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d35094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d35098: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D35098u;
    SET_GPR_U32(ctx, 31, 0x1D350A0u);
    ctx->pc = 0x1D3509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35098u;
    // 0x1d3509c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D35098u, 0x1D350A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D350A0u;
label_1d350a0:
    // 0x1d350a0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d350a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d350a4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d350a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d350a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d350a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d350ac: 0xc74cd5c  jal         func_1D33570
    ctx->pc = 0x1D350ACu;
    SET_GPR_U32(ctx, 31, 0x1D350B4u);
    ctx->pc = 0x1D350B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D350ACu;
    // 0x1d350b0: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33570u, 0x1D350ACu, 0x1D350B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D350B4u;
label_1d350b4:
    // 0x1d350b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d350b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d350b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d350b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d350bc: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D350BCu;
    SET_GPR_U32(ctx, 31, 0x1D350C4u);
    ctx->pc = 0x1D350C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D350BCu;
    // 0x1d350c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D350BCu, 0x1D350C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D350C4u;
label_1d350c4:
    // 0x1d350c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d350c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d350c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d350c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d350cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d350ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d350d0: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x1d350d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1d350d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d350d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d350d8: 0x874cd5e  j           func_1D33578
    ctx->pc = 0x1D350D8u;
    ctx->pc = 0x1D350DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D350D8u;
    // 0x1d350dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33578u;
    sub_01D33578_0x1d33578(rdram, ctx, runtime); return;
    ctx->pc = 0x1D350E0u;
}
