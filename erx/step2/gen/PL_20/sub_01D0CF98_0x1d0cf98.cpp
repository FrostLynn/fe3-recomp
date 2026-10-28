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

// Function: sub_01D0CF98
// Address: 0x1d0cf98 - 0x1d0d0c0
void sub_01D0CF98_0x1d0cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CF98_0x1d0cf98");
#endif

    switch (ctx->pc) {
        case 0x1d0cfd0u: goto label_1d0cfd0;
        case 0x1d0d000u: goto label_1d0d000;
        case 0x1d0d010u: goto label_1d0d010;
        case 0x1d0d020u: goto label_1d0d020;
        case 0x1d0d064u: goto label_1d0d064;
        case 0x1d0d080u: goto label_1d0d080;
        case 0x1d0d090u: goto label_1d0d090;
        default: break;
    }

    ctx->pc = 0x1d0cf98u;

    // 0x1d0cf98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0cf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0cf9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0cf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0cfa0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d0cfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d0cfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cfa8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d0cfa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0cfb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0cfb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d0cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d0cfb8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d0cfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d0cfbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d0cfbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cfc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cfc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d0cfc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cfc8: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CFC8u;
    SET_GPR_U32(ctx, 31, 0x1D0CFD0u);
    ctx->pc = 0x1D0CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CFC8u;
    // 0x1d0cfcc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CFC8u, 0x1D0CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CFD0u;
label_1d0cfd0:
    // 0x1d0cfd0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d0cfd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d0cfd4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d0cfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d0cfd8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d0cfd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d0cfdc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d0cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d0cfe0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d0cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d0cfe4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d0cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d0cfe8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d0cfe8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d0cfec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d0cfecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d0cff0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d0cff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d0cff4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d0cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d0cff8: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CFF8u;
    SET_GPR_U32(ctx, 31, 0x1D0D000u);
    ctx->pc = 0x1D0CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CFF8u;
    // 0x1d0cffc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CFF8u, 0x1D0D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D000u;
label_1d0d000:
    // 0x1d0d000: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d0d000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d0d004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0d004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d008: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0D008u;
    SET_GPR_U32(ctx, 31, 0x1D0D010u);
    ctx->pc = 0x1D0D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D008u;
    // 0x1d0d00c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0D008u, 0x1D0D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D010u;
label_1d0d010:
    // 0x1d0d010: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d0d010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d0d014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d018: 0xc742f48  jal         func_1D0BD20
    ctx->pc = 0x1D0D018u;
    SET_GPR_U32(ctx, 31, 0x1D0D020u);
    ctx->pc = 0x1D0D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D018u;
    // 0x1d0d01c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD20u, 0x1D0D018u, 0x1D0D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D020u;
label_1d0d020:
    // 0x1d0d020: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d0d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d024: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d0d024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d0d028: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d0d028u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d0d02c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d0d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d0d030: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d0d030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d0d034: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d0d034u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d0d038: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d0d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d03c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d0d03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d0d040: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d0d040u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d0d044: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d0d044u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d0d048: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d0d048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0d04c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d0d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d0d050: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d0d050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d0d054: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d0d054u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d0d058: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d0d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d05c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d0d05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d0d060: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d0d060u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d0d064:
    // 0x1d0d064: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d0d064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d0d068: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d0d068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d0d06c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d0d06cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d0d070: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d0d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d0d074: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d0d074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d0d078: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0D078u;
    SET_GPR_U32(ctx, 31, 0x1D0D080u);
    ctx->pc = 0x1D0D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D078u;
    // 0x1d0d07c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0D078u, 0x1D0D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D080u;
label_1d0d080:
    // 0x1d0d080: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d0d080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d0d084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d088: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0D088u;
    SET_GPR_U32(ctx, 31, 0x1D0D090u);
    ctx->pc = 0x1D0D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D088u;
    // 0x1d0d08c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0D088u, 0x1D0D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D090u;
label_1d0d090:
    // 0x1d0d090: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d0d090u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d0d094: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D0D094u;
    {
        const bool branch_taken_0x1d0d094 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D094u;
        // 0x1d0d098: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d094) {
            ctx->pc = 0x1D0D064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0d064;
        }
    }
    ctx->pc = 0x1D0D09Cu;
    // 0x1d0d09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0d09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d0a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0d0a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0d0a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0d0a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d0a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0d0a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0d0ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d0d0acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0d0b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d0d0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d0d0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D0B4u;
        // 0x1d0d0b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D0BCu;
    // 0x1d0d0bc: 0x0  nop
    ctx->pc = 0x1d0d0bcu;
    // NOP
    ctx->pc = 0x1d0d0c0u;
}
