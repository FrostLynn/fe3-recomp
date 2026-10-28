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

// Function: sub_01CAE030
// Address: 0x1cae030 - 0x1cae130
void sub_01CAE030_0x1cae030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE030_0x1cae030");
#endif

    switch (ctx->pc) {
        case 0x1cae04cu: goto label_1cae04c;
        case 0x1cae054u: goto label_1cae054;
        case 0x1cae068u: goto label_1cae068;
        case 0x1cae06cu: goto label_1cae06c;
        case 0x1cae0a8u: goto label_1cae0a8;
        case 0x1cae0d0u: goto label_1cae0d0;
        case 0x1cae0dcu: goto label_1cae0dc;
        case 0x1cae0e8u: goto label_1cae0e8;
        case 0x1cae0fcu: goto label_1cae0fc;
        case 0x1cae114u: goto label_1cae114;
        default: break;
    }

    ctx->pc = 0x1cae030u;

    // 0x1cae030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cae034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cae038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae044: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAE044u;
    SET_GPR_U32(ctx, 31, 0x1CAE04Cu);
    ctx->pc = 0x1CAE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE044u;
    // 0x1cae048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAE044u, 0x1CAE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE04Cu;
label_1cae04c:
    // 0x1cae04c: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE04Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE054u);
    ctx->pc = 0x1CAE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE04Cu;
    // 0x1cae050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE04Cu, 0x1CAE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE054u;
label_1cae054:
    // 0x1cae054: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae058: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE058u;
    {
        const bool branch_taken_0x1cae058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE058u;
        // 0x1cae05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae058) {
            ctx->pc = 0x1CAE07Cu;
            goto label_1cae07c;
        }
    }
    ctx->pc = 0x1CAE060u;
    // 0x1cae060: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE060u;
    SET_GPR_U32(ctx, 31, 0x1CAE068u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE060u, 0x1CAE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE068u;
label_1cae068:
    // 0x1cae068: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cae068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cae06c:
    // 0x1cae06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae074: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE074u;
        // 0x1cae078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE07Cu;
label_1cae07c:
    // 0x1cae07c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CAE07Cu;
    {
        const bool branch_taken_0x1cae07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE07Cu;
        // 0x1cae080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae07c) {
            ctx->pc = 0x1CAE06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae06c;
        }
    }
    ctx->pc = 0x1CAE084u;
    // 0x1cae084: 0x0  nop
    ctx->pc = 0x1cae084u;
    // NOP
    // 0x1cae088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae09c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cae09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cae0a0: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CAE0A0u;
    SET_GPR_U32(ctx, 31, 0x1CAE0A8u);
    ctx->pc = 0x1CAE0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE0A0u;
    // 0x1cae0a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CAE0A0u, 0x1CAE0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE0A8u;
label_1cae0a8:
    // 0x1cae0a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cae0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cae0ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cae0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae0b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae0b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae0b8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cae0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae0bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae0bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae0c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae0c8: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE0C8u;
    SET_GPR_U32(ctx, 31, 0x1CAE0D0u);
    ctx->pc = 0x1CAE0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE0C8u;
    // 0x1cae0cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE0C8u, 0x1CAE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE0D0u;
label_1cae0d0:
    // 0x1cae0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae0d4: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE0D4u;
    SET_GPR_U32(ctx, 31, 0x1CAE0DCu);
    ctx->pc = 0x1CAE0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE0D4u;
    // 0x1cae0d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE0D4u, 0x1CAE0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE0DCu;
label_1cae0dc:
    // 0x1cae0dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae0e0: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE0E0u;
    SET_GPR_U32(ctx, 31, 0x1CAE0E8u);
    ctx->pc = 0x1CAE0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE0E0u;
    // 0x1cae0e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE0E0u, 0x1CAE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE0E8u;
label_1cae0e8:
    // 0x1cae0e8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cae0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cae0ec: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cae0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cae0f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cae0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae0f4: 0xc72b452  jal         func_1CAD148
    ctx->pc = 0x1CAE0F4u;
    SET_GPR_U32(ctx, 31, 0x1CAE0FCu);
    ctx->pc = 0x1CAE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE0F4u;
    // 0x1cae0f8: 0x240500ca  addiu       $a1, $zero, 0xCA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD148u, 0x1CAE0F4u, 0x1CAE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE0FCu;
label_1cae0fc:
    // 0x1cae0fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae0fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae100: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cae100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cae104: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1cae104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cae108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae10c: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAE10Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE114u);
    ctx->pc = 0x1CAE110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE10Cu;
    // 0x1cae110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAE10Cu, 0x1CAE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE114u;
label_1cae114:
    // 0x1cae114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae120: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x1cae120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
    // 0x1cae124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae128: 0x872b454  j           func_1CAD150
    ctx->pc = 0x1CAE128u;
    ctx->pc = 0x1CAE12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE128u;
    // 0x1cae12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD150u;
    sub_01CAD150_0x1cad150(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE130u;
}
