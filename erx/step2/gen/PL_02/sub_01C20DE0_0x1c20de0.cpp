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

// Function: sub_01C20DE0
// Address: 0x1c20de0 - 0x1c20f00
void sub_01C20DE0_0x1c20de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20DE0_0x1c20de0");
#endif

    switch (ctx->pc) {
        case 0x1c20e08u: goto label_1c20e08;
        case 0x1c20e28u: goto label_1c20e28;
        case 0x1c20e38u: goto label_1c20e38;
        case 0x1c20e3cu: goto label_1c20e3c;
        case 0x1c20e78u: goto label_1c20e78;
        case 0x1c20ea4u: goto label_1c20ea4;
        case 0x1c20eb4u: goto label_1c20eb4;
        case 0x1c20ec0u: goto label_1c20ec0;
        case 0x1c20ed4u: goto label_1c20ed4;
        case 0x1c20ee4u: goto label_1c20ee4;
        default: break;
    }

    ctx->pc = 0x1c20de0u;

    // 0x1c20de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20de4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20de8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20dec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20df0: 0x8c8e0018  lw          $t6, 0x18($a0)
    ctx->pc = 0x1c20df0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c20df4: 0x19c00005  blez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C20DF4u;
    {
        const bool branch_taken_0x1c20df4 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1C20DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20DF4u;
        // 0x1c20df8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20df4) {
            ctx->pc = 0x1C20E0Cu;
            goto label_1c20e0c;
        }
    }
    ctx->pc = 0x1C20DFCu;
    // 0x1c20dfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20e00: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C20E00u;
    SET_GPR_U32(ctx, 31, 0x1C20E08u);
    ctx->pc = 0x1C20E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20E00u;
    // 0x1c20e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C20E00u, 0x1C20E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E08u;
label_1c20e08:
    // 0x1c20e08: 0x8e2e0018  lw          $t6, 0x18($s1)
    ctx->pc = 0x1c20e08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c20e0c:
    // 0x1c20e0c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1c20e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c20e10: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1c20e10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1c20e14: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c20e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20e18: 0xae2e0018  sw          $t6, 0x18($s1)
    ctx->pc = 0x1c20e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 14));
    // 0x1c20e1c: 0xa1f0039c  sb          $s0, 0x39C($t7)
    ctx->pc = 0x1c20e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c20e20: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C20E20u;
    SET_GPR_U32(ctx, 31, 0x1C20E28u);
    ctx->pc = 0x1C20E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20E20u;
    // 0x1c20e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C20E20u, 0x1C20E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E28u;
label_1c20e28:
    // 0x1c20e28: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C20E28u;
    {
        const bool branch_taken_0x1c20e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C20E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E28u;
        // 0x1c20e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20e28) {
            ctx->pc = 0x1C20E50u;
            goto label_1c20e50;
        }
    }
    ctx->pc = 0x1C20E30u;
    // 0x1c20e30: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C20E30u;
    SET_GPR_U32(ctx, 31, 0x1C20E38u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C20E30u, 0x1C20E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E38u;
label_1c20e38:
    // 0x1c20e38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c20e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c20e3c:
    // 0x1c20e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c20e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c20e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E48u;
        // 0x1c20e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20E50u;
label_1c20e50:
    // 0x1c20e50: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C20E50u;
    {
        const bool branch_taken_0x1c20e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20E50u;
        // 0x1c20e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20e50) {
            ctx->pc = 0x1C20E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c20e3c;
        }
    }
    ctx->pc = 0x1C20E58u;
    // 0x1c20e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c20e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c20e70: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C20E70u;
    SET_GPR_U32(ctx, 31, 0x1C20E78u);
    ctx->pc = 0x1C20E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20E70u;
    // 0x1c20e74: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C20E70u, 0x1C20E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E78u;
label_1c20e78:
    // 0x1c20e78: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c20e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c20e7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c20e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20e80: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c20e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c20e84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c20e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c20e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20e8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c20e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c20e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c20e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c20e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20e9c: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C20E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C20EA4u);
    ctx->pc = 0x1C20EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20E9Cu;
    // 0x1c20ea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C20E9Cu, 0x1C20EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20EA4u;
label_1c20ea4:
    // 0x1c20ea4: 0x26310390  addiu       $s1, $s1, 0x390
    ctx->pc = 0x1c20ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c20ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20eac: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C20EACu;
    SET_GPR_U32(ctx, 31, 0x1C20EB4u);
    ctx->pc = 0x1C20EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20EACu;
    // 0x1c20eb0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C20EACu, 0x1C20EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20EB4u;
label_1c20eb4:
    // 0x1c20eb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c20eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c20eb8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20EB8u;
    SET_GPR_U32(ctx, 31, 0x1C20EC0u);
    ctx->pc = 0x1C20EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20EB8u;
    // 0x1c20ebc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20EB8u, 0x1C20EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20EC0u;
label_1c20ec0:
    // 0x1c20ec0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c20ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c20ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c20ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20ec8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c20ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c20ecc: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C20ECCu;
    SET_GPR_U32(ctx, 31, 0x1C20ED4u);
    ctx->pc = 0x1C20ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20ECCu;
    // 0x1c20ed0: 0x240500a8  addiu       $a1, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C20ECCu, 0x1C20ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20ED4u;
label_1c20ed4:
    // 0x1c20ed4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20edc: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C20EDCu;
    SET_GPR_U32(ctx, 31, 0x1C20EE4u);
    ctx->pc = 0x1C20EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20EDCu;
    // 0x1c20ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C20EDCu, 0x1C20EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20EE4u;
label_1c20ee4:
    // 0x1c20ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c20ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20ef0: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1c20ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1c20ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c20ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20ef8: 0x8707c62  j           func_1C1F188
    ctx->pc = 0x1C20EF8u;
    ctx->pc = 0x1C20EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20EF8u;
    // 0x1c20efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    sub_01C1F188_0x1c1f188(rdram, ctx, runtime); return;
    ctx->pc = 0x1C20F00u;
}
