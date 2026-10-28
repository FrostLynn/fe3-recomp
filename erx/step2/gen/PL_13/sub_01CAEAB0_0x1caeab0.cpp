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

// Function: sub_01CAEAB0
// Address: 0x1caeab0 - 0x1caecf0
void sub_01CAEAB0_0x1caeab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAEAB0_0x1caeab0");
#endif

    switch (ctx->pc) {
        case 0x1caead4u: goto label_1caead4;
        case 0x1caeae4u: goto label_1caeae4;
        case 0x1caeaf0u: goto label_1caeaf0;
        case 0x1caeb00u: goto label_1caeb00;
        case 0x1caeb0cu: goto label_1caeb0c;
        case 0x1caeb40u: goto label_1caeb40;
        case 0x1caeb6cu: goto label_1caeb6c;
        case 0x1caeb78u: goto label_1caeb78;
        case 0x1caeb88u: goto label_1caeb88;
        case 0x1caeb98u: goto label_1caeb98;
        case 0x1caeba4u: goto label_1caeba4;
        case 0x1caebf4u: goto label_1caebf4;
        case 0x1caec04u: goto label_1caec04;
        case 0x1caec10u: goto label_1caec10;
        case 0x1caec20u: goto label_1caec20;
        case 0x1caec30u: goto label_1caec30;
        case 0x1caec38u: goto label_1caec38;
        case 0x1caec4cu: goto label_1caec4c;
        case 0x1caec54u: goto label_1caec54;
        case 0x1caec58u: goto label_1caec58;
        case 0x1caec8cu: goto label_1caec8c;
        case 0x1caec98u: goto label_1caec98;
        case 0x1caeca4u: goto label_1caeca4;
        case 0x1caecacu: goto label_1caecac;
        case 0x1caecbcu: goto label_1caecbc;
        default: break;
    }

    ctx->pc = 0x1caeab0u;

    // 0x1caeab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caeab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1caeab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1caeab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1caeab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caeab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caeabc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caeabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1caeac0: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1caeac0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1caeac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caeac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeac8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1caeac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1caeacc: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEACCu;
    SET_GPR_U32(ctx, 31, 0x1CAEAD4u);
    ctx->pc = 0x1CAEAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEACCu;
    // 0x1caead0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEACCu, 0x1CAEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEAD4u;
label_1caead4:
    // 0x1caead4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1caead4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1caead8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1caead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1caeadc: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAEADCu;
    SET_GPR_U32(ctx, 31, 0x1CAEAE4u);
    ctx->pc = 0x1CAEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEADCu;
    // 0x1caeae0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAEADCu, 0x1CAEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEAE4u;
label_1caeae4:
    // 0x1caeae4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1caeae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1caeae8: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEAE8u;
    SET_GPR_U32(ctx, 31, 0x1CAEAF0u);
    ctx->pc = 0x1CAEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEAE8u;
    // 0x1caeaec: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEAE8u, 0x1CAEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEAF0u;
label_1caeaf0:
    // 0x1caeaf0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1caeaf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1caeaf4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1caeaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1caeaf8: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAEAF8u;
    SET_GPR_U32(ctx, 31, 0x1CAEB00u);
    ctx->pc = 0x1CAEAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEAF8u;
    // 0x1caeafc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAEAF8u, 0x1CAEB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB00u;
label_1caeb00:
    // 0x1caeb00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1caeb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1caeb04: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CAEB04u;
    SET_GPR_U32(ctx, 31, 0x1CAEB0Cu);
    ctx->pc = 0x1CAEB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB04u;
    // 0x1caeb08: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CAEB04u, 0x1CAEB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB0Cu;
label_1caeb0c:
    // 0x1caeb0c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1caeb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1caeb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1caeb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb14: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1caeb14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1caeb18: 0x240f001b  addiu       $t7, $zero, 0x1B
    ctx->pc = 0x1caeb18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1caeb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1caeb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb24: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAEB24u;
    {
        const bool branch_taken_0x1caeb24 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CAEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB24u;
        // 0x1caeb28: 0x2406018f  addiu       $a2, $zero, 0x18F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caeb24) {
            ctx->pc = 0x1CAEB54u;
            goto label_1caeb54;
        }
    }
    ctx->pc = 0x1CAEB2Cu;
    // 0x1caeb2c: 0x29cf001c  slti        $t7, $t6, 0x1C
    ctx->pc = 0x1caeb2cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1caeb30: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CAEB30u;
    {
        const bool branch_taken_0x1caeb30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB30u;
        // 0x1caeb34: 0x240f001e  addiu       $t7, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caeb30) {
            ctx->pc = 0x1CAEBCCu;
            goto label_1caebcc;
        }
    }
    ctx->pc = 0x1CAEB38u;
    // 0x1caeb38: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1caeb38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1caeb3c: 0x2406018e  addiu       $a2, $zero, 0x18E
    ctx->pc = 0x1caeb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 398));
label_1caeb40:
    // 0x1caeb40: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAEB40u;
    {
        const bool branch_taken_0x1caeb40 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CAEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB40u;
        // 0x1caeb44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caeb40) {
            ctx->pc = 0x1CAEB58u;
            goto label_1caeb58;
        }
    }
    ctx->pc = 0x1CAEB48u;
    // 0x1caeb48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1caeb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1caeb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1caeb54:
    // 0x1caeb54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caeb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1caeb58:
    // 0x1caeb58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1caeb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1caeb5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caeb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb60: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1caeb60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caeb64: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAEB64u;
    SET_GPR_U32(ctx, 31, 0x1CAEB6Cu);
    ctx->pc = 0x1CAEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB64u;
    // 0x1caeb68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAEB64u, 0x1CAEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB6Cu;
label_1caeb6c:
    // 0x1caeb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb70: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAEB70u;
    SET_GPR_U32(ctx, 31, 0x1CAEB78u);
    ctx->pc = 0x1CAEB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB70u;
    // 0x1caeb74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAEB70u, 0x1CAEB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB78u;
label_1caeb78:
    // 0x1caeb78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1caeb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1caeb7c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1caeb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1caeb80: 0xc72b452  jal         func_1CAD148
    ctx->pc = 0x1CAEB80u;
    SET_GPR_U32(ctx, 31, 0x1CAEB88u);
    ctx->pc = 0x1CAEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB80u;
    // 0x1caeb84: 0x2405012a  addiu       $a1, $zero, 0x12A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 298));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD148u, 0x1CAEB80u, 0x1CAEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB88u;
label_1caeb88:
    // 0x1caeb88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1caeb88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1caeb8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb90: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAEB90u;
    SET_GPR_U32(ctx, 31, 0x1CAEB98u);
    ctx->pc = 0x1CAEB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB90u;
    // 0x1caeb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAEB90u, 0x1CAEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB98u;
label_1caeb98:
    // 0x1caeb98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caeb9c: 0xc72b454  jal         func_1CAD150
    ctx->pc = 0x1CAEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CAEBA4u);
    ctx->pc = 0x1CAEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB9Cu;
    // 0x1caeba0: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD150u, 0x1CAEB9Cu, 0x1CAEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEBA4u;
label_1caeba4:
    // 0x1caeba4: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1caeba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1caeba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caeba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caebac: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1caebacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1caebb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1caebb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caebb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caebb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caebb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caebb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caebbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caebc0: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1caebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1caebc4: 0x872b45e  j           func_1CAD178
    ctx->pc = 0x1CAEBC4u;
    ctx->pc = 0x1CAEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEBC4u;
    // 0x1caebc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD178u;
    sub_01CAD178_0x1cad178(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAEBCCu;
label_1caebcc:
    // 0x1caebcc: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1CAEBCCu;
    {
        const bool branch_taken_0x1caebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEBCCu;
        // 0x1caebd0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caebcc) {
            ctx->pc = 0x1CAEB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caeb40;
        }
    }
    ctx->pc = 0x1CAEBD4u;
    // 0x1caebd4: 0x0  nop
    ctx->pc = 0x1caebd4u;
    // NOP
    // 0x1caebd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1caebd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1caebdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1caebdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1caebe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caebe4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1caebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1caebe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1caebe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caebec: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEBECu;
    SET_GPR_U32(ctx, 31, 0x1CAEBF4u);
    ctx->pc = 0x1CAEBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEBECu;
    // 0x1caebf0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEBECu, 0x1CAEBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEBF4u;
label_1caebf4:
    // 0x1caebf4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1caebf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1caebf8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1caebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1caebfc: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAEBFCu;
    SET_GPR_U32(ctx, 31, 0x1CAEC04u);
    ctx->pc = 0x1CAEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEBFCu;
    // 0x1caec00: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAEBFCu, 0x1CAEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC04u;
label_1caec04:
    // 0x1caec04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1caec04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1caec08: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEC08u;
    SET_GPR_U32(ctx, 31, 0x1CAEC10u);
    ctx->pc = 0x1CAEC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC08u;
    // 0x1caec0c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEC08u, 0x1CAEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC10u;
label_1caec10:
    // 0x1caec10: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1caec10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1caec14: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1caec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1caec18: 0xc72b6fc  jal         func_1CADBF0
    ctx->pc = 0x1CAEC18u;
    SET_GPR_U32(ctx, 31, 0x1CAEC20u);
    ctx->pc = 0x1CAEC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC18u;
    // 0x1caec1c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBF0u, 0x1CAEC18u, 0x1CAEC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC20u;
label_1caec20:
    // 0x1caec20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1caec20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caec24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1caec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caec28: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CAEC28u;
    SET_GPR_U32(ctx, 31, 0x1CAEC30u);
    ctx->pc = 0x1CAEC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC28u;
    // 0x1caec2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CAEC28u, 0x1CAEC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC30u;
label_1caec30:
    // 0x1caec30: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAEC30u;
    SET_GPR_U32(ctx, 31, 0x1CAEC38u);
    ctx->pc = 0x1CAEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC30u;
    // 0x1caec34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAEC30u, 0x1CAEC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC38u;
label_1caec38:
    // 0x1caec38: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caec38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caec3c: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CAEC3Cu;
    {
        const bool branch_taken_0x1caec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEC3Cu;
        // 0x1caec40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caec3c) {
            ctx->pc = 0x1CAEC68u;
            goto label_1caec68;
        }
    }
    ctx->pc = 0x1CAEC44u;
    // 0x1caec44: 0xc72b460  jal         func_1CAD180
    ctx->pc = 0x1CAEC44u;
    SET_GPR_U32(ctx, 31, 0x1CAEC4Cu);
    ctx->pc = 0x1CAD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD180u, 0x1CAEC44u, 0x1CAEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC4Cu;
label_1caec4c:
    // 0x1caec4c: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CAEC54u);
    ctx->pc = 0x1CAEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC4Cu;
    // 0x1caec50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAEC4Cu, 0x1CAEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC54u;
label_1caec54:
    // 0x1caec54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1caec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1caec58:
    // 0x1caec58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caec58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caec5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1caec5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caec60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEC60u;
        // 0x1caec64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEC68u;
label_1caec68:
    // 0x1caec68: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CAEC68u;
    {
        const bool branch_taken_0x1caec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEC68u;
        // 0x1caec6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caec68) {
            ctx->pc = 0x1CAEC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caec58;
        }
    }
    ctx->pc = 0x1CAEC70u;
    // 0x1caec70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1caec74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1caec78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caec7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1caec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1caec80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1caec80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caec84: 0xc72b456  jal         func_1CAD158
    ctx->pc = 0x1CAEC84u;
    SET_GPR_U32(ctx, 31, 0x1CAEC8Cu);
    ctx->pc = 0x1CAEC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC84u;
    // 0x1caec88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD158u, 0x1CAEC84u, 0x1CAEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC8Cu;
label_1caec8c:
    // 0x1caec8c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1caec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1caec90: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAEC90u;
    SET_GPR_U32(ctx, 31, 0x1CAEC98u);
    ctx->pc = 0x1CAEC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEC90u;
    // 0x1caec94: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAEC90u, 0x1CAEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEC98u;
label_1caec98:
    // 0x1caec98: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caec98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caec9c: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1caec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1caeca0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1caeca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1caeca4:
    // 0x1caeca4: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAECA4u;
    SET_GPR_U32(ctx, 31, 0x1CAECACu);
    ctx->pc = 0x1CAECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAECA4u;
    // 0x1caeca8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAECA4u, 0x1CAECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAECACu;
label_1caecac:
    // 0x1caecac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAECACu;
    {
        const bool branch_taken_0x1caecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAECACu;
        // 0x1caecb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caecac) {
            ctx->pc = 0x1CAECC0u;
            goto label_1caecc0;
        }
    }
    ctx->pc = 0x1CAECB4u;
    // 0x1caecb4: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAECB4u;
    SET_GPR_U32(ctx, 31, 0x1CAECBCu);
    ctx->pc = 0x1CAECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAECB4u;
    // 0x1caecb8: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAECB4u, 0x1CAECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAECBCu;
label_1caecbc:
    // 0x1caecbc: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1caecbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1caecc0:
    // 0x1caecc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1caecc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1caecc4: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x1caecc4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1caecc8: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CAECC8u;
    {
        const bool branch_taken_0x1caecc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caecc8) {
            ctx->pc = 0x1CAECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAECC8u;
            // 0x1caeccc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAECA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caeca4;
        }
    }
    ctx->pc = 0x1CAECD0u;
    // 0x1caecd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caecd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caecd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caecd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caecd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caecd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caecdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAECDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAECDCu;
        // 0x1caece0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAECDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAECE4u;
    // 0x1caece4: 0x0  nop
    ctx->pc = 0x1caece4u;
    // NOP
    // 0x1caece8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAECF0u;
}
