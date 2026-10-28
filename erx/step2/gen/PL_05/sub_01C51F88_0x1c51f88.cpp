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

// Function: sub_01C51F88
// Address: 0x1c51f88 - 0x1c52210
void sub_01C51F88_0x1c51f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51F88_0x1c51f88");
#endif

    switch (ctx->pc) {
        case 0x1c51fb0u: goto label_1c51fb0;
        case 0x1c51fd4u: goto label_1c51fd4;
        case 0x1c51ff8u: goto label_1c51ff8;
        case 0x1c52008u: goto label_1c52008;
        case 0x1c52020u: goto label_1c52020;
        case 0x1c52040u: goto label_1c52040;
        case 0x1c52064u: goto label_1c52064;
        case 0x1c520c8u: goto label_1c520c8;
        case 0x1c520f4u: goto label_1c520f4;
        case 0x1c52100u: goto label_1c52100;
        case 0x1c52124u: goto label_1c52124;
        case 0x1c52140u: goto label_1c52140;
        case 0x1c52160u: goto label_1c52160;
        case 0x1c52180u: goto label_1c52180;
        case 0x1c521acu: goto label_1c521ac;
        case 0x1c521e0u: goto label_1c521e0;
        case 0x1c521f0u: goto label_1c521f0;
        default: break;
    }

    ctx->pc = 0x1c51f88u;

    // 0x1c51f88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c51f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c51f8c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c51f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c51f90: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c51f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c51f94: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c51f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c51f98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c51f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f9c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c51f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c51fa0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c51fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c51fa4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c51fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c51fa8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51FA8u;
    SET_GPR_U32(ctx, 31, 0x1C51FB0u);
    ctx->pc = 0x1C51FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51FA8u;
    // 0x1c51fac: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51FA8u, 0x1C51FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51FB0u;
label_1c51fb0:
    // 0x1c51fb0: 0x24530200  addiu       $s3, $v0, 0x200
    ctx->pc = 0x1c51fb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c51fb4: 0x8e2e0024  lw          $t6, 0x24($s1)
    ctx->pc = 0x1c51fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c51fb8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51fbc: 0x15cf0036  bne         $t6, $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C51FBCu;
    {
        const bool branch_taken_0x1c51fbc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C51FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51FBCu;
        // 0x1c51fc0: 0x8e7000b0  lw          $s0, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51fbc) {
            ctx->pc = 0x1C52098u;
            goto label_1c52098;
        }
    }
    ctx->pc = 0x1C51FC4u;
    // 0x1c51fc4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1c51fc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51fc8: 0x26120014  addiu       $s2, $s0, 0x14
    ctx->pc = 0x1c51fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1c51fcc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1c51fccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51fd0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c51fd0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51fd4:
    // 0x1c51fd4: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1c51fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c51fd8: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1c51fd8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51fdc: 0x24e780b  movn        $t7, $s2, $t6
    ctx->pc = 0x1c51fdcu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 18));
    // 0x1c51fe0: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x1c51fe0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51fe4: 0x95ef0004  lhu         $t7, 0x4($t7)
    ctx->pc = 0x1c51fe4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1c51fe8: 0x18f782a  slt         $t7, $t4, $t7
    ctx->pc = 0x1c51fe8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c51fec: 0x15e00025  bnez        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C51FECu;
    {
        const bool branch_taken_0x1c51fec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51FECu;
        // 0x1c51ff0: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51fec) {
            ctx->pc = 0x1C52084u;
            goto label_1c52084;
        }
    }
    ctx->pc = 0x1C51FF4u;
    // 0x1c51ff4: 0x8e2e0024  lw          $t6, 0x24($s1)
    ctx->pc = 0x1c51ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1c51ff8:
    // 0x1c51ff8: 0x25cf0001  addiu       $t7, $t6, 0x1
    ctx->pc = 0x1c51ff8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1c51ffc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c51ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52000: 0xc713e4e  jal         func_1C4F938
    ctx->pc = 0x1C52000u;
    SET_GPR_U32(ctx, 31, 0x1C52008u);
    ctx->pc = 0x1C52004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52000u;
    // 0x1c52004: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F938u, 0x1C52000u, 0x1C52008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52008u;
label_1c52008:
    // 0x1c52008: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52008u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c5200c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c5200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52010: 0x25eff47c  addiu       $t7, $t7, -0xB84
    ctx->pc = 0x1c52010u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964348));
    // 0x1c52014: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c52014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52018: 0xc713e54  jal         func_1C4F950
    ctx->pc = 0x1C52018u;
    SET_GPR_U32(ctx, 31, 0x1C52020u);
    ctx->pc = 0x1C5201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52018u;
    // 0x1c5201c: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F950u, 0x1C52018u, 0x1C52020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52020u;
label_1c52020:
    // 0x1c52020: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1c52020u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c52024: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1c52024u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52028: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x1c52028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c5202c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c5202cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52030: 0x24e780b  movn        $t7, $s2, $t6
    ctx->pc = 0x1c52030u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 18));
    // 0x1c52034: 0x8de4001c  lw          $a0, 0x1C($t7)
    ctx->pc = 0x1c52034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1c52038: 0xc713e52  jal         func_1C4F948
    ctx->pc = 0x1C52038u;
    SET_GPR_U32(ctx, 31, 0x1C52040u);
    ctx->pc = 0x1C5203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52038u;
    // 0x1c5203c: 0x24a54610  addiu       $a1, $a1, 0x4610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F948u, 0x1C52038u, 0x1C52040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52040u;
label_1c52040:
    // 0x1c52040: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c52040u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c52044: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c52044u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52048: 0x8e6e004c  lw          $t6, 0x4C($s3)
    ctx->pc = 0x1c52048u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c5204c: 0x24f680b  movn        $t5, $s2, $t7
    ctx->pc = 0x1c5204cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 18));
    // 0x1c52050: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c52050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c52054: 0x8da4001c  lw          $a0, 0x1C($t5)
    ctx->pc = 0x1c52054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x1c52058: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x1c52058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
    // 0x1c5205c: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C5205Cu;
    SET_GPR_U32(ctx, 31, 0x1C52064u);
    ctx->pc = 0x1C52060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5205Cu;
    // 0x1c52060: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C5205Cu, 0x1C52064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52064u;
label_1c52064:
    // 0x1c52064: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c52064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c52068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c52068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5206c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c5206cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c52070: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c52070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c52074: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c52074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c52078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c52078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5207c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5207Cu;
        // 0x1c52080: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52084u;
label_1c52084:
    // 0x1c52084: 0x8dcf0014  lw          $t7, 0x14($t6)
    ctx->pc = 0x1c52084u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x1c52088: 0x1af7821  addu        $t7, $t5, $t7
    ctx->pc = 0x1c52088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1c5208c: 0xa1eb0066  sb          $t3, 0x66($t7)
    ctx->pc = 0x1c5208cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 102), (uint8_t)GPR_U32(ctx, 11));
    // 0x1c52090: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C52090u;
    {
        const bool branch_taken_0x1c52090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52090u;
        // 0x1c52094: 0x25ad0390  addiu       $t5, $t5, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52090) {
            ctx->pc = 0x1C51FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51fd4;
        }
    }
    ctx->pc = 0x1C52098u;
label_1c52098:
    // 0x1c52098: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C52098u;
    {
        const bool branch_taken_0x1c52098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52098u;
        // 0x1c5209c: 0x26120014  addiu       $s2, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52098) {
            ctx->pc = 0x1C51FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51ff8;
        }
    }
    ctx->pc = 0x1C520A0u;
    // 0x1c520a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c520a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c520a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c520a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c520a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c520a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c520ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c520acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c520b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c520b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c520b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c520b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c520b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c520bc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1c520bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c520c0: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C520C0u;
    SET_GPR_U32(ctx, 31, 0x1C520C8u);
    ctx->pc = 0x1C520C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C520C0u;
    // 0x1c520c4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C520C0u, 0x1C520C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C520C8u;
label_1c520c8:
    // 0x1c520c8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c520c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c520cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c520ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c520d0: 0x8e1300b0  lw          $s3, 0xB0($s0)
    ctx->pc = 0x1c520d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1c520d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c520d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c520d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c520dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c520dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c520e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c520e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c520e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c520e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520ec: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C520ECu;
    SET_GPR_U32(ctx, 31, 0x1C520F4u);
    ctx->pc = 0x1C520F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C520ECu;
    // 0x1c520f0: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C520ECu, 0x1C520F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C520F4u;
label_1c520f4:
    // 0x1c520f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c520f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c520f8: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C520F8u;
    SET_GPR_U32(ctx, 31, 0x1C52100u);
    ctx->pc = 0x1C520FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C520F8u;
    // 0x1c520fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C520F8u, 0x1C52100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52100u;
label_1c52100:
    // 0x1c52100: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c52100u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c52104: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1c52104u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52108: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c52108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c5210c: 0x22f700b  movn        $t6, $s1, $t7
    ctx->pc = 0x1c5210cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 17));
    // 0x1c52110: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1c52110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1c52114: 0x8dc4001c  lw          $a0, 0x1C($t6)
    ctx->pc = 0x1c52114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1c52118: 0x24a54610  addiu       $a1, $a1, 0x4610
    ctx->pc = 0x1c52118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
    // 0x1c5211c: 0xc713e50  jal         func_1C4F940
    ctx->pc = 0x1C5211Cu;
    SET_GPR_U32(ctx, 31, 0x1C52124u);
    ctx->pc = 0x1C52120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5211Cu;
    // 0x1c52120: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F940u, 0x1C5211Cu, 0x1C52124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52124u;
label_1c52124:
    // 0x1c52124: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c52124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c52128: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1c52128u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5212c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c5212cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c52130: 0x22f700b  movn        $t6, $s1, $t7
    ctx->pc = 0x1c52130u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 17));
    // 0x1c52134: 0x8dc4001c  lw          $a0, 0x1C($t6)
    ctx->pc = 0x1c52134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1c52138: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C52138u;
    SET_GPR_U32(ctx, 31, 0x1C52140u);
    ctx->pc = 0x1C5213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52138u;
    // 0x1c5213c: 0x24a54610  addiu       $a1, $a1, 0x4610 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C52138u, 0x1C52140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52140u;
label_1c52140:
    // 0x1c52140: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x1c52140u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c52144: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1c52144u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52148: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c52148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c5214c: 0x22e780b  movn        $t7, $s1, $t6
    ctx->pc = 0x1c5214cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 17));
    // 0x1c52150: 0x8de4001c  lw          $a0, 0x1C($t7)
    ctx->pc = 0x1c52150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1c52154: 0x24a54620  addiu       $a1, $a1, 0x4620
    ctx->pc = 0x1c52154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17952));
    // 0x1c52158: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C52158u;
    SET_GPR_U32(ctx, 31, 0x1C52160u);
    ctx->pc = 0x1C5215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52158u;
    // 0x1c5215c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C52158u, 0x1C52160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52160u;
label_1c52160:
    // 0x1c52160: 0x8e6e0004  lw          $t6, 0x4($s3)
    ctx->pc = 0x1c52160u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c52164: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1c52164u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52168: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c52168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c5216c: 0x22e780b  movn        $t7, $s1, $t6
    ctx->pc = 0x1c5216cu;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 17));
    // 0x1c52170: 0x8de4001c  lw          $a0, 0x1C($t7)
    ctx->pc = 0x1c52170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1c52174: 0x24a54630  addiu       $a1, $a1, 0x4630
    ctx->pc = 0x1c52174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    // 0x1c52178: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C52178u;
    SET_GPR_U32(ctx, 31, 0x1C52180u);
    ctx->pc = 0x1C5217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52178u;
    // 0x1c5217c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C52178u, 0x1C52180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52180u;
label_1c52180:
    // 0x1c52180: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x1c52180u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c52184: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c52184u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c52188: 0xa1c04416  sb          $zero, 0x4416($t6)
    ctx->pc = 0x1c52188u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 17430), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5218c: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c5218cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c52190: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c52190u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c52194: 0xf880a  movz        $s1, $zero, $t7
    ctx->pc = 0x1c52194u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x1c52198: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c52198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c5219c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1c5219cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c521a0: 0x24a54f70  addiu       $a1, $a1, 0x4F70
    ctx->pc = 0x1c521a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20336));
    // 0x1c521a4: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C521A4u;
    SET_GPR_U32(ctx, 31, 0x1C521ACu);
    ctx->pc = 0x1C521A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C521A4u;
    // 0x1c521a8: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C521A4u, 0x1C521ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C521ACu;
label_1c521ac:
    // 0x1c521ac: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c521acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c521b0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1c521b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c521b4: 0x25eff480  addiu       $t7, $t7, -0xB80
    ctx->pc = 0x1c521b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964352));
    // 0x1c521b8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1c521b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c521bc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c521bcu;
    { uint32_t bits = FAST_READ32(0x1C5F480u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c521c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c521c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c521c4: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c521c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c521c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c521c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c521cc: 0x25eff484  addiu       $t7, $t7, -0xB7C
    ctx->pc = 0x1c521ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964356));
    // 0x1c521d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c521d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1c521d4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1c521d4u;
    { uint32_t bits = FAST_READ32(0x1C5F484u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c521d8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C521D8u;
    SET_GPR_U32(ctx, 31, 0x1C521E0u);
    ctx->pc = 0x1C521DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C521D8u;
    // 0x1c521dc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C521D8u, 0x1C521E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C521E0u;
label_1c521e0:
    // 0x1c521e0: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1c521e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1c521e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c521e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c521e8: 0xc713e48  jal         func_1C4F920
    ctx->pc = 0x1C521E8u;
    SET_GPR_U32(ctx, 31, 0x1C521F0u);
    ctx->pc = 0x1C521ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C521E8u;
    // 0x1c521ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F920u, 0x1C521E8u, 0x1C521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C521F0u;
label_1c521f0:
    // 0x1c521f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c521f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c521f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c521f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c521f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c521f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c521fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c521fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c52200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c52200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c52204: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52204u;
        // 0x1c52208: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5220Cu;
    // 0x1c5220c: 0x0  nop
    ctx->pc = 0x1c5220cu;
    // NOP
    ctx->pc = 0x1c52210u;
}
