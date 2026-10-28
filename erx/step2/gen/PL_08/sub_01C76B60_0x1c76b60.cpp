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

// Function: sub_01C76B60
// Address: 0x1c76b60 - 0x1c76c88
void sub_01C76B60_0x1c76b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76B60_0x1c76b60");
#endif

    switch (ctx->pc) {
        case 0x1c76b98u: goto label_1c76b98;
        case 0x1c76bc8u: goto label_1c76bc8;
        case 0x1c76bd8u: goto label_1c76bd8;
        case 0x1c76be8u: goto label_1c76be8;
        case 0x1c76c2cu: goto label_1c76c2c;
        case 0x1c76c48u: goto label_1c76c48;
        case 0x1c76c58u: goto label_1c76c58;
        default: break;
    }

    ctx->pc = 0x1c76b60u;

    // 0x1c76b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c76b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c76b64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c76b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c76b68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c76b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c76b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76b70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c76b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c76b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c76b78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c76b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c76b7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c76b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c76b80: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c76b80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c76b84: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c76b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76b88: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c76b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c76b8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c76b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76b90: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76B90u;
    SET_GPR_U32(ctx, 31, 0x1C76B98u);
    ctx->pc = 0x1C76B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76B90u;
    // 0x1c76b94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76B90u, 0x1C76B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76B98u;
label_1c76b98:
    // 0x1c76b98: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c76b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c76b9c: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c76b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c76ba0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c76ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c76ba4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c76ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c76ba8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c76ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c76bac: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c76bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c76bb0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c76bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c76bb4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c76bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c76bb8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c76bb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c76bbc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c76bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c76bc0: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76BC0u;
    SET_GPR_U32(ctx, 31, 0x1C76BC8u);
    ctx->pc = 0x1C76BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76BC0u;
    // 0x1c76bc4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76BC0u, 0x1C76BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76BC8u;
label_1c76bc8:
    // 0x1c76bc8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c76bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c76bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c76bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76bd0: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76BD0u;
    SET_GPR_U32(ctx, 31, 0x1C76BD8u);
    ctx->pc = 0x1C76BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76BD0u;
    // 0x1c76bd4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76BD0u, 0x1C76BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76BD8u;
label_1c76bd8:
    // 0x1c76bd8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c76bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c76bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c76bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76be0: 0xc71d648  jal         func_1C75920
    ctx->pc = 0x1C76BE0u;
    SET_GPR_U32(ctx, 31, 0x1C76BE8u);
    ctx->pc = 0x1C76BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76BE0u;
    // 0x1c76be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75920u, 0x1C76BE0u, 0x1C76BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76BE8u;
label_1c76be8:
    // 0x1c76be8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c76be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76bec: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c76becu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c76bf0: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c76bf0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c76bf4: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c76bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c76bf8: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c76bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c76bfc: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c76bfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c76c00: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c76c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76c04: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c76c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c76c08: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c76c08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c76c0c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c76c0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c76c10: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c76c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c76c14: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c76c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c76c18: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c76c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c76c1c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c76c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c76c20: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c76c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76c24: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c76c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c76c28: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c76c28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c76c2c:
    // 0x1c76c2c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c76c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c76c30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c76c30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c76c34: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c76c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c76c38: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c76c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c76c3c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c76c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c76c40: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76C40u;
    SET_GPR_U32(ctx, 31, 0x1C76C48u);
    ctx->pc = 0x1C76C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C40u;
    // 0x1c76c44: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76C40u, 0x1C76C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76C48u;
label_1c76c48:
    // 0x1c76c48: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c76c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c76c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76c50: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76C50u;
    SET_GPR_U32(ctx, 31, 0x1C76C58u);
    ctx->pc = 0x1C76C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76C50u;
    // 0x1c76c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76C50u, 0x1C76C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76C58u;
label_1c76c58:
    // 0x1c76c58: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c76c58u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c76c5c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C76C5Cu;
    {
        const bool branch_taken_0x1c76c5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C76C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C5Cu;
        // 0x1c76c60: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76c5c) {
            ctx->pc = 0x1C76C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76c2c;
        }
    }
    ctx->pc = 0x1C76C64u;
    // 0x1c76c64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76c68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c76c68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76c6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c76c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76c70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c76c70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c76c74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c76c74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c76c78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c76c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c76c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C76C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C76C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76C7Cu;
        // 0x1c76c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C76C84u;
    // 0x1c76c84: 0x0  nop
    ctx->pc = 0x1c76c84u;
    // NOP
    ctx->pc = 0x1c76c88u;
}
