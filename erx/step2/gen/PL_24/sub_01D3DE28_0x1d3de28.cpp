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

// Function: sub_01D3DE28
// Address: 0x1d3de28 - 0x1d3df60
void sub_01D3DE28_0x1d3de28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DE28_0x1d3de28");
#endif

    switch (ctx->pc) {
        case 0x1d3de48u: goto label_1d3de48;
        case 0x1d3de5cu: goto label_1d3de5c;
        case 0x1d3de60u: goto label_1d3de60;
        case 0x1d3de7cu: goto label_1d3de7c;
        case 0x1d3de8cu: goto label_1d3de8c;
        case 0x1d3ded8u: goto label_1d3ded8;
        case 0x1d3df14u: goto label_1d3df14;
        case 0x1d3df20u: goto label_1d3df20;
        case 0x1d3df30u: goto label_1d3df30;
        case 0x1d3df48u: goto label_1d3df48;
        default: break;
    }

    ctx->pc = 0x1d3de28u;

    // 0x1d3de28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3de28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3de2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3de30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3de30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3de34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3de38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d3de38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3de3c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3de3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3de40: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DE40u;
    SET_GPR_U32(ctx, 31, 0x1D3DE48u);
    ctx->pc = 0x1D3DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DE40u;
    // 0x1d3de44: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DE40u, 0x1D3DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DE48u;
label_1d3de48:
    // 0x1d3de48: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d3de48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d3de4c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3DE4Cu;
    {
        const bool branch_taken_0x1d3de4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE4Cu;
        // 0x1d3de50: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de4c) {
            ctx->pc = 0x1D3DE98u;
            goto label_1d3de98;
        }
    }
    ctx->pc = 0x1D3DE54u;
    // 0x1d3de54: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3DE54u;
    {
        const bool branch_taken_0x1d3de54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d3de54) {
            ctx->pc = 0x1D3DE74u;
            goto label_1d3de74;
        }
    }
    ctx->pc = 0x1D3DE5Cu;
label_1d3de5c:
    // 0x1d3de5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3de5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3de60:
    // 0x1d3de60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3de60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3de64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3de64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3de68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3de68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3de6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE6Cu;
        // 0x1d3de70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DE74u;
label_1d3de74:
    // 0x1d3de74: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3DE74u;
    SET_GPR_U32(ctx, 31, 0x1D3DE7Cu);
    ctx->pc = 0x1D3DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DE74u;
    // 0x1d3de78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3DE74u, 0x1D3DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DE7Cu;
label_1d3de7c:
    // 0x1d3de7c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3DE7Cu;
    {
        const bool branch_taken_0x1d3de7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D3DE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE7Cu;
        // 0x1d3de80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de7c) {
            ctx->pc = 0x1D3DE5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3de5c;
        }
    }
    ctx->pc = 0x1D3DE84u;
    // 0x1d3de84: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3DE84u;
    SET_GPR_U32(ctx, 31, 0x1D3DE8Cu);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3DE84u, 0x1D3DE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DE8Cu;
label_1d3de8c:
    // 0x1d3de8c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D3DE8Cu;
    {
        const bool branch_taken_0x1d3de8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE8Cu;
        // 0x1d3de90: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de8c) {
            ctx->pc = 0x1D3DE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3de60;
        }
    }
    ctx->pc = 0x1D3DE94u;
    // 0x1d3de94: 0x0  nop
    ctx->pc = 0x1d3de94u;
    // NOP
label_1d3de98:
    // 0x1d3de98: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d3de98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d3de9c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3DE9Cu;
    {
        const bool branch_taken_0x1d3de9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DE9Cu;
        // 0x1d3dea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3de9c) {
            ctx->pc = 0x1D3DE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3de60;
        }
    }
    ctx->pc = 0x1D3DEA4u;
    // 0x1d3dea4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d3dea4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d3dea8: 0x3c0e01d4  lui         $t6, 0x1D4
    ctx->pc = 0x1d3dea8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)468 << 16));
    // 0x1d3deac: 0x25cefff0  addiu       $t6, $t6, -0x10
    ctx->pc = 0x1d3deacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967280));
    // 0x1d3deb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3deb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3deb4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3deb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3deb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3deb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3debc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d3debcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d3dec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3dec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3dec4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3dec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3dec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3dec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3decc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3deccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ded0: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DED0u;
    SET_GPR_U32(ctx, 31, 0x1D3DED8u);
    ctx->pc = 0x1D3DED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DED0u;
    // 0x1d3ded4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DED0u, 0x1D3DED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DED8u;
label_1d3ded8:
    // 0x1d3ded8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3ded8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3dedc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D3DEDCu;
    {
        const bool branch_taken_0x1d3dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DEDCu;
        // 0x1d3dee0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3dedc) {
            ctx->pc = 0x1D3DE5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3de5c;
        }
    }
    ctx->pc = 0x1D3DEE4u;
    // 0x1d3dee4: 0x0  nop
    ctx->pc = 0x1d3dee4u;
    // NOP
    // 0x1d3dee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3deec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3deecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3def0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3def4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3def4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3def8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3defc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3defcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3df00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3df00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3df04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3df04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3df08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3df08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3df0c: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3DF0Cu;
    SET_GPR_U32(ctx, 31, 0x1D3DF14u);
    ctx->pc = 0x1D3DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DF0Cu;
    // 0x1d3df10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3DF0Cu, 0x1D3DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF14u;
label_1d3df14:
    // 0x1d3df14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3df14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3df18: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3DF18u;
    SET_GPR_U32(ctx, 31, 0x1D3DF20u);
    ctx->pc = 0x1D3DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DF18u;
    // 0x1d3df1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3DF18u, 0x1D3DF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF20u;
label_1d3df20:
    // 0x1d3df20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3df24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3df24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3df28: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DF28u;
    SET_GPR_U32(ctx, 31, 0x1D3DF30u);
    ctx->pc = 0x1D3DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DF28u;
    // 0x1d3df2c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DF28u, 0x1D3DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF30u;
label_1d3df30:
    // 0x1d3df30: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3df30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3df34: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d3df34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d3df38: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d3df38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d3df3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3df40: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3DF40u;
    SET_GPR_U32(ctx, 31, 0x1D3DF48u);
    ctx->pc = 0x1D3DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DF40u;
    // 0x1d3df44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3DF40u, 0x1D3DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3DF48u;
label_1d3df48:
    // 0x1d3df48: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d3df48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d3df4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3df4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3df50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3df50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3df54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3DF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3DF54u;
        // 0x1d3df58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3DF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3DF5Cu;
    // 0x1d3df5c: 0x0  nop
    ctx->pc = 0x1d3df5cu;
    // NOP
    ctx->pc = 0x1d3df60u;
}
