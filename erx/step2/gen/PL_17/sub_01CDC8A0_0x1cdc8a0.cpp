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

// Function: sub_01CDC8A0
// Address: 0x1cdc8a0 - 0x1cdcbd8
void sub_01CDC8A0_0x1cdc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDC8A0_0x1cdc8a0");
#endif

    switch (ctx->pc) {
        case 0x1cdc8c4u: goto label_1cdc8c4;
        case 0x1cdc8dcu: goto label_1cdc8dc;
        case 0x1cdc8e0u: goto label_1cdc8e0;
        case 0x1cdc900u: goto label_1cdc900;
        case 0x1cdc910u: goto label_1cdc910;
        case 0x1cdc948u: goto label_1cdc948;
        case 0x1cdc94cu: goto label_1cdc94c;
        case 0x1cdc974u: goto label_1cdc974;
        case 0x1cdc9c4u: goto label_1cdc9c4;
        case 0x1cdc9d0u: goto label_1cdc9d0;
        case 0x1cdcaa8u: goto label_1cdcaa8;
        case 0x1cdcaccu: goto label_1cdcacc;
        case 0x1cdcad8u: goto label_1cdcad8;
        case 0x1cdcb20u: goto label_1cdcb20;
        case 0x1cdcb48u: goto label_1cdcb48;
        case 0x1cdcb84u: goto label_1cdcb84;
        case 0x1cdcbacu: goto label_1cdcbac;
        default: break;
    }

    ctx->pc = 0x1cdc8a0u;

    // 0x1cdc8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc8a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc8ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdc8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdc8b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc8b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdc8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdc8b8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdc8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdc8bc: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC8BCu;
    SET_GPR_U32(ctx, 31, 0x1CDC8C4u);
    ctx->pc = 0x1CDC8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC8BCu;
    // 0x1cdc8c0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC8BCu, 0x1CDC8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC8C4u;
label_1cdc8c4:
    // 0x1cdc8c4: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdc8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdc8c8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDC8C8u;
    {
        const bool branch_taken_0x1cdc8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC8C8u;
        // 0x1cdc8cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc8c8) {
            ctx->pc = 0x1CDC918u;
            goto label_1cdc918;
        }
    }
    ctx->pc = 0x1CDC8D0u;
    // 0x1cdc8d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc8d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc8d4: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDC8D4u;
    {
        const bool branch_taken_0x1cdc8d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc8d4) {
            ctx->pc = 0x1CDC8F8u;
            goto label_1cdc8f8;
        }
    }
    ctx->pc = 0x1CDC8DCu;
label_1cdc8dc:
    // 0x1cdc8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdc8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc8e0:
    // 0x1cdc8e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc8e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc8e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc8e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdc8e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc8ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdc8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdc8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC8F0u;
        // 0x1cdc8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC8F8u;
label_1cdc8f8:
    // 0x1cdc8f8: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDC8F8u;
    SET_GPR_U32(ctx, 31, 0x1CDC900u);
    ctx->pc = 0x1CDC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC8F8u;
    // 0x1cdc8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDC8F8u, 0x1CDC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC900u;
label_1cdc900:
    // 0x1cdc900: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC900u;
    {
        const bool branch_taken_0x1cdc900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cdc900) {
            ctx->pc = 0x1CDC904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC900u;
            // 0x1cdc904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc8e0;
        }
    }
    ctx->pc = 0x1CDC908u;
    // 0x1cdc908: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDC908u;
    SET_GPR_U32(ctx, 31, 0x1CDC910u);
    ctx->pc = 0x1CDC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC908u;
    // 0x1cdc90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDC908u, 0x1CDC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC910u;
label_1cdc910:
    // 0x1cdc910: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CDC910u;
    {
        const bool branch_taken_0x1cdc910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC910u;
        // 0x1cdc914: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc910) {
            ctx->pc = 0x1CDC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc8e0;
        }
    }
    ctx->pc = 0x1CDC918u;
label_1cdc918:
    // 0x1cdc918: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1cdc918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdc91c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc91cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc920: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cdc920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc924: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1cdc924u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cdc928: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cdc928u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc92c: 0x11cf0042  beq         $t6, $t7, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CDC92Cu;
    {
        const bool branch_taken_0x1cdc92c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC92Cu;
        // 0x1cdc930: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc92c) {
            ctx->pc = 0x1CDCA38u;
            goto label_1cdca38;
        }
    }
    ctx->pc = 0x1CDC934u;
    // 0x1cdc934: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cdc934u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cdc938: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CDC938u;
    {
        const bool branch_taken_0x1cdc938 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC938u;
        // 0x1cdc93c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc938) {
            ctx->pc = 0x1CDC9E4u;
            goto label_1cdc9e4;
        }
    }
    ctx->pc = 0x1CDC940u;
    // 0x1cdc940: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x1CDC940u;
    {
        const bool branch_taken_0x1cdc940 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC940u;
        // 0x1cdc944: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc940) {
            ctx->pc = 0x1CDC980u;
            goto label_1cdc980;
        }
    }
    ctx->pc = 0x1CDC948u;
label_1cdc948:
    // 0x1cdc948: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1cdc948u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1cdc94c:
    // 0x1cdc94c: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDC94Cu;
    {
        const bool branch_taken_0x1cdc94c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC94Cu;
        // 0x1cdc950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc94c) {
            ctx->pc = 0x1CDC8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc8e0;
        }
    }
    ctx->pc = 0x1CDC954u;
    // 0x1cdc954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc95c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1cdc95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1cdc960: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc964: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc968: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc96c: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC96Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC974u);
    ctx->pc = 0x1CDC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC96Cu;
    // 0x1cdc970: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC96Cu, 0x1CDC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC974u;
label_1cdc974:
    // 0x1cdc974: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc974u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc978: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1CDC978u;
    {
        const bool branch_taken_0x1cdc978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC978u;
        // 0x1cdc97c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc978) {
            ctx->pc = 0x1CDC8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc8dc;
        }
    }
    ctx->pc = 0x1CDC980u;
label_1cdc980:
    // 0x1cdc980: 0x25eff3f0  addiu       $t7, $t7, -0xC10
    ctx->pc = 0x1cdc980u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964208));
    // 0x1cdc984: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc988: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdc988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc98c: 0x4500ffee  bc1f        . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CDC98Cu;
    {
        const bool branch_taken_0x1cdc98c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC98Cu;
        // 0x1cdc990: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc98c) {
            ctx->pc = 0x1CDC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc948;
        }
    }
    ctx->pc = 0x1CDC994u;
    // 0x1cdc994: 0x25eff3f4  addiu       $t7, $t7, -0xC0C
    ctx->pc = 0x1cdc994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964212));
    // 0x1cdc998: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc99c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cdc99cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc9a0: 0x4503ffea  bc1tl       . + 4 + (-0x16 << 2)
    ctx->pc = 0x1CDC9A0u;
    {
        const bool branch_taken_0x1cdc9a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdc9a0) {
            ctx->pc = 0x1CDC9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC9A0u;
            // 0x1cdc9a4: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc94c;
        }
    }
    ctx->pc = 0x1CDC9A8u;
    // 0x1cdc9a8: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc9a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc9ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cdc9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cdc9b0: 0x25eff3f8  addiu       $t7, $t7, -0xC08
    ctx->pc = 0x1cdc9b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964216));
    // 0x1cdc9b4: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdc9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdc9b8: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc9b8u;
    { uint32_t bits = FAST_READ32(0x1CEF3F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdc9bc: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc9bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc9c0: 0x25eff3fc  addiu       $t7, $t7, -0xC04
    ctx->pc = 0x1cdc9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964220));
label_1cdc9c4:
    // 0x1cdc9c4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cdc9c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdc9c8: 0xc736b2c  jal         func_1CDACB0
    ctx->pc = 0x1CDC9C8u;
    SET_GPR_U32(ctx, 31, 0x1CDC9D0u);
    ctx->pc = 0x1CDC9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC9C8u;
    // 0x1cdc9cc: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDACB0u, 0x1CDC9C8u, 0x1CDC9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC9D0u;
label_1cdc9d0:
    // 0x1cdc9d0: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc9d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc9d4: 0x25eff400  addiu       $t7, $t7, -0xC00
    ctx->pc = 0x1cdc9d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964224));
    // 0x1cdc9d8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc9d8u;
    { uint32_t bits = FAST_READ32(0x1CEF400u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc9dc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CDC9DCu;
    {
        const bool branch_taken_0x1cdc9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC9DCu;
        // 0x1cdc9e0: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc9dc) {
            ctx->pc = 0x1CDC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc948;
        }
    }
    ctx->pc = 0x1CDC9E4u;
label_1cdc9e4:
    // 0x1cdc9e4: 0x55cfffd9  bnel        $t6, $t7, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1CDC9E4u;
    {
        const bool branch_taken_0x1cdc9e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc9e4) {
            ctx->pc = 0x1CDC9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDC9E4u;
            // 0x1cdc9e8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc94c;
        }
    }
    ctx->pc = 0x1CDC9ECu;
    // 0x1cdc9ec: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc9f0: 0x25eff3f0  addiu       $t7, $t7, -0xC10
    ctx->pc = 0x1cdc9f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964208));
    // 0x1cdc9f4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdc9f4u;
    { uint32_t bits = FAST_READ32(0x1CEF3F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdc9f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdc9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc9fc: 0x4500ffd2  bc1f        . + 4 + (-0x2E << 2)
    ctx->pc = 0x1CDC9FCu;
    {
        const bool branch_taken_0x1cdc9fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC9FCu;
        // 0x1cdca00: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc9fc) {
            ctx->pc = 0x1CDC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc948;
        }
    }
    ctx->pc = 0x1CDCA04u;
    // 0x1cdca04: 0x25eff3f4  addiu       $t7, $t7, -0xC0C
    ctx->pc = 0x1cdca04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964212));
    // 0x1cdca08: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdca0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cdca0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdca10: 0x4503ffce  bc1tl       . + 4 + (-0x32 << 2)
    ctx->pc = 0x1CDCA10u;
    {
        const bool branch_taken_0x1cdca10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdca10) {
            ctx->pc = 0x1CDCA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDCA10u;
            // 0x1cdca14: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc94c;
        }
    }
    ctx->pc = 0x1CDCA18u;
    // 0x1cdca18: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdca18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdca1c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cdca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cdca20: 0x25eff404  addiu       $t7, $t7, -0xBFC
    ctx->pc = 0x1cdca20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964228));
    // 0x1cdca24: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdca24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdca28: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdca28u;
    { uint32_t bits = FAST_READ32(0x1CEF404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdca2c: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdca2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdca30: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDCA30u;
    {
        const bool branch_taken_0x1cdca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA30u;
        // 0x1cdca34: 0x25eff40c  addiu       $t7, $t7, -0xBF4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdca30) {
            ctx->pc = 0x1CDC9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc9c4;
        }
    }
    ctx->pc = 0x1CDCA38u;
label_1cdca38:
    // 0x1cdca38: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdca38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdca3c: 0x25eff3f0  addiu       $t7, $t7, -0xC10
    ctx->pc = 0x1cdca3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964208));
    // 0x1cdca40: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdca40u;
    { uint32_t bits = FAST_READ32(0x1CEF3F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdca44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cdca44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdca48: 0x4500ffbf  bc1f        . + 4 + (-0x41 << 2)
    ctx->pc = 0x1CDCA48u;
    {
        const bool branch_taken_0x1cdca48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA48u;
        // 0x1cdca4c: 0x3c0f01cf  lui         $t7, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdca48) {
            ctx->pc = 0x1CDC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc948;
        }
    }
    ctx->pc = 0x1CDCA50u;
    // 0x1cdca50: 0x25eff3f4  addiu       $t7, $t7, -0xC0C
    ctx->pc = 0x1cdca50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964212));
    // 0x1cdca54: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cdca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdca58: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cdca58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdca5c: 0x4503ffbb  bc1tl       . + 4 + (-0x45 << 2)
    ctx->pc = 0x1CDCA5Cu;
    {
        const bool branch_taken_0x1cdca5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cdca5c) {
            ctx->pc = 0x1CDCA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDCA5Cu;
            // 0x1cdca60: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDC94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc94c;
        }
    }
    ctx->pc = 0x1CDCA64u;
    // 0x1cdca64: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdca64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdca68: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cdca68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cdca6c: 0x25eff404  addiu       $t7, $t7, -0xBFC
    ctx->pc = 0x1cdca6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964228));
    // 0x1cdca70: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdca74: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdca74u;
    { uint32_t bits = FAST_READ32(0x1CEF404u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdca78: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdca78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdca7c: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x1CDCA7Cu;
    {
        const bool branch_taken_0x1cdca7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCA7Cu;
        // 0x1cdca80: 0x25eff408  addiu       $t7, $t7, -0xBF8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdca7c) {
            ctx->pc = 0x1CDC9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc9c4;
        }
    }
    ctx->pc = 0x1CDCA84u;
    // 0x1cdca84: 0x0  nop
    ctx->pc = 0x1cdca84u;
    // NOP
    // 0x1cdca88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdca8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdca90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdca94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdca98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdca9c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdcaa0: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCAA0u;
    SET_GPR_U32(ctx, 31, 0x1CDCAA8u);
    ctx->pc = 0x1CDCAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCAA0u;
    // 0x1cdcaa4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCAA0u, 0x1CDCAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCAA8u;
label_1cdcaa8:
    // 0x1cdcaa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdcaa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcab0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdcab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdcab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdcab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcab8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdcab8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcabc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdcabcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdcac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcac4: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDCAC4u;
    SET_GPR_U32(ctx, 31, 0x1CDCACCu);
    ctx->pc = 0x1CDCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCAC4u;
    // 0x1cdcac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDCAC4u, 0x1CDCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCACCu;
label_1cdcacc:
    // 0x1cdcacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcad0: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDCAD0u;
    SET_GPR_U32(ctx, 31, 0x1CDCAD8u);
    ctx->pc = 0x1CDCAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCAD0u;
    // 0x1cdcad4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDCAD0u, 0x1CDCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCAD8u;
label_1cdcad8:
    // 0x1cdcad8: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcad8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcadc: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1cdcadcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cdcae0: 0x25eff410  addiu       $t7, $t7, -0xBF0
    ctx->pc = 0x1cdcae0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964240));
    // 0x1cdcae4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cdcae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cdcae8: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdcae8u;
    { uint32_t bits = FAST_READ32(0x1CEF410u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdcaec: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdcaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdcaf0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cdcaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cdcaf4: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcaf4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcaf8: 0x25eff414  addiu       $t7, $t7, -0xBEC
    ctx->pc = 0x1cdcaf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964244));
    // 0x1cdcafc: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cdcafcu;
    { uint32_t bits = FAST_READ32(0x1CEF414u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cdcb00: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdcb00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcb04: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CDCB04u;
    {
        const bool branch_taken_0x1cdcb04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB04u;
        // 0x1cdcb08: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcb04) {
            ctx->pc = 0x1CDCB8Cu;
            goto label_1cdcb8c;
        }
    }
    ctx->pc = 0x1CDCB0Cu;
    // 0x1cdcb0c: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CDCB0Cu;
    {
        const bool branch_taken_0x1cdcb0c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcb0c) {
            ctx->pc = 0x1CDCB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDCB0Cu;
            // 0x1cdcb10: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDCB5Cu;
            goto label_1cdcb5c;
        }
    }
    ctx->pc = 0x1CDCB14u;
    // 0x1cdcb14: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDCB14u;
    {
        const bool branch_taken_0x1cdcb14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcb14) {
            ctx->pc = 0x1CDCB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDCB14u;
            // 0x1cdcb18: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDCB30u;
            goto label_1cdcb30;
        }
    }
    ctx->pc = 0x1CDCB1Cu;
    // 0x1cdcb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cdcb20:
    // 0x1cdcb20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdcb20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcb24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdcb24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdcb28: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB28u;
        // 0x1cdcb2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCB30u;
label_1cdcb30:
    // 0x1cdcb30: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcb30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcb34: 0x25eff410  addiu       $t7, $t7, -0xBF0
    ctx->pc = 0x1cdcb34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964240));
    // 0x1cdcb38: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdcb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdcb3c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cdcb3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdcb40: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1cdcb40u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1cdcb44: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdcb44u;
    { uint32_t bits = FAST_READ32(0x1CEF410u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cdcb48:
    // 0x1cdcb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcb4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdcb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdcb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdcb54: 0x8736b2c  j           func_1CDACB0
    ctx->pc = 0x1CDCB54u;
    ctx->pc = 0x1CDCB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCB54u;
    // 0x1cdcb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    sub_01CDACB0_0x1cdacb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCB5Cu;
label_1cdcb5c:
    // 0x1cdcb5c: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDCB5Cu;
    {
        const bool branch_taken_0x1cdcb5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cdcb5c) {
            ctx->pc = 0x1CDCB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CDCB5Cu;
            // 0x1cdcb60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CDCB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcb20;
        }
    }
    ctx->pc = 0x1CDCB64u;
    // 0x1cdcb64: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcb64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcb68: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1cdcb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdcb6c: 0x25eff410  addiu       $t7, $t7, -0xBF0
    ctx->pc = 0x1cdcb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964240));
    // 0x1cdcb70: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cdcb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cdcb74: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdcb74u;
    { uint32_t bits = FAST_READ32(0x1CEF410u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdcb78: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcb78u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcb7c: 0x25eff418  addiu       $t7, $t7, -0xBE8
    ctx->pc = 0x1cdcb7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964248));
    // 0x1cdcb80: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cdcb80u;
    { uint32_t bits = FAST_READ32(0x1CEF418u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cdcb84:
    // 0x1cdcb84: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDCB84u;
    {
        const bool branch_taken_0x1cdcb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB84u;
        // 0x1cdcb88: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcb84) {
            ctx->pc = 0x1CDCB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcb48;
        }
    }
    ctx->pc = 0x1CDCB8Cu;
label_1cdcb8c:
    // 0x1cdcb8c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1CDCB8Cu;
    {
        const bool branch_taken_0x1cdcb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCB8Cu;
        // 0x1cdcb90: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcb8c) {
            ctx->pc = 0x1CDCB84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdcb84;
        }
    }
    ctx->pc = 0x1CDCB94u;
    // 0x1cdcb94: 0x0  nop
    ctx->pc = 0x1cdcb94u;
    // NOP
    // 0x1cdcb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcb9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdcb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdcba0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdcba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdcba4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCBA4u;
    SET_GPR_U32(ctx, 31, 0x1CDCBACu);
    ctx->pc = 0x1CDCBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCBA4u;
    // 0x1cdcba8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCBA4u, 0x1CDCBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCBACu;
label_1cdcbac:
    // 0x1cdcbac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdcbacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdcbb0: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdcbb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdcbb4: 0x25eff41c  addiu       $t7, $t7, -0xBE4
    ctx->pc = 0x1cdcbb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964252));
    // 0x1cdcbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcbbc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cdcbbcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1cdcbc0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cdcbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cdcbc4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cdcbc4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cdcbc8: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1cdcbc8u;
    { uint32_t bits = FAST_READ32(0x1CEF41Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdcbcc: 0x8736b2c  j           func_1CDACB0
    ctx->pc = 0x1CDCBCCu;
    ctx->pc = 0x1CDCBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCBCCu;
    // 0x1cdcbd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    sub_01CDACB0_0x1cdacb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCBD4u;
    // 0x1cdcbd4: 0x0  nop
    ctx->pc = 0x1cdcbd4u;
    // NOP
    ctx->pc = 0x1cdcbd8u;
}
