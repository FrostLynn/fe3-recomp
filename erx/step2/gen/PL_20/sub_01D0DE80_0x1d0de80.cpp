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

// Function: sub_01D0DE80
// Address: 0x1d0de80 - 0x1d0df68
void sub_01D0DE80_0x1d0de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DE80_0x1d0de80");
#endif

    switch (ctx->pc) {
        case 0x1d0de94u: goto label_1d0de94;
        case 0x1d0dea8u: goto label_1d0dea8;
        case 0x1d0deacu: goto label_1d0deac;
        case 0x1d0dec8u: goto label_1d0dec8;
        case 0x1d0ded4u: goto label_1d0ded4;
        case 0x1d0df14u: goto label_1d0df14;
        case 0x1d0df40u: goto label_1d0df40;
        case 0x1d0df4cu: goto label_1d0df4c;
        case 0x1d0df58u: goto label_1d0df58;
        default: break;
    }

    ctx->pc = 0x1d0de80u;

    // 0x1d0de80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0de84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0de88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0de8c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0DE8Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DE94u);
    ctx->pc = 0x1D0DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE8Cu;
    // 0x1d0de90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0DE8Cu, 0x1D0DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE94u;
label_1d0de94:
    // 0x1d0de94: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0de94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0de98: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0DE98u;
    {
        const bool branch_taken_0x1d0de98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DE98u;
        // 0x1d0de9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0de98) {
            ctx->pc = 0x1D0DEBCu;
            goto label_1d0debc;
        }
    }
    ctx->pc = 0x1D0DEA0u;
    // 0x1d0dea0: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0DEA0u;
    SET_GPR_U32(ctx, 31, 0x1D0DEA8u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0DEA0u, 0x1D0DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DEA8u;
label_1d0dea8:
    // 0x1d0dea8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0deac:
    // 0x1d0deac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0deacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0deb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0deb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0deb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DEB4u;
        // 0x1d0deb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DEBCu;
label_1d0debc:
    // 0x1d0debc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0dec0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DEC0u;
    SET_GPR_U32(ctx, 31, 0x1D0DEC8u);
    ctx->pc = 0x1D0DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DEC0u;
    // 0x1d0dec4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DEC0u, 0x1D0DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DEC8u;
label_1d0dec8:
    // 0x1d0dec8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d0dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d0decc: 0xc742f64  jal         func_1D0BD90
    ctx->pc = 0x1D0DECCu;
    SET_GPR_U32(ctx, 31, 0x1D0DED4u);
    ctx->pc = 0x1D0DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DECCu;
    // 0x1d0ded0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD90u, 0x1D0DECCu, 0x1D0DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DED4u;
label_1d0ded4:
    // 0x1d0ded4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D0DED4u;
    {
        const bool branch_taken_0x1d0ded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DED4u;
        // 0x1d0ded8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ded4) {
            ctx->pc = 0x1D0DEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0deac;
        }
    }
    ctx->pc = 0x1D0DEDCu;
    // 0x1d0dedc: 0x0  nop
    ctx->pc = 0x1d0dedcu;
    // NOP
    // 0x1d0dee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0dee4: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0dee4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0dee8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0deec: 0x25ee8f70  addiu       $t6, $t7, -0x7090
    ctx->pc = 0x1d0deecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938480));
    // 0x1d0def0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d0def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d0def4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d0def4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D18F74u));
    // 0x1d0def8: 0x8ded8f70  lw          $t5, -0x7090($t7)
    ctx->pc = 0x1d0def8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D18F70u));
    // 0x1d0defc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0defcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df00: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d0df00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d0df04: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d0df04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d0df08: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0df08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0df0c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DF0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DF14u);
    ctx->pc = 0x1D0DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF0Cu;
    // 0x1d0df10: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DF0Cu, 0x1D0DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DF14u;
label_1d0df14:
    // 0x1d0df14: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d0df14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d0df18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0df18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0df1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0df1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0df20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0df24: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0df24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0df28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0df28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df2c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d0df2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d0df30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df34: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0df34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0df38: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0DF38u;
    SET_GPR_U32(ctx, 31, 0x1D0DF40u);
    ctx->pc = 0x1D0DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF38u;
    // 0x1d0df3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0DF38u, 0x1D0DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DF40u;
label_1d0df40:
    // 0x1d0df40: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0df40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0df44: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DF44u;
    SET_GPR_U32(ctx, 31, 0x1D0DF4Cu);
    ctx->pc = 0x1D0DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF44u;
    // 0x1d0df48: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DF44u, 0x1D0DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DF4Cu;
label_1d0df4c:
    // 0x1d0df4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0df4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0df50: 0xc742f66  jal         func_1D0BD98
    ctx->pc = 0x1D0DF50u;
    SET_GPR_U32(ctx, 31, 0x1D0DF58u);
    ctx->pc = 0x1D0DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DF50u;
    // 0x1d0df54: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD98u, 0x1D0DF50u, 0x1D0DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DF58u;
label_1d0df58:
    // 0x1d0df58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d0df58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0df5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0df5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0df60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DF60u;
        // 0x1d0df64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DF68u;
}
