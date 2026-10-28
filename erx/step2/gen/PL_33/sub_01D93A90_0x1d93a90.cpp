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

// Function: sub_01D93A90
// Address: 0x1d93a90 - 0x1d93bb8
void sub_01D93A90_0x1d93a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93A90_0x1d93a90");
#endif

    switch (ctx->pc) {
        case 0x1d93ac8u: goto label_1d93ac8;
        case 0x1d93af8u: goto label_1d93af8;
        case 0x1d93b08u: goto label_1d93b08;
        case 0x1d93b18u: goto label_1d93b18;
        case 0x1d93b5cu: goto label_1d93b5c;
        case 0x1d93b78u: goto label_1d93b78;
        case 0x1d93b88u: goto label_1d93b88;
        default: break;
    }

    ctx->pc = 0x1d93a90u;

    // 0x1d93a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d93a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d93a94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d93a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d93a98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d93a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d93a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93aa0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d93aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d93aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d93aa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d93aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d93aac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d93aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d93ab0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d93ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d93ab4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d93ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93ab8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d93abc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d93abcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93ac0: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93AC0u;
    SET_GPR_U32(ctx, 31, 0x1D93AC8u);
    ctx->pc = 0x1D93AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93AC0u;
    // 0x1d93ac4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93AC0u, 0x1D93AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93AC8u;
label_1d93ac8:
    // 0x1d93ac8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d93ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d93acc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d93accu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d93ad0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d93ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d93ad4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d93ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d93ad8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d93ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d93adc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d93adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d93ae0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d93ae0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d93ae4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d93ae4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d93ae8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d93ae8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d93aec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d93aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d93af0: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93AF0u;
    SET_GPR_U32(ctx, 31, 0x1D93AF8u);
    ctx->pc = 0x1D93AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93AF0u;
    // 0x1d93af4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93AF0u, 0x1D93AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93AF8u;
label_1d93af8:
    // 0x1d93af8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d93af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d93afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93b00: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93B00u;
    SET_GPR_U32(ctx, 31, 0x1D93B08u);
    ctx->pc = 0x1D93B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B00u;
    // 0x1d93b04: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93B00u, 0x1D93B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93B08u;
label_1d93b08:
    // 0x1d93b08: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d93b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d93b0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d93b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93b10: 0xc764a08  jal         func_1D92820
    ctx->pc = 0x1D93B10u;
    SET_GPR_U32(ctx, 31, 0x1D93B18u);
    ctx->pc = 0x1D93B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B10u;
    // 0x1d93b14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92820u, 0x1D93B10u, 0x1D93B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93B18u;
label_1d93b18:
    // 0x1d93b18: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d93b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93b1c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d93b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d93b20: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d93b20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d93b24: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d93b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d93b28: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d93b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d93b2c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d93b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d93b30: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d93b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93b34: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d93b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d93b38: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d93b38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d93b3c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d93b3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d93b40: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d93b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d93b44: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d93b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d93b48: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d93b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d93b4c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d93b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d93b50: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d93b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93b54: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d93b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d93b58: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d93b58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d93b5c:
    // 0x1d93b5c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d93b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d93b60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d93b60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d93b64: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d93b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d93b68: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d93b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d93b6c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d93b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d93b70: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93B70u;
    SET_GPR_U32(ctx, 31, 0x1D93B78u);
    ctx->pc = 0x1D93B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B70u;
    // 0x1d93b74: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93B70u, 0x1D93B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93B78u;
label_1d93b78:
    // 0x1d93b78: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d93b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d93b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d93b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93b80: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93B80u;
    SET_GPR_U32(ctx, 31, 0x1D93B88u);
    ctx->pc = 0x1D93B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93B80u;
    // 0x1d93b84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93B80u, 0x1D93B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93B88u;
label_1d93b88:
    // 0x1d93b88: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d93b88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d93b8c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D93B8Cu;
    {
        const bool branch_taken_0x1d93b8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D93B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93B8Cu;
        // 0x1d93b90: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93b8c) {
            ctx->pc = 0x1D93B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93b5c;
        }
    }
    ctx->pc = 0x1D93B94u;
    // 0x1d93b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d93b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d93b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93ba0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d93ba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d93ba4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d93ba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93ba8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d93ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d93bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93BACu;
        // 0x1d93bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93BB4u;
    // 0x1d93bb4: 0x0  nop
    ctx->pc = 0x1d93bb4u;
    // NOP
    ctx->pc = 0x1d93bb8u;
}
