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

// Function: sub_01D5DF30
// Address: 0x1d5df30 - 0x1d5e058
void sub_01D5DF30_0x1d5df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DF30_0x1d5df30");
#endif

    switch (ctx->pc) {
        case 0x1d5df68u: goto label_1d5df68;
        case 0x1d5df98u: goto label_1d5df98;
        case 0x1d5dfa8u: goto label_1d5dfa8;
        case 0x1d5dfb8u: goto label_1d5dfb8;
        case 0x1d5dffcu: goto label_1d5dffc;
        case 0x1d5e018u: goto label_1d5e018;
        case 0x1d5e028u: goto label_1d5e028;
        default: break;
    }

    ctx->pc = 0x1d5df30u;

    // 0x1d5df30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5df34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5df34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5df38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d5df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d5df3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5df40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d5df40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5df48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5df4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d5df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d5df50: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d5df50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d5df54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d5df54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df58: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5df58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5df5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d5df5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5df60: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DF60u;
    SET_GPR_U32(ctx, 31, 0x1D5DF68u);
    ctx->pc = 0x1D5DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DF60u;
    // 0x1d5df64: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DF60u, 0x1D5DF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF68u;
label_1d5df68:
    // 0x1d5df68: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d5df68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d5df6c: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d5df6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d5df70: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d5df70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d5df74: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d5df74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d5df78: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d5df78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d5df7c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d5df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d5df80: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d5df80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d5df84: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d5df84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d5df88: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d5df88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5df8c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d5df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5df90: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DF90u;
    SET_GPR_U32(ctx, 31, 0x1D5DF98u);
    ctx->pc = 0x1D5DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DF90u;
    // 0x1d5df94: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DF90u, 0x1D5DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DF98u;
label_1d5df98:
    // 0x1d5df98: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d5df98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d5df9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5df9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfa0: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DFA0u;
    SET_GPR_U32(ctx, 31, 0x1D5DFA8u);
    ctx->pc = 0x1D5DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DFA0u;
    // 0x1d5dfa4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DFA0u, 0x1D5DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DFA8u;
label_1d5dfa8:
    // 0x1d5dfa8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d5dfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d5dfac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dfb0: 0xc757348  jal         func_1D5CD20
    ctx->pc = 0x1D5DFB0u;
    SET_GPR_U32(ctx, 31, 0x1D5DFB8u);
    ctx->pc = 0x1D5DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DFB0u;
    // 0x1d5dfb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD20u, 0x1D5DFB0u, 0x1D5DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DFB8u;
label_1d5dfb8:
    // 0x1d5dfb8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d5dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dfbc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5dfbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5dfc0: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d5dfc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d5dfc4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d5dfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d5dfc8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d5dfc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d5dfcc: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d5dfccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d5dfd0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d5dfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dfd4: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d5dfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d5dfd8: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d5dfd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d5dfdc: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d5dfdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d5dfe0: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d5dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5dfe4: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d5dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d5dfe8: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d5dfe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d5dfec: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d5dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d5dff0: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d5dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5dff4: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d5dff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d5dff8: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d5dff8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d5dffc:
    // 0x1d5dffc: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d5dffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d5e000: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d5e000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d5e004: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d5e004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d5e008: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d5e008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d5e00c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d5e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d5e010: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5E010u;
    SET_GPR_U32(ctx, 31, 0x1D5E018u);
    ctx->pc = 0x1D5E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E010u;
    // 0x1d5e014: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5E010u, 0x1D5E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E018u;
label_1d5e018:
    // 0x1d5e018: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d5e018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d5e01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e020: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5E020u;
    SET_GPR_U32(ctx, 31, 0x1D5E028u);
    ctx->pc = 0x1D5E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E020u;
    // 0x1d5e024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5E020u, 0x1D5E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E028u;
label_1d5e028:
    // 0x1d5e028: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d5e028u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d5e02c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D5E02Cu;
    {
        const bool branch_taken_0x1d5e02c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E02Cu;
        // 0x1d5e030: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e02c) {
            ctx->pc = 0x1D5DFFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dffc;
        }
    }
    ctx->pc = 0x1D5E034u;
    // 0x1d5e034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5e038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e03c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5e03cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5e040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5e044: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5e044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5e048: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d5e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5e04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E04Cu;
        // 0x1d5e050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E054u;
    // 0x1d5e054: 0x0  nop
    ctx->pc = 0x1d5e054u;
    // NOP
    ctx->pc = 0x1d5e058u;
}
