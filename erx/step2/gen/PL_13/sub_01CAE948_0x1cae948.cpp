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

// Function: sub_01CAE948
// Address: 0x1cae948 - 0x1caeab0
void sub_01CAE948_0x1cae948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE948_0x1cae948");
#endif

    switch (ctx->pc) {
        case 0x1cae968u: goto label_1cae968;
        case 0x1cae978u: goto label_1cae978;
        case 0x1cae984u: goto label_1cae984;
        case 0x1cae994u: goto label_1cae994;
        case 0x1cae9a0u: goto label_1cae9a0;
        case 0x1cae9c4u: goto label_1cae9c4;
        case 0x1cae9e8u: goto label_1cae9e8;
        case 0x1cae9f0u: goto label_1cae9f0;
        case 0x1caea04u: goto label_1caea04;
        case 0x1caea0cu: goto label_1caea0c;
        case 0x1caea10u: goto label_1caea10;
        case 0x1caea54u: goto label_1caea54;
        case 0x1caea60u: goto label_1caea60;
        case 0x1caea6cu: goto label_1caea6c;
        case 0x1caea74u: goto label_1caea74;
        case 0x1caea84u: goto label_1caea84;
        default: break;
    }

    ctx->pc = 0x1cae948u;

    // 0x1cae948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae94c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae958: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae95c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cae95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cae960: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE960u;
    SET_GPR_U32(ctx, 31, 0x1CAE968u);
    ctx->pc = 0x1CAE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE960u;
    // 0x1cae964: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE960u, 0x1CAE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE968u;
label_1cae968:
    // 0x1cae968: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cae968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cae96c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cae96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cae970: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAE970u;
    SET_GPR_U32(ctx, 31, 0x1CAE978u);
    ctx->pc = 0x1CAE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE970u;
    // 0x1cae974: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAE970u, 0x1CAE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE978u;
label_1cae978:
    // 0x1cae978: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cae978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cae97c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE97Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE984u);
    ctx->pc = 0x1CAE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE97Cu;
    // 0x1cae980: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE97Cu, 0x1CAE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE984u;
label_1cae984:
    // 0x1cae984: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cae984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cae988: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cae988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cae98c: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE994u);
    ctx->pc = 0x1CAE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE98Cu;
    // 0x1cae990: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAE98Cu, 0x1CAE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE994u;
label_1cae994:
    // 0x1cae994: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae998: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CAE998u;
    SET_GPR_U32(ctx, 31, 0x1CAE9A0u);
    ctx->pc = 0x1CAE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE998u;
    // 0x1cae99c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CAE998u, 0x1CAE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE9A0u;
label_1cae9a0:
    // 0x1cae9a0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cae9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cae9a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cae9a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae9a8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1cae9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cae9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae9b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cae9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cae9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae9b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cae9b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cae9bc: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAE9BCu;
    SET_GPR_U32(ctx, 31, 0x1CAE9C4u);
    ctx->pc = 0x1CAE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE9BCu;
    // 0x1cae9c0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAE9BCu, 0x1CAE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE9C4u;
label_1cae9c4:
    // 0x1cae9c4: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1cae9c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1cae9c8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cae9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cae9cc: 0x25ef6680  addiu       $t7, $t7, 0x6680
    ctx->pc = 0x1cae9ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 26240));
    // 0x1cae9d0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cae9d0u;
    { uint32_t bits = FAST_READ32(0x1CB6680u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cae9d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cae9d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cae9d8: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x1CAE9D8u;
    {
        const bool branch_taken_0x1cae9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9D8u;
        // 0x1cae9dc: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9d8) {
            ctx->pc = 0x1CAEA2Cu;
            goto label_1caea2c;
        }
    }
    ctx->pc = 0x1CAE9E0u;
    // 0x1cae9e0: 0xa2200cf9  sb          $zero, 0xCF9($s1)
    ctx->pc = 0x1cae9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cae9e4: 0xa2200021  sb          $zero, 0x21($s1)
    ctx->pc = 0x1cae9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
label_1cae9e8:
    // 0x1cae9e8: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE9E8u;
    SET_GPR_U32(ctx, 31, 0x1CAE9F0u);
    ctx->pc = 0x1CAE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE9E8u;
    // 0x1cae9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE9E8u, 0x1CAE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE9F0u;
label_1cae9f0:
    // 0x1cae9f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae9f4: 0x144f000b  bne         $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAE9F4u;
    {
        const bool branch_taken_0x1cae9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE9F4u;
        // 0x1cae9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae9f4) {
            ctx->pc = 0x1CAEA24u;
            goto label_1caea24;
        }
    }
    ctx->pc = 0x1CAE9FCu;
    // 0x1cae9fc: 0xc72b460  jal         func_1CAD180
    ctx->pc = 0x1CAE9FCu;
    SET_GPR_U32(ctx, 31, 0x1CAEA04u);
    ctx->pc = 0x1CAD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD180u, 0x1CAE9FCu, 0x1CAEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA04u;
label_1caea04:
    // 0x1caea04: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAEA04u;
    SET_GPR_U32(ctx, 31, 0x1CAEA0Cu);
    ctx->pc = 0x1CAEA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEA04u;
    // 0x1caea08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAEA04u, 0x1CAEA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA0Cu;
label_1caea0c:
    // 0x1caea0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1caea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1caea10:
    // 0x1caea10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caea10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caea14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caea14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caea18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA1Cu;
        // 0x1caea20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEA24u;
label_1caea24:
    // 0x1caea24: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CAEA24u;
    {
        const bool branch_taken_0x1caea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA24u;
        // 0x1caea28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caea24) {
            ctx->pc = 0x1CAEA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caea10;
        }
    }
    ctx->pc = 0x1CAEA2Cu;
label_1caea2c:
    // 0x1caea2c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CAEA2Cu;
    {
        const bool branch_taken_0x1caea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA2Cu;
        // 0x1caea30: 0xa22f0021  sb          $t7, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caea2c) {
            ctx->pc = 0x1CAE9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae9e8;
        }
    }
    ctx->pc = 0x1CAEA34u;
    // 0x1caea34: 0x0  nop
    ctx->pc = 0x1caea34u;
    // NOP
    // 0x1caea38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1caea3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caea3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1caea40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caea44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1caea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1caea48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1caea48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caea4c: 0xc72b456  jal         func_1CAD158
    ctx->pc = 0x1CAEA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAEA54u);
    ctx->pc = 0x1CAEA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEA4Cu;
    // 0x1caea50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD158u, 0x1CAEA4Cu, 0x1CAEA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA54u;
label_1caea54:
    // 0x1caea54: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1caea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1caea58: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEA58u;
    SET_GPR_U32(ctx, 31, 0x1CAEA60u);
    ctx->pc = 0x1CAEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEA58u;
    // 0x1caea5c: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEA58u, 0x1CAEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA60u;
label_1caea60:
    // 0x1caea60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caea60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caea64: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1caea64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1caea68: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1caea68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1caea6c:
    // 0x1caea6c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAEA74u);
    ctx->pc = 0x1CAEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEA6Cu;
    // 0x1caea70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEA6Cu, 0x1CAEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA74u;
label_1caea74:
    // 0x1caea74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAEA74u;
    {
        const bool branch_taken_0x1caea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA74u;
        // 0x1caea78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caea74) {
            ctx->pc = 0x1CAEA88u;
            goto label_1caea88;
        }
    }
    ctx->pc = 0x1CAEA7Cu;
    // 0x1caea7c: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEA7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAEA84u);
    ctx->pc = 0x1CAEA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEA7Cu;
    // 0x1caea80: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEA7Cu, 0x1CAEA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEA84u;
label_1caea84:
    // 0x1caea84: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1caea84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1caea88:
    // 0x1caea88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1caea88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1caea8c: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x1caea8cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1caea90: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CAEA90u;
    {
        const bool branch_taken_0x1caea90 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caea90) {
            ctx->pc = 0x1CAEA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEA90u;
            // 0x1caea94: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEA6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caea6c;
        }
    }
    ctx->pc = 0x1CAEA98u;
    // 0x1caea98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caea98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caea9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caea9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caeaa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caeaa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caeaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEAA4u;
        // 0x1caeaa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEAACu;
    // 0x1caeaac: 0x0  nop
    ctx->pc = 0x1caeaacu;
    // NOP
    ctx->pc = 0x1caeab0u;
}
