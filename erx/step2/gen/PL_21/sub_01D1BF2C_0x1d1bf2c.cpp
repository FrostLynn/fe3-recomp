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

// Function: sub_01D1BF2C
// Address: 0x1d1bf2c - 0x1d1c030
void sub_01D1BF2C_0x1d1bf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BF2C_0x1d1bf2c");
#endif

    switch (ctx->pc) {
        case 0x1d1bf40u: goto label_1d1bf40;
        case 0x1d1bf48u: goto label_1d1bf48;
        case 0x1d1bf5cu: goto label_1d1bf5c;
        case 0x1d1bf64u: goto label_1d1bf64;
        case 0x1d1bf78u: goto label_1d1bf78;
        case 0x1d1bf80u: goto label_1d1bf80;
        case 0x1d1bf94u: goto label_1d1bf94;
        case 0x1d1bfacu: goto label_1d1bfac;
        case 0x1d1bfc4u: goto label_1d1bfc4;
        case 0x1d1bfe8u: goto label_1d1bfe8;
        case 0x1d1c004u: goto label_1d1c004;
        case 0x1d1c00cu: goto label_1d1c00c;
        case 0x1d1c024u: goto label_1d1c024;
        default: break;
    }

    ctx->pc = 0x1d1bf2cu;

    // 0x1d1bf2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1bf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1bf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf34: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x1d1bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bf38: 0xc746942  jal         func_1D1A508
    ctx->pc = 0x1D1BF38u;
    SET_GPR_U32(ctx, 31, 0x1D1BF40u);
    ctx->pc = 0x1D1BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF38u;
    // 0x1d1bf3c: 0x24c62880  addiu       $a2, $a2, 0x2880 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A508u, 0x1D1BF38u, 0x1D1BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF40u;
label_1d1bf40:
    // 0x1d1bf40: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1D1BF40u;
    {
        const bool branch_taken_0x1d1bf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF40u;
        // 0x1d1bf44: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf40) {
            ctx->pc = 0x1D1BF0Cu;
            return;
        }
    }
    ctx->pc = 0x1D1BF48u;
label_1d1bf48:
    // 0x1d1bf48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf50: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x1d1bf50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bf54: 0xc746a42  jal         func_1D1A908
    ctx->pc = 0x1D1BF54u;
    SET_GPR_U32(ctx, 31, 0x1D1BF5Cu);
    ctx->pc = 0x1D1BF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF54u;
    // 0x1d1bf58: 0x24c629e0  addiu       $a2, $a2, 0x29E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A908u, 0x1D1BF54u, 0x1D1BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF5Cu;
label_1d1bf5c:
    // 0x1d1bf5c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D1BF5Cu;
    {
        const bool branch_taken_0x1d1bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF5Cu;
        // 0x1d1bf60: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf5c) {
            ctx->pc = 0x1D1BF0Cu;
            return;
        }
    }
    ctx->pc = 0x1D1BF64u;
label_1d1bf64:
    // 0x1d1bf64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d1bf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf68: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1bf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf6c: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x1d1bf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bf70: 0xc746972  jal         func_1D1A5C8
    ctx->pc = 0x1D1BF70u;
    SET_GPR_U32(ctx, 31, 0x1D1BF78u);
    ctx->pc = 0x1D1BF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF70u;
    // 0x1d1bf74: 0x24c628b0  addiu       $a2, $a2, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A5C8u, 0x1D1BF70u, 0x1D1BF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF78u;
label_1d1bf78:
    // 0x1d1bf78: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D1BF78u;
    {
        const bool branch_taken_0x1d1bf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BF78u;
        // 0x1d1bf7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bf78) {
            ctx->pc = 0x1D1BF0Cu;
            return;
        }
    }
    ctx->pc = 0x1D1BF80u;
label_1d1bf80:
    // 0x1d1bf80: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1d1bf80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d1bf84: 0x24d20010  addiu       $s2, $a2, 0x10
    ctx->pc = 0x1d1bf84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d1bf88: 0x3411da40  ori         $s1, $zero, 0xDA40
    ctx->pc = 0x1d1bf88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55872);
    // 0x1d1bf8c: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BF8Cu;
    SET_GPR_U32(ctx, 31, 0x1D1BF94u);
    ctx->pc = 0x1D1BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF8Cu;
    // 0x1d1bf90: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BF8Cu, 0x1D1BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF94u;
label_1d1bf94:
    // 0x1d1bf94: 0x3c0601d2  lui         $a2, 0x1D2
    ctx->pc = 0x1d1bf94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bf98: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d1bf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1bf9c: 0x24c62850  addiu       $a2, $a2, 0x2850
    ctx->pc = 0x1d1bf9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10320));
    // 0x1d1bfa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1bfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bfa4: 0xc74683a  jal         func_1D1A0E8
    ctx->pc = 0x1D1BFA4u;
    SET_GPR_U32(ctx, 31, 0x1D1BFACu);
    ctx->pc = 0x1D1BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BFA4u;
    // 0x1d1bfa8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1A0E8u, 0x1D1BFA4u, 0x1D1BFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFACu;
label_1d1bfac:
    // 0x1d1bfac: 0x8e0f0048  lw          $t7, 0x48($s0)
    ctx->pc = 0x1d1bfacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1d1bfb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d1bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bfb4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d1bfb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d1bfb8: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1d1bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d1bfbc: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1BFBCu;
    SET_GPR_U32(ctx, 31, 0x1D1BFC4u);
    ctx->pc = 0x1D1BFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BFBCu;
    // 0x1d1bfc0: 0x24a55690  addiu       $a1, $a1, 0x5690 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1BFBCu, 0x1D1BFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFC4u;
label_1d1bfc4:
    // 0x1d1bfc4: 0x8e0f0048  lw          $t7, 0x48($s0)
    ctx->pc = 0x1d1bfc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1d1bfc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bfcc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d1bfccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d1bfd0: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1d1bfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d1bfd4: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1bfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1bfd8: 0x24a55670  addiu       $a1, $a1, 0x5670
    ctx->pc = 0x1d1bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22128));
    // 0x1d1bfdc: 0x25ef6b18  addiu       $t7, $t7, 0x6B18
    ctx->pc = 0x1d1bfdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27416));
    // 0x1d1bfe0: 0xc746408  jal         func_1D19020
    ctx->pc = 0x1D1BFE0u;
    SET_GPR_U32(ctx, 31, 0x1D1BFE8u);
    ctx->pc = 0x1D1BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BFE0u;
    // 0x1d1bfe4: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19020u, 0x1D1BFE0u, 0x1D1BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFE8u;
label_1d1bfe8:
    // 0x1d1bfe8: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x1d1bfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bfec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1bfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bff0: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x1d1bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x1d1bff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d1bff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bff8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d1bff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1d1bffc: 0xc74640c  jal         func_1D19030
    ctx->pc = 0x1D1BFFCu;
    SET_GPR_U32(ctx, 31, 0x1D1C004u);
    ctx->pc = 0x1D1C000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BFFCu;
    // 0x1d1c000: 0xe6800020  swc1        $f0, 0x20($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19030u, 0x1D1BFFCu, 0x1D1C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C004u;
label_1d1c004:
    // 0x1d1c004: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x1D1C004u;
    {
        const bool branch_taken_0x1d1c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C004u;
        // 0x1d1c008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c004) {
            ctx->pc = 0x1D1BF0Cu;
            return;
        }
    }
    ctx->pc = 0x1D1C00Cu;
label_1d1c00c:
    // 0x1d1c00c: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x1d1c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c010: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x1d1c010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c014: 0x248490d0  addiu       $a0, $a0, -0x6F30
    ctx->pc = 0x1d1c014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938832));
    // 0x1d1c018: 0x24a5ce30  addiu       $a1, $a1, -0x31D0
    ctx->pc = 0x1d1c018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954544));
    // 0x1d1c01c: 0xc746436  jal         func_1D190D8
    ctx->pc = 0x1D1C01Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C024u);
    ctx->pc = 0x1D1C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C01Cu;
    // 0x1d1c020: 0x24060409  addiu       $a2, $zero, 0x409 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190D8u, 0x1D1C01Cu, 0x1D1C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C024u;
label_1d1c024:
    // 0x1d1c024: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x1D1C024u;
    {
        const bool branch_taken_0x1d1c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C024u;
        // 0x1d1c028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c024) {
            ctx->pc = 0x1D1BF0Cu;
            return;
        }
    }
    ctx->pc = 0x1D1C02Cu;
    // 0x1d1c02c: 0x0  nop
    ctx->pc = 0x1d1c02cu;
    // NOP
    ctx->pc = 0x1d1c030u;
}
