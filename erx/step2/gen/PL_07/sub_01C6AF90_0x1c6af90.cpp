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

// Function: sub_01C6AF90
// Address: 0x1c6af90 - 0x1c6b090
void sub_01C6AF90_0x1c6af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6AF90_0x1c6af90");
#endif

    switch (ctx->pc) {
        case 0x1c6afc0u: goto label_1c6afc0;
        case 0x1c6aff0u: goto label_1c6aff0;
        case 0x1c6b000u: goto label_1c6b000;
        case 0x1c6b010u: goto label_1c6b010;
        case 0x1c6b068u: goto label_1c6b068;
        default: break;
    }

    ctx->pc = 0x1c6af90u;

    // 0x1c6af90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6af94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6af98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6af9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6afa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6afa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6afa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6afa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6afac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c6afacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6afb0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6afb4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c6afb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c6afb8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6AFB8u;
    SET_GPR_U32(ctx, 31, 0x1C6AFC0u);
    ctx->pc = 0x1C6AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AFB8u;
    // 0x1c6afbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6AFB8u, 0x1C6AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AFC0u;
label_1c6afc0:
    // 0x1c6afc0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c6afc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c6afc4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c6afc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c6afc8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c6afc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c6afcc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c6afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c6afd0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c6afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c6afd4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c6afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c6afd8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c6afd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c6afdc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c6afdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c6afe0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c6afe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c6afe4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c6afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c6afe8: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6AFE8u;
    SET_GPR_U32(ctx, 31, 0x1C6AFF0u);
    ctx->pc = 0x1C6AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AFE8u;
    // 0x1c6afec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6AFE8u, 0x1C6AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AFF0u;
label_1c6aff0:
    // 0x1c6aff0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c6aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c6aff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6aff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aff8: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6AFF8u;
    SET_GPR_U32(ctx, 31, 0x1C6B000u);
    ctx->pc = 0x1C6AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AFF8u;
    // 0x1c6affc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6AFF8u, 0x1C6B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B000u;
label_1c6b000:
    // 0x1c6b000: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c6b000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c6b004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6b004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b008: 0xc71a78a  jal         func_1C69E28
    ctx->pc = 0x1C6B008u;
    SET_GPR_U32(ctx, 31, 0x1C6B010u);
    ctx->pc = 0x1C6B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B008u;
    // 0x1c6b00c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E28u, 0x1C6B008u, 0x1C6B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B010u;
label_1c6b010:
    // 0x1c6b010: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c6b010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b014: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6b014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6b018: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c6b018u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6b01c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c6b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c6b020: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c6b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c6b024: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c6b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c6b028: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c6b028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c6b02c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c6b02cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c6b030: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c6b030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b034: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c6b034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c6b038: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c6b038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c6b03c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c6b03cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c6b040: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c6b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b044: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c6b044u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c6b048: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6b048u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6b04c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c6b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c6b050: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c6b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c6b054: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c6b054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b058: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c6b058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c6b05c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c6b05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c6b060: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B060u;
    SET_GPR_U32(ctx, 31, 0x1C6B068u);
    ctx->pc = 0x1C6B064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B060u;
    // 0x1c6b064: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B060u, 0x1C6B068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B068u;
label_1c6b068:
    // 0x1c6b068: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c6b068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c6b06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6b070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b074: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c6b074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b07c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b080: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6b080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6b084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6b084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6b088: 0x871a786  j           func_1C69E18
    ctx->pc = 0x1C6B088u;
    ctx->pc = 0x1C6B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B088u;
    // 0x1c6b08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    sub_01C69E18_0x1c69e18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6B090u;
}
