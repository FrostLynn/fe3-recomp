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

// Function: sub_01D27E98
// Address: 0x1d27e98 - 0x1d27fc0
void sub_01D27E98_0x1d27e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27E98_0x1d27e98");
#endif

    switch (ctx->pc) {
        case 0x1d27ed0u: goto label_1d27ed0;
        case 0x1d27f00u: goto label_1d27f00;
        case 0x1d27f10u: goto label_1d27f10;
        case 0x1d27f20u: goto label_1d27f20;
        case 0x1d27f64u: goto label_1d27f64;
        case 0x1d27f80u: goto label_1d27f80;
        case 0x1d27f90u: goto label_1d27f90;
        default: break;
    }

    ctx->pc = 0x1d27e98u;

    // 0x1d27e98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d27e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d27e9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d27e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d27ea0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d27ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d27ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27ea8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d27ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d27eb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d27eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d27eb4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d27eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d27eb8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d27eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d27ebc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d27ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ec0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27ec4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d27ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ec8: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27EC8u;
    SET_GPR_U32(ctx, 31, 0x1D27ED0u);
    ctx->pc = 0x1D27ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27EC8u;
    // 0x1d27ecc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27EC8u, 0x1D27ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27ED0u;
label_1d27ed0:
    // 0x1d27ed0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d27ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d27ed4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d27ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d27ed8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d27ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d27edc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d27edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d27ee0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d27ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d27ee4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d27ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d27ee8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d27ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d27eec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d27eecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d27ef0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d27ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d27ef4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d27ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d27ef8: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27EF8u;
    SET_GPR_U32(ctx, 31, 0x1D27F00u);
    ctx->pc = 0x1D27EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27EF8u;
    // 0x1d27efc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27EF8u, 0x1D27F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F00u;
label_1d27f00:
    // 0x1d27f00: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d27f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d27f04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d27f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27f08: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27F08u;
    SET_GPR_U32(ctx, 31, 0x1D27F10u);
    ctx->pc = 0x1D27F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27F08u;
    // 0x1d27f0c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27F08u, 0x1D27F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F10u;
label_1d27f10:
    // 0x1d27f10: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d27f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d27f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d27f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27f18: 0xc749b0c  jal         func_1D26C30
    ctx->pc = 0x1D27F18u;
    SET_GPR_U32(ctx, 31, 0x1D27F20u);
    ctx->pc = 0x1D27F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27F18u;
    // 0x1d27f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C30u, 0x1D27F18u, 0x1D27F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F20u;
label_1d27f20:
    // 0x1d27f20: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d27f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27f24: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d27f24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d27f28: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d27f28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d27f2c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d27f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d27f30: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d27f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d27f34: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d27f34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d27f38: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d27f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27f3c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d27f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d27f40: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d27f40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d27f44: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d27f44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d27f48: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d27f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d27f4c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d27f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d27f50: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d27f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d27f54: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d27f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d27f58: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d27f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27f5c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d27f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d27f60: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d27f60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d27f64:
    // 0x1d27f64: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d27f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d27f68: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d27f68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d27f6c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d27f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d27f70: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d27f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d27f74: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d27f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d27f78: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27F78u;
    SET_GPR_U32(ctx, 31, 0x1D27F80u);
    ctx->pc = 0x1D27F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27F78u;
    // 0x1d27f7c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27F78u, 0x1D27F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F80u;
label_1d27f80:
    // 0x1d27f80: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d27f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d27f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27f88: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27F88u;
    SET_GPR_U32(ctx, 31, 0x1D27F90u);
    ctx->pc = 0x1D27F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27F88u;
    // 0x1d27f8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27F88u, 0x1D27F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27F90u;
label_1d27f90:
    // 0x1d27f90: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d27f90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d27f94: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D27F94u;
    {
        const bool branch_taken_0x1d27f94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27F94u;
        // 0x1d27f98: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27f94) {
            ctx->pc = 0x1D27F64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27f64;
        }
    }
    ctx->pc = 0x1D27F9Cu;
    // 0x1d27f9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27fa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d27fa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27fa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d27fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27fa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d27fa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27fac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d27facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d27fb0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d27fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d27fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27FB4u;
        // 0x1d27fb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27FBCu;
    // 0x1d27fbc: 0x0  nop
    ctx->pc = 0x1d27fbcu;
    // NOP
    ctx->pc = 0x1d27fc0u;
}
