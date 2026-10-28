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

// Function: sub_01D70CF8
// Address: 0x1d70cf8 - 0x1d70e00
void sub_01D70CF8_0x1d70cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70CF8_0x1d70cf8");
#endif

    switch (ctx->pc) {
        case 0x1d70d14u: goto label_1d70d14;
        case 0x1d70d1cu: goto label_1d70d1c;
        case 0x1d70d30u: goto label_1d70d30;
        case 0x1d70d34u: goto label_1d70d34;
        case 0x1d70d74u: goto label_1d70d74;
        case 0x1d70d84u: goto label_1d70d84;
        case 0x1d70d98u: goto label_1d70d98;
        case 0x1d70dc0u: goto label_1d70dc0;
        case 0x1d70dccu: goto label_1d70dcc;
        case 0x1d70ddcu: goto label_1d70ddc;
        default: break;
    }

    ctx->pc = 0x1d70cf8u;

    // 0x1d70cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70cfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70cfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70d00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70d0c: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D70D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D70D14u);
    ctx->pc = 0x1D70D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70D0Cu;
    // 0x1d70d10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D70D0Cu, 0x1D70D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D14u;
label_1d70d14:
    // 0x1d70d14: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D70D14u;
    SET_GPR_U32(ctx, 31, 0x1D70D1Cu);
    ctx->pc = 0x1D70D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70D14u;
    // 0x1d70d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D70D14u, 0x1D70D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D1Cu;
label_1d70d1c:
    // 0x1d70d1c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70d1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70d20: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D70D20u;
    {
        const bool branch_taken_0x1d70d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D70D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D20u;
        // 0x1d70d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70d20) {
            ctx->pc = 0x1D70D44u;
            goto label_1d70d44;
        }
    }
    ctx->pc = 0x1D70D28u;
    // 0x1d70d28: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D70D28u;
    SET_GPR_U32(ctx, 31, 0x1D70D30u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D70D28u, 0x1D70D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D30u;
label_1d70d30:
    // 0x1d70d30: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d70d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d70d34:
    // 0x1d70d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70d38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D3Cu;
        // 0x1d70d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70D44u;
label_1d70d44:
    // 0x1d70d44: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D70D44u;
    {
        const bool branch_taken_0x1d70d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70D44u;
        // 0x1d70d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70d44) {
            ctx->pc = 0x1D70D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70d34;
        }
    }
    ctx->pc = 0x1D70D4Cu;
    // 0x1d70d4c: 0x0  nop
    ctx->pc = 0x1d70d4cu;
    // NOP
    // 0x1d70d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d70d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d70d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70d58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d70d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d70d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d70d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d70d60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d70d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70d64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d70d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d70d68: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d70d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d70d6c: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D70D6Cu;
    SET_GPR_U32(ctx, 31, 0x1D70D74u);
    ctx->pc = 0x1D70D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70D6Cu;
    // 0x1d70d70: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D70D6Cu, 0x1D70D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D74u;
label_1d70d74:
    // 0x1d70d74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d70d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d70d78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d70d78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70d7c: 0xc75c00e  jal         func_1D70038
    ctx->pc = 0x1D70D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D70D84u);
    ctx->pc = 0x1D70D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70D7Cu;
    // 0x1d70d80: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70038u, 0x1D70D7Cu, 0x1D70D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D84u;
label_1d70d84:
    // 0x1d70d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d70d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70d8c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1d70d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1d70d90: 0xc75c014  jal         func_1D70050
    ctx->pc = 0x1D70D90u;
    SET_GPR_U32(ctx, 31, 0x1D70D98u);
    ctx->pc = 0x1D70D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70D90u;
    // 0x1d70d94: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70050u, 0x1D70D90u, 0x1D70D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70D98u;
label_1d70d98:
    // 0x1d70d98: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d70d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d70d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d70d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70da0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d70da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d70da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d70da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70da8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d70da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70dac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d70dacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70db0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d70db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d70db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70db8: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D70DB8u;
    SET_GPR_U32(ctx, 31, 0x1D70DC0u);
    ctx->pc = 0x1D70DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70DB8u;
    // 0x1d70dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D70DB8u, 0x1D70DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70DC0u;
label_1d70dc0:
    // 0x1d70dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70dc4: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D70DC4u;
    SET_GPR_U32(ctx, 31, 0x1D70DCCu);
    ctx->pc = 0x1D70DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70DC4u;
    // 0x1d70dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D70DC4u, 0x1D70DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70DCCu;
label_1d70dcc:
    // 0x1d70dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d70dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70dd0: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x1d70dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1d70dd4: 0xc75c012  jal         func_1D70048
    ctx->pc = 0x1D70DD4u;
    SET_GPR_U32(ctx, 31, 0x1D70DDCu);
    ctx->pc = 0x1D70DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70DD4u;
    // 0x1d70dd8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70048u, 0x1D70DD4u, 0x1D70DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70DDCu;
label_1d70ddc:
    // 0x1d70ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70de0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70de0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70dec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d70decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70df0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d70df0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70df4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d70df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d70df8: 0x875c006  j           func_1D70018
    ctx->pc = 0x1D70DF8u;
    ctx->pc = 0x1D70DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70DF8u;
    // 0x1d70dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    sub_01D70018_0x1d70018(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70E00u;
}
