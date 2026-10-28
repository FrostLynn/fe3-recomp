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

// Function: sub_01C60FA8
// Address: 0x1c60fa8 - 0x1c61108
void sub_01C60FA8_0x1c60fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60FA8_0x1c60fa8");
#endif

    switch (ctx->pc) {
        case 0x1c60fc4u: goto label_1c60fc4;
        case 0x1c60fccu: goto label_1c60fcc;
        case 0x1c60fe0u: goto label_1c60fe0;
        case 0x1c60fe4u: goto label_1c60fe4;
        case 0x1c61020u: goto label_1c61020;
        case 0x1c61054u: goto label_1c61054;
        case 0x1c6107cu: goto label_1c6107c;
        case 0x1c61088u: goto label_1c61088;
        case 0x1c61094u: goto label_1c61094;
        case 0x1c610a8u: goto label_1c610a8;
        case 0x1c610b8u: goto label_1c610b8;
        case 0x1c610f4u: goto label_1c610f4;
        default: break;
    }

    ctx->pc = 0x1c60fa8u;

    // 0x1c60fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c60fac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c60facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c60fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c60fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60fb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c60fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c60fbc: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C60FBCu;
    SET_GPR_U32(ctx, 31, 0x1C60FC4u);
    ctx->pc = 0x1C60FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60FBCu;
    // 0x1c60fc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C60FBCu, 0x1C60FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60FC4u;
label_1c60fc4:
    // 0x1c60fc4: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C60FC4u;
    SET_GPR_U32(ctx, 31, 0x1C60FCCu);
    ctx->pc = 0x1C60FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60FC4u;
    // 0x1c60fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C60FC4u, 0x1C60FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60FCCu;
label_1c60fcc:
    // 0x1c60fcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c60fccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60fd0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60FD0u;
    {
        const bool branch_taken_0x1c60fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C60FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60FD0u;
        // 0x1c60fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60fd0) {
            ctx->pc = 0x1C60FF4u;
            goto label_1c60ff4;
        }
    }
    ctx->pc = 0x1C60FD8u;
    // 0x1c60fd8: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C60FD8u;
    SET_GPR_U32(ctx, 31, 0x1C60FE0u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C60FD8u, 0x1C60FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60FE0u;
label_1c60fe0:
    // 0x1c60fe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c60fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c60fe4:
    // 0x1c60fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60fe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c60fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C60FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60FECu;
        // 0x1c60ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C60FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60FF4u;
label_1c60ff4:
    // 0x1c60ff4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C60FF4u;
    {
        const bool branch_taken_0x1c60ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60FF4u;
        // 0x1c60ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60ff4) {
            ctx->pc = 0x1C60FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60fe4;
        }
    }
    ctx->pc = 0x1C60FFCu;
    // 0x1c60ffc: 0x0  nop
    ctx->pc = 0x1c60ffcu;
    // NOP
    // 0x1c61000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c61000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c61004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c61008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6100c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c61010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61014: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c61014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c61018: 0xc717d58  jal         func_1C5F560
    ctx->pc = 0x1C61018u;
    SET_GPR_U32(ctx, 31, 0x1C61020u);
    ctx->pc = 0x1C6101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61018u;
    // 0x1c6101c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F560u, 0x1C61018u, 0x1C61020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61020u;
label_1c61020:
    // 0x1c61020: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c61020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c61024: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c61024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61028: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c61028u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6102c: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c6102cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c61030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61038: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C61038u;
    {
        const bool branch_taken_0x1c61038 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C6103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61038u;
        // 0x1c6103c: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61038) {
            ctx->pc = 0x1C61068u;
            goto label_1c61068;
        }
    }
    ctx->pc = 0x1C61040u;
    // 0x1c61040: 0x29cf001b  slti        $t7, $t6, 0x1B
    ctx->pc = 0x1c61040u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c61044: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C61044u;
    {
        const bool branch_taken_0x1c61044 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61044u;
        // 0x1c61048: 0x240f001f  addiu       $t7, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61044) {
            ctx->pc = 0x1C610D4u;
            goto label_1c610d4;
        }
    }
    ctx->pc = 0x1C6104Cu;
    // 0x1c6104c: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x1c6104cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c61050: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1c61050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1c61054:
    // 0x1c61054: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C61054u;
    {
        const bool branch_taken_0x1c61054 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C61058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61054u;
        // 0x1c61058: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61054) {
            ctx->pc = 0x1C6106Cu;
            goto label_1c6106c;
        }
    }
    ctx->pc = 0x1C6105Cu;
    // 0x1c6105c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61064: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c61064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c61068:
    // 0x1c61068: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6106c:
    // 0x1c6106c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6106cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61070: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c61070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c61074: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61074u;
    SET_GPR_U32(ctx, 31, 0x1C6107Cu);
    ctx->pc = 0x1C61078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61074u;
    // 0x1c61078: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61074u, 0x1C6107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6107Cu;
label_1c6107c:
    // 0x1c6107c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61080: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C61080u;
    SET_GPR_U32(ctx, 31, 0x1C61088u);
    ctx->pc = 0x1C61084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61080u;
    // 0x1c61084: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C61080u, 0x1C61088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61088u;
label_1c61088:
    // 0x1c61088: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6108c: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C6108Cu;
    SET_GPR_U32(ctx, 31, 0x1C61094u);
    ctx->pc = 0x1C61090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6108Cu;
    // 0x1c61090: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C6108Cu, 0x1C61094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61094u;
label_1c61094:
    // 0x1c61094: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c61094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c61098: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c61098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c6109c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c6109cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c610a0: 0xc717d5c  jal         func_1C5F570
    ctx->pc = 0x1C610A0u;
    SET_GPR_U32(ctx, 31, 0x1C610A8u);
    ctx->pc = 0x1C610A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C610A0u;
    // 0x1c610a4: 0x240500b3  addiu       $a1, $zero, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F570u, 0x1C610A0u, 0x1C610A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C610A8u;
label_1c610a8:
    // 0x1c610a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c610a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c610ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c610acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c610b0: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C610B0u;
    SET_GPR_U32(ctx, 31, 0x1C610B8u);
    ctx->pc = 0x1C610B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C610B0u;
    // 0x1c610b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C610B0u, 0x1C610B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C610B8u;
label_1c610b8:
    // 0x1c610b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c610b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c610bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c610bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c610c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c610c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c610c4: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1c610c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1c610c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c610c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c610cc: 0x8717d5e  j           func_1C5F578
    ctx->pc = 0x1C610CCu;
    ctx->pc = 0x1C610D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C610CCu;
    // 0x1c610d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F578u;
    sub_01C5F578_0x1c5f578(rdram, ctx, runtime); return;
    ctx->pc = 0x1C610D4u;
label_1c610d4:
    // 0x1c610d4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C610D4u;
    {
        const bool branch_taken_0x1c610d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C610D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C610D4u;
        // 0x1c610d8: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c610d4) {
            ctx->pc = 0x1C61054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61054;
        }
    }
    ctx->pc = 0x1C610DCu;
    // 0x1c610dc: 0x0  nop
    ctx->pc = 0x1c610dcu;
    // NOP
    // 0x1c610e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c610e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c610e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c610e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c610e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c610e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c610ec: 0xc717d6c  jal         func_1C5F5B0
    ctx->pc = 0x1C610ECu;
    SET_GPR_U32(ctx, 31, 0x1C610F4u);
    ctx->pc = 0x1C610F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C610ECu;
    // 0x1c610f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F5B0u, 0x1C610ECu, 0x1C610F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C610F4u;
label_1c610f4:
    // 0x1c610f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c610f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c610f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c610f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c610fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c610fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61100: 0x8717d60  j           func_1C5F580
    ctx->pc = 0x1C61100u;
    ctx->pc = 0x1C61104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61100u;
    // 0x1c61104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F580u;
    sub_01C5F580_0x1c5f580(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61108u;
}
