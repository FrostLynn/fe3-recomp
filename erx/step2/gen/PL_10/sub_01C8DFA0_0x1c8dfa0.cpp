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

// Function: sub_01C8DFA0
// Address: 0x1c8dfa0 - 0x1c8e088
void sub_01C8DFA0_0x1c8dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DFA0_0x1c8dfa0");
#endif

    switch (ctx->pc) {
        case 0x1c8dfd0u: goto label_1c8dfd0;
        case 0x1c8e000u: goto label_1c8e000;
        case 0x1c8e010u: goto label_1c8e010;
        case 0x1c8e020u: goto label_1c8e020;
        default: break;
    }

    ctx->pc = 0x1c8dfa0u;

    // 0x1c8dfa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8dfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8dfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8dfa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c8dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c8dfac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8dfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8dfb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c8dfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dfb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8dfb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c8dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c8dfbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c8dfbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dfc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8dfc4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c8dfc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c8dfc8: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DFC8u;
    SET_GPR_U32(ctx, 31, 0x1C8DFD0u);
    ctx->pc = 0x1C8DFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DFC8u;
    // 0x1c8dfcc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DFC8u, 0x1C8DFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DFD0u;
label_1c8dfd0:
    // 0x1c8dfd0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c8dfd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c8dfd4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c8dfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c8dfd8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c8dfd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c8dfdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dfe0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c8dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c8dfe4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c8dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c8dfe8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c8dfe8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c8dfec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c8dfecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c8dff0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c8dff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c8dff4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c8dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c8dff8: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8DFF8u;
    SET_GPR_U32(ctx, 31, 0x1C8E000u);
    ctx->pc = 0x1C8DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DFF8u;
    // 0x1c8dffc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8DFF8u, 0x1C8E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E000u;
label_1c8e000:
    // 0x1c8e000: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c8e000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c8e004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c8e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e008: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8E008u;
    SET_GPR_U32(ctx, 31, 0x1C8E010u);
    ctx->pc = 0x1C8E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E008u;
    // 0x1c8e00c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8E008u, 0x1C8E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E010u;
label_1c8e010:
    // 0x1c8e010: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c8e010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c8e014: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c8e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e018: 0xc7233c8  jal         func_1C8CF20
    ctx->pc = 0x1C8E018u;
    SET_GPR_U32(ctx, 31, 0x1C8E020u);
    ctx->pc = 0x1C8E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E018u;
    // 0x1c8e01c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF20u, 0x1C8E018u, 0x1C8E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E020u;
label_1c8e020:
    // 0x1c8e020: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c8e020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e024: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c8e024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c8e028: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c8e028u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8e02c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c8e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c8e030: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c8e030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c8e034: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c8e034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c8e038: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c8e038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c8e03c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c8e03cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c8e040: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c8e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8e044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8e048: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c8e048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c8e04c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c8e04cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c8e050: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c8e050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c8e054: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c8e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8e058: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c8e058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c8e05c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c8e05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c8e060: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c8e060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c8e064: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c8e064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c8e068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8e06c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c8e06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c8e070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8e070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8e074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c8e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8e07c: 0x87233c6  j           func_1C8CF18
    ctx->pc = 0x1C8E07Cu;
    ctx->pc = 0x1C8E080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E07Cu;
    // 0x1c8e080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    sub_01C8CF18_0x1c8cf18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8E084u;
    // 0x1c8e084: 0x0  nop
    ctx->pc = 0x1c8e084u;
    // NOP
    ctx->pc = 0x1c8e088u;
}
