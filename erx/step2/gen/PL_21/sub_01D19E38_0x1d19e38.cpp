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

// Function: sub_01D19E38
// Address: 0x1d19e38 - 0x1d19f60
void sub_01D19E38_0x1d19e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19E38_0x1d19e38");
#endif

    switch (ctx->pc) {
        case 0x1d19e60u: goto label_1d19e60;
        case 0x1d19e74u: goto label_1d19e74;
        case 0x1d19e78u: goto label_1d19e78;
        case 0x1d19e98u: goto label_1d19e98;
        case 0x1d19ea8u: goto label_1d19ea8;
        case 0x1d19edcu: goto label_1d19edc;
        case 0x1d19f14u: goto label_1d19f14;
        case 0x1d19f20u: goto label_1d19f20;
        case 0x1d19f30u: goto label_1d19f30;
        case 0x1d19f48u: goto label_1d19f48;
        default: break;
    }

    ctx->pc = 0x1d19e38u;

    // 0x1d19e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d19e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d19e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d19e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d19e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19e44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d19e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d19e48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d19e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19e4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d19e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d19e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d19e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19e54: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d19e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d19e58: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19E58u;
    SET_GPR_U32(ctx, 31, 0x1D19E60u);
    ctx->pc = 0x1D19E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19E58u;
    // 0x1d19e5c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19E58u, 0x1D19E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19E60u;
label_1d19e60:
    // 0x1d19e60: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d19e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d19e64: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D19E64u;
    {
        const bool branch_taken_0x1d19e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E64u;
        // 0x1d19e68: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19e64) {
            ctx->pc = 0x1D19EB0u;
            goto label_1d19eb0;
        }
    }
    ctx->pc = 0x1D19E6Cu;
    // 0x1d19e6c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D19E6Cu;
    {
        const bool branch_taken_0x1d19e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d19e6c) {
            ctx->pc = 0x1D19E90u;
            goto label_1d19e90;
        }
    }
    ctx->pc = 0x1D19E74u;
label_1d19e74:
    // 0x1d19e74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d19e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d19e78:
    // 0x1d19e78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19e7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d19e7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19e80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d19e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d19e84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d19e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d19e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E88u;
        // 0x1d19e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19E90u;
label_1d19e90:
    // 0x1d19e90: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D19E90u;
    SET_GPR_U32(ctx, 31, 0x1D19E98u);
    ctx->pc = 0x1D19E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19E90u;
    // 0x1d19e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D19E90u, 0x1D19E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19E98u;
label_1d19e98:
    // 0x1d19e98: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D19E98u;
    {
        const bool branch_taken_0x1d19e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D19E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19E98u;
        // 0x1d19e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19e98) {
            ctx->pc = 0x1D19E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19e74;
        }
    }
    ctx->pc = 0x1D19EA0u;
    // 0x1d19ea0: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D19EA0u;
    SET_GPR_U32(ctx, 31, 0x1D19EA8u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D19EA0u, 0x1D19EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19EA8u;
label_1d19ea8:
    // 0x1d19ea8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D19EA8u;
    {
        const bool branch_taken_0x1d19ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19EA8u;
        // 0x1d19eac: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19ea8) {
            ctx->pc = 0x1D19E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19e78;
        }
    }
    ctx->pc = 0x1D19EB0u;
label_1d19eb0:
    // 0x1d19eb0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d19eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d19eb4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D19EB4u;
    {
        const bool branch_taken_0x1d19eb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19EB4u;
        // 0x1d19eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19eb4) {
            ctx->pc = 0x1D19E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19e78;
        }
    }
    ctx->pc = 0x1D19EBCu;
    // 0x1d19ebc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d19ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d19ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d19ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d19eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ed0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d19ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19ed4: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D19ED4u;
    SET_GPR_U32(ctx, 31, 0x1D19EDCu);
    ctx->pc = 0x1D19ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19ED4u;
    // 0x1d19ed8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D19ED4u, 0x1D19EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19EDCu;
label_1d19edc:
    // 0x1d19edc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d19edcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19ee0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D19EE0u;
    {
        const bool branch_taken_0x1d19ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19EE0u;
        // 0x1d19ee4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19ee0) {
            ctx->pc = 0x1D19E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d19e74;
        }
    }
    ctx->pc = 0x1D19EE8u;
    // 0x1d19ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19eec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d19eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d19ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d19efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d19f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d19f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f0c: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D19F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D19F14u);
    ctx->pc = 0x1D19F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19F0Cu;
    // 0x1d19f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D19F0Cu, 0x1D19F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F14u;
label_1d19f14:
    // 0x1d19f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f18: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D19F18u;
    SET_GPR_U32(ctx, 31, 0x1D19F20u);
    ctx->pc = 0x1D19F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19F18u;
    // 0x1d19f1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D19F18u, 0x1D19F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F20u;
label_1d19f20:
    // 0x1d19f20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d19f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d19f24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d19f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d19f28: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19F28u;
    SET_GPR_U32(ctx, 31, 0x1D19F30u);
    ctx->pc = 0x1D19F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19F28u;
    // 0x1d19f2c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19F28u, 0x1D19F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F30u;
label_1d19f30:
    // 0x1d19f30: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d19f30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d19f34: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d19f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d19f38: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d19f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d19f3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d19f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d19f40: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19F40u;
    SET_GPR_U32(ctx, 31, 0x1D19F48u);
    ctx->pc = 0x1D19F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19F40u;
    // 0x1d19f44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19F40u, 0x1D19F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19F48u;
label_1d19f48:
    // 0x1d19f48: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d19f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d19f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d19f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d19f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d19f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d19f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D19F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D19F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19F54u;
        // 0x1d19f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D19F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D19F5Cu;
    // 0x1d19f5c: 0x0  nop
    ctx->pc = 0x1d19f5cu;
    // NOP
    ctx->pc = 0x1d19f60u;
}
