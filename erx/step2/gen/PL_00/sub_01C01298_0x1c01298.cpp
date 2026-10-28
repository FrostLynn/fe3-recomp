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

// Function: sub_01C01298
// Address: 0x1c01298 - 0x1c013c0
void sub_01C01298_0x1c01298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01298_0x1c01298");
#endif

    switch (ctx->pc) {
        case 0x1c012d0u: goto label_1c012d0;
        case 0x1c01300u: goto label_1c01300;
        case 0x1c01310u: goto label_1c01310;
        case 0x1c01320u: goto label_1c01320;
        case 0x1c01364u: goto label_1c01364;
        case 0x1c01380u: goto label_1c01380;
        case 0x1c01390u: goto label_1c01390;
        default: break;
    }

    ctx->pc = 0x1c01298u;

    // 0x1c01298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c01298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0129c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c0129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c012a0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c012a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c012a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c012a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c012a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c012a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c012ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c012acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c012b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c012b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c012b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c012b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c012b8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c012b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c012bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c012bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c012c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c012c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c012c4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c012c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c012c8: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C012C8u;
    SET_GPR_U32(ctx, 31, 0x1C012D0u);
    ctx->pc = 0x1C012CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C012C8u;
    // 0x1c012cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C012C8u, 0x1C012D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C012D0u;
label_1c012d0:
    // 0x1c012d0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c012d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c012d4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c012d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c012d8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c012d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c012dc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c012dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c012e0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c012e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c012e4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c012e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c012e8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c012e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c012ec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c012ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c012f0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c012f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c012f4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c012f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c012f8: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C012F8u;
    SET_GPR_U32(ctx, 31, 0x1C01300u);
    ctx->pc = 0x1C012FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C012F8u;
    // 0x1c012fc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C012F8u, 0x1C01300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01300u;
label_1c01300:
    // 0x1c01300: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c01300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c01304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c01304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01308: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01308u;
    SET_GPR_U32(ctx, 31, 0x1C01310u);
    ctx->pc = 0x1C0130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01308u;
    // 0x1c0130c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01308u, 0x1C01310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01310u;
label_1c01310:
    // 0x1c01310: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c01310u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c01314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c01314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01318: 0xc70000a  jal         func_1C00028
    ctx->pc = 0x1C01318u;
    SET_GPR_U32(ctx, 31, 0x1C01320u);
    ctx->pc = 0x1C0131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01318u;
    // 0x1c0131c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00028u, 0x1C01318u, 0x1C01320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01320u;
label_1c01320:
    // 0x1c01320: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c01320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01324: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c01324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c01328: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c01328u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c0132c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c0132cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c01330: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c01330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c01334: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c01334u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c01338: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c01338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0133c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c0133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c01340: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c01340u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c01344: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c01344u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c01348: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c01348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c0134c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c0134cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c01350: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c01350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c01354: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c01354u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c01358: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c01358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0135c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c0135cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c01360: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c01360u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c01364:
    // 0x1c01364: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c01364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c01368: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c01368u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c0136c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c0136cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c01370: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c01370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c01374: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c01374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c01378: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01378u;
    SET_GPR_U32(ctx, 31, 0x1C01380u);
    ctx->pc = 0x1C0137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01378u;
    // 0x1c0137c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01378u, 0x1C01380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01380u;
label_1c01380:
    // 0x1c01380: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c01380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c01384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01388: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01388u;
    SET_GPR_U32(ctx, 31, 0x1C01390u);
    ctx->pc = 0x1C0138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01388u;
    // 0x1c0138c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01388u, 0x1C01390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01390u;
label_1c01390:
    // 0x1c01390: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c01390u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c01394: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C01394u;
    {
        const bool branch_taken_0x1c01394 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C01398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01394u;
        // 0x1c01398: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01394) {
            ctx->pc = 0x1C01364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01364;
        }
    }
    ctx->pc = 0x1C0139Cu;
    // 0x1c0139c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0139cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c013a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c013a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c013a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c013a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c013a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c013a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c013ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c013acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c013b0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c013b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c013b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C013B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C013B4u;
        // 0x1c013b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C013B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C013BCu;
    // 0x1c013bc: 0x0  nop
    ctx->pc = 0x1c013bcu;
    // NOP
    ctx->pc = 0x1c013c0u;
}
