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

// Function: sub_01C50BE0
// Address: 0x1c50be0 - 0x1c50d08
void sub_01C50BE0_0x1c50be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50BE0_0x1c50be0");
#endif

    switch (ctx->pc) {
        case 0x1c50c18u: goto label_1c50c18;
        case 0x1c50c48u: goto label_1c50c48;
        case 0x1c50c58u: goto label_1c50c58;
        case 0x1c50c68u: goto label_1c50c68;
        case 0x1c50cacu: goto label_1c50cac;
        case 0x1c50cc8u: goto label_1c50cc8;
        case 0x1c50cd8u: goto label_1c50cd8;
        default: break;
    }

    ctx->pc = 0x1c50be0u;

    // 0x1c50be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c50be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c50be4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c50be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50be8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c50be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c50bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50bf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c50bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50bf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50bf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c50bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c50bfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c50bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c50c00: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c50c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c50c04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c50c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c08: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50c0c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c50c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c10: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50C10u;
    SET_GPR_U32(ctx, 31, 0x1C50C18u);
    ctx->pc = 0x1C50C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C10u;
    // 0x1c50c14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50C10u, 0x1C50C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50C18u;
label_1c50c18:
    // 0x1c50c18: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c50c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c50c1c: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c50c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c50c20: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c50c20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c50c24: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c50c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c50c28: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c50c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c50c2c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c50c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c50c30: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c50c30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c50c34: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c50c34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c50c38: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c50c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c50c3c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c50c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c50c40: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50C40u;
    SET_GPR_U32(ctx, 31, 0x1C50C48u);
    ctx->pc = 0x1C50C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C40u;
    // 0x1c50c44: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50C40u, 0x1C50C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50C48u;
label_1c50c48:
    // 0x1c50c48: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c50c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c50c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c50c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c50: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50C50u;
    SET_GPR_U32(ctx, 31, 0x1C50C58u);
    ctx->pc = 0x1C50C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C50u;
    // 0x1c50c54: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50C50u, 0x1C50C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50C58u;
label_1c50c58:
    // 0x1c50c58: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c50c58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c50c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c50c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50c60: 0xc713e4c  jal         func_1C4F930
    ctx->pc = 0x1C50C60u;
    SET_GPR_U32(ctx, 31, 0x1C50C68u);
    ctx->pc = 0x1C50C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50C60u;
    // 0x1c50c64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F930u, 0x1C50C60u, 0x1C50C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50C68u;
label_1c50c68:
    // 0x1c50c68: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c50c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50c6c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c50c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c50c70: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c50c70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c50c74: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c50c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c50c78: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c50c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c50c7c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c50c7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c50c80: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c50c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50c84: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c50c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c50c88: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c50c88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c50c8c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c50c8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c50c90: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c50c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c50c94: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c50c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c50c98: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c50c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c50c9c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c50c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c50ca0: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c50ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50ca4: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c50ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c50ca8: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c50ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c50cac:
    // 0x1c50cac: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c50cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c50cb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c50cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c50cb4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c50cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c50cb8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c50cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c50cbc: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c50cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c50cc0: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50CC0u;
    SET_GPR_U32(ctx, 31, 0x1C50CC8u);
    ctx->pc = 0x1C50CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50CC0u;
    // 0x1c50cc4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50CC0u, 0x1C50CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50CC8u;
label_1c50cc8:
    // 0x1c50cc8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c50cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c50ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50cd0: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50CD0u;
    SET_GPR_U32(ctx, 31, 0x1C50CD8u);
    ctx->pc = 0x1C50CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50CD0u;
    // 0x1c50cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50CD0u, 0x1C50CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50CD8u;
label_1c50cd8:
    // 0x1c50cd8: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c50cd8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c50cdc: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C50CDCu;
    {
        const bool branch_taken_0x1c50cdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50CDCu;
        // 0x1c50ce0: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50cdc) {
            ctx->pc = 0x1C50CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50cac;
        }
    }
    ctx->pc = 0x1C50CE4u;
    // 0x1c50ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50ce8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50ce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50cec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50cecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50cf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c50cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50cf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c50cf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c50cf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c50cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c50cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50CFCu;
        // 0x1c50d00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50D04u;
    // 0x1c50d04: 0x0  nop
    ctx->pc = 0x1c50d04u;
    // NOP
    ctx->pc = 0x1c50d08u;
}
