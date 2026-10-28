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

// Function: sub_01D290C8
// Address: 0x1d290c8 - 0x1d29408
void sub_01D290C8_0x1d290c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D290C8_0x1d290c8");
#endif

    switch (ctx->pc) {
        case 0x1d290ecu: goto label_1d290ec;
        case 0x1d29104u: goto label_1d29104;
        case 0x1d29108u: goto label_1d29108;
        case 0x1d29128u: goto label_1d29128;
        case 0x1d29138u: goto label_1d29138;
        case 0x1d29170u: goto label_1d29170;
        case 0x1d29174u: goto label_1d29174;
        case 0x1d291b0u: goto label_1d291b0;
        case 0x1d29204u: goto label_1d29204;
        case 0x1d29210u: goto label_1d29210;
        case 0x1d29298u: goto label_1d29298;
        case 0x1d292bcu: goto label_1d292bc;
        case 0x1d292c8u: goto label_1d292c8;
        case 0x1d29310u: goto label_1d29310;
        case 0x1d29318u: goto label_1d29318;
        case 0x1d29330u: goto label_1d29330;
        case 0x1d29360u: goto label_1d29360;
        case 0x1d29368u: goto label_1d29368;
        case 0x1d29398u: goto label_1d29398;
        case 0x1d293c4u: goto label_1d293c4;
        case 0x1d293e4u: goto label_1d293e4;
        case 0x1d293f0u: goto label_1d293f0;
        default: break;
    }

    ctx->pc = 0x1d290c8u;

    // 0x1d290c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d290c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d290cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d290ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d290d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d290d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d290d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d290d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d290d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d290d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d290dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d290dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d290e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d290e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d290e4: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D290E4u;
    SET_GPR_U32(ctx, 31, 0x1D290ECu);
    ctx->pc = 0x1D290E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D290E4u;
    // 0x1d290e8: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D290E4u, 0x1D290ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D290ECu;
label_1d290ec:
    // 0x1d290ec: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d290ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d290f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D290F0u;
    {
        const bool branch_taken_0x1d290f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D290F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D290F0u;
        // 0x1d290f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d290f0) {
            ctx->pc = 0x1D29140u;
            goto label_1d29140;
        }
    }
    ctx->pc = 0x1D290F8u;
    // 0x1d290f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d290f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d290fc: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D290FCu;
    {
        const bool branch_taken_0x1d290fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d290fc) {
            ctx->pc = 0x1D29120u;
            goto label_1d29120;
        }
    }
    ctx->pc = 0x1D29104u;
label_1d29104:
    // 0x1d29104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d29104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d29108:
    // 0x1d29108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2910c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d2910cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29110: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d29110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d29114: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d29114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d29118: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29118u;
        // 0x1d2911c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29120u;
label_1d29120:
    // 0x1d29120: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D29120u;
    SET_GPR_U32(ctx, 31, 0x1D29128u);
    ctx->pc = 0x1D29124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29120u;
    // 0x1d29124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D29120u, 0x1D29128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29128u;
label_1d29128:
    // 0x1d29128: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D29128u;
    {
        const bool branch_taken_0x1d29128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d29128) {
            ctx->pc = 0x1D2912Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29128u;
            // 0x1d2912c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29108;
        }
    }
    ctx->pc = 0x1D29130u;
    // 0x1d29130: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D29130u;
    SET_GPR_U32(ctx, 31, 0x1D29138u);
    ctx->pc = 0x1D29134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29130u;
    // 0x1d29134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D29130u, 0x1D29138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29138u;
label_1d29138:
    // 0x1d29138: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D29138u;
    {
        const bool branch_taken_0x1d29138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29138u;
        // 0x1d2913c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29138) {
            ctx->pc = 0x1D29108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29108;
        }
    }
    ctx->pc = 0x1D29140u;
label_1d29140:
    // 0x1d29140: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d29140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d29144: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d29144u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29148: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d29148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2914c: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1d2914cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d29150: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d29150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d29154: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D29154u;
    {
        const bool branch_taken_0x1d29154 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D29158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29154u;
        // 0x1d29158: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29154) {
            ctx->pc = 0x1D291BCu;
            goto label_1d291bc;
        }
    }
    ctx->pc = 0x1D2915Cu;
    // 0x1d2915c: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1d2915cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d29160: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D29160u;
    {
        const bool branch_taken_0x1d29160 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29160u;
        // 0x1d29164: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29160) {
            ctx->pc = 0x1D29224u;
            goto label_1d29224;
        }
    }
    ctx->pc = 0x1D29168u;
    // 0x1d29168: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D29168u;
    {
        const bool branch_taken_0x1d29168 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29168u;
        // 0x1d2916c: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29168) {
            ctx->pc = 0x1D291C0u;
            goto label_1d291c0;
        }
    }
    ctx->pc = 0x1D29170u;
label_1d29170:
    // 0x1d29170: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1d29170u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1d29174:
    // 0x1d29174: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D29174u;
    {
        const bool branch_taken_0x1d29174 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D29178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29174u;
        // 0x1d29178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29174) {
            ctx->pc = 0x1D29108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29108;
        }
    }
    ctx->pc = 0x1D2917Cu;
    // 0x1d2917c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d2917cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d29180: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d29180u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d29184: 0x25ced150  addiu       $t6, $t6, -0x2EB0
    ctx->pc = 0x1d29184u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955344));
    // 0x1d29188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d29188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2918c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d2918cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d29190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d29190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29194: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d29194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d29198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d29198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2919c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d2919cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d291a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d291a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d291a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d291a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d291a8: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D291A8u;
    SET_GPR_U32(ctx, 31, 0x1D291B0u);
    ctx->pc = 0x1D291ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D291A8u;
    // 0x1d291ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D291A8u, 0x1D291B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D291B0u;
label_1d291b0:
    // 0x1d291b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d291b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d291b4: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D291B4u;
    {
        const bool branch_taken_0x1d291b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D291B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D291B4u;
        // 0x1d291b8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d291b4) {
            ctx->pc = 0x1D29104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29104;
        }
    }
    ctx->pc = 0x1D291BCu;
label_1d291bc:
    // 0x1d291bc: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d291bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
label_1d291c0:
    // 0x1d291c0: 0x25ef33ac  addiu       $t7, $t7, 0x33AC
    ctx->pc = 0x1d291c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13228));
    // 0x1d291c4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d291c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d291c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d291c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d291cc: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D291CCu;
    {
        const bool branch_taken_0x1d291cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D291D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D291CCu;
        // 0x1d291d0: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d291cc) {
            ctx->pc = 0x1D29170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29170;
        }
    }
    ctx->pc = 0x1D291D4u;
    // 0x1d291d4: 0x25ef33b0  addiu       $t7, $t7, 0x33B0
    ctx->pc = 0x1d291d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13232));
    // 0x1d291d8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d291d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d291dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d291dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d291e0: 0x4503ffe4  bc1tl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D291E0u;
    {
        const bool branch_taken_0x1d291e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d291e0) {
            ctx->pc = 0x1D291E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D291E0u;
            // 0x1d291e4: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29174;
        }
    }
    ctx->pc = 0x1D291E8u;
    // 0x1d291e8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d291e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d291ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d291ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d291f0: 0x25ef33b4  addiu       $t7, $t7, 0x33B4
    ctx->pc = 0x1d291f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13236));
    // 0x1d291f4: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1d291f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1d291f8: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d291f8u;
    { uint32_t bits = FAST_READ32(0x1D333B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d291fc: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d291fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29200: 0x25ef33b8  addiu       $t7, $t7, 0x33B8
    ctx->pc = 0x1d29200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13240));
label_1d29204:
    // 0x1d29204: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d29204u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d29208: 0xc749db0  jal         func_1D276C0
    ctx->pc = 0x1D29208u;
    SET_GPR_U32(ctx, 31, 0x1D29210u);
    ctx->pc = 0x1D2920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29208u;
    // 0x1d2920c: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276C0u, 0x1D29208u, 0x1D29210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29210u;
label_1d29210:
    // 0x1d29210: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29210u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29214: 0x25ef33bc  addiu       $t7, $t7, 0x33BC
    ctx->pc = 0x1d29214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13244));
    // 0x1d29218: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d29218u;
    { uint32_t bits = FAST_READ32(0x1D333BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2921c: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D2921Cu;
    {
        const bool branch_taken_0x1d2921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2921Cu;
        // 0x1d29220: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2921c) {
            ctx->pc = 0x1D29170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29170;
        }
    }
    ctx->pc = 0x1D29224u;
label_1d29224:
    // 0x1d29224: 0x55cfffd3  bnel        $t6, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D29224u;
    {
        const bool branch_taken_0x1d29224 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d29224) {
            ctx->pc = 0x1D29228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29224u;
            // 0x1d29228: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29174;
        }
    }
    ctx->pc = 0x1D2922Cu;
    // 0x1d2922c: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d2922cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29230: 0x25ef33ac  addiu       $t7, $t7, 0x33AC
    ctx->pc = 0x1d29230u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13228));
    // 0x1d29234: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d29234u;
    { uint32_t bits = FAST_READ32(0x1D333ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d29238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d29238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d2923c: 0x4500ffcc  bc1f        . + 4 + (-0x34 << 2)
    ctx->pc = 0x1D2923Cu;
    {
        const bool branch_taken_0x1d2923c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D29240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2923Cu;
        // 0x1d29240: 0x3c0f01d3  lui         $t7, 0x1D3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2923c) {
            ctx->pc = 0x1D29170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29170;
        }
    }
    ctx->pc = 0x1D29244u;
    // 0x1d29244: 0x25ef33b0  addiu       $t7, $t7, 0x33B0
    ctx->pc = 0x1d29244u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13232));
    // 0x1d29248: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d29248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2924c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d2924cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d29250: 0x4503ffc8  bc1tl       . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D29250u;
    {
        const bool branch_taken_0x1d29250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d29250) {
            ctx->pc = 0x1D29254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29250u;
            // 0x1d29254: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29174;
        }
    }
    ctx->pc = 0x1D29258u;
    // 0x1d29258: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29258u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d2925c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d2925cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d29260: 0x25ef33b4  addiu       $t7, $t7, 0x33B4
    ctx->pc = 0x1d29260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13236));
    // 0x1d29264: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d29264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d29268: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d29268u;
    { uint32_t bits = FAST_READ32(0x1D333B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d2926c: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d2926cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29270: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D29270u;
    {
        const bool branch_taken_0x1d29270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29270u;
        // 0x1d29274: 0x25ef33c0  addiu       $t7, $t7, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29270) {
            ctx->pc = 0x1D29204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29204;
        }
    }
    ctx->pc = 0x1D29278u;
    // 0x1d29278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d29278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2927c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d29280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d29280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d29284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d29288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d29288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2928c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d2928cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29290: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29290u;
    SET_GPR_U32(ctx, 31, 0x1D29298u);
    ctx->pc = 0x1D29294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29290u;
    // 0x1d29294: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29290u, 0x1D29298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29298u;
label_1d29298:
    // 0x1d29298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d29298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2929c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d292a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d292a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d292a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d292a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d292acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d292b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d292b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292b4: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D292B4u;
    SET_GPR_U32(ctx, 31, 0x1D292BCu);
    ctx->pc = 0x1D292B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D292B4u;
    // 0x1d292b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D292B4u, 0x1D292BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D292BCu;
label_1d292bc:
    // 0x1d292bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d292bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d292c0: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D292C0u;
    SET_GPR_U32(ctx, 31, 0x1D292C8u);
    ctx->pc = 0x1D292C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D292C0u;
    // 0x1d292c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D292C0u, 0x1D292C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D292C8u;
label_1d292c8:
    // 0x1d292c8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d292c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d292cc: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1d292ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d292d0: 0x25ef33c4  addiu       $t7, $t7, 0x33C4
    ctx->pc = 0x1d292d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13252));
    // 0x1d292d4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d292d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d292d8: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d292d8u;
    { uint32_t bits = FAST_READ32(0x1D333C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d292dc: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d292dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d292e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d292e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d292e4: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d292e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d292e8: 0x25ef33c8  addiu       $t7, $t7, 0x33C8
    ctx->pc = 0x1d292e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13256));
    // 0x1d292ec: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d292ecu;
    { uint32_t bits = FAST_READ32(0x1D333C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d292f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d292f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d292f4: 0x11cf002a  beq         $t6, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D292F4u;
    {
        const bool branch_taken_0x1d292f4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D292F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D292F4u;
        // 0x1d292f8: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d292f4) {
            ctx->pc = 0x1D293A0u;
            goto label_1d293a0;
        }
    }
    ctx->pc = 0x1D292FCu;
    // 0x1d292fc: 0x11a0001c  beqz        $t5, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D292FCu;
    {
        const bool branch_taken_0x1d292fc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D292FCu;
        // 0x1d29300: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d292fc) {
            ctx->pc = 0x1D29370u;
            goto label_1d29370;
        }
    }
    ctx->pc = 0x1D29304u;
    // 0x1d29304: 0x51c00010  beql        $t6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D29304u;
    {
        const bool branch_taken_0x1d29304 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29304) {
            ctx->pc = 0x1D29308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29304u;
            // 0x1d29308: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29348u;
            goto label_1d29348;
        }
    }
    ctx->pc = 0x1D2930Cu;
    // 0x1d2930c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d2930cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1d29310:
    // 0x1d29310: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29310u;
    SET_GPR_U32(ctx, 31, 0x1D29318u);
    ctx->pc = 0x1D29314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29310u;
    // 0x1d29314: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29310u, 0x1D29318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29318u;
label_1d29318:
    // 0x1d29318: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d29318u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2931c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d2931cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d29320: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d29320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d29324: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d29324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d29328: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29328u;
    SET_GPR_U32(ctx, 31, 0x1D29330u);
    ctx->pc = 0x1D2932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29328u;
    // 0x1d2932c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29328u, 0x1D29330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29330u;
label_1d29330:
    // 0x1d29330: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d29330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d29334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d29338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2933c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d29340: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29340u;
        // 0x1d29344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29348u;
label_1d29348:
    // 0x1d29348: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29348u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d2934c: 0x25ef33c4  addiu       $t7, $t7, 0x33C4
    ctx->pc = 0x1d2934cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13252));
    // 0x1d29350: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d29350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d29354: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d29354u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d29358: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1d29358u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1d2935c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d2935cu;
    { uint32_t bits = FAST_READ32(0x1D333C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d29360:
    // 0x1d29360: 0xc749db0  jal         func_1D276C0
    ctx->pc = 0x1D29360u;
    SET_GPR_U32(ctx, 31, 0x1D29368u);
    ctx->pc = 0x1D276C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276C0u, 0x1D29360u, 0x1D29368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29368u;
label_1d29368:
    // 0x1d29368: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D29368u;
    {
        const bool branch_taken_0x1d29368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29368u;
        // 0x1d2936c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29368) {
            ctx->pc = 0x1D29310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29310;
        }
    }
    ctx->pc = 0x1D29370u;
label_1d29370:
    // 0x1d29370: 0x55cfffe7  bnel        $t6, $t7, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D29370u;
    {
        const bool branch_taken_0x1d29370 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d29370) {
            ctx->pc = 0x1D29374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29370u;
            // 0x1d29374: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29310;
        }
    }
    ctx->pc = 0x1D29378u;
    // 0x1d29378: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29378u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d2937c: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1d2937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d29380: 0x25ef33c4  addiu       $t7, $t7, 0x33C4
    ctx->pc = 0x1d29380u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13252));
    // 0x1d29384: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d29384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d29388: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d29388u;
    { uint32_t bits = FAST_READ32(0x1D333C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d2938c: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d2938cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29390: 0x25ef33cc  addiu       $t7, $t7, 0x33CC
    ctx->pc = 0x1d29390u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13260));
    // 0x1d29394: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d29394u;
    { uint32_t bits = FAST_READ32(0x1D333CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1d29398:
    // 0x1d29398: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1D29398u;
    {
        const bool branch_taken_0x1d29398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29398u;
        // 0x1d2939c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29398) {
            ctx->pc = 0x1D29360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29360;
        }
    }
    ctx->pc = 0x1D293A0u;
label_1d293a0:
    // 0x1d293a0: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1D293A0u;
    {
        const bool branch_taken_0x1d293a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D293A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D293A0u;
        // 0x1d293a4: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d293a0) {
            ctx->pc = 0x1D29398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29398;
        }
    }
    ctx->pc = 0x1D293A8u;
    // 0x1d293a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d293a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d293ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d293acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d293b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d293b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d293b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d293b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d293b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d293b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d293bc: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D293BCu;
    SET_GPR_U32(ctx, 31, 0x1D293C4u);
    ctx->pc = 0x1D293C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D293BCu;
    // 0x1d293c0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D293BCu, 0x1D293C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D293C4u;
label_1d293c4:
    // 0x1d293c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d293c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d293c8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d293c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d293cc: 0x25ef33d0  addiu       $t7, $t7, 0x33D0
    ctx->pc = 0x1d293ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13264));
    // 0x1d293d0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d293d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d293d4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d293d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d293d8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d293d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d293dc: 0xc749db0  jal         func_1D276C0
    ctx->pc = 0x1D293DCu;
    SET_GPR_U32(ctx, 31, 0x1D293E4u);
    ctx->pc = 0x1D293E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D293DCu;
    // 0x1d293e0: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276C0u, 0x1D293DCu, 0x1D293E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D293E4u;
label_1d293e4:
    // 0x1d293e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d293e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d293e8: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D293E8u;
    SET_GPR_U32(ctx, 31, 0x1D293F0u);
    ctx->pc = 0x1D293ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D293E8u;
    // 0x1d293ec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D293E8u, 0x1D293F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D293F0u;
label_1d293f0:
    // 0x1d293f0: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1d293f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1d293f4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d293f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d293f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d293f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d293fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d293fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29400: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29400u;
        // 0x1d29404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29408u;
}
