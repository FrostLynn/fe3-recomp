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

// Function: sub_01C02570
// Address: 0x1c02570 - 0x1c02638
void sub_01C02570_0x1c02570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02570_0x1c02570");
#endif

    switch (ctx->pc) {
        case 0x1c02594u: goto label_1c02594;
        case 0x1c0259cu: goto label_1c0259c;
        case 0x1c025b4u: goto label_1c025b4;
        case 0x1c025c4u: goto label_1c025c4;
        case 0x1c025ccu: goto label_1c025cc;
        case 0x1c025d0u: goto label_1c025d0;
        case 0x1c02608u: goto label_1c02608;
        default: break;
    }

    ctx->pc = 0x1c02570u;

    // 0x1c02570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c02574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c02578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c02578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0257c: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1c0257cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c02580: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C02580u;
    {
        const bool branch_taken_0x1c02580 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02580u;
        // 0x1c02584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02580) {
            ctx->pc = 0x1C025E0u;
            goto label_1c025e0;
        }
    }
    ctx->pc = 0x1C02588u;
    // 0x1c02588: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c02588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0258c: 0xc700012  jal         func_1C00048
    ctx->pc = 0x1C0258Cu;
    SET_GPR_U32(ctx, 31, 0x1C02594u);
    ctx->pc = 0x1C02590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0258Cu;
    // 0x1c02590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00048u, 0x1C0258Cu, 0x1C02594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02594u;
label_1c02594:
    // 0x1c02594: 0xc700014  jal         func_1C00050
    ctx->pc = 0x1C02594u;
    SET_GPR_U32(ctx, 31, 0x1C0259Cu);
    ctx->pc = 0x1C02598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02594u;
    // 0x1c02598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00050u, 0x1C02594u, 0x1C0259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0259Cu;
label_1c0259c:
    // 0x1c0259c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c0259cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c025a0: 0x144f000b  bne         $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C025A0u;
    {
        const bool branch_taken_0x1c025a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C025A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C025A0u;
        // 0x1c025a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c025a0) {
            ctx->pc = 0x1C025D0u;
            goto label_1c025d0;
        }
    }
    ctx->pc = 0x1C025A8u;
    // 0x1c025a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c025a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c025ac: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C025ACu;
    SET_GPR_U32(ctx, 31, 0x1C025B4u);
    ctx->pc = 0x1C025B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C025ACu;
    // 0x1c025b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C025ACu, 0x1C025B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C025B4u;
label_1c025b4:
    // 0x1c025b4: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1c025b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1c025b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c025b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c025bc: 0xc70001e  jal         func_1C00078
    ctx->pc = 0x1C025BCu;
    SET_GPR_U32(ctx, 31, 0x1C025C4u);
    ctx->pc = 0x1C025C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C025BCu;
    // 0x1c025c0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00078u, 0x1C025BCu, 0x1C025C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C025C4u;
label_1c025c4:
    // 0x1c025c4: 0xc70002e  jal         func_1C000B8
    ctx->pc = 0x1C025C4u;
    SET_GPR_U32(ctx, 31, 0x1C025CCu);
    ctx->pc = 0x1C025C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C025C4u;
    // 0x1c025c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000B8u, 0x1C025C4u, 0x1C025CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C025CCu;
label_1c025cc:
    // 0x1c025cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c025ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c025d0:
    // 0x1c025d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c025d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c025d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c025d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c025d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C025D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C025DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C025D8u;
        // 0x1c025dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C025D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C025E0u;
label_1c025e0:
    // 0x1c025e0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C025E0u;
    {
        const bool branch_taken_0x1c025e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C025E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C025E0u;
        // 0x1c025e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c025e0) {
            ctx->pc = 0x1C025D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c025d0;
        }
    }
    ctx->pc = 0x1C025E8u;
    // 0x1c025e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c025e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c025ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c025ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c025f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c025f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c025f4: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1c025f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c025f8: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C025F8u;
    {
        const bool branch_taken_0x1c025f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C025F8u;
        // 0x1c025fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c025f8) {
            ctx->pc = 0x1C02628u;
            goto label_1c02628;
        }
    }
    ctx->pc = 0x1C02600u;
    // 0x1c02600: 0xc70002e  jal         func_1C000B8
    ctx->pc = 0x1C02600u;
    SET_GPR_U32(ctx, 31, 0x1C02608u);
    ctx->pc = 0x1C000B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C000B8u, 0x1C02600u, 0x1C02608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02608u;
label_1c02608:
    // 0x1c02608: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1c02608u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c0260c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02610: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c02610u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02614: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c02614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02618: 0xa1cf003c  sb          $t7, 0x3C($t6)
    ctx->pc = 0x1c02618u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 60), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c0261c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0261cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02620: 0x8700422  j           func_1C01088
    ctx->pc = 0x1C02620u;
    ctx->pc = 0x1C02624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02620u;
    // 0x1c02624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01088u;
    sub_01C01088_0x1c01088(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02628u;
label_1c02628:
    // 0x1c02628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c02628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0262c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c0262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02630: 0x87006ea  j           func_1C01BA8
    ctx->pc = 0x1C02630u;
    ctx->pc = 0x1C02634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02630u;
    // 0x1c02634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01BA8u;
    sub_01C01BA8_0x1c01ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02638u;
}
