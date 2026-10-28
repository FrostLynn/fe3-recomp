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

// Function: sub_01CB8C78
// Address: 0x1cb8c78 - 0x1cb8f78
void sub_01CB8C78_0x1cb8c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8C78_0x1cb8c78");
#endif

    switch (ctx->pc) {
        case 0x1cb8c9cu: goto label_1cb8c9c;
        case 0x1cb8cb4u: goto label_1cb8cb4;
        case 0x1cb8cb8u: goto label_1cb8cb8;
        case 0x1cb8cd8u: goto label_1cb8cd8;
        case 0x1cb8ce8u: goto label_1cb8ce8;
        case 0x1cb8d20u: goto label_1cb8d20;
        case 0x1cb8d24u: goto label_1cb8d24;
        case 0x1cb8d60u: goto label_1cb8d60;
        case 0x1cb8db0u: goto label_1cb8db0;
        case 0x1cb8dbcu: goto label_1cb8dbc;
        case 0x1cb8de0u: goto label_1cb8de0;
        case 0x1cb8e50u: goto label_1cb8e50;
        case 0x1cb8e74u: goto label_1cb8e74;
        case 0x1cb8e80u: goto label_1cb8e80;
        case 0x1cb8ebcu: goto label_1cb8ebc;
        case 0x1cb8ee4u: goto label_1cb8ee4;
        case 0x1cb8f20u: goto label_1cb8f20;
        case 0x1cb8f4cu: goto label_1cb8f4c;
        default: break;
    }

    ctx->pc = 0x1cb8c78u;

    // 0x1cb8c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb8c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8c84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb8c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb8c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8c8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cb8c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cb8c90: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb8c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb8c94: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8C94u;
    SET_GPR_U32(ctx, 31, 0x1CB8C9Cu);
    ctx->pc = 0x1CB8C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8C94u;
    // 0x1cb8c98: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8C94u, 0x1CB8C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C9Cu;
label_1cb8c9c:
    // 0x1cb8c9c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cb8c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cb8ca0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CB8CA0u;
    {
        const bool branch_taken_0x1cb8ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8CA0u;
        // 0x1cb8ca4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8ca0) {
            ctx->pc = 0x1CB8CF0u;
            goto label_1cb8cf0;
        }
    }
    ctx->pc = 0x1CB8CA8u;
    // 0x1cb8ca8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8cac: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB8CACu;
    {
        const bool branch_taken_0x1cb8cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cb8cac) {
            ctx->pc = 0x1CB8CD0u;
            goto label_1cb8cd0;
        }
    }
    ctx->pc = 0x1CB8CB4u;
label_1cb8cb4:
    // 0x1cb8cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb8cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8cb8:
    // 0x1cb8cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8cbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb8cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8cc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb8cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb8cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8CC8u;
        // 0x1cb8ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8CD0u;
label_1cb8cd0:
    // 0x1cb8cd0: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB8CD0u;
    SET_GPR_U32(ctx, 31, 0x1CB8CD8u);
    ctx->pc = 0x1CB8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8CD0u;
    // 0x1cb8cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB8CD0u, 0x1CB8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8CD8u;
label_1cb8cd8:
    // 0x1cb8cd8: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB8CD8u;
    {
        const bool branch_taken_0x1cb8cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cb8cd8) {
            ctx->pc = 0x1CB8CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8CD8u;
            // 0x1cb8cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8cb8;
        }
    }
    ctx->pc = 0x1CB8CE0u;
    // 0x1cb8ce0: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8CE0u;
    SET_GPR_U32(ctx, 31, 0x1CB8CE8u);
    ctx->pc = 0x1CB8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8CE0u;
    // 0x1cb8ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8CE0u, 0x1CB8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8CE8u;
label_1cb8ce8:
    // 0x1cb8ce8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CB8CE8u;
    {
        const bool branch_taken_0x1cb8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8CE8u;
        // 0x1cb8cec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8ce8) {
            ctx->pc = 0x1CB8CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8cb8;
        }
    }
    ctx->pc = 0x1CB8CF0u;
label_1cb8cf0:
    // 0x1cb8cf0: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1cb8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb8cf4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8cf8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cb8cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8cfc: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1cb8cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb8d00: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cb8d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb8d04: 0x11cf0047  beq         $t6, $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x1CB8D04u;
    {
        const bool branch_taken_0x1cb8d04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CB8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D04u;
        // 0x1cb8d08: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d04) {
            ctx->pc = 0x1CB8E24u;
            goto label_1cb8e24;
        }
    }
    ctx->pc = 0x1CB8D0Cu;
    // 0x1cb8d0c: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cb8d0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cb8d10: 0x11e0002f  beqz        $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CB8D10u;
    {
        const bool branch_taken_0x1cb8d10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D10u;
        // 0x1cb8d14: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d10) {
            ctx->pc = 0x1CB8DD0u;
            goto label_1cb8dd0;
        }
    }
    ctx->pc = 0x1CB8D18u;
    // 0x1cb8d18: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CB8D18u;
    {
        const bool branch_taken_0x1cb8d18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D18u;
        // 0x1cb8d1c: 0x3c0f01cc  lui         $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d18) {
            ctx->pc = 0x1CB8D6Cu;
            goto label_1cb8d6c;
        }
    }
    ctx->pc = 0x1CB8D20u;
label_1cb8d20:
    // 0x1cb8d20: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1cb8d20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1cb8d24:
    // 0x1cb8d24: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CB8D24u;
    {
        const bool branch_taken_0x1cb8d24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D24u;
        // 0x1cb8d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d24) {
            ctx->pc = 0x1CB8CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8cb8;
        }
    }
    ctx->pc = 0x1CB8D2Cu;
    // 0x1cb8d2c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cb8d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb8d30: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb8d30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8d34: 0x25cebca0  addiu       $t6, $t6, -0x4360
    ctx->pc = 0x1cb8d34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950048));
    // 0x1cb8d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d3c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb8d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb8d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d44: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb8d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb8d48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d4c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb8d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb8d50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8d50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8d54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8d58: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8D58u;
    SET_GPR_U32(ctx, 31, 0x1CB8D60u);
    ctx->pc = 0x1CB8D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8D58u;
    // 0x1cb8d5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8D58u, 0x1CB8D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8D60u;
label_1cb8d60:
    // 0x1cb8d60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8d64: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1CB8D64u;
    {
        const bool branch_taken_0x1cb8d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D64u;
        // 0x1cb8d68: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d64) {
            ctx->pc = 0x1CB8CB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8cb4;
        }
    }
    ctx->pc = 0x1CB8D6Cu;
label_1cb8d6c:
    // 0x1cb8d6c: 0x25ef2378  addiu       $t7, $t7, 0x2378
    ctx->pc = 0x1cb8d6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9080));
    // 0x1cb8d70: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cb8d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8d74: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb8d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8d78: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CB8D78u;
    {
        const bool branch_taken_0x1cb8d78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8D78u;
        // 0x1cb8d7c: 0x3c0f01cc  lui         $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8d78) {
            ctx->pc = 0x1CB8D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d20;
        }
    }
    ctx->pc = 0x1CB8D80u;
    // 0x1cb8d80: 0x25ef237c  addiu       $t7, $t7, 0x237C
    ctx->pc = 0x1cb8d80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9084));
    // 0x1cb8d84: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cb8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8d88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cb8d88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8d8c: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1CB8D8Cu;
    {
        const bool branch_taken_0x1cb8d8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb8d8c) {
            ctx->pc = 0x1CB8D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8D8Cu;
            // 0x1cb8d90: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d24;
        }
    }
    ctx->pc = 0x1CB8D94u;
    // 0x1cb8d94: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8d94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8d98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cb8d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cb8d9c: 0x25ef2380  addiu       $t7, $t7, 0x2380
    ctx->pc = 0x1cb8d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9088));
    // 0x1cb8da0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cb8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cb8da4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cb8da4u;
    { uint32_t bits = FAST_READ32(0x1CC2380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb8da8: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8da8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8dac: 0x25ef2384  addiu       $t7, $t7, 0x2384
    ctx->pc = 0x1cb8dacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9092));
label_1cb8db0:
    // 0x1cb8db0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cb8db0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cb8db4: 0xc72dc6c  jal         func_1CB71B0
    ctx->pc = 0x1CB8DB4u;
    SET_GPR_U32(ctx, 31, 0x1CB8DBCu);
    ctx->pc = 0x1CB8DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8DB4u;
    // 0x1cb8db8: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB71B0u, 0x1CB8DB4u, 0x1CB8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8DBCu;
label_1cb8dbc:
    // 0x1cb8dbc: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8dbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8dc0: 0x25ef2388  addiu       $t7, $t7, 0x2388
    ctx->pc = 0x1cb8dc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9096));
    // 0x1cb8dc4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cb8dc4u;
    { uint32_t bits = FAST_READ32(0x1CC2388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8dc8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CB8DC8u;
    {
        const bool branch_taken_0x1cb8dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8DC8u;
        // 0x1cb8dcc: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8dc8) {
            ctx->pc = 0x1CB8D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d20;
        }
    }
    ctx->pc = 0x1CB8DD0u;
label_1cb8dd0:
    // 0x1cb8dd0: 0x55cfffd4  bnel        $t6, $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CB8DD0u;
    {
        const bool branch_taken_0x1cb8dd0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cb8dd0) {
            ctx->pc = 0x1CB8DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8DD0u;
            // 0x1cb8dd4: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d24;
        }
    }
    ctx->pc = 0x1CB8DD8u;
    // 0x1cb8dd8: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8ddc: 0x25ef2394  addiu       $t7, $t7, 0x2394
    ctx->pc = 0x1cb8ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9108));
label_1cb8de0:
    // 0x1cb8de0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cb8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8de4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb8de4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8de8: 0x4500ffcd  bc1f        . + 4 + (-0x33 << 2)
    ctx->pc = 0x1CB8DE8u;
    {
        const bool branch_taken_0x1cb8de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8DE8u;
        // 0x1cb8dec: 0x3c0f01cc  lui         $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8de8) {
            ctx->pc = 0x1CB8D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d20;
        }
    }
    ctx->pc = 0x1CB8DF0u;
    // 0x1cb8df0: 0x25ef237c  addiu       $t7, $t7, 0x237C
    ctx->pc = 0x1cb8df0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9084));
    // 0x1cb8df4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cb8df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb8df8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cb8df8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb8dfc: 0x4503ffc9  bc1tl       . + 4 + (-0x37 << 2)
    ctx->pc = 0x1CB8DFCu;
    {
        const bool branch_taken_0x1cb8dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb8dfc) {
            ctx->pc = 0x1CB8E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8DFCu;
            // 0x1cb8e00: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8d24;
        }
    }
    ctx->pc = 0x1CB8E04u;
    // 0x1cb8e04: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8e04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8e08: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cb8e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cb8e0c: 0x25ef2380  addiu       $t7, $t7, 0x2380
    ctx->pc = 0x1cb8e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9088));
    // 0x1cb8e10: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1cb8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1cb8e14: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cb8e14u;
    { uint32_t bits = FAST_READ32(0x1CC2380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb8e18: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8e18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8e1c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CB8E1Cu;
    {
        const bool branch_taken_0x1cb8e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E1Cu;
        // 0x1cb8e20: 0x25ef2390  addiu       $t7, $t7, 0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8e1c) {
            ctx->pc = 0x1CB8DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8db0;
        }
    }
    ctx->pc = 0x1CB8E24u;
label_1cb8e24:
    // 0x1cb8e24: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8e24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8e28: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CB8E28u;
    {
        const bool branch_taken_0x1cb8e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8E28u;
        // 0x1cb8e2c: 0x25ef238c  addiu       $t7, $t7, 0x238C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8e28) {
            ctx->pc = 0x1CB8DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8de0;
        }
    }
    ctx->pc = 0x1CB8E30u;
    // 0x1cb8e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb8e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb8e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8e3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb8e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb8e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e44: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb8e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb8e48: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8E48u;
    SET_GPR_U32(ctx, 31, 0x1CB8E50u);
    ctx->pc = 0x1CB8E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8E48u;
    // 0x1cb8e4c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8E48u, 0x1CB8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8E50u;
label_1cb8e50:
    // 0x1cb8e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb8e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb8e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8e68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb8e68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e6c: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8E74u);
    ctx->pc = 0x1CB8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8E6Cu;
    // 0x1cb8e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8E6Cu, 0x1CB8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8E74u;
label_1cb8e74:
    // 0x1cb8e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e78: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8E78u;
    SET_GPR_U32(ctx, 31, 0x1CB8E80u);
    ctx->pc = 0x1CB8E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8E78u;
    // 0x1cb8e7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8E78u, 0x1CB8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8E80u;
label_1cb8e80:
    // 0x1cb8e80: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8e80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8e84: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1cb8e84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cb8e88: 0x25ef2398  addiu       $t7, $t7, 0x2398
    ctx->pc = 0x1cb8e88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9112));
    // 0x1cb8e8c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cb8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cb8e90: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cb8e90u;
    { uint32_t bits = FAST_READ32(0x1CC2398u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb8e94: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cb8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cb8e98: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cb8e9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8ea0: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CB8EA0u;
    {
        const bool branch_taken_0x1cb8ea0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CB8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8EA0u;
        // 0x1cb8ea4: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8ea0) {
            ctx->pc = 0x1CB8F28u;
            goto label_1cb8f28;
        }
    }
    ctx->pc = 0x1CB8EA8u;
    // 0x1cb8ea8: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CB8EA8u;
    {
        const bool branch_taken_0x1cb8ea8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb8ea8) {
            ctx->pc = 0x1CB8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8EA8u;
            // 0x1cb8eac: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8EF8u;
            goto label_1cb8ef8;
        }
    }
    ctx->pc = 0x1CB8EB0u;
    // 0x1cb8eb0: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CB8EB0u;
    {
        const bool branch_taken_0x1cb8eb0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb8eb0) {
            ctx->pc = 0x1CB8EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8EB0u;
            // 0x1cb8eb4: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8ECCu;
            goto label_1cb8ecc;
        }
    }
    ctx->pc = 0x1CB8EB8u;
    // 0x1cb8eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb8ebc:
    // 0x1cb8ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8EC4u;
        // 0x1cb8ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8ECCu;
label_1cb8ecc:
    // 0x1cb8ecc: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8eccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8ed0: 0x25ef2398  addiu       $t7, $t7, 0x2398
    ctx->pc = 0x1cb8ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9112));
    // 0x1cb8ed4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cb8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cb8ed8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cb8ed8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cb8edc: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1cb8edcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1cb8ee0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cb8ee0u;
    { uint32_t bits = FAST_READ32(0x1CC2398u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb8ee4:
    // 0x1cb8ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8eec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8ef0: 0x872dc6c  j           func_1CB71B0
    ctx->pc = 0x1CB8EF0u;
    ctx->pc = 0x1CB8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8EF0u;
    // 0x1cb8ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB71B0u;
    sub_01CB71B0_0x1cb71b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8EF8u;
label_1cb8ef8:
    // 0x1cb8ef8: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CB8EF8u;
    {
        const bool branch_taken_0x1cb8ef8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cb8ef8) {
            ctx->pc = 0x1CB8EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB8EF8u;
            // 0x1cb8efc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB8EBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8ebc;
        }
    }
    ctx->pc = 0x1CB8F00u;
    // 0x1cb8f00: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8f00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8f04: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1cb8f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb8f08: 0x25ef2398  addiu       $t7, $t7, 0x2398
    ctx->pc = 0x1cb8f08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9112));
    // 0x1cb8f0c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cb8f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cb8f10: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cb8f10u;
    { uint32_t bits = FAST_READ32(0x1CC2398u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cb8f14: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8f14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8f18: 0x25ef239c  addiu       $t7, $t7, 0x239C
    ctx->pc = 0x1cb8f18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9116));
    // 0x1cb8f1c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cb8f1cu;
    { uint32_t bits = FAST_READ32(0x1CC239Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cb8f20:
    // 0x1cb8f20: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CB8F20u;
    {
        const bool branch_taken_0x1cb8f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8F20u;
        // 0x1cb8f24: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f20) {
            ctx->pc = 0x1CB8EE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8ee4;
        }
    }
    ctx->pc = 0x1CB8F28u;
label_1cb8f28:
    // 0x1cb8f28: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cb8f28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cb8f2c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1CB8F2Cu;
    {
        const bool branch_taken_0x1cb8f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8F2Cu;
        // 0x1cb8f30: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f2c) {
            ctx->pc = 0x1CB8F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8f20;
        }
    }
    ctx->pc = 0x1CB8F34u;
    // 0x1cb8f34: 0x0  nop
    ctx->pc = 0x1cb8f34u;
    // NOP
    // 0x1cb8f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8f40: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb8f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb8f44: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8F44u;
    SET_GPR_U32(ctx, 31, 0x1CB8F4Cu);
    ctx->pc = 0x1CB8F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8F44u;
    // 0x1cb8f48: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8F44u, 0x1CB8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8F4Cu;
label_1cb8f4c:
    // 0x1cb8f4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb8f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb8f50: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8f50u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8f54: 0x25ef23a0  addiu       $t7, $t7, 0x23A0
    ctx->pc = 0x1cb8f54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 9120));
    // 0x1cb8f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8f5c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cb8f5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1cb8f60: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cb8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cb8f64: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cb8f64u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cb8f68: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1cb8f68u;
    { uint32_t bits = FAST_READ32(0x1CC23A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cb8f6c: 0x872dc6c  j           func_1CB71B0
    ctx->pc = 0x1CB8F6Cu;
    ctx->pc = 0x1CB8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8F6Cu;
    // 0x1cb8f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB71B0u;
    sub_01CB71B0_0x1cb71b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8F74u;
    // 0x1cb8f74: 0x0  nop
    ctx->pc = 0x1cb8f74u;
    // NOP
    ctx->pc = 0x1cb8f78u;
}
