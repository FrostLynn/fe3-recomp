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

// Function: sub_01D7E248
// Address: 0x1d7e248 - 0x1d7e358
void sub_01D7E248_0x1d7e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E248_0x1d7e248");
#endif

    switch (ctx->pc) {
        case 0x1d7e264u: goto label_1d7e264;
        case 0x1d7e26cu: goto label_1d7e26c;
        case 0x1d7e280u: goto label_1d7e280;
        case 0x1d7e284u: goto label_1d7e284;
        case 0x1d7e2dcu: goto label_1d7e2dc;
        case 0x1d7e2ecu: goto label_1d7e2ec;
        case 0x1d7e300u: goto label_1d7e300;
        case 0x1d7e314u: goto label_1d7e314;
        case 0x1d7e324u: goto label_1d7e324;
        default: break;
    }

    ctx->pc = 0x1d7e248u;

    // 0x1d7e248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e24c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7e24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7e250: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e254: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e258: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7e25c: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7E25Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E264u);
    ctx->pc = 0x1D7E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E25Cu;
    // 0x1d7e260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7E25Cu, 0x1D7E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E264u;
label_1d7e264:
    // 0x1d7e264: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7E264u;
    SET_GPR_U32(ctx, 31, 0x1D7E26Cu);
    ctx->pc = 0x1D7E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E264u;
    // 0x1d7e268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7E264u, 0x1D7E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E26Cu;
label_1d7e26c:
    // 0x1d7e26c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7e26cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e270: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7E270u;
    {
        const bool branch_taken_0x1d7e270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E270u;
        // 0x1d7e274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e270) {
            ctx->pc = 0x1D7E294u;
            goto label_1d7e294;
        }
    }
    ctx->pc = 0x1D7E278u;
    // 0x1d7e278: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7E278u;
    SET_GPR_U32(ctx, 31, 0x1D7E280u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7E278u, 0x1D7E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E280u;
label_1d7e280:
    // 0x1d7e280: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7e280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7e284:
    // 0x1d7e284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7e288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e28c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E28Cu;
        // 0x1d7e290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E294u;
label_1d7e294:
    // 0x1d7e294: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7E294u;
    {
        const bool branch_taken_0x1d7e294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E294u;
        // 0x1d7e298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e294) {
            ctx->pc = 0x1D7E284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e284;
        }
    }
    ctx->pc = 0x1D7E29Cu;
    // 0x1d7e29c: 0x0  nop
    ctx->pc = 0x1d7e29cu;
    // NOP
    // 0x1d7e2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7e2a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e2a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d7e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d7e2ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d7e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d7e2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e2b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d7e2b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7e2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7e2c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d7e2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7e2c4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d7e2c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d7e2c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d7e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d7e2cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7e2d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d7e2d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2d4: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E2D4u;
    SET_GPR_U32(ctx, 31, 0x1D7E2DCu);
    ctx->pc = 0x1D7E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E2D4u;
    // 0x1d7e2d8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E2D4u, 0x1D7E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E2DCu;
label_1d7e2dc:
    // 0x1d7e2dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e2e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7e2e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2e4: 0xc75f5d8  jal         func_1D7D760
    ctx->pc = 0x1D7E2E4u;
    SET_GPR_U32(ctx, 31, 0x1D7E2ECu);
    ctx->pc = 0x1D7E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E2E4u;
    // 0x1d7e2e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D760u, 0x1D7E2E4u, 0x1D7E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E2ECu;
label_1d7e2ec:
    // 0x1d7e2ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7e2f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d7e2f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e2f8: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7E2F8u;
    SET_GPR_U32(ctx, 31, 0x1D7E300u);
    ctx->pc = 0x1D7E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E2F8u;
    // 0x1d7e2fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7E2F8u, 0x1D7E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E300u;
label_1d7e300:
    // 0x1d7e300: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d7e300u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d7e304: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d7e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d7e308: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d7e308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e30c: 0xc75f5dc  jal         func_1D7D770
    ctx->pc = 0x1D7E30Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E314u);
    ctx->pc = 0x1D7E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E30Cu;
    // 0x1d7e310: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D770u, 0x1D7E30Cu, 0x1D7E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E314u;
label_1d7e314:
    // 0x1d7e314: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7e314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e31c: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7E31Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E324u);
    ctx->pc = 0x1D7E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E31Cu;
    // 0x1d7e320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7E31Cu, 0x1D7E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E324u;
label_1d7e324:
    // 0x1d7e324: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d7e324u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d7e328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e32c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d7e32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7e338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e33c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7e33cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7e340: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d7e340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7e344: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d7e344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d7e348: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d7e348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7e34c: 0x875f5de  j           func_1D7D778
    ctx->pc = 0x1D7E34Cu;
    ctx->pc = 0x1D7E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E34Cu;
    // 0x1d7e350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D778u;
    sub_01D7D778_0x1d7d778(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E354u;
    // 0x1d7e354: 0x0  nop
    ctx->pc = 0x1d7e354u;
    // NOP
    ctx->pc = 0x1d7e358u;
}
