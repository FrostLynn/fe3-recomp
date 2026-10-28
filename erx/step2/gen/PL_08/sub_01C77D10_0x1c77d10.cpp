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

// Function: sub_01C77D10
// Address: 0x1c77d10 - 0x1c77fc8
void sub_01C77D10_0x1c77d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77D10_0x1c77d10");
#endif

    switch (ctx->pc) {
        case 0x1c77d34u: goto label_1c77d34;
        case 0x1c77d4cu: goto label_1c77d4c;
        case 0x1c77d50u: goto label_1c77d50;
        case 0x1c77d70u: goto label_1c77d70;
        case 0x1c77d80u: goto label_1c77d80;
        case 0x1c77db8u: goto label_1c77db8;
        case 0x1c77dbcu: goto label_1c77dbc;
        case 0x1c77df8u: goto label_1c77df8;
        case 0x1c77e08u: goto label_1c77e08;
        case 0x1c77e58u: goto label_1c77e58;
        case 0x1c77ea0u: goto label_1c77ea0;
        case 0x1c77ec4u: goto label_1c77ec4;
        case 0x1c77ed0u: goto label_1c77ed0;
        case 0x1c77f0cu: goto label_1c77f0c;
        case 0x1c77f34u: goto label_1c77f34;
        case 0x1c77f70u: goto label_1c77f70;
        case 0x1c77f9cu: goto label_1c77f9c;
        default: break;
    }

    ctx->pc = 0x1c77d10u;

    // 0x1c77d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c77d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77d18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77d1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c77d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c77d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c77d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77d24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c77d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c77d28: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c77d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c77d2c: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C77D34u);
    ctx->pc = 0x1C77D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77D2Cu;
    // 0x1c77d30: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77D2Cu, 0x1C77D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77D34u;
label_1c77d34:
    // 0x1c77d34: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c77d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c77d38: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C77D38u;
    {
        const bool branch_taken_0x1c77d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D38u;
        // 0x1c77d3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d38) {
            ctx->pc = 0x1C77D88u;
            goto label_1c77d88;
        }
    }
    ctx->pc = 0x1C77D40u;
    // 0x1c77d40: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77d44: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C77D44u;
    {
        const bool branch_taken_0x1c77d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c77d44) {
            ctx->pc = 0x1C77D68u;
            goto label_1c77d68;
        }
    }
    ctx->pc = 0x1C77D4Cu;
label_1c77d4c:
    // 0x1c77d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c77d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c77d50:
    // 0x1c77d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77d54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77d54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77d58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c77d58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77d5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c77d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c77d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D60u;
        // 0x1c77d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77D68u;
label_1c77d68:
    // 0x1c77d68: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77D68u;
    SET_GPR_U32(ctx, 31, 0x1C77D70u);
    ctx->pc = 0x1C77D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77D68u;
    // 0x1c77d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77D68u, 0x1C77D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77D70u;
label_1c77d70:
    // 0x1c77d70: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C77D70u;
    {
        const bool branch_taken_0x1c77d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c77d70) {
            ctx->pc = 0x1C77D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77D70u;
            // 0x1c77d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77d50;
        }
    }
    ctx->pc = 0x1C77D78u;
    // 0x1c77d78: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77D78u;
    SET_GPR_U32(ctx, 31, 0x1C77D80u);
    ctx->pc = 0x1C77D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77D78u;
    // 0x1c77d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77D78u, 0x1C77D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77D80u;
label_1c77d80:
    // 0x1c77d80: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C77D80u;
    {
        const bool branch_taken_0x1c77d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D80u;
        // 0x1c77d84: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d80) {
            ctx->pc = 0x1C77D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77d50;
        }
    }
    ctx->pc = 0x1C77D88u;
label_1c77d88:
    // 0x1c77d88: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c77d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c77d8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77d8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77d90: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c77d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77d94: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c77d94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c77d98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c77d98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c77d9c: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C77D9Cu;
    {
        const bool branch_taken_0x1c77d9c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C77DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77D9Cu;
        // 0x1c77da0: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77d9c) {
            ctx->pc = 0x1C77E04u;
            goto label_1c77e04;
        }
    }
    ctx->pc = 0x1C77DA4u;
    // 0x1c77da4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c77da4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c77da8: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C77DA8u;
    {
        const bool branch_taken_0x1c77da8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DA8u;
        // 0x1c77dac: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77da8) {
            ctx->pc = 0x1C77E6Cu;
            goto label_1c77e6c;
        }
    }
    ctx->pc = 0x1C77DB0u;
    // 0x1c77db0: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C77DB0u;
    {
        const bool branch_taken_0x1c77db0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DB0u;
        // 0x1c77db4: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77db0) {
            ctx->pc = 0x1C77E08u;
            goto label_1c77e08;
        }
    }
    ctx->pc = 0x1C77DB8u;
label_1c77db8:
    // 0x1c77db8: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c77db8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c77dbc:
    // 0x1c77dbc: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C77DBCu;
    {
        const bool branch_taken_0x1c77dbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DBCu;
        // 0x1c77dc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77dbc) {
            ctx->pc = 0x1C77D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77d50;
        }
    }
    ctx->pc = 0x1C77DC4u;
    // 0x1c77dc4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c77dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c77dc8: 0x3c0e01c8  lui         $t6, 0x1C8
    ctx->pc = 0x1c77dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)456 << 16));
    // 0x1c77dcc: 0x25cea6c0  addiu       $t6, $t6, -0x5940
    ctx->pc = 0x1c77dccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944448));
    // 0x1c77dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c77dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77dd4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c77dd4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c77dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ddc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c77ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c77de0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77de4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c77de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c77de8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77de8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77dec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77df0: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77DF0u;
    SET_GPR_U32(ctx, 31, 0x1C77DF8u);
    ctx->pc = 0x1C77DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77DF0u;
    // 0x1c77df4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77DF0u, 0x1C77DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77DF8u;
label_1c77df8:
    // 0x1c77df8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77df8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77dfc: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C77DFCu;
    {
        const bool branch_taken_0x1c77dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77DFCu;
        // 0x1c77e00: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77dfc) {
            ctx->pc = 0x1C77D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77d4c;
        }
    }
    ctx->pc = 0x1C77E04u;
label_1c77e04:
    // 0x1c77e04: 0x3c0fffec  lui         $t7, 0xFFEC
    ctx->pc = 0x1c77e04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65516 << 16));
label_1c77e08:
    // 0x1c77e08: 0x25ef0dd8  addiu       $t7, $t7, 0xDD8
    ctx->pc = 0x1c77e08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3544));
    // 0x1c77e0c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c77e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77e10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c77e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c77e14: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x1C77E14u;
    {
        const bool branch_taken_0x1c77e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C77E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77E14u;
        // 0x1c77e18: 0x3c0f01c8  lui         $t7, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77e14) {
            ctx->pc = 0x1C77DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77db8;
        }
    }
    ctx->pc = 0x1C77E1Cu;
    // 0x1c77e1c: 0x25ef0ddc  addiu       $t7, $t7, 0xDDC
    ctx->pc = 0x1c77e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3548));
    // 0x1c77e20: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c77e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77e24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c77e24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c77e28: 0x4503ffe4  bc1tl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C77E28u;
    {
        const bool branch_taken_0x1c77e28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c77e28) {
            ctx->pc = 0x1C77E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77E28u;
            // 0x1c77e2c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77dbc;
        }
    }
    ctx->pc = 0x1C77E30u;
    // 0x1c77e30: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77e30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77e34: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c77e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c77e38: 0x25ef0de0  addiu       $t7, $t7, 0xDE0
    ctx->pc = 0x1c77e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3552));
    // 0x1c77e3c: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1c77e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1c77e40: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c77e40u;
    { uint32_t bits = FAST_READ32(0x1C80DE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c77e44: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c77e44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c77e48: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77e48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77e4c: 0x25ef0de4  addiu       $t7, $t7, 0xDE4
    ctx->pc = 0x1c77e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3556));
    // 0x1c77e50: 0xc71d8de  jal         func_1C76378
    ctx->pc = 0x1C77E50u;
    SET_GPR_U32(ctx, 31, 0x1C77E58u);
    ctx->pc = 0x1C77E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77E50u;
    // 0x1c77e54: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C76378u, 0x1C77E50u, 0x1C77E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77E58u;
label_1c77e58:
    // 0x1c77e58: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77e58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77e5c: 0x25ef0de8  addiu       $t7, $t7, 0xDE8
    ctx->pc = 0x1c77e5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3560));
    // 0x1c77e60: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c77e60u;
    { uint32_t bits = FAST_READ32(0x1C80DE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c77e64: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C77E64u;
    {
        const bool branch_taken_0x1c77e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77E64u;
        // 0x1c77e68: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77e64) {
            ctx->pc = 0x1C77DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77db8;
        }
    }
    ctx->pc = 0x1C77E6Cu;
label_1c77e6c:
    // 0x1c77e6c: 0x55cfffd3  bnel        $t6, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C77E6Cu;
    {
        const bool branch_taken_0x1c77e6c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c77e6c) {
            ctx->pc = 0x1C77E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77E6Cu;
            // 0x1c77e70: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77dbc;
        }
    }
    ctx->pc = 0x1C77E74u;
    // 0x1c77e74: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C77E74u;
    {
        const bool branch_taken_0x1c77e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77E74u;
        // 0x1c77e78: 0x3c0f01c8  lui         $t7, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77e74) {
            ctx->pc = 0x1C77E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77e08;
        }
    }
    ctx->pc = 0x1C77E7Cu;
    // 0x1c77e7c: 0x0  nop
    ctx->pc = 0x1c77e7cu;
    // NOP
    // 0x1c77e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c77e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77e90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77e94: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77e98: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77E98u;
    SET_GPR_U32(ctx, 31, 0x1C77EA0u);
    ctx->pc = 0x1C77E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77E98u;
    // 0x1c77e9c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77E98u, 0x1C77EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77EA0u;
label_1c77ea0:
    // 0x1c77ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c77ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ea8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c77ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c77eac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77eacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77eb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77eb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77eb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ebc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77EBCu;
    SET_GPR_U32(ctx, 31, 0x1C77EC4u);
    ctx->pc = 0x1C77EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77EBCu;
    // 0x1c77ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77EBCu, 0x1C77EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77EC4u;
label_1c77ec4:
    // 0x1c77ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ec8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C77EC8u;
    SET_GPR_U32(ctx, 31, 0x1C77ED0u);
    ctx->pc = 0x1C77ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77EC8u;
    // 0x1c77ecc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C77EC8u, 0x1C77ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77ED0u;
label_1c77ed0:
    // 0x1c77ed0: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77ed4: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c77ed4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c77ed8: 0x25ef0dec  addiu       $t7, $t7, 0xDEC
    ctx->pc = 0x1c77ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3564));
    // 0x1c77edc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c77edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c77ee0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c77ee0u;
    { uint32_t bits = FAST_READ32(0x1C80DECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c77ee4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c77ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c77ee8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c77ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c77eec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77eecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77ef0: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C77EF0u;
    {
        const bool branch_taken_0x1c77ef0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C77EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77EF0u;
        // 0x1c77ef4: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77ef0) {
            ctx->pc = 0x1C77F78u;
            goto label_1c77f78;
        }
    }
    ctx->pc = 0x1C77EF8u;
    // 0x1c77ef8: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C77EF8u;
    {
        const bool branch_taken_0x1c77ef8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c77ef8) {
            ctx->pc = 0x1C77EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77EF8u;
            // 0x1c77efc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77F48u;
            goto label_1c77f48;
        }
    }
    ctx->pc = 0x1C77F00u;
    // 0x1c77f00: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C77F00u;
    {
        const bool branch_taken_0x1c77f00 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c77f00) {
            ctx->pc = 0x1C77F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77F00u;
            // 0x1c77f04: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77F1Cu;
            goto label_1c77f1c;
        }
    }
    ctx->pc = 0x1C77F08u;
    // 0x1c77f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c77f0c:
    // 0x1c77f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77f10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F14u;
        // 0x1c77f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77F1Cu;
label_1c77f1c:
    // 0x1c77f1c: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77f20: 0x25ef0dec  addiu       $t7, $t7, 0xDEC
    ctx->pc = 0x1c77f20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3564));
    // 0x1c77f24: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c77f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c77f28: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c77f28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c77f2c: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c77f2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c77f30: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c77f30u;
    { uint32_t bits = FAST_READ32(0x1C80DECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c77f34:
    // 0x1c77f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77f40: 0x871d8de  j           func_1C76378
    ctx->pc = 0x1C77F40u;
    ctx->pc = 0x1C77F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77F40u;
    // 0x1c77f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76378u;
    sub_01C76378_0x1c76378(rdram, ctx, runtime); return;
    ctx->pc = 0x1C77F48u;
label_1c77f48:
    // 0x1c77f48: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C77F48u;
    {
        const bool branch_taken_0x1c77f48 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c77f48) {
            ctx->pc = 0x1C77F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C77F48u;
            // 0x1c77f4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C77F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77f0c;
        }
    }
    ctx->pc = 0x1C77F50u;
    // 0x1c77f50: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77f50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77f54: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1c77f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c77f58: 0x25ef0dec  addiu       $t7, $t7, 0xDEC
    ctx->pc = 0x1c77f58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3564));
    // 0x1c77f5c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c77f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c77f60: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c77f60u;
    { uint32_t bits = FAST_READ32(0x1C80DECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c77f64: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77f64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77f68: 0x25ef0df0  addiu       $t7, $t7, 0xDF0
    ctx->pc = 0x1c77f68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3568));
    // 0x1c77f6c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c77f6cu;
    { uint32_t bits = FAST_READ32(0x1C80DF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c77f70:
    // 0x1c77f70: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C77F70u;
    {
        const bool branch_taken_0x1c77f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F70u;
        // 0x1c77f74: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77f70) {
            ctx->pc = 0x1C77F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77f34;
        }
    }
    ctx->pc = 0x1C77F78u;
label_1c77f78:
    // 0x1c77f78: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c77f78u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c77f7c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1C77F7Cu;
    {
        const bool branch_taken_0x1c77f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77F7Cu;
        // 0x1c77f80: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77f7c) {
            ctx->pc = 0x1C77F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77f70;
        }
    }
    ctx->pc = 0x1C77F84u;
    // 0x1c77f84: 0x0  nop
    ctx->pc = 0x1c77f84u;
    // NOP
    // 0x1c77f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c77f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c77f90: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77f94: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77F94u;
    SET_GPR_U32(ctx, 31, 0x1C77F9Cu);
    ctx->pc = 0x1C77F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77F94u;
    // 0x1c77f98: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77F94u, 0x1C77F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77F9Cu;
label_1c77f9c:
    // 0x1c77f9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c77f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c77fa0: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c77fa0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c77fa4: 0x25ef0df4  addiu       $t7, $t7, 0xDF4
    ctx->pc = 0x1c77fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3572));
    // 0x1c77fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c77fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77fac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c77facu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c77fb0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c77fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c77fb4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c77fb4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c77fb8: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1c77fb8u;
    { uint32_t bits = FAST_READ32(0x1C80DF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c77fbc: 0x871d8de  j           func_1C76378
    ctx->pc = 0x1C77FBCu;
    ctx->pc = 0x1C77FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77FBCu;
    // 0x1c77fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76378u;
    sub_01C76378_0x1c76378(rdram, ctx, runtime); return;
    ctx->pc = 0x1C77FC4u;
    // 0x1c77fc4: 0x0  nop
    ctx->pc = 0x1c77fc4u;
    // NOP
    ctx->pc = 0x1c77fc8u;
}
