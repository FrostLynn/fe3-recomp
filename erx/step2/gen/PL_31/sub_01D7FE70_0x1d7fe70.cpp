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

// Function: sub_01D7FE70
// Address: 0x1d7fe70 - 0x1d80130
void sub_01D7FE70_0x1d7fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FE70_0x1d7fe70");
#endif

    switch (ctx->pc) {
        case 0x1d7fea4u: goto label_1d7fea4;
        case 0x1d7fef8u: goto label_1d7fef8;
        case 0x1d7ff08u: goto label_1d7ff08;
        case 0x1d7ff64u: goto label_1d7ff64;
        case 0x1d7ff98u: goto label_1d7ff98;
        case 0x1d7ffa0u: goto label_1d7ffa0;
        case 0x1d7fff4u: goto label_1d7fff4;
        case 0x1d7fffcu: goto label_1d7fffc;
        case 0x1d80024u: goto label_1d80024;
        case 0x1d80030u: goto label_1d80030;
        case 0x1d80054u: goto label_1d80054;
        case 0x1d8007cu: goto label_1d8007c;
        case 0x1d80084u: goto label_1d80084;
        case 0x1d80128u: goto label_1d80128;
        default: break;
    }

    ctx->pc = 0x1d7fe70u;

    // 0x1d7fe70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7fe74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fe78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7fe7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7fe80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fe84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d7fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7fe88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7fe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fe8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7fe90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d7fe90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fe94: 0x2610feba  addiu       $s0, $s0, -0x146
    ctx->pc = 0x1d7fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966970));
    // 0x1d7fe98: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1d7fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d7fe9c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FE9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7FEA4u);
    ctx->pc = 0x1D7FEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FE9Cu;
    // 0x1d7fea0: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FE9Cu, 0x1D7FEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FEA4u;
label_1d7fea4:
    // 0x1d7fea4: 0x2e0f0011  sltiu       $t7, $s0, 0x11
    ctx->pc = 0x1d7fea4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d7fea8: 0x11e00099  beqz        $t7, . + 4 + (0x99 << 2)
    ctx->pc = 0x1D7FEA8u;
    {
        const bool branch_taken_0x1d7fea8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FEA8u;
        // 0x1d7feac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fea8) {
            ctx->pc = 0x1D80110u;
            goto label_1d80110;
        }
    }
    ctx->pc = 0x1D7FEB0u;
    // 0x1d7feb0: 0x3c0e01d8  lui         $t6, 0x1D8
    ctx->pc = 0x1d7feb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
    // 0x1d7feb4: 0x107880  sll         $t7, $s0, 2
    ctx->pc = 0x1d7feb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d7feb8: 0x25ce0bdc  addiu       $t6, $t6, 0xBDC
    ctx->pc = 0x1d7feb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3036));
    // 0x1d7febc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7febcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7fec0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d7fec0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7fec4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D7FEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7FECCu: goto label_1d7fecc;
            case 0x1D7FF88u: goto label_1d7ff88;
            case 0x1D7FFA8u: goto label_1d7ffa8;
            case 0x1D7FFBCu: goto label_1d7ffbc;
            case 0x1D7FFD0u: goto label_1d7ffd0;
            case 0x1D7FFE4u: goto label_1d7ffe4;
            case 0x1D80004u: goto label_1d80004;
            case 0x1D80018u: goto label_1d80018;
            case 0x1D8005Cu: goto label_1d8005c;
            case 0x1D8006Cu: goto label_1d8006c;
            case 0x1D8008Cu: goto label_1d8008c;
            case 0x1D800A0u: goto label_1d800a0;
            case 0x1D800B4u: goto label_1d800b4;
            case 0x1D800C8u: goto label_1d800c8;
            case 0x1D800D8u: goto label_1d800d8;
            case 0x1D800E8u: goto label_1d800e8;
            case 0x1D800FCu: goto label_1d800fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FEC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D7FECCu;
label_1d7fecc:
    // 0x1d7fecc: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d7feccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d7fed0: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x1d7fed0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d7fed4: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x1d7fed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7fed8: 0x8ded0084  lw          $t5, 0x84($t7)
    ctx->pc = 0x1d7fed8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d7fedc: 0x1b17021  addu        $t6, $t5, $s1
    ctx->pc = 0x1d7fedcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
    // 0x1d7fee0: 0x91cf0436  lbu         $t7, 0x436($t6)
    ctx->pc = 0x1d7fee0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1078)));
    // 0x1d7fee4: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D7FEE4u;
    {
        const bool branch_taken_0x1d7fee4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FEE4u;
        // 0x1d7fee8: 0x26440620  addiu       $a0, $s2, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fee4) {
            ctx->pc = 0x1D7FF80u;
            goto label_1d7ff80;
        }
    }
    ctx->pc = 0x1D7FEECu;
    // 0x1d7feec: 0x340584e0  ori         $a1, $zero, 0x84E0
    ctx->pc = 0x1d7feecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34016);
    // 0x1d7fef0: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7FEF0u;
    SET_GPR_U32(ctx, 31, 0x1D7FEF8u);
    ctx->pc = 0x1D7FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FEF0u;
    // 0x1d7fef4: 0x1a52821  addu        $a1, $t5, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7FEF0u, 0x1D7FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FEF8u;
label_1d7fef8:
    // 0x1d7fef8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d7fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7fefc: 0x26440630  addiu       $a0, $s2, 0x630
    ctx->pc = 0x1d7fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
    // 0x1d7ff00: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7FF00u;
    SET_GPR_U32(ctx, 31, 0x1D7FF08u);
    ctx->pc = 0x1D7FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FF00u;
    // 0x1d7ff04: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7FF00u, 0x1D7FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FF08u;
label_1d7ff08:
    // 0x1d7ff08: 0x8e0f00b0  lw          $t7, 0xB0($s0)
    ctx->pc = 0x1d7ff08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1d7ff0c: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d7ff0cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d7ff10: 0x25ce87fc  addiu       $t6, $t6, -0x7804
    ctx->pc = 0x1d7ff10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936572));
    // 0x1d7ff14: 0x8e0c004c  lw          $t4, 0x4C($s0)
    ctx->pc = 0x1d7ff14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7ff18: 0x8ded0004  lw          $t5, 0x4($t7)
    ctx->pc = 0x1d7ff18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x1d7ff1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d7ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1d7ff20: 0xc5c10000  lwc1        $f1, 0x0($t6)
    ctx->pc = 0x1d7ff20u;
    { uint32_t bits = FAST_READ32(0x1D887FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ff24: 0x25ef0014  addiu       $t7, $t7, 0x14
    ctx->pc = 0x1d7ff24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
    // 0x1d7ff28: 0xae400654  sw          $zero, 0x654($s2)
    ctx->pc = 0x1d7ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1620), GPR_U32(ctx, 0));
    // 0x1d7ff2c: 0xd780a  movz        $t7, $zero, $t5
    ctx->pc = 0x1d7ff2cu;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x1d7ff30: 0xe641064c  swc1        $f1, 0x64C($s2)
    ctx->pc = 0x1d7ff30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1612), bits); }
    // 0x1d7ff34: 0x8dee0014  lw          $t6, 0x14($t7)
    ctx->pc = 0x1d7ff34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x1d7ff38: 0x8ded001c  lw          $t5, 0x1C($t7)
    ctx->pc = 0x1d7ff38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1d7ff3c: 0xae4e0644  sw          $t6, 0x644($s2)
    ctx->pc = 0x1d7ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1604), GPR_U32(ctx, 14));
    // 0x1d7ff40: 0xae4d0640  sw          $t5, 0x640($s2)
    ctx->pc = 0x1d7ff40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1600), GPR_U32(ctx, 13));
    // 0x1d7ff44: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d7ff44u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d7ff48: 0x8d8f0084  lw          $t7, 0x84($t4)
    ctx->pc = 0x1d7ff48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 132)));
    // 0x1d7ff4c: 0x25ce8800  addiu       $t6, $t6, -0x7800
    ctx->pc = 0x1d7ff4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936576));
    // 0x1d7ff50: 0xe6410648  swc1        $f1, 0x648($s2)
    ctx->pc = 0x1d7ff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1608), bits); }
    // 0x1d7ff54: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d7ff54u;
    { uint32_t bits = FAST_READ32(0x1D88800u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ff58: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d7ff58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d7ff5c: 0xe6400650  swc1        $f0, 0x650($s2)
    ctx->pc = 0x1d7ff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1616), bits); }
    // 0x1d7ff60: 0xa1e00436  sb          $zero, 0x436($t7)
    ctx->pc = 0x1d7ff60u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1078), (uint8_t)GPR_U32(ctx, 0));
label_1d7ff64:
    // 0x1d7ff64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7ff64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ff68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7ff68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7ff6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7ff6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ff70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7ff70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7ff74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7ff74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7ff78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF78u;
        // 0x1d7ff7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FF80u;
label_1d7ff80:
    // 0x1d7ff80: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7FF80u;
    {
        const bool branch_taken_0x1d7ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF80u;
        // 0x1d7ff84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ff80) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D7FF88u;
label_1d7ff88:
    // 0x1d7ff88: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d7ff88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d7ff8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ff90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7ff90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ff94: 0x24c64340  addiu       $a2, $a2, 0x4340
    ctx->pc = 0x1d7ff94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17216));
label_1d7ff98:
    // 0x1d7ff98: 0xc75faae  jal         func_1D7EAB8
    ctx->pc = 0x1D7FF98u;
    SET_GPR_U32(ctx, 31, 0x1D7FFA0u);
    ctx->pc = 0x1D7EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7EAB8u, 0x1D7FF98u, 0x1D7FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FFA0u;
label_1d7ffa0:
    // 0x1d7ffa0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D7FFA0u;
    {
        const bool branch_taken_0x1d7ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FFA0u;
        // 0x1d7ffa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ffa0) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D7FFA8u;
label_1d7ffa8:
    // 0x1d7ffa8: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d7ffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d7ffac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ffacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7ffb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffb4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7FFB4u;
    {
        const bool branch_taken_0x1d7ffb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FFB4u;
        // 0x1d7ffb8: 0x24c643c0  addiu       $a2, $a2, 0x43C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ffb4) {
            ctx->pc = 0x1D7FF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff98;
        }
    }
    ctx->pc = 0x1D7FFBCu;
label_1d7ffbc:
    // 0x1d7ffbc: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d7ffbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d7ffc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7ffc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffc8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D7FFC8u;
    {
        const bool branch_taken_0x1d7ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FFC8u;
        // 0x1d7ffcc: 0x24c64440  addiu       $a2, $a2, 0x4440 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ffc8) {
            ctx->pc = 0x1D7FF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff98;
        }
    }
    ctx->pc = 0x1D7FFD0u;
label_1d7ffd0:
    // 0x1d7ffd0: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d7ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d7ffd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7ffd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffdc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D7FFDCu;
    {
        const bool branch_taken_0x1d7ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FFDCu;
        // 0x1d7ffe0: 0x24c644c0  addiu       $a2, $a2, 0x44C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ffdc) {
            ctx->pc = 0x1D7FF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff98;
        }
    }
    ctx->pc = 0x1D7FFE4u;
label_1d7ffe4:
    // 0x1d7ffe4: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d7ffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d7ffe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ffec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d7ffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fff0: 0x24c64540  addiu       $a2, $a2, 0x4540
    ctx->pc = 0x1d7fff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17728));
label_1d7fff4:
    // 0x1d7fff4: 0xc75f9ea  jal         func_1D7E7A8
    ctx->pc = 0x1D7FFF4u;
    SET_GPR_U32(ctx, 31, 0x1D7FFFCu);
    ctx->pc = 0x1D7E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E7A8u, 0x1D7FFF4u, 0x1D7FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FFFCu;
label_1d7fffc:
    // 0x1d7fffc: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D7FFFCu;
    {
        const bool branch_taken_0x1d7fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FFFCu;
        // 0x1d80000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fffc) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D80004u;
label_1d80004:
    // 0x1d80004: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d80004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d80008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8000c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d8000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80010: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D80010u;
    {
        const bool branch_taken_0x1d80010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80010u;
        // 0x1d80014: 0x24c64570  addiu       $a2, $a2, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80010) {
            ctx->pc = 0x1D7FFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fff4;
        }
    }
    ctx->pc = 0x1D80018u;
label_1d80018:
    // 0x1d80018: 0x3c1001d8  lui         $s0, 0x1D8
    ctx->pc = 0x1d80018u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)472 << 16));
    // 0x1d8001c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80020: 0x26104540  addiu       $s0, $s0, 0x4540
    ctx->pc = 0x1d80020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17728));
label_1d80024:
    // 0x1d80024: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d80024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80028: 0xc75f9ea  jal         func_1D7E7A8
    ctx->pc = 0x1D80028u;
    SET_GPR_U32(ctx, 31, 0x1D80030u);
    ctx->pc = 0x1D8002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80028u;
    // 0x1d8002c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E7A8u, 0x1D80028u, 0x1D80030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80030u;
label_1d80030:
    // 0x1d80030: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1d80030u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d80034: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d80034u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d80038: 0x8e6d024c  lw          $t5, 0x24C($s3)
    ctx->pc = 0x1d80038u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x1d8003c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1d8003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d80040: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d80040u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d80044: 0x8da50084  lw          $a1, 0x84($t5)
    ctx->pc = 0x1d80044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1d80048: 0xae2821  addu        $a1, $a1, $t6
    ctx->pc = 0x1d80048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1d8004c: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D8004Cu;
    SET_GPR_U32(ctx, 31, 0x1D80054u);
    ctx->pc = 0x1D80050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8004Cu;
    // 0x1d80050: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D8004Cu, 0x1D80054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80054u;
label_1d80054:
    // 0x1d80054: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1D80054u;
    {
        const bool branch_taken_0x1d80054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80054u;
        // 0x1d80058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80054) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D8005Cu;
label_1d8005c:
    // 0x1d8005c: 0x3c1001d8  lui         $s0, 0x1D8
    ctx->pc = 0x1d8005cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)472 << 16));
    // 0x1d80060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80064: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x1D80064u;
    {
        const bool branch_taken_0x1d80064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80064u;
        // 0x1d80068: 0x26104570  addiu       $s0, $s0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80064) {
            ctx->pc = 0x1D80024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d80024;
        }
    }
    ctx->pc = 0x1D8006Cu;
label_1d8006c:
    // 0x1d8006c: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d8006cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d80070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d80074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80078: 0x24c645a0  addiu       $a2, $a2, 0x45A0
    ctx->pc = 0x1d80078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17824));
label_1d8007c:
    // 0x1d8007c: 0xc75fbf2  jal         func_1D7EFC8
    ctx->pc = 0x1D8007Cu;
    SET_GPR_U32(ctx, 31, 0x1D80084u);
    ctx->pc = 0x1D7EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7EFC8u, 0x1D8007Cu, 0x1D80084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80084u;
label_1d80084:
    // 0x1d80084: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x1D80084u;
    {
        const bool branch_taken_0x1d80084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80084u;
        // 0x1d80088: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80084) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D8008Cu;
label_1d8008c:
    // 0x1d8008c: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d8008cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d80090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80094: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d80094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80098: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D80098u;
    {
        const bool branch_taken_0x1d80098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80098u;
        // 0x1d8009c: 0x24c64740  addiu       $a2, $a2, 0x4740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80098) {
            ctx->pc = 0x1D8007Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8007c;
        }
    }
    ctx->pc = 0x1D800A0u;
label_1d800a0:
    // 0x1d800a0: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d800a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d800a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d800a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d800a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800ac: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x1D800ACu;
    {
        const bool branch_taken_0x1d800ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D800B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800ACu;
        // 0x1d800b0: 0x24c648e0  addiu       $a2, $a2, 0x48E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800ac) {
            ctx->pc = 0x1D7FFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fff4;
        }
    }
    ctx->pc = 0x1D800B4u;
label_1d800b4:
    // 0x1d800b4: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d800b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d800b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d800b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d800bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800c0: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x1D800C0u;
    {
        const bool branch_taken_0x1d800c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D800C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800C0u;
        // 0x1d800c4: 0x24c64910  addiu       $a2, $a2, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800c0) {
            ctx->pc = 0x1D7FFF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fff4;
        }
    }
    ctx->pc = 0x1D800C8u;
label_1d800c8:
    // 0x1d800c8: 0x3c1001d8  lui         $s0, 0x1D8
    ctx->pc = 0x1d800c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)472 << 16));
    // 0x1d800cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d800ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800d0: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D800D0u;
    {
        const bool branch_taken_0x1d800d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D800D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800D0u;
        // 0x1d800d4: 0x261048e0  addiu       $s0, $s0, 0x48E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800d0) {
            ctx->pc = 0x1D80024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d80024;
        }
    }
    ctx->pc = 0x1D800D8u;
label_1d800d8:
    // 0x1d800d8: 0x3c1001d8  lui         $s0, 0x1D8
    ctx->pc = 0x1d800d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)472 << 16));
    // 0x1d800dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d800dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800e0: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1D800E0u;
    {
        const bool branch_taken_0x1d800e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D800E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800E0u;
        // 0x1d800e4: 0x26104910  addiu       $s0, $s0, 0x4910 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800e0) {
            ctx->pc = 0x1D80024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d80024;
        }
    }
    ctx->pc = 0x1D800E8u;
label_1d800e8:
    // 0x1d800e8: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d800e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d800ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d800ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d800f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d800f4: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D800F4u;
    {
        const bool branch_taken_0x1d800f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D800F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D800F4u;
        // 0x1d800f8: 0x24c64940  addiu       $a2, $a2, 0x4940 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d800f4) {
            ctx->pc = 0x1D8007Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8007c;
        }
    }
    ctx->pc = 0x1D800FCu;
label_1d800fc:
    // 0x1d800fc: 0x3c0601d8  lui         $a2, 0x1D8
    ctx->pc = 0x1d800fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)472 << 16));
    // 0x1d80100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d80100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80104: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d80104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80108: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D80108u;
    {
        const bool branch_taken_0x1d80108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80108u;
        // 0x1d8010c: 0x24c64ae0  addiu       $a2, $a2, 0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80108) {
            ctx->pc = 0x1D8007Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8007c;
        }
    }
    ctx->pc = 0x1D80110u;
label_1d80110:
    // 0x1d80110: 0x3c0401d8  lui         $a0, 0x1D8
    ctx->pc = 0x1d80110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)472 << 16));
    // 0x1d80114: 0x3c0501d8  lui         $a1, 0x1D8
    ctx->pc = 0x1d80114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)472 << 16));
    // 0x1d80118: 0x2484d7b8  addiu       $a0, $a0, -0x2848
    ctx->pc = 0x1d80118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956984));
    // 0x1d8011c: 0x24a50bd0  addiu       $a1, $a1, 0xBD0
    ctx->pc = 0x1d8011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3024));
    // 0x1d80120: 0xc75f5f0  jal         func_1D7D7C0
    ctx->pc = 0x1D80120u;
    SET_GPR_U32(ctx, 31, 0x1D80128u);
    ctx->pc = 0x1D80124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D80120u;
    // 0x1d80124: 0x24060424  addiu       $a2, $zero, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D7C0u, 0x1D80120u, 0x1D80128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D80128u;
label_1d80128:
    // 0x1d80128: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x1D80128u;
    {
        const bool branch_taken_0x1d80128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80128u;
        // 0x1d8012c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80128) {
            ctx->pc = 0x1D7FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7ff64;
        }
    }
    ctx->pc = 0x1D80130u;
}
