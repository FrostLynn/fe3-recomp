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

// Function: sub_01CCF180
// Address: 0x1ccf180 - 0x1ccf288
void sub_01CCF180_0x1ccf180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF180_0x1ccf180");
#endif

    switch (ctx->pc) {
        case 0x1ccf19cu: goto label_1ccf19c;
        case 0x1ccf1a4u: goto label_1ccf1a4;
        case 0x1ccf1b8u: goto label_1ccf1b8;
        case 0x1ccf1c0u: goto label_1ccf1c0;
        case 0x1ccf1c4u: goto label_1ccf1c4;
        case 0x1ccf200u: goto label_1ccf200;
        case 0x1ccf228u: goto label_1ccf228;
        case 0x1ccf234u: goto label_1ccf234;
        case 0x1ccf240u: goto label_1ccf240;
        case 0x1ccf254u: goto label_1ccf254;
        case 0x1ccf26cu: goto label_1ccf26c;
        default: break;
    }

    ctx->pc = 0x1ccf180u;

    // 0x1ccf180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf184: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccf184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf190: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf194: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCF194u;
    SET_GPR_U32(ctx, 31, 0x1CCF19Cu);
    ctx->pc = 0x1CCF198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF194u;
    // 0x1ccf198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCF194u, 0x1CCF19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF19Cu;
label_1ccf19c:
    // 0x1ccf19c: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF19Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF1A4u);
    ctx->pc = 0x1CCF1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF19Cu;
    // 0x1ccf1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF19Cu, 0x1CCF1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF1A4u;
label_1ccf1a4:
    // 0x1ccf1a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf1a8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCF1A8u;
    {
        const bool branch_taken_0x1ccf1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF1A8u;
        // 0x1ccf1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf1a8) {
            ctx->pc = 0x1CCF1D4u;
            goto label_1ccf1d4;
        }
    }
    ctx->pc = 0x1CCF1B0u;
    // 0x1ccf1b0: 0xc73352c  jal         func_1CCD4B0
    ctx->pc = 0x1CCF1B0u;
    SET_GPR_U32(ctx, 31, 0x1CCF1B8u);
    ctx->pc = 0x1CCD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD4B0u, 0x1CCF1B0u, 0x1CCF1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF1B8u;
label_1ccf1b8:
    // 0x1ccf1b8: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF1B8u;
    SET_GPR_U32(ctx, 31, 0x1CCF1C0u);
    ctx->pc = 0x1CCF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF1B8u;
    // 0x1ccf1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF1B8u, 0x1CCF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF1C0u;
label_1ccf1c0:
    // 0x1ccf1c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccf1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccf1c4:
    // 0x1ccf1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf1c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF1CCu;
        // 0x1ccf1d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF1D4u;
label_1ccf1d4:
    // 0x1ccf1d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCF1D4u;
    {
        const bool branch_taken_0x1ccf1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF1D4u;
        // 0x1ccf1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf1d4) {
            ctx->pc = 0x1CCF1C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf1c4;
        }
    }
    ctx->pc = 0x1CCF1DCu;
    // 0x1ccf1dc: 0x0  nop
    ctx->pc = 0x1ccf1dcu;
    // NOP
    // 0x1ccf1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf1e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf1ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccf1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccf1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf1f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccf1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccf1f8: 0xc733518  jal         func_1CCD460
    ctx->pc = 0x1CCF1F8u;
    SET_GPR_U32(ctx, 31, 0x1CCF200u);
    ctx->pc = 0x1CCF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF1F8u;
    // 0x1ccf1fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD460u, 0x1CCF1F8u, 0x1CCF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF200u;
label_1ccf200:
    // 0x1ccf200: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ccf200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ccf204: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ccf204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf208: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccf208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf20c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf210: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccf210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf214: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf214u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf218: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf220: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF220u;
    SET_GPR_U32(ctx, 31, 0x1CCF228u);
    ctx->pc = 0x1CCF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF220u;
    // 0x1ccf224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF220u, 0x1CCF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF228u;
label_1ccf228:
    // 0x1ccf228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf22c: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF22Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF234u);
    ctx->pc = 0x1CCF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF22Cu;
    // 0x1ccf230: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF22Cu, 0x1CCF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF234u;
label_1ccf234:
    // 0x1ccf234: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf238: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF238u;
    SET_GPR_U32(ctx, 31, 0x1CCF240u);
    ctx->pc = 0x1CCF23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF238u;
    // 0x1ccf23c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF238u, 0x1CCF240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF240u;
label_1ccf240:
    // 0x1ccf240: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ccf240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ccf244: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1ccf244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1ccf248: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ccf248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf24c: 0xc73351c  jal         func_1CCD470
    ctx->pc = 0x1CCF24Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF254u);
    ctx->pc = 0x1CCF250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF24Cu;
    // 0x1ccf250: 0x240500d3  addiu       $a1, $zero, 0xD3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD470u, 0x1CCF24Cu, 0x1CCF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF254u;
label_1ccf254:
    // 0x1ccf254: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccf258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf25c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1ccf25cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1ccf260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf264: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCF264u;
    SET_GPR_U32(ctx, 31, 0x1CCF26Cu);
    ctx->pc = 0x1CCF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF264u;
    // 0x1ccf268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCF264u, 0x1CCF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF26Cu;
label_1ccf26c:
    // 0x1ccf26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf278: 0x24050071  addiu       $a1, $zero, 0x71
    ctx->pc = 0x1ccf278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1ccf27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf280: 0x873351e  j           func_1CCD478
    ctx->pc = 0x1CCF280u;
    ctx->pc = 0x1CCF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF280u;
    // 0x1ccf284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD478u;
    sub_01CCD478_0x1ccd478(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF288u;
}
