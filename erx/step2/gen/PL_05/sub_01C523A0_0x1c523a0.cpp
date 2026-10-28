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

// Function: sub_01C523A0
// Address: 0x1c523a0 - 0x1c52430
void sub_01C523A0_0x1c523a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C523A0_0x1c523a0");
#endif

    switch (ctx->pc) {
        case 0x1c523c4u: goto label_1c523c4;
        case 0x1c523dcu: goto label_1c523dc;
        case 0x1c523fcu: goto label_1c523fc;
        default: break;
    }

    ctx->pc = 0x1c523a0u;

    // 0x1c523a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c523a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c523a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c523a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c523a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c523a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c523ac: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1c523acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c523b0: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C523B0u;
    {
        const bool branch_taken_0x1c523b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C523B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C523B0u;
        // 0x1c523b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c523b0) {
            ctx->pc = 0x1C52418u;
            goto label_1c52418;
        }
    }
    ctx->pc = 0x1C523B8u;
    // 0x1c523b8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1c523b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c523bc: 0xc713e74  jal         func_1C4F9D0
    ctx->pc = 0x1C523BCu;
    SET_GPR_U32(ctx, 31, 0x1C523C4u);
    ctx->pc = 0x1C523C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C523BCu;
    // 0x1c523c0: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9D0u, 0x1C523BCu, 0x1C523C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C523C4u;
label_1c523c4:
    // 0x1c523c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c523c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c523c8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C523C8u;
    {
        const bool branch_taken_0x1c523c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C523CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C523C8u;
        // 0x1c523cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c523c8) {
            ctx->pc = 0x1C5241Cu;
            goto label_1c5241c;
        }
    }
    ctx->pc = 0x1C523D0u;
    // 0x1c523d0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c523d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c523d4: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C523D4u;
    SET_GPR_U32(ctx, 31, 0x1C523DCu);
    ctx->pc = 0x1C523D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C523D4u;
    // 0x1c523d8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C523D4u, 0x1C523DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C523DCu;
label_1c523dc:
    // 0x1c523dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c523dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c523e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c523e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c523e4: 0x240601b8  addiu       $a2, $zero, 0x1B8
    ctx->pc = 0x1c523e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x1c523e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c523e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c523ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c523ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c523f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c523f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c523f4: 0xc7140f8  jal         func_1C503E0
    ctx->pc = 0x1C523F4u;
    SET_GPR_U32(ctx, 31, 0x1C523FCu);
    ctx->pc = 0x1C523F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C523F4u;
    // 0x1c523f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503E0u, 0x1C523F4u, 0x1C523FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C523FCu;
label_1c523fc:
    // 0x1c523fc: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c523fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c52400: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c52400u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52404: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c52404u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c52408: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C52408u;
    {
        const bool branch_taken_0x1c52408 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C5240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52408u;
        // 0x1c5240c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52408) {
            ctx->pc = 0x1C5241Cu;
            goto label_1c5241c;
        }
    }
    ctx->pc = 0x1C52410u;
    // 0x1c52410: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c52410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c52414: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c52414u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c52418:
    // 0x1c52418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c5241c:
    // 0x1c5241c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52424: 0x8714226  j           func_1C50898
    ctx->pc = 0x1C52424u;
    ctx->pc = 0x1C52428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52424u;
    // 0x1c52428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50898u;
    sub_01C50898_0x1c50898(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5242Cu;
    // 0x1c5242c: 0x0  nop
    ctx->pc = 0x1c5242cu;
    // NOP
    ctx->pc = 0x1c52430u;
}
