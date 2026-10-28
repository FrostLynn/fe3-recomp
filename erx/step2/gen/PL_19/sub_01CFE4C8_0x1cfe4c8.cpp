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

// Function: sub_01CFE4C8
// Address: 0x1cfe4c8 - 0x1cfe5f0
void sub_01CFE4C8_0x1cfe4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE4C8_0x1cfe4c8");
#endif

    switch (ctx->pc) {
        case 0x1cfe500u: goto label_1cfe500;
        case 0x1cfe530u: goto label_1cfe530;
        case 0x1cfe540u: goto label_1cfe540;
        case 0x1cfe550u: goto label_1cfe550;
        case 0x1cfe594u: goto label_1cfe594;
        case 0x1cfe5b0u: goto label_1cfe5b0;
        case 0x1cfe5c0u: goto label_1cfe5c0;
        default: break;
    }

    ctx->pc = 0x1cfe4c8u;

    // 0x1cfe4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfe4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfe4cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfe4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfe4d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cfe4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cfe4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe4d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cfe4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe4e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cfe4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cfe4e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cfe4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cfe4e8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1cfe4e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1cfe4ec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cfe4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe4f0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe4f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cfe4f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe4f8: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE4F8u;
    SET_GPR_U32(ctx, 31, 0x1CFE500u);
    ctx->pc = 0x1CFE4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE4F8u;
    // 0x1cfe4fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE4F8u, 0x1CFE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE500u;
label_1cfe500:
    // 0x1cfe500: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1cfe500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cfe504: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1cfe504u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cfe508: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1cfe508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cfe50c: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1cfe50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1cfe510: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1cfe510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1cfe514: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cfe514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cfe518: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1cfe518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cfe51c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cfe51cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cfe520: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cfe520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cfe524: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cfe524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cfe528: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE528u;
    SET_GPR_U32(ctx, 31, 0x1CFE530u);
    ctx->pc = 0x1CFE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE528u;
    // 0x1cfe52c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE528u, 0x1CFE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE530u;
label_1cfe530:
    // 0x1cfe530: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1cfe530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cfe534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cfe534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe538: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE538u;
    SET_GPR_U32(ctx, 31, 0x1CFE540u);
    ctx->pc = 0x1CFE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE538u;
    // 0x1cfe53c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE538u, 0x1CFE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE540u;
label_1cfe540:
    // 0x1cfe540: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1cfe540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1cfe544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cfe544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe548: 0xc73f48c  jal         func_1CFD230
    ctx->pc = 0x1CFE548u;
    SET_GPR_U32(ctx, 31, 0x1CFE550u);
    ctx->pc = 0x1CFE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE548u;
    // 0x1cfe54c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD230u, 0x1CFE548u, 0x1CFE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE550u;
label_1cfe550:
    // 0x1cfe550: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1cfe550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe554: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cfe554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cfe558: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1cfe558u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cfe55c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1cfe55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1cfe560: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cfe560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cfe564: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1cfe564u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1cfe568: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1cfe568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe56c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1cfe56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1cfe570: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1cfe570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1cfe574: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cfe574u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cfe578: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1cfe578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe57c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1cfe57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1cfe580: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1cfe580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1cfe584: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1cfe584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1cfe588: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1cfe588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe58c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1cfe58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1cfe590: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1cfe590u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1cfe594:
    // 0x1cfe594: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1cfe594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1cfe598: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cfe598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cfe59c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1cfe59cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cfe5a0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cfe5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cfe5a4: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1cfe5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1cfe5a8: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE5A8u;
    SET_GPR_U32(ctx, 31, 0x1CFE5B0u);
    ctx->pc = 0x1CFE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE5A8u;
    // 0x1cfe5ac: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE5A8u, 0x1CFE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE5B0u;
label_1cfe5b0:
    // 0x1cfe5b0: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1cfe5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1cfe5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe5b8: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE5B8u;
    SET_GPR_U32(ctx, 31, 0x1CFE5C0u);
    ctx->pc = 0x1CFE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE5B8u;
    // 0x1cfe5bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE5B8u, 0x1CFE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE5C0u;
label_1cfe5c0:
    // 0x1cfe5c0: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1cfe5c0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cfe5c4: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFE5C4u;
    {
        const bool branch_taken_0x1cfe5c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE5C4u;
        // 0x1cfe5c8: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe5c4) {
            ctx->pc = 0x1CFE594u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe594;
        }
    }
    ctx->pc = 0x1CFE5CCu;
    // 0x1cfe5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe5d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfe5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe5d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cfe5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfe5dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cfe5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfe5e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cfe5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cfe5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE5E4u;
        // 0x1cfe5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE5ECu;
    // 0x1cfe5ec: 0x0  nop
    ctx->pc = 0x1cfe5ecu;
    // NOP
    ctx->pc = 0x1cfe5f0u;
}
