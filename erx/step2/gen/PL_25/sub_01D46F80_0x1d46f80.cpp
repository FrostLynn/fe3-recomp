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

// Function: sub_01D46F80
// Address: 0x1d46f80 - 0x1d470a8
void sub_01D46F80_0x1d46f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46F80_0x1d46f80");
#endif

    switch (ctx->pc) {
        case 0x1d46fb8u: goto label_1d46fb8;
        case 0x1d46fe8u: goto label_1d46fe8;
        case 0x1d46ff8u: goto label_1d46ff8;
        case 0x1d47008u: goto label_1d47008;
        case 0x1d4704cu: goto label_1d4704c;
        case 0x1d47068u: goto label_1d47068;
        case 0x1d47078u: goto label_1d47078;
        default: break;
    }

    ctx->pc = 0x1d46f80u;

    // 0x1d46f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d46f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d46f84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d46f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d46f88: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d46f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d46f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46f90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d46f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46f94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46f98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d46f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d46f9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d46f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d46fa0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d46fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d46fa4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d46fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46fa8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46fac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d46facu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46fb0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46FB0u;
    SET_GPR_U32(ctx, 31, 0x1D46FB8u);
    ctx->pc = 0x1D46FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46FB0u;
    // 0x1d46fb4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46FB0u, 0x1D46FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46FB8u;
label_1d46fb8:
    // 0x1d46fb8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d46fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d46fbc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d46fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d46fc0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d46fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d46fc4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d46fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d46fc8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d46fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d46fcc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d46fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d46fd0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d46fd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d46fd4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d46fd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d46fd8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d46fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d46fdc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d46fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d46fe0: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46FE0u;
    SET_GPR_U32(ctx, 31, 0x1D46FE8u);
    ctx->pc = 0x1D46FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46FE0u;
    // 0x1d46fe4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46FE0u, 0x1D46FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46FE8u;
label_1d46fe8:
    // 0x1d46fe8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d46fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d46fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ff0: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46FF0u;
    SET_GPR_U32(ctx, 31, 0x1D46FF8u);
    ctx->pc = 0x1D46FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46FF0u;
    // 0x1d46ff4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46FF0u, 0x1D46FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46FF8u;
label_1d46ff8:
    // 0x1d46ff8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d46ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d46ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d46ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47000: 0xc751748  jal         func_1D45D20
    ctx->pc = 0x1D47000u;
    SET_GPR_U32(ctx, 31, 0x1D47008u);
    ctx->pc = 0x1D47004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47000u;
    // 0x1d47004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D20u, 0x1D47000u, 0x1D47008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47008u;
label_1d47008:
    // 0x1d47008: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d47008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4700c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d4700cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d47010: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d47010u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d47014: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d47014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d47018: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d47018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d4701c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d4701cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d47020: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d47020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d47024: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d47024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d47028: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d47028u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d4702c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d4702cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d47030: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d47030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d47034: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d47034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d47038: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d47038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d4703c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d4703cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d47040: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d47040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d47044: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d47044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d47048: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d47048u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d4704c:
    // 0x1d4704c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d4704cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d47050: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d47050u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d47054: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d47054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d47058: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d47058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d4705c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d4705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d47060: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D47060u;
    SET_GPR_U32(ctx, 31, 0x1D47068u);
    ctx->pc = 0x1D47064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47060u;
    // 0x1d47064: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D47060u, 0x1D47068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47068u;
label_1d47068:
    // 0x1d47068: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d47068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d4706c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4706cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47070: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D47070u;
    SET_GPR_U32(ctx, 31, 0x1D47078u);
    ctx->pc = 0x1D47074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47070u;
    // 0x1d47074: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D47070u, 0x1D47078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47078u;
label_1d47078:
    // 0x1d47078: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d47078u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d4707c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D4707Cu;
    {
        const bool branch_taken_0x1d4707c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4707Cu;
        // 0x1d47080: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4707c) {
            ctx->pc = 0x1D4704Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4704c;
        }
    }
    ctx->pc = 0x1D47084u;
    // 0x1d47084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d47088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4708c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4708cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d47090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d47094: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d47094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d47098: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d47098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d4709c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4709Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D470A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4709Cu;
        // 0x1d470a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4709Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D470A4u;
    // 0x1d470a4: 0x0  nop
    ctx->pc = 0x1d470a4u;
    // NOP
    ctx->pc = 0x1d470a8u;
}
