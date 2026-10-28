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

// Function: sub_01D0E1E8
// Address: 0x1d0e1e8 - 0x1d0e4e8
void sub_01D0E1E8_0x1d0e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E1E8_0x1d0e1e8");
#endif

    switch (ctx->pc) {
        case 0x1d0e20cu: goto label_1d0e20c;
        case 0x1d0e224u: goto label_1d0e224;
        case 0x1d0e228u: goto label_1d0e228;
        case 0x1d0e248u: goto label_1d0e248;
        case 0x1d0e258u: goto label_1d0e258;
        case 0x1d0e290u: goto label_1d0e290;
        case 0x1d0e294u: goto label_1d0e294;
        case 0x1d0e2d0u: goto label_1d0e2d0;
        case 0x1d0e324u: goto label_1d0e324;
        case 0x1d0e330u: goto label_1d0e330;
        case 0x1d0e3b8u: goto label_1d0e3b8;
        case 0x1d0e3dcu: goto label_1d0e3dc;
        case 0x1d0e3e8u: goto label_1d0e3e8;
        case 0x1d0e430u: goto label_1d0e430;
        case 0x1d0e458u: goto label_1d0e458;
        case 0x1d0e494u: goto label_1d0e494;
        case 0x1d0e4bcu: goto label_1d0e4bc;
        default: break;
    }

    ctx->pc = 0x1d0e1e8u;

    // 0x1d0e1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0e1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e1f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0e1f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0e1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e1fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0e200: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0e200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0e204: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E204u;
    SET_GPR_U32(ctx, 31, 0x1D0E20Cu);
    ctx->pc = 0x1D0E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E204u;
    // 0x1d0e208: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E204u, 0x1D0E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E20Cu;
label_1d0e20c:
    // 0x1d0e20c: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d0e20cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0e210: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0E210u;
    {
        const bool branch_taken_0x1d0e210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E210u;
        // 0x1d0e214: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e210) {
            ctx->pc = 0x1D0E260u;
            goto label_1d0e260;
        }
    }
    ctx->pc = 0x1D0E218u;
    // 0x1d0e218: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e21c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E21Cu;
    {
        const bool branch_taken_0x1d0e21c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d0e21c) {
            ctx->pc = 0x1D0E240u;
            goto label_1d0e240;
        }
    }
    ctx->pc = 0x1D0E224u;
label_1d0e224:
    // 0x1d0e224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0e224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e228:
    // 0x1d0e228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e22c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0e22cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e230: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0e230u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e234: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0e234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0e238: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E238u;
        // 0x1d0e23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E240u;
label_1d0e240:
    // 0x1d0e240: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0E240u;
    SET_GPR_U32(ctx, 31, 0x1D0E248u);
    ctx->pc = 0x1D0E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E240u;
    // 0x1d0e244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0E240u, 0x1D0E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E248u;
label_1d0e248:
    // 0x1d0e248: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0E248u;
    {
        const bool branch_taken_0x1d0e248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d0e248) {
            ctx->pc = 0x1D0E24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E248u;
            // 0x1d0e24c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e228;
        }
    }
    ctx->pc = 0x1D0E250u;
    // 0x1d0e250: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0E250u;
    SET_GPR_U32(ctx, 31, 0x1D0E258u);
    ctx->pc = 0x1D0E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E250u;
    // 0x1d0e254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0E250u, 0x1D0E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E258u;
label_1d0e258:
    // 0x1d0e258: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D0E258u;
    {
        const bool branch_taken_0x1d0e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E258u;
        // 0x1d0e25c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e258) {
            ctx->pc = 0x1D0E228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e228;
        }
    }
    ctx->pc = 0x1D0E260u;
label_1d0e260:
    // 0x1d0e260: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d0e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0e264: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e268: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d0e268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e26c: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1d0e26cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d0e270: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d0e270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d0e274: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0E274u;
    {
        const bool branch_taken_0x1d0e274 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D0E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E274u;
        // 0x1d0e278: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e274) {
            ctx->pc = 0x1D0E2DCu;
            goto label_1d0e2dc;
        }
    }
    ctx->pc = 0x1D0E27Cu;
    // 0x1d0e27c: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1d0e27cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d0e280: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D0E280u;
    {
        const bool branch_taken_0x1d0e280 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E280u;
        // 0x1d0e284: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e280) {
            ctx->pc = 0x1D0E344u;
            goto label_1d0e344;
        }
    }
    ctx->pc = 0x1D0E288u;
    // 0x1d0e288: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D0E288u;
    {
        const bool branch_taken_0x1d0e288 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E288u;
        // 0x1d0e28c: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e288) {
            ctx->pc = 0x1D0E2E0u;
            goto label_1d0e2e0;
        }
    }
    ctx->pc = 0x1D0E290u;
label_1d0e290:
    // 0x1d0e290: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1d0e290u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1d0e294:
    // 0x1d0e294: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D0E294u;
    {
        const bool branch_taken_0x1d0e294 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E294u;
        // 0x1d0e298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e294) {
            ctx->pc = 0x1D0E228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e228;
        }
    }
    ctx->pc = 0x1D0E29Cu;
    // 0x1d0e29c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d0e29cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d0e2a0: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0e2a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e2a4: 0x25ce3230  addiu       $t6, $t6, 0x3230
    ctx->pc = 0x1d0e2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12848));
    // 0x1d0e2a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0e2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e2ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0e2acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0e2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0e2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e2b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0e2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0e2b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e2b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e2bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0e2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e2c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e2c8: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E2C8u;
    SET_GPR_U32(ctx, 31, 0x1D0E2D0u);
    ctx->pc = 0x1D0E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E2C8u;
    // 0x1d0e2cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E2C8u, 0x1D0E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E2D0u;
label_1d0e2d0:
    // 0x1d0e2d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e2d4: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D0E2D4u;
    {
        const bool branch_taken_0x1d0e2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E2D4u;
        // 0x1d0e2d8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e2d4) {
            ctx->pc = 0x1D0E224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e224;
        }
    }
    ctx->pc = 0x1D0E2DCu;
label_1d0e2dc:
    // 0x1d0e2dc: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e2dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
label_1d0e2e0:
    // 0x1d0e2e0: 0x25ef8f78  addiu       $t7, $t7, -0x7088
    ctx->pc = 0x1d0e2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938488));
    // 0x1d0e2e4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e2e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d0e2e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0e2ec: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D0E2ECu;
    {
        const bool branch_taken_0x1d0e2ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E2ECu;
        // 0x1d0e2f0: 0x3c0f01d2  lui         $t7, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e2ec) {
            ctx->pc = 0x1D0E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e290;
        }
    }
    ctx->pc = 0x1D0E2F4u;
    // 0x1d0e2f4: 0x25ef8f7c  addiu       $t7, $t7, -0x7084
    ctx->pc = 0x1d0e2f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938492));
    // 0x1d0e2f8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e2fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d0e2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0e300: 0x4503ffe4  bc1tl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D0E300u;
    {
        const bool branch_taken_0x1d0e300 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0e300) {
            ctx->pc = 0x1D0E304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E300u;
            // 0x1d0e304: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e294;
        }
    }
    ctx->pc = 0x1D0E308u;
    // 0x1d0e308: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e308u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e30c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d0e30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d0e310: 0x25ef8f80  addiu       $t7, $t7, -0x7080
    ctx->pc = 0x1d0e310u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938496));
    // 0x1d0e314: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1d0e314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1d0e318: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d0e318u;
    { uint32_t bits = FAST_READ32(0x1D18F80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0e31c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e31cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e320: 0x25ef8f84  addiu       $t7, $t7, -0x707C
    ctx->pc = 0x1d0e320u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938500));
label_1d0e324:
    // 0x1d0e324: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d0e324u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d0e328: 0xc7431ec  jal         func_1D0C7B0
    ctx->pc = 0x1D0E328u;
    SET_GPR_U32(ctx, 31, 0x1D0E330u);
    ctx->pc = 0x1D0E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E328u;
    // 0x1d0e32c: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C7B0u, 0x1D0E328u, 0x1D0E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E330u;
label_1d0e330:
    // 0x1d0e330: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e330u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e334: 0x25ef8f88  addiu       $t7, $t7, -0x7078
    ctx->pc = 0x1d0e334u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938504));
    // 0x1d0e338: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0e338u;
    { uint32_t bits = FAST_READ32(0x1D18F88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e33c: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D0E33Cu;
    {
        const bool branch_taken_0x1d0e33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E33Cu;
        // 0x1d0e340: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e33c) {
            ctx->pc = 0x1D0E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e290;
        }
    }
    ctx->pc = 0x1D0E344u;
label_1d0e344:
    // 0x1d0e344: 0x55cfffd3  bnel        $t6, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D0E344u;
    {
        const bool branch_taken_0x1d0e344 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d0e344) {
            ctx->pc = 0x1D0E348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E344u;
            // 0x1d0e348: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e294;
        }
    }
    ctx->pc = 0x1D0E34Cu;
    // 0x1d0e34c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e34cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e350: 0x25ef8f8c  addiu       $t7, $t7, -0x7074
    ctx->pc = 0x1d0e350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938508));
    // 0x1d0e354: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0e354u;
    { uint32_t bits = FAST_READ32(0x1D18F8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e358: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d0e358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0e35c: 0x4500ffcc  bc1f        . + 4 + (-0x34 << 2)
    ctx->pc = 0x1D0E35Cu;
    {
        const bool branch_taken_0x1d0e35c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E35Cu;
        // 0x1d0e360: 0x3c0f01d2  lui         $t7, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e35c) {
            ctx->pc = 0x1D0E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e290;
        }
    }
    ctx->pc = 0x1D0E364u;
    // 0x1d0e364: 0x25ef8f7c  addiu       $t7, $t7, -0x7084
    ctx->pc = 0x1d0e364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938492));
    // 0x1d0e368: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d0e368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e36c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d0e36cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0e370: 0x4503ffc8  bc1tl       . + 4 + (-0x38 << 2)
    ctx->pc = 0x1D0E370u;
    {
        const bool branch_taken_0x1d0e370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0e370) {
            ctx->pc = 0x1D0E374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E370u;
            // 0x1d0e374: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e294;
        }
    }
    ctx->pc = 0x1D0E378u;
    // 0x1d0e378: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e378u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e37c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d0e37cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d0e380: 0x25ef8f80  addiu       $t7, $t7, -0x7080
    ctx->pc = 0x1d0e380u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938496));
    // 0x1d0e384: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d0e384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d0e388: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d0e388u;
    { uint32_t bits = FAST_READ32(0x1D18F80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0e38c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e38cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e390: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D0E390u;
    {
        const bool branch_taken_0x1d0e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E390u;
        // 0x1d0e394: 0x25ef8f78  addiu       $t7, $t7, -0x7088 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e390) {
            ctx->pc = 0x1D0E324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e324;
        }
    }
    ctx->pc = 0x1D0E398u;
    // 0x1d0e398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e39c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e3a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0e3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3ac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0e3b0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E3B0u;
    SET_GPR_U32(ctx, 31, 0x1D0E3B8u);
    ctx->pc = 0x1D0E3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3B0u;
    // 0x1d0e3b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E3B0u, 0x1D0E3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E3B8u;
label_1d0e3b8:
    // 0x1d0e3b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0e3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e3c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e3d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0e3d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3d4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E3D4u;
    SET_GPR_U32(ctx, 31, 0x1D0E3DCu);
    ctx->pc = 0x1D0E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3D4u;
    // 0x1d0e3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E3D4u, 0x1D0E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E3DCu;
label_1d0e3dc:
    // 0x1d0e3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e3e0: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0E3E0u;
    SET_GPR_U32(ctx, 31, 0x1D0E3E8u);
    ctx->pc = 0x1D0E3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3E0u;
    // 0x1d0e3e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0E3E0u, 0x1D0E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E3E8u;
label_1d0e3e8:
    // 0x1d0e3e8: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e3ec: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1d0e3ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d0e3f0: 0x25ef8f90  addiu       $t7, $t7, -0x7070
    ctx->pc = 0x1d0e3f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938512));
    // 0x1d0e3f4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d0e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d0e3f8: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d0e3f8u;
    { uint32_t bits = FAST_READ32(0x1D18F90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0e3fc: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d0e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d0e400: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0e400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d0e404: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e404u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e408: 0x25ef8f94  addiu       $t7, $t7, -0x706C
    ctx->pc = 0x1d0e408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938516));
    // 0x1d0e40c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d0e40cu;
    { uint32_t bits = FAST_READ32(0x1D18F94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1d0e410: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e414: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D0E414u;
    {
        const bool branch_taken_0x1d0e414 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D0E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E414u;
        // 0x1d0e418: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e414) {
            ctx->pc = 0x1D0E49Cu;
            goto label_1d0e49c;
        }
    }
    ctx->pc = 0x1D0E41Cu;
    // 0x1d0e41c: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0E41Cu;
    {
        const bool branch_taken_0x1d0e41c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e41c) {
            ctx->pc = 0x1D0E420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E41Cu;
            // 0x1d0e420: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E46Cu;
            goto label_1d0e46c;
        }
    }
    ctx->pc = 0x1D0E424u;
    // 0x1d0e424: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0E424u;
    {
        const bool branch_taken_0x1d0e424 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0e424) {
            ctx->pc = 0x1D0E428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E424u;
            // 0x1d0e428: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E440u;
            goto label_1d0e440;
        }
    }
    ctx->pc = 0x1D0E42Cu;
    // 0x1d0e42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0e430:
    // 0x1d0e430: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0e430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e434: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e438: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E438u;
        // 0x1d0e43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E440u;
label_1d0e440:
    // 0x1d0e440: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e440u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e444: 0x25ef8f90  addiu       $t7, $t7, -0x7070
    ctx->pc = 0x1d0e444u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938512));
    // 0x1d0e448: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d0e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d0e44c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d0e44cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d0e450: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1d0e450u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1d0e454: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d0e454u;
    { uint32_t bits = FAST_READ32(0x1D18F90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d0e458:
    // 0x1d0e458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0e45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e464: 0x87431ec  j           func_1D0C7B0
    ctx->pc = 0x1D0E464u;
    ctx->pc = 0x1D0E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E464u;
    // 0x1d0e468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7B0u;
    sub_01D0C7B0_0x1d0c7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E46Cu;
label_1d0e46c:
    // 0x1d0e46c: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0E46Cu;
    {
        const bool branch_taken_0x1d0e46c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d0e46c) {
            ctx->pc = 0x1D0E470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0E46Cu;
            // 0x1d0e470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e430;
        }
    }
    ctx->pc = 0x1D0E474u;
    // 0x1d0e474: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e474u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e478: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1d0e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d0e47c: 0x25ef8f98  addiu       $t7, $t7, -0x7068
    ctx->pc = 0x1d0e47cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938520));
    // 0x1d0e480: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d0e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d0e484: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d0e484u;
    { uint32_t bits = FAST_READ32(0x1D18F98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d0e488: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e488u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e48c: 0x25ef8f9c  addiu       $t7, $t7, -0x7064
    ctx->pc = 0x1d0e48cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938524));
    // 0x1d0e490: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d0e490u;
    { uint32_t bits = FAST_READ32(0x1D18F9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1d0e494:
    // 0x1d0e494: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0E494u;
    {
        const bool branch_taken_0x1d0e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E494u;
        // 0x1d0e498: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e494) {
            ctx->pc = 0x1D0E458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e458;
        }
    }
    ctx->pc = 0x1D0E49Cu;
label_1d0e49c:
    // 0x1d0e49c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1D0E49Cu;
    {
        const bool branch_taken_0x1d0e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E49Cu;
        // 0x1d0e4a0: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e49c) {
            ctx->pc = 0x1D0E494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e494;
        }
    }
    ctx->pc = 0x1D0E4A4u;
    // 0x1d0e4a4: 0x0  nop
    ctx->pc = 0x1d0e4a4u;
    // NOP
    // 0x1d0e4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e4ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e4b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0e4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0e4b4: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E4B4u;
    SET_GPR_U32(ctx, 31, 0x1D0E4BCu);
    ctx->pc = 0x1D0E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E4B4u;
    // 0x1d0e4b8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E4B4u, 0x1D0E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E4BCu;
label_1d0e4bc:
    // 0x1d0e4bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0e4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0e4c0: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0e4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0e4c4: 0x25ef8fa0  addiu       $t7, $t7, -0x7060
    ctx->pc = 0x1d0e4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938528));
    // 0x1d0e4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e4cc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d0e4ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d0e4d0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d0e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d0e4d4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d0e4d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d0e4d8: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1d0e4d8u;
    { uint32_t bits = FAST_READ32(0x1D18FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d0e4dc: 0x87431ec  j           func_1D0C7B0
    ctx->pc = 0x1D0E4DCu;
    ctx->pc = 0x1D0E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E4DCu;
    // 0x1d0e4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7B0u;
    sub_01D0C7B0_0x1d0c7b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E4E4u;
    // 0x1d0e4e4: 0x0  nop
    ctx->pc = 0x1d0e4e4u;
    // NOP
    ctx->pc = 0x1d0e4e8u;
}
