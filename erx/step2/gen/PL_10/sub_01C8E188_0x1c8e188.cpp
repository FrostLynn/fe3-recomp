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

// Function: sub_01C8E188
// Address: 0x1c8e188 - 0x1c8e2b0
void sub_01C8E188_0x1c8e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8E188_0x1c8e188");
#endif

    switch (ctx->pc) {
        case 0x1c8e1c0u: goto label_1c8e1c0;
        case 0x1c8e1f0u: goto label_1c8e1f0;
        case 0x1c8e200u: goto label_1c8e200;
        case 0x1c8e210u: goto label_1c8e210;
        case 0x1c8e254u: goto label_1c8e254;
        case 0x1c8e270u: goto label_1c8e270;
        case 0x1c8e280u: goto label_1c8e280;
        default: break;
    }

    ctx->pc = 0x1c8e188u;

    // 0x1c8e188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8e188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c8e18c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8e190: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c8e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c8e194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8e198: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c8e198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8e1a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c8e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c8e1a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c8e1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c8e1a8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c8e1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c8e1ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c8e1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e1b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8e1b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c8e1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e1b8: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8E1B8u;
    SET_GPR_U32(ctx, 31, 0x1C8E1C0u);
    ctx->pc = 0x1C8E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E1B8u;
    // 0x1c8e1bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8E1B8u, 0x1C8E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E1C0u;
label_1c8e1c0:
    // 0x1c8e1c0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c8e1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c8e1c4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c8e1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c8e1c8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c8e1c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c8e1cc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c8e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c8e1d0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c8e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c8e1d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c8e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c8e1d8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c8e1d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c8e1dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c8e1dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c8e1e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c8e1e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c8e1e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c8e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c8e1e8: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8E1E8u;
    SET_GPR_U32(ctx, 31, 0x1C8E1F0u);
    ctx->pc = 0x1C8E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E1E8u;
    // 0x1c8e1ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8E1E8u, 0x1C8E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E1F0u;
label_1c8e1f0:
    // 0x1c8e1f0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c8e1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c8e1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8e1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e1f8: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8E1F8u;
    SET_GPR_U32(ctx, 31, 0x1C8E200u);
    ctx->pc = 0x1C8E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E1F8u;
    // 0x1c8e1fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8E1F8u, 0x1C8E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E200u;
label_1c8e200:
    // 0x1c8e200: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c8e200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c8e204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8e204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e208: 0xc7233c8  jal         func_1C8CF20
    ctx->pc = 0x1C8E208u;
    SET_GPR_U32(ctx, 31, 0x1C8E210u);
    ctx->pc = 0x1C8E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E208u;
    // 0x1c8e20c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF20u, 0x1C8E208u, 0x1C8E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E210u;
label_1c8e210:
    // 0x1c8e210: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c8e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e214: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c8e214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c8e218: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c8e218u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c8e21c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c8e21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c8e220: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c8e220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c8e224: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c8e224u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c8e228: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c8e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e22c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c8e22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c8e230: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c8e230u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c8e234: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c8e234u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c8e238: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c8e238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8e23c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c8e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c8e240: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c8e240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c8e244: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c8e244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c8e248: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c8e248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8e24c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c8e24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c8e250: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c8e250u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c8e254:
    // 0x1c8e254: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c8e254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c8e258: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c8e258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c8e25c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c8e25cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c8e260: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c8e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c8e264: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c8e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c8e268: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8E268u;
    SET_GPR_U32(ctx, 31, 0x1C8E270u);
    ctx->pc = 0x1C8E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E268u;
    // 0x1c8e26c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8E268u, 0x1C8E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E270u;
label_1c8e270:
    // 0x1c8e270: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c8e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c8e274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8e274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e278: 0xc7233c6  jal         func_1C8CF18
    ctx->pc = 0x1C8E278u;
    SET_GPR_U32(ctx, 31, 0x1C8E280u);
    ctx->pc = 0x1C8E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E278u;
    // 0x1c8e27c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF18u, 0x1C8E278u, 0x1C8E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8E280u;
label_1c8e280:
    // 0x1c8e280: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c8e280u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c8e284: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C8E284u;
    {
        const bool branch_taken_0x1c8e284 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E284u;
        // 0x1c8e288: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8e284) {
            ctx->pc = 0x1C8E254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8e254;
        }
    }
    ctx->pc = 0x1C8E28Cu;
    // 0x1c8e28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8e28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8e290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8e290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8e294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8e294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8e298: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c8e298u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8e29c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c8e29cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8e2a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c8e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c8e2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8E2A4u;
        // 0x1c8e2a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8E2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8E2ACu;
    // 0x1c8e2ac: 0x0  nop
    ctx->pc = 0x1c8e2acu;
    // NOP
    ctx->pc = 0x1c8e2b0u;
}
