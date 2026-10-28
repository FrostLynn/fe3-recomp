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

// Function: sub_01DEAF78
// Address: 0x1deaf78 - 0x1deb070
void sub_01DEAF78_0x1deaf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEAF78_0x1deaf78");
#endif

    switch (ctx->pc) {
        case 0x1deafb4u: goto label_1deafb4;
        case 0x1deafc8u: goto label_1deafc8;
        case 0x1deafdcu: goto label_1deafdc;
        case 0x1deaff0u: goto label_1deaff0;
        case 0x1deb014u: goto label_1deb014;
        case 0x1deb030u: goto label_1deb030;
        default: break;
    }

    ctx->pc = 0x1deaf78u;

    // 0x1deaf78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1deaf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1deaf7c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1deaf7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1deaf80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1deaf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1deaf84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1deaf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1deaf88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1deaf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1deaf8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1deaf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1deaf90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1deaf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1deaf94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1deaf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1deaf98: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DEAF98u;
    {
        const bool branch_taken_0x1deaf98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEAF98u;
        // 0x1deaf9c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deaf98) {
            ctx->pc = 0x1DEB020u;
            goto label_1deb020;
        }
    }
    ctx->pc = 0x1DEAFA0u;
    // 0x1deafa0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deafa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deafa4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deafa8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1deafa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1deafac: 0xc77abc8  jal         func_1DEAF20
    ctx->pc = 0x1DEAFACu;
    SET_GPR_U32(ctx, 31, 0x1DEAFB4u);
    ctx->pc = 0x1DEAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAFACu;
    // 0x1deafb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF20u, 0x1DEAFACu, 0x1DEAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAFB4u;
label_1deafb4:
    // 0x1deafb4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deafb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deafb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1deafb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1deafbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafc0: 0xc77abca  jal         func_1DEAF28
    ctx->pc = 0x1DEAFC0u;
    SET_GPR_U32(ctx, 31, 0x1DEAFC8u);
    ctx->pc = 0x1DEAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAFC0u;
    // 0x1deafc4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF28u, 0x1DEAFC0u, 0x1DEAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAFC8u;
label_1deafc8:
    // 0x1deafc8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deafc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deafcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1deafccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1deafd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafd4: 0xc77abcc  jal         func_1DEAF30
    ctx->pc = 0x1DEAFD4u;
    SET_GPR_U32(ctx, 31, 0x1DEAFDCu);
    ctx->pc = 0x1DEAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAFD4u;
    // 0x1deafd8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF30u, 0x1DEAFD4u, 0x1DEAFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAFDCu;
label_1deafdc:
    // 0x1deafdc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deafdcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deafe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1deafe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1deafe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deafe8: 0xc77abce  jal         func_1DEAF38
    ctx->pc = 0x1DEAFE8u;
    SET_GPR_U32(ctx, 31, 0x1DEAFF0u);
    ctx->pc = 0x1DEAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEAFE8u;
    // 0x1deafec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF38u, 0x1DEAFE8u, 0x1DEAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEAFF0u;
label_1deaff0:
    // 0x1deaff0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deaff0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deaff4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1deaff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deaff8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1deaff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deaffc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1deaffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb000: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1deb000u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb004: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1deb004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb008: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1deb008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb00c: 0xc77abd0  jal         func_1DEAF40
    ctx->pc = 0x1DEB00Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB014u);
    ctx->pc = 0x1DEB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB00Cu;
    // 0x1deb010: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF40u, 0x1DEB00Cu, 0x1DEB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB014u;
label_1deb014:
    // 0x1deb014: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1deb014u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1deb018: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1deb018u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1deb01c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1deb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1deb020:
    // 0x1deb020: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb020u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb024: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1deb024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb028: 0xc77abd2  jal         func_1DEAF48
    ctx->pc = 0x1DEB028u;
    SET_GPR_U32(ctx, 31, 0x1DEB030u);
    ctx->pc = 0x1DEB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB028u;
    // 0x1deb02c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF48u, 0x1DEB028u, 0x1DEB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB030u;
label_1deb030:
    // 0x1deb030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1deb030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1deb034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1deb034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1deb038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEB038u;
    {
        const bool branch_taken_0x1deb038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB038u;
        // 0x1deb03c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb038) {
            ctx->pc = 0x1DEB048u;
            goto label_1deb048;
        }
    }
    ctx->pc = 0x1DEB040u;
    // 0x1deb040: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1deb040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1deb044: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1deb044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb048:
    // 0x1deb048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1deb048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb04c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1deb04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1deb050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1deb050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1deb054: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1deb054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1deb058: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1deb058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1deb05c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1deb05cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1deb060: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1deb060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1deb064: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB064u;
        // 0x1deb068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB06Cu;
    // 0x1deb06c: 0x0  nop
    ctx->pc = 0x1deb06cu;
    // NOP
    ctx->pc = 0x1deb070u;
}
