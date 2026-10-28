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

// Function: sub_01C111B0
// Address: 0x1c111b0 - 0x1c112b8
void sub_01C111B0_0x1c111b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C111B0_0x1c111b0");
#endif

    switch (ctx->pc) {
        case 0x1c111ccu: goto label_1c111cc;
        case 0x1c111d4u: goto label_1c111d4;
        case 0x1c111e8u: goto label_1c111e8;
        case 0x1c111f0u: goto label_1c111f0;
        case 0x1c111f4u: goto label_1c111f4;
        case 0x1c11230u: goto label_1c11230;
        case 0x1c1125cu: goto label_1c1125c;
        case 0x1c11268u: goto label_1c11268;
        case 0x1c11274u: goto label_1c11274;
        case 0x1c11288u: goto label_1c11288;
        case 0x1c11298u: goto label_1c11298;
        default: break;
    }

    ctx->pc = 0x1c111b0u;

    // 0x1c111b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c111b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c111b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c111b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c111b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c111b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c111bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c111bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c111c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c111c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c111c4: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C111C4u;
    SET_GPR_U32(ctx, 31, 0x1C111CCu);
    ctx->pc = 0x1C111C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C111C4u;
    // 0x1c111c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C111C4u, 0x1C111CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C111CCu;
label_1c111cc:
    // 0x1c111cc: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C111CCu;
    SET_GPR_U32(ctx, 31, 0x1C111D4u);
    ctx->pc = 0x1C111D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C111CCu;
    // 0x1c111d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C111CCu, 0x1C111D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C111D4u;
label_1c111d4:
    // 0x1c111d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c111d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c111d8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C111D8u;
    {
        const bool branch_taken_0x1c111d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C111DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C111D8u;
        // 0x1c111dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c111d8) {
            ctx->pc = 0x1C11204u;
            goto label_1c11204;
        }
    }
    ctx->pc = 0x1C111E0u;
    // 0x1c111e0: 0xc703dec  jal         func_1C0F7B0
    ctx->pc = 0x1C111E0u;
    SET_GPR_U32(ctx, 31, 0x1C111E8u);
    ctx->pc = 0x1C0F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F7B0u, 0x1C111E0u, 0x1C111E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C111E8u;
label_1c111e8:
    // 0x1c111e8: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C111E8u;
    SET_GPR_U32(ctx, 31, 0x1C111F0u);
    ctx->pc = 0x1C111ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C111E8u;
    // 0x1c111ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C111E8u, 0x1C111F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C111F0u;
label_1c111f0:
    // 0x1c111f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c111f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c111f4:
    // 0x1c111f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c111f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c111f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c111f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c111fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C111FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C111FCu;
        // 0x1c11200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C111FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11204u;
label_1c11204:
    // 0x1c11204: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C11204u;
    {
        const bool branch_taken_0x1c11204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11204u;
        // 0x1c11208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11204) {
            ctx->pc = 0x1C111F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c111f4;
        }
    }
    ctx->pc = 0x1C1120Cu;
    // 0x1c1120c: 0x0  nop
    ctx->pc = 0x1c1120cu;
    // NOP
    // 0x1c11210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c11210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c11214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11218: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c11218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1121c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1121cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c11220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11224: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c11224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c11228: 0xc703dd8  jal         func_1C0F760
    ctx->pc = 0x1C11228u;
    SET_GPR_U32(ctx, 31, 0x1C11230u);
    ctx->pc = 0x1C1122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11228u;
    // 0x1c1122c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F760u, 0x1C11228u, 0x1C11230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11230u;
label_1c11230:
    // 0x1c11230: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c11230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c11234: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1123c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c1123cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11240: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11244: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c11244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11248: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c11248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1124c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1124cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11254: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11254u;
    SET_GPR_U32(ctx, 31, 0x1C1125Cu);
    ctx->pc = 0x1C11258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11254u;
    // 0x1c11258: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11254u, 0x1C1125Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1125Cu;
label_1c1125c:
    // 0x1c1125c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11260: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C11260u;
    SET_GPR_U32(ctx, 31, 0x1C11268u);
    ctx->pc = 0x1C11264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11260u;
    // 0x1c11264: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C11260u, 0x1C11268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11268u;
label_1c11268:
    // 0x1c11268: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1126c: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C1126Cu;
    SET_GPR_U32(ctx, 31, 0x1C11274u);
    ctx->pc = 0x1C11270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1126Cu;
    // 0x1c11270: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C1126Cu, 0x1C11274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11274u;
label_1c11274:
    // 0x1c11274: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c11274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c11278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1127c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c1127cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11280: 0xc703ddc  jal         func_1C0F770
    ctx->pc = 0x1C11280u;
    SET_GPR_U32(ctx, 31, 0x1C11288u);
    ctx->pc = 0x1C11284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11280u;
    // 0x1c11284: 0x240500a4  addiu       $a1, $zero, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F770u, 0x1C11280u, 0x1C11288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11288u;
label_1c11288:
    // 0x1c11288: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1128c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11290: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C11290u;
    SET_GPR_U32(ctx, 31, 0x1C11298u);
    ctx->pc = 0x1C11294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11290u;
    // 0x1c11294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C11290u, 0x1C11298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11298u;
label_1c11298:
    // 0x1c11298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1129c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1129cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c112a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c112a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c112a4: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x1c112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1c112a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c112a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c112ac: 0x8703dde  j           func_1C0F778
    ctx->pc = 0x1C112ACu;
    ctx->pc = 0x1C112B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C112ACu;
    // 0x1c112b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F778u;
    sub_01C0F778_0x1c0f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C112B4u;
    // 0x1c112b4: 0x0  nop
    ctx->pc = 0x1c112b4u;
    // NOP
    ctx->pc = 0x1c112b8u;
}
