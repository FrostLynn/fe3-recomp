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

// Function: sub_01DEB118
// Address: 0x1deb118 - 0x1deb228
void sub_01DEB118_0x1deb118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB118_0x1deb118");
#endif

    switch (ctx->pc) {
        case 0x1deb12cu: goto label_1deb12c;
        case 0x1deb158u: goto label_1deb158;
        case 0x1deb1b0u: goto label_1deb1b0;
        case 0x1deb1c0u: goto label_1deb1c0;
        case 0x1deb1e8u: goto label_1deb1e8;
        case 0x1deb200u: goto label_1deb200;
        default: break;
    }

    ctx->pc = 0x1deb118u;

    // 0x1deb118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb11c: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x1deb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x1deb120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb124: 0xc77abde  jal         func_1DEAF78
    ctx->pc = 0x1DEB124u;
    SET_GPR_U32(ctx, 31, 0x1DEB12Cu);
    ctx->pc = 0x1DEB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB124u;
    // 0x1deb128: 0x2484b700  addiu       $a0, $a0, -0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF78u, 0x1DEB124u, 0x1DEB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB12Cu;
label_1deb12c:
    // 0x1deb12c: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x1deb12cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x1deb130: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEB130u;
    {
        const bool branch_taken_0x1deb130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB130u;
        // 0x1deb134: 0x354a8000  ori         $t2, $t2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb130) {
            ctx->pc = 0x1DEB168u;
            goto label_1deb168;
        }
    }
    ctx->pc = 0x1DEB138u;
    // 0x1deb138: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb138u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb13c: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1deb13cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb140: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1deb140u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1deb144: 0x8dac002c  lw          $t4, 0x2C($t5)
    ctx->pc = 0x1deb144u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1deb148: 0x8d8e001c  lw          $t6, 0x1C($t4)
    ctx->pc = 0x1deb148u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x1deb14c: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1deb14cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1deb150: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x1deb150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x1deb154: 0xa1e02ce6  sb          $zero, 0x2CE6($t7)
    ctx->pc = 0x1deb154u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 11494), (uint8_t)GPR_U32(ctx, 0));
label_1deb158:
    // 0x1deb158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb15c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1deb15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1deb160: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB160u;
        // 0x1deb164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB168u;
label_1deb168:
    // 0x1deb168: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb168u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb16c: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1deb16cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb170: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1deb170u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1deb174: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1deb174u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1deb178: 0x8dec001c  lw          $t4, 0x1C($t7)
    ctx->pc = 0x1deb178u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1deb17c: 0x8d8e0048  lw          $t6, 0x48($t4)
    ctx->pc = 0x1deb17cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1deb180: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1deb180u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb184: 0x1ca7021  addu        $t6, $t6, $t2
    ctx->pc = 0x1deb184u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1deb188: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DEB188u;
    {
        const bool branch_taken_0x1deb188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB188u;
        // 0x1deb18c: 0xa1cf2ce6  sb          $t7, 0x2CE6($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 11494), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb188) {
            ctx->pc = 0x1DEB158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1deb158;
        }
    }
    ctx->pc = 0x1DEB190u;
    // 0x1deb190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb194: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1deb198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1deb19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1deb19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1deb1a0: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deb1a4: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1deb1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1deb1a8: 0xc77abc8  jal         func_1DEAF20
    ctx->pc = 0x1DEB1A8u;
    SET_GPR_U32(ctx, 31, 0x1DEB1B0u);
    ctx->pc = 0x1DEB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB1A8u;
    // 0x1deb1ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF20u, 0x1DEB1A8u, 0x1DEB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB1B0u;
label_1deb1b0:
    // 0x1deb1b0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb1b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1deb1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb1b8: 0xc77abcc  jal         func_1DEAF30
    ctx->pc = 0x1DEB1B8u;
    SET_GPR_U32(ctx, 31, 0x1DEB1C0u);
    ctx->pc = 0x1DEB1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB1B8u;
    // 0x1deb1bc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF30u, 0x1DEB1B8u, 0x1DEB1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB1C0u;
label_1deb1c0:
    // 0x1deb1c0: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x1deb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x1deb1c4: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1deb1c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb1c8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1deb1c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1deb1cc: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEB1CCu;
    {
        const bool branch_taken_0x1deb1cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB1CCu;
        // 0x1deb1d0: 0x2484b900  addiu       $a0, $a0, -0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb1cc) {
            ctx->pc = 0x1DEB1D8u;
            goto label_1deb1d8;
        }
    }
    ctx->pc = 0x1DEB1D4u;
    // 0x1deb1d4: 0xac400818  sw          $zero, 0x818($v0)
    ctx->pc = 0x1deb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2072), GPR_U32(ctx, 0));
label_1deb1d8:
    // 0x1deb1d8: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1deb1d8u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1deb1dc: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1deb1dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1deb1e0: 0xc77abde  jal         func_1DEAF78
    ctx->pc = 0x1DEB1E0u;
    SET_GPR_U32(ctx, 31, 0x1DEB1E8u);
    ctx->pc = 0x1DEB1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB1E0u;
    // 0x1deb1e4: 0xa5cf056e  sh          $t7, 0x56E($t6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF78u, 0x1DEB1E0u, 0x1DEB1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB1E8u;
label_1deb1e8:
    // 0x1deb1e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEB1E8u;
    {
        const bool branch_taken_0x1deb1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB1E8u;
        // 0x1deb1ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb1e8) {
            ctx->pc = 0x1DEB210u;
            goto label_1deb210;
        }
    }
    ctx->pc = 0x1DEB1F0u;
    // 0x1deb1f0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb1f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb1f4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deb1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deb1f8: 0xc77abcc  jal         func_1DEAF30
    ctx->pc = 0x1DEB1F8u;
    SET_GPR_U32(ctx, 31, 0x1DEB200u);
    ctx->pc = 0x1DEB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB1F8u;
    // 0x1deb1fc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF30u, 0x1DEB1F8u, 0x1DEB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB200u;
label_1deb200:
    // 0x1deb200: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1deb200u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1deb204: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1deb204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1deb208: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1deb208u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1deb20c: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1deb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
label_1deb210:
    // 0x1deb210: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1deb210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1deb214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1deb214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deb218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deb218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb21c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB21Cu;
        // 0x1deb220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB224u;
    // 0x1deb224: 0x0  nop
    ctx->pc = 0x1deb224u;
    // NOP
    ctx->pc = 0x1deb228u;
}
