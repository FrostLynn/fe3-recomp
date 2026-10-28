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

// Function: sub_01DD0B70
// Address: 0x1dd0b70 - 0x1dd0cb0
void sub_01DD0B70_0x1dd0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0B70_0x1dd0b70");
#endif

    switch (ctx->pc) {
        case 0x1dd0c4cu: goto label_1dd0c4c;
        case 0x1dd0c54u: goto label_1dd0c54;
        case 0x1dd0c6cu: goto label_1dd0c6c;
        case 0x1dd0c74u: goto label_1dd0c74;
        case 0x1dd0ca4u: goto label_1dd0ca4;
        default: break;
    }

    ctx->pc = 0x1dd0b70u;

    // 0x1dd0b70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1dd0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1dd0b74: 0x8f8b8014  lw          $t3, -0x7FEC($gp)
    ctx->pc = 0x1dd0b74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0b78: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1dd0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1dd0b7c: 0x3c0e01dd  lui         $t6, 0x1DD
    ctx->pc = 0x1dd0b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
    // 0x1dd0b80: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1dd0b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1dd0b84: 0x3c0d01dd  lui         $t5, 0x1DD
    ctx->pc = 0x1dd0b84u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)477 << 16));
    // 0x1dd0b88: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1dd0b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1dd0b8c: 0x25cf14d0  addiu       $t7, $t6, 0x14D0
    ctx->pc = 0x1dd0b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 5328));
    // 0x1dd0b90: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1dd0b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1dd0b94: 0x25ac14e8  addiu       $t4, $t5, 0x14E8
    ctx->pc = 0x1dd0b94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 5352));
    // 0x1dd0b98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1dd0b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1dd0b9c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1dd0b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0ba0: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x1dd0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1DD14F4u));
    // 0x1dd0ba4: 0x8dd114d0  lw          $s1, 0x14D0($t6)
    ctx->pc = 0x1dd0ba4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x1DD14D0u));
    // 0x1dd0ba8: 0x8db214e8  lw          $s2, 0x14E8($t5)
    ctx->pc = 0x1dd0ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x1DD14E8u));
    // 0x1dd0bac: 0x8df30014  lw          $s3, 0x14($t7)
    ctx->pc = 0x1dd0bacu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x1DD14E4u));
    // 0x1dd0bb0: 0x916e0431  lbu         $t6, 0x431($t3)
    ctx->pc = 0x1dd0bb0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1073)));
    // 0x1dd0bb4: 0x8de80004  lw          $t0, 0x4($t7)
    ctx->pc = 0x1dd0bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x1DD14D4u));
    // 0x1dd0bb8: 0x8de70008  lw          $a3, 0x8($t7)
    ctx->pc = 0x1dd0bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x1DD14D8u));
    // 0x1dd0bbc: 0x8de6000c  lw          $a2, 0xC($t7)
    ctx->pc = 0x1dd0bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1DD14DCu));
    // 0x1dd0bc0: 0x8de50010  lw          $a1, 0x10($t7)
    ctx->pc = 0x1dd0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1DD14E0u));
    // 0x1dd0bc4: 0x916d0432  lbu         $t5, 0x432($t3)
    ctx->pc = 0x1dd0bc4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1074)));
    // 0x1dd0bc8: 0x916a0433  lbu         $t2, 0x433($t3)
    ctx->pc = 0x1dd0bc8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1075)));
    // 0x1dd0bcc: 0x91690434  lbu         $t1, 0x434($t3)
    ctx->pc = 0x1dd0bccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1076)));
    // 0x1dd0bd0: 0x8d8f0008  lw          $t7, 0x8($t4)
    ctx->pc = 0x1dd0bd0u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x1DD14F0u));
    // 0x1dd0bd4: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x1dd0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1DD14F8u));
    // 0x1dd0bd8: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x1dd0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x1dd0bdc: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x1dd0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1DD14ECu));
    // 0x1dd0be0: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x1dd0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x1dd0be4: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x1dd0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x1dd0be8: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1dd0be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1dd0bec: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x1dd0becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x1dd0bf0: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x1dd0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x1dd0bf4: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x1dd0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x1dd0bf8: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x1dd0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x1dd0bfc: 0xafa6002c  sw          $a2, 0x2C($sp)
    ctx->pc = 0x1dd0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 6));
    // 0x1dd0c00: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1dd0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1dd0c04: 0xafb30034  sw          $s3, 0x34($sp)
    ctx->pc = 0x1dd0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 19));
    // 0x1dd0c08: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x1dd0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
    // 0x1dd0c0c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1dd0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1dd0c10: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1dd0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1dd0c14: 0xafaf0048  sw          $t7, 0x48($sp)
    ctx->pc = 0x1dd0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 15));
    // 0x1dd0c18: 0x8d8e0014  lw          $t6, 0x14($t4)
    ctx->pc = 0x1dd0c18u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x1DD14FCu));
    // 0x1dd0c1c: 0x8d6f01e4  lw          $t7, 0x1E4($t3)
    ctx->pc = 0x1dd0c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 484)));
    // 0x1dd0c20: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x1dd0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x1dd0c24: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1dd0c24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1dd0c28: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x1dd0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x1dd0c2c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1dd0c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1dd0c30: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1dd0c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1dd0c34: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x1dd0c34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dd0c38: 0x51c00010  beql        $t6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD0C38u;
    {
        const bool branch_taken_0x1dd0c38 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0c38) {
            ctx->pc = 0x1DD0C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD0C38u;
            // 0x1dd0c3c: 0x8def0020  lw          $t7, 0x20($t7) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD0C7Cu;
            goto label_1dd0c7c;
        }
    }
    ctx->pc = 0x1DD0C40u;
    // 0x1dd0c40: 0x8def0040  lw          $t7, 0x40($t7)
    ctx->pc = 0x1dd0c40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x1dd0c44: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD0C44u;
    {
        const bool branch_taken_0x1dd0c44 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C44u;
        // 0x1dd0c48: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0c44) {
            ctx->pc = 0x1DD0C6Cu;
            goto label_1dd0c6c;
        }
    }
    ctx->pc = 0x1DD0C4Cu;
label_1dd0c4c:
    // 0x1dd0c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0c50: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1dd0c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1dd0c54:
    // 0x1dd0c54: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1dd0c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1dd0c58: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1dd0c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dd0c5c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1dd0c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1dd0c60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1dd0c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dd0c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C64u;
        // 0x1dd0c68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0C6Cu;
label_1dd0c6c:
    // 0x1dd0c6c: 0xc77429e  jal         func_1DD0A78
    ctx->pc = 0x1DD0C6Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0C74u);
    ctx->pc = 0x1DD0A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A78u, 0x1DD0C6Cu, 0x1DD0C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0C74u;
label_1dd0c74:
    // 0x1dd0c74: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DD0C74u;
    {
        const bool branch_taken_0x1dd0c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C74u;
        // 0x1dd0c78: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0c74) {
            ctx->pc = 0x1DD0C54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd0c54;
        }
    }
    ctx->pc = 0x1DD0C7Cu;
label_1dd0c7c:
    // 0x1dd0c7c: 0x11e0fff3  beqz        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DD0C7Cu;
    {
        const bool branch_taken_0x1dd0c7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C7Cu;
        // 0x1dd0c80: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0c7c) {
            ctx->pc = 0x1DD0C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd0c4c;
        }
    }
    ctx->pc = 0x1DD0C84u;
    // 0x1dd0c84: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DD0C84u;
    {
        const bool branch_taken_0x1dd0c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0c84) {
            ctx->pc = 0x1DD0C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd0c6c;
        }
    }
    ctx->pc = 0x1DD0C8Cu;
    // 0x1dd0c8c: 0x0  nop
    ctx->pc = 0x1dd0c8cu;
    // NOP
    // 0x1dd0c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0c94: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd0c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd0c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0c9c: 0xc77429e  jal         func_1DD0A78
    ctx->pc = 0x1DD0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0CA4u);
    ctx->pc = 0x1DD0CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0C9Cu;
    // 0x1dd0ca0: 0x24842768  addiu       $a0, $a0, 0x2768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A78u, 0x1DD0C9Cu, 0x1DD0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0CA4u;
label_1dd0ca4:
    // 0x1dd0ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0CA8u;
        // 0x1dd0cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0CB0u;
}
