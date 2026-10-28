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

// Function: sub_01C51B90
// Address: 0x1c51b90 - 0x1c51dc8
void sub_01C51B90_0x1c51b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51B90_0x1c51b90");
#endif

    switch (ctx->pc) {
        case 0x1c51bb4u: goto label_1c51bb4;
        case 0x1c51bccu: goto label_1c51bcc;
        case 0x1c51bd0u: goto label_1c51bd0;
        case 0x1c51bf0u: goto label_1c51bf0;
        case 0x1c51c00u: goto label_1c51c00;
        case 0x1c51c38u: goto label_1c51c38;
        case 0x1c51c3cu: goto label_1c51c3c;
        case 0x1c51c78u: goto label_1c51c78;
        case 0x1c51c88u: goto label_1c51c88;
        case 0x1c51cc8u: goto label_1c51cc8;
        case 0x1c51cd0u: goto label_1c51cd0;
        case 0x1c51d7cu: goto label_1c51d7c;
        case 0x1c51d88u: goto label_1c51d88;
        case 0x1c51d9cu: goto label_1c51d9c;
        case 0x1c51db4u: goto label_1c51db4;
        default: break;
    }

    ctx->pc = 0x1c51b90u;

    // 0x1c51b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c51b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c51b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c51b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c51ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c51ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ba4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c51ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c51ba8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c51ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c51bac: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51BACu;
    SET_GPR_U32(ctx, 31, 0x1C51BB4u);
    ctx->pc = 0x1C51BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51BACu;
    // 0x1c51bb0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51BACu, 0x1C51BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51BB4u;
label_1c51bb4:
    // 0x1c51bb4: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c51bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c51bb8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C51BB8u;
    {
        const bool branch_taken_0x1c51bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51BB8u;
        // 0x1c51bbc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51bb8) {
            ctx->pc = 0x1C51C08u;
            goto label_1c51c08;
        }
    }
    ctx->pc = 0x1C51BC0u;
    // 0x1c51bc0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51bc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51bc4: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51BC4u;
    {
        const bool branch_taken_0x1c51bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c51bc4) {
            ctx->pc = 0x1C51BE8u;
            goto label_1c51be8;
        }
    }
    ctx->pc = 0x1C51BCCu;
label_1c51bcc:
    // 0x1c51bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c51bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51bd0:
    // 0x1c51bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51bd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51bd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c51bd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51bdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c51bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c51be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51BE0u;
        // 0x1c51be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51BE8u;
label_1c51be8:
    // 0x1c51be8: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51BE8u;
    SET_GPR_U32(ctx, 31, 0x1C51BF0u);
    ctx->pc = 0x1C51BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51BE8u;
    // 0x1c51bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51BE8u, 0x1C51BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51BF0u;
label_1c51bf0:
    // 0x1c51bf0: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C51BF0u;
    {
        const bool branch_taken_0x1c51bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c51bf0) {
            ctx->pc = 0x1C51BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51BF0u;
            // 0x1c51bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51bd0;
        }
    }
    ctx->pc = 0x1C51BF8u;
    // 0x1c51bf8: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51BF8u;
    SET_GPR_U32(ctx, 31, 0x1C51C00u);
    ctx->pc = 0x1C51BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51BF8u;
    // 0x1c51bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51BF8u, 0x1C51C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51C00u;
label_1c51c00:
    // 0x1c51c00: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C51C00u;
    {
        const bool branch_taken_0x1c51c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C00u;
        // 0x1c51c04: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c00) {
            ctx->pc = 0x1C51BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51bd0;
        }
    }
    ctx->pc = 0x1C51C08u;
label_1c51c08:
    // 0x1c51c08: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c51c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c51c0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51c10: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c51c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51c14: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c51c14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c51c18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c51c18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c51c1c: 0x11cf0036  beq         $t6, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C51C1Cu;
    {
        const bool branch_taken_0x1c51c1c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C51C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C1Cu;
        // 0x1c51c20: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c1c) {
            ctx->pc = 0x1C51CF8u;
            goto label_1c51cf8;
        }
    }
    ctx->pc = 0x1C51C24u;
    // 0x1c51c24: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c51c24u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c51c28: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C51C28u;
    {
        const bool branch_taken_0x1c51c28 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C28u;
        // 0x1c51c2c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c28) {
            ctx->pc = 0x1C51CE4u;
            goto label_1c51ce4;
        }
    }
    ctx->pc = 0x1C51C30u;
    // 0x1c51c30: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C51C30u;
    {
        const bool branch_taken_0x1c51c30 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C30u;
        // 0x1c51c34: 0x3c0f01c6  lui         $t7, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c30) {
            ctx->pc = 0x1C51C84u;
            goto label_1c51c84;
        }
    }
    ctx->pc = 0x1C51C38u;
label_1c51c38:
    // 0x1c51c38: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c51c38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c51c3c:
    // 0x1c51c3c: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C51C3Cu;
    {
        const bool branch_taken_0x1c51c3c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C3Cu;
        // 0x1c51c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c3c) {
            ctx->pc = 0x1C51BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51bd0;
        }
    }
    ctx->pc = 0x1C51C44u;
    // 0x1c51c44: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c51c44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c51c48: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c51c48u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c51c4c: 0x25ce9a00  addiu       $t6, $t6, -0x6600
    ctx->pc = 0x1c51c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941184));
    // 0x1c51c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c51c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51c54: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c51c54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c51c58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c51c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51c5c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c51c5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c51c60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51c64: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c51c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c51c68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51c68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51c6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51c70: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51C70u;
    SET_GPR_U32(ctx, 31, 0x1C51C78u);
    ctx->pc = 0x1C51C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51C70u;
    // 0x1c51c74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51C70u, 0x1C51C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51C78u;
label_1c51c78:
    // 0x1c51c78: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51c78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51c7c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C51C7Cu;
    {
        const bool branch_taken_0x1c51c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C7Cu;
        // 0x1c51c80: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c7c) {
            ctx->pc = 0x1C51BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51bcc;
        }
    }
    ctx->pc = 0x1C51C84u;
label_1c51c84:
    // 0x1c51c84: 0x25eff460  addiu       $t7, $t7, -0xBA0
    ctx->pc = 0x1c51c84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964320));
label_1c51c88:
    // 0x1c51c88: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c51c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51c8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c51c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51c90: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C51C90u;
    {
        const bool branch_taken_0x1c51c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C51C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51C90u;
        // 0x1c51c94: 0x3c0f01c6  lui         $t7, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51c90) {
            ctx->pc = 0x1C51C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c38;
        }
    }
    ctx->pc = 0x1C51C98u;
    // 0x1c51c98: 0x25eff464  addiu       $t7, $t7, -0xB9C
    ctx->pc = 0x1c51c98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964324));
    // 0x1c51c9c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c51c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51ca0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c51ca0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51ca4: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C51CA4u;
    {
        const bool branch_taken_0x1c51ca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c51ca4) {
            ctx->pc = 0x1C51CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51CA4u;
            // 0x1c51ca8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c3c;
        }
    }
    ctx->pc = 0x1C51CACu;
    // 0x1c51cac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c51cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c51cb0: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51cb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51cb4: 0x25eff468  addiu       $t7, $t7, -0xB98
    ctx->pc = 0x1c51cb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964328));
    // 0x1c51cb8: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1c51cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1c51cbc: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c51cbcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c51cc0: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c51cc0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c51cc4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c51cc4u;
    { uint32_t bits = FAST_READ32(0x1C5F468u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c51cc8:
    // 0x1c51cc8: 0xc7140f0  jal         func_1C503C0
    ctx->pc = 0x1C51CC8u;
    SET_GPR_U32(ctx, 31, 0x1C51CD0u);
    ctx->pc = 0x1C503C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503C0u, 0x1C51CC8u, 0x1C51CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51CD0u;
label_1c51cd0:
    // 0x1c51cd0: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51cd4: 0x25eff46c  addiu       $t7, $t7, -0xB94
    ctx->pc = 0x1c51cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964332));
    // 0x1c51cd8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c51cd8u;
    { uint32_t bits = FAST_READ32(0x1C5F46Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51cdc: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C51CDCu;
    {
        const bool branch_taken_0x1c51cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51CDCu;
        // 0x1c51ce0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51cdc) {
            ctx->pc = 0x1C51C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c38;
        }
    }
    ctx->pc = 0x1C51CE4u;
label_1c51ce4:
    // 0x1c51ce4: 0x55cfffd5  bnel        $t6, $t7, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C51CE4u;
    {
        const bool branch_taken_0x1c51ce4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c51ce4) {
            ctx->pc = 0x1C51CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51CE4u;
            // 0x1c51ce8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c3c;
        }
    }
    ctx->pc = 0x1C51CECu;
    // 0x1c51cec: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51cecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51cf0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C51CF0u;
    {
        const bool branch_taken_0x1c51cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51CF0u;
        // 0x1c51cf4: 0x25eff470  addiu       $t7, $t7, -0xB90 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51cf0) {
            ctx->pc = 0x1C51C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c88;
        }
    }
    ctx->pc = 0x1C51CF8u;
label_1c51cf8:
    // 0x1c51cf8: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51cfc: 0x25eff470  addiu       $t7, $t7, -0xB90
    ctx->pc = 0x1c51cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964336));
    // 0x1c51d00: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c51d00u;
    { uint32_t bits = FAST_READ32(0x1C5F470u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51d04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c51d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51d08: 0x4500ffcb  bc1f        . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C51D08u;
    {
        const bool branch_taken_0x1c51d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C51D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51D08u;
        // 0x1c51d0c: 0x3c0f01c6  lui         $t7, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51d08) {
            ctx->pc = 0x1C51C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c38;
        }
    }
    ctx->pc = 0x1C51D10u;
    // 0x1c51d10: 0x25eff464  addiu       $t7, $t7, -0xB9C
    ctx->pc = 0x1c51d10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964324));
    // 0x1c51d14: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c51d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c51d18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c51d18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c51d1c: 0x4503ffc7  bc1tl       . + 4 + (-0x39 << 2)
    ctx->pc = 0x1C51D1Cu;
    {
        const bool branch_taken_0x1c51d1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c51d1c) {
            ctx->pc = 0x1C51D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51D1Cu;
            // 0x1c51d20: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c3c;
        }
    }
    ctx->pc = 0x1C51D24u;
    // 0x1c51d24: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51d24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51d28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c51d28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c51d2c: 0x25eff468  addiu       $t7, $t7, -0xB98
    ctx->pc = 0x1c51d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964328));
    // 0x1c51d30: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c51d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c51d34: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c51d34u;
    { uint32_t bits = FAST_READ32(0x1C5F468u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c51d38: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c51d38u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c51d3c: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51d40: 0x25eff474  addiu       $t7, $t7, -0xB8C
    ctx->pc = 0x1c51d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964340));
    // 0x1c51d44: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C51D44u;
    {
        const bool branch_taken_0x1c51d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51D44u;
        // 0x1c51d48: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51d44) {
            ctx->pc = 0x1C51CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51cc8;
        }
    }
    ctx->pc = 0x1C51D4Cu;
    // 0x1c51d4c: 0x0  nop
    ctx->pc = 0x1c51d4cu;
    // NOP
    // 0x1c51d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51d54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c51d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d6c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51d70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c51d70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d74: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51D74u;
    SET_GPR_U32(ctx, 31, 0x1C51D7Cu);
    ctx->pc = 0x1C51D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51D74u;
    // 0x1c51d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51D74u, 0x1C51D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D7Cu;
label_1c51d7c:
    // 0x1c51d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51d80: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C51D80u;
    SET_GPR_U32(ctx, 31, 0x1C51D88u);
    ctx->pc = 0x1C51D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51D80u;
    // 0x1c51d84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C51D80u, 0x1C51D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D88u;
label_1c51d88:
    // 0x1c51d88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51d8c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c51d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51d90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c51d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c51d94: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51D94u;
    SET_GPR_U32(ctx, 31, 0x1C51D9Cu);
    ctx->pc = 0x1C51D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51D94u;
    // 0x1c51d98: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51D94u, 0x1C51D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51D9Cu;
label_1c51d9c:
    // 0x1c51d9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51da0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c51da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c51da4: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c51da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c51da8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51dac: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51DACu;
    SET_GPR_U32(ctx, 31, 0x1C51DB4u);
    ctx->pc = 0x1C51DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51DACu;
    // 0x1c51db0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51DACu, 0x1C51DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51DB4u;
label_1c51db4:
    // 0x1c51db4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c51db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c51db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51DC0u;
        // 0x1c51dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51DC8u;
}
