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

// Function: sub_01D1A2D0
// Address: 0x1d1a2d0 - 0x1d1a3f8
void sub_01D1A2D0_0x1d1a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1A2D0_0x1d1a2d0");
#endif

    switch (ctx->pc) {
        case 0x1d1a308u: goto label_1d1a308;
        case 0x1d1a338u: goto label_1d1a338;
        case 0x1d1a348u: goto label_1d1a348;
        case 0x1d1a358u: goto label_1d1a358;
        case 0x1d1a39cu: goto label_1d1a39c;
        case 0x1d1a3b8u: goto label_1d1a3b8;
        case 0x1d1a3c8u: goto label_1d1a3c8;
        default: break;
    }

    ctx->pc = 0x1d1a2d0u;

    // 0x1d1a2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1a2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1a2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1a2d8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d1a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d1a2dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1a2e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d1a2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a2e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1a2e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1a2ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d1a2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d1a2f0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d1a2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d1a2f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1a2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a2f8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1a2fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d1a2fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a300: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A300u;
    SET_GPR_U32(ctx, 31, 0x1D1A308u);
    ctx->pc = 0x1D1A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A300u;
    // 0x1d1a304: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A300u, 0x1D1A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A308u;
label_1d1a308:
    // 0x1d1a308: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d1a308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1a30c: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d1a30cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d1a310: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d1a310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1a314: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d1a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d1a318: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d1a318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d1a31c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d1a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d1a320: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d1a320u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d1a324: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d1a324u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d1a328: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d1a328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d1a32c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d1a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d1a330: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A330u;
    SET_GPR_U32(ctx, 31, 0x1D1A338u);
    ctx->pc = 0x1D1A334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A330u;
    // 0x1d1a334: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A330u, 0x1D1A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A338u;
label_1d1a338:
    // 0x1d1a338: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d1a338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d1a33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a340: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A340u;
    SET_GPR_U32(ctx, 31, 0x1D1A348u);
    ctx->pc = 0x1D1A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A340u;
    // 0x1d1a344: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A340u, 0x1D1A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A348u;
label_1d1a348:
    // 0x1d1a348: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d1a348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d1a34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1a34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a350: 0xc74640c  jal         func_1D19030
    ctx->pc = 0x1D1A350u;
    SET_GPR_U32(ctx, 31, 0x1D1A358u);
    ctx->pc = 0x1D1A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A350u;
    // 0x1d1a354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19030u, 0x1D1A350u, 0x1D1A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A358u;
label_1d1a358:
    // 0x1d1a358: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d1a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a35c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d1a35cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1a360: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d1a360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1a364: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d1a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d1a368: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d1a368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d1a36c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d1a36cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d1a370: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d1a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a374: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d1a374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d1a378: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d1a378u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d1a37c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d1a37cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d1a380: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d1a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1a384: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d1a384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d1a388: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d1a388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d1a38c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d1a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d1a390: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d1a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a394: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d1a394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d1a398: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d1a398u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d1a39c:
    // 0x1d1a39c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d1a39cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d1a3a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d1a3a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d1a3a4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d1a3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d1a3a8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d1a3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d1a3ac: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d1a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d1a3b0: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A3B0u;
    SET_GPR_U32(ctx, 31, 0x1D1A3B8u);
    ctx->pc = 0x1D1A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A3B0u;
    // 0x1d1a3b4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A3B0u, 0x1D1A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A3B8u;
label_1d1a3b8:
    // 0x1d1a3b8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d1a3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d1a3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a3c0: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A3C0u;
    SET_GPR_U32(ctx, 31, 0x1D1A3C8u);
    ctx->pc = 0x1D1A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A3C0u;
    // 0x1d1a3c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A3C0u, 0x1D1A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A3C8u;
label_1d1a3c8:
    // 0x1d1a3c8: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d1a3c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d1a3cc: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D1A3CCu;
    {
        const bool branch_taken_0x1d1a3cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A3CCu;
        // 0x1d1a3d0: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a3cc) {
            ctx->pc = 0x1D1A39Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1a39c;
        }
    }
    ctx->pc = 0x1D1A3D4u;
    // 0x1d1a3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a3d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a3d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a3dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1a3dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a3e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1a3e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1a3e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d1a3e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a3e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d1a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d1a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A3ECu;
        // 0x1d1a3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A3F4u;
    // 0x1d1a3f4: 0x0  nop
    ctx->pc = 0x1d1a3f4u;
    // NOP
    ctx->pc = 0x1d1a3f8u;
}
