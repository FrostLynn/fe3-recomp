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

// Function: sub_01CDB4A0
// Address: 0x1cdb4a0 - 0x1cdb5c8
void sub_01CDB4A0_0x1cdb4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB4A0_0x1cdb4a0");
#endif

    switch (ctx->pc) {
        case 0x1cdb4d8u: goto label_1cdb4d8;
        case 0x1cdb508u: goto label_1cdb508;
        case 0x1cdb518u: goto label_1cdb518;
        case 0x1cdb528u: goto label_1cdb528;
        case 0x1cdb56cu: goto label_1cdb56c;
        case 0x1cdb588u: goto label_1cdb588;
        case 0x1cdb598u: goto label_1cdb598;
        default: break;
    }

    ctx->pc = 0x1cdb4a0u;

    // 0x1cdb4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdb4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdb4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdb4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdb4a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cdb4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cdb4ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb4b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cdb4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdb4b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdb4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdb4bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cdb4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cdb4c0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1cdb4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1cdb4c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cdb4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb4c8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb4cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cdb4ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb4d0: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB4D0u;
    SET_GPR_U32(ctx, 31, 0x1CDB4D8u);
    ctx->pc = 0x1CDB4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB4D0u;
    // 0x1cdb4d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB4D0u, 0x1CDB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB4D8u;
label_1cdb4d8:
    // 0x1cdb4d8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1cdb4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cdb4dc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1cdb4dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cdb4e0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1cdb4e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cdb4e4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1cdb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1cdb4e8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1cdb4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1cdb4ec: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cdb4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cdb4f0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1cdb4f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cdb4f4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cdb4f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cdb4f8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cdb4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cdb4fc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cdb4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cdb500: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB500u;
    SET_GPR_U32(ctx, 31, 0x1CDB508u);
    ctx->pc = 0x1CDB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB500u;
    // 0x1cdb504: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB500u, 0x1CDB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB508u;
label_1cdb508:
    // 0x1cdb508: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1cdb508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cdb50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdb50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb510: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB510u;
    SET_GPR_U32(ctx, 31, 0x1CDB518u);
    ctx->pc = 0x1CDB514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB510u;
    // 0x1cdb514: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB510u, 0x1CDB518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB518u;
label_1cdb518:
    // 0x1cdb518: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1cdb518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1cdb51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdb51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb520: 0xc736888  jal         func_1CDA220
    ctx->pc = 0x1CDB520u;
    SET_GPR_U32(ctx, 31, 0x1CDB528u);
    ctx->pc = 0x1CDB524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB520u;
    // 0x1cdb524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA220u, 0x1CDB520u, 0x1CDB528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB528u;
label_1cdb528:
    // 0x1cdb528: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1cdb528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb52c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cdb52cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdb530: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1cdb530u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cdb534: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1cdb534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1cdb538: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cdb538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cdb53c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1cdb53cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1cdb540: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1cdb540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb544: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1cdb544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1cdb548: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1cdb548u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1cdb54c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cdb54cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cdb550: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1cdb550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb554: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1cdb554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1cdb558: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1cdb558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1cdb55c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1cdb55cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1cdb560: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1cdb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb564: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1cdb564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1cdb568: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1cdb568u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1cdb56c:
    // 0x1cdb56c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1cdb56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1cdb570: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cdb570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cdb574: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1cdb574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cdb578: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cdb578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cdb57c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1cdb57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1cdb580: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB580u;
    SET_GPR_U32(ctx, 31, 0x1CDB588u);
    ctx->pc = 0x1CDB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB580u;
    // 0x1cdb584: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB580u, 0x1CDB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB588u;
label_1cdb588:
    // 0x1cdb588: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1cdb588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1cdb58c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb590: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB590u;
    SET_GPR_U32(ctx, 31, 0x1CDB598u);
    ctx->pc = 0x1CDB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB590u;
    // 0x1cdb594: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB590u, 0x1CDB598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB598u;
label_1cdb598:
    // 0x1cdb598: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1cdb598u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cdb59c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CDB59Cu;
    {
        const bool branch_taken_0x1cdb59c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB59Cu;
        // 0x1cdb5a0: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb59c) {
            ctx->pc = 0x1CDB56Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb56c;
        }
    }
    ctx->pc = 0x1CDB5A4u;
    // 0x1cdb5a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb5a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb5ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdb5acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb5b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdb5b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdb5b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cdb5b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdb5b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cdb5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cdb5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB5BCu;
        // 0x1cdb5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB5C4u;
    // 0x1cdb5c4: 0x0  nop
    ctx->pc = 0x1cdb5c4u;
    // NOP
    ctx->pc = 0x1cdb5c8u;
}
