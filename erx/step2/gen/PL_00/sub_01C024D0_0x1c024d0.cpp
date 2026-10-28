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

// Function: sub_01C024D0
// Address: 0x1c024d0 - 0x1c02570
void sub_01C024D0_0x1c024d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C024D0_0x1c024d0");
#endif

    switch (ctx->pc) {
        case 0x1c024ecu: goto label_1c024ec;
        case 0x1c0253cu: goto label_1c0253c;
        default: break;
    }

    ctx->pc = 0x1c024d0u;

    // 0x1c024d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c024d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c024d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c024d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c024d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c024d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c024dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c024dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c024e0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c024e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c024e4: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C024E4u;
    SET_GPR_U32(ctx, 31, 0x1C024ECu);
    ctx->pc = 0x1C024E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C024E4u;
    // 0x1c024e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C024E4u, 0x1C024ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C024ECu;
label_1c024ec:
    // 0x1c024ec: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c024ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c024f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c024f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c024f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c024f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c024f8: 0x24060045  addiu       $a2, $zero, 0x45
    ctx->pc = 0x1c024f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1c024fc: 0x8ded0084  lw          $t5, 0x84($t7)
    ctx->pc = 0x1c024fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c02500: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c02500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c02504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c02508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0250c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1c0250cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c02510: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c02510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c02514: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1c02514u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1c02518: 0x91ae0ee6  lbu         $t6, 0xEE6($t5)
    ctx->pc = 0x1c02518u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3814)));
    // 0x1c0251c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1c0251cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c02520: 0x11cc0004  beq         $t6, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C02520u;
    {
        const bool branch_taken_0x1c02520 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 12));
        ctx->pc = 0x1C02524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02520u;
        // 0x1c02524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02520) {
            ctx->pc = 0x1C02534u;
            goto label_1c02534;
        }
    }
    ctx->pc = 0x1C02528u;
    // 0x1c02528: 0x91af00a6  lbu         $t7, 0xA6($t5)
    ctx->pc = 0x1c02528u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 166)));
    // 0x1c0252c: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C0252Cu;
    {
        const bool branch_taken_0x1c0252c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C02530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0252Cu;
        // 0x1c02530: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0252c) {
            ctx->pc = 0x1C0255Cu;
            goto label_1c0255c;
        }
    }
    ctx->pc = 0x1C02534u;
label_1c02534:
    // 0x1c02534: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C02534u;
    SET_GPR_U32(ctx, 31, 0x1C0253Cu);
    ctx->pc = 0x1C02538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02534u;
    // 0x1c02538: 0xae0c0018  sw          $t4, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C02534u, 0x1C0253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0253Cu;
label_1c0253c:
    // 0x1c0253c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02540: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c02540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c02544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02548: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1c02548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1c0254c: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1c0254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1c02550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c02550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02554: 0x87002ea  j           func_1C00BA8
    ctx->pc = 0x1C02554u;
    ctx->pc = 0x1C02558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02554u;
    // 0x1c02558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00BA8u;
    sub_01C00BA8_0x1c00ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0255Cu;
label_1c0255c:
    // 0x1c0255c: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c0255cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c02560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c02560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02564: 0x24a59a80  addiu       $a1, $a1, -0x6580
    ctx->pc = 0x1c02564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941312));
    // 0x1c02568: 0x8700406  j           func_1C01018
    ctx->pc = 0x1C02568u;
    ctx->pc = 0x1C0256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02568u;
    // 0x1c0256c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01018u;
    sub_01C01018_0x1c01018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02570u;
}
