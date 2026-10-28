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

// Function: sub_01C203C0
// Address: 0x1c203c0 - 0x1c204e8
void sub_01C203C0_0x1c203c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C203C0_0x1c203c0");
#endif

    switch (ctx->pc) {
        case 0x1c203f8u: goto label_1c203f8;
        case 0x1c20428u: goto label_1c20428;
        case 0x1c20438u: goto label_1c20438;
        case 0x1c20448u: goto label_1c20448;
        case 0x1c2048cu: goto label_1c2048c;
        case 0x1c204a8u: goto label_1c204a8;
        case 0x1c204b8u: goto label_1c204b8;
        default: break;
    }

    ctx->pc = 0x1c203c0u;

    // 0x1c203c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c203c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c203c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c203c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c203c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c203c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c203cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c203ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c203d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c203d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c203d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c203d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c203d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c203d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c203dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c203dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c203e0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c203e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c203e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c203e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c203e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c203e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c203ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c203ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c203f0: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C203F0u;
    SET_GPR_U32(ctx, 31, 0x1C203F8u);
    ctx->pc = 0x1C203F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C203F0u;
    // 0x1c203f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C203F0u, 0x1C203F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C203F8u;
label_1c203f8:
    // 0x1c203f8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c203f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c203fc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c203fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c20400: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c20400u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c20404: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c20404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c20408: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c20408u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c2040c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c2040cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c20410: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c20410u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c20414: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c20414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c20418: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c20418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c2041c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c2041cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c20420: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20420u;
    SET_GPR_U32(ctx, 31, 0x1C20428u);
    ctx->pc = 0x1C20424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20420u;
    // 0x1c20424: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20420u, 0x1C20428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20428u;
label_1c20428:
    // 0x1c20428: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c20428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c2042c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20430: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20430u;
    SET_GPR_U32(ctx, 31, 0x1C20438u);
    ctx->pc = 0x1C20434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20430u;
    // 0x1c20434: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20430u, 0x1C20438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20438u;
label_1c20438:
    // 0x1c20438: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c20438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c2043c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20440: 0xc707c4a  jal         func_1C1F128
    ctx->pc = 0x1C20440u;
    SET_GPR_U32(ctx, 31, 0x1C20448u);
    ctx->pc = 0x1C20444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20440u;
    // 0x1c20444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F128u, 0x1C20440u, 0x1C20448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20448u;
label_1c20448:
    // 0x1c20448: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c20448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2044c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c2044cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c20450: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c20450u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c20454: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c20454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c20458: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c20458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c2045c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c2045cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c20460: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c20460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20464: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c20464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c20468: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c20468u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c2046c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c2046cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c20470: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c20470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c20474: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c20474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c20478: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c20478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c2047c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c2047cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c20480: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c20480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20484: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c20484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c20488: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c20488u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c2048c:
    // 0x1c2048c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c2048cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c20490: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c20490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c20494: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c20494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c20498: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c20498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c2049c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c2049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c204a0: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C204A0u;
    SET_GPR_U32(ctx, 31, 0x1C204A8u);
    ctx->pc = 0x1C204A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C204A0u;
    // 0x1c204a4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C204A0u, 0x1C204A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C204A8u;
label_1c204a8:
    // 0x1c204a8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c204a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c204ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c204acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c204b0: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C204B0u;
    SET_GPR_U32(ctx, 31, 0x1C204B8u);
    ctx->pc = 0x1C204B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C204B0u;
    // 0x1c204b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C204B0u, 0x1C204B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C204B8u;
label_1c204b8:
    // 0x1c204b8: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c204b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c204bc: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C204BCu;
    {
        const bool branch_taken_0x1c204bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C204C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C204BCu;
        // 0x1c204c0: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c204bc) {
            ctx->pc = 0x1C2048Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2048c;
        }
    }
    ctx->pc = 0x1C204C4u;
    // 0x1c204c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c204c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c204c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c204c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c204cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c204ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c204d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c204d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c204d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c204d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c204d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c204d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c204dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C204DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C204E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C204DCu;
        // 0x1c204e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C204DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C204E4u;
    // 0x1c204e4: 0x0  nop
    ctx->pc = 0x1c204e4u;
    // NOP
    ctx->pc = 0x1c204e8u;
}
