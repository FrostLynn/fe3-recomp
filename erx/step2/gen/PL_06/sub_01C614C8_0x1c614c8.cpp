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

// Function: sub_01C614C8
// Address: 0x1c614c8 - 0x1c61548
void sub_01C614C8_0x1c614c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C614C8_0x1c614c8");
#endif

    switch (ctx->pc) {
        case 0x1c614dcu: goto label_1c614dc;
        case 0x1c614fcu: goto label_1c614fc;
        default: break;
    }

    ctx->pc = 0x1c614c8u;

    // 0x1c614c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c614c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c614cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c614ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c614d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c614d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c614d4: 0xc717d60  jal         func_1C5F580
    ctx->pc = 0x1C614D4u;
    SET_GPR_U32(ctx, 31, 0x1C614DCu);
    ctx->pc = 0x1C614D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C614D4u;
    // 0x1c614d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F580u, 0x1C614D4u, 0x1C614DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C614DCu;
label_1c614dc:
    // 0x1c614dc: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c614dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c614e0: 0x8deb002c  lw          $t3, 0x2C($t7)
    ctx->pc = 0x1c614e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c614e4: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c614e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c614e8: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c614e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c614ec: 0x19e00011  blez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C614ECu;
    {
        const bool branch_taken_0x1c614ec = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C614F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C614ECu;
        // 0x1c614f0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c614ec) {
            ctx->pc = 0x1C61534u;
            goto label_1c61534;
        }
    }
    ctx->pc = 0x1C614F4u;
    // 0x1c614f4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c614f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c614f8: 0x8d6e001c  lw          $t6, 0x1C($t3)
    ctx->pc = 0x1c614f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_1c614fc:
    // 0x1c614fc: 0xd7a00  sll         $t7, $t5, 8
    ctx->pc = 0x1c614fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1c61500: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c61500u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c61504: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C61504u;
    {
        const bool branch_taken_0x1c61504 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61504u;
        // 0x1c61508: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61504) {
            ctx->pc = 0x1C61524u;
            goto label_1c61524;
        }
    }
    ctx->pc = 0x1C6150Cu;
    // 0x1c6150c: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1c6150cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c61510: 0x55ea0005  bnel        $t7, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C61510u;
    {
        const bool branch_taken_0x1c61510 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 10));
        if (branch_taken_0x1c61510) {
            ctx->pc = 0x1C61514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C61510u;
            // 0x1c61514: 0x8d8f0000  lw          $t7, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C61528u;
            goto label_1c61528;
        }
    }
    ctx->pc = 0x1C61518u;
    // 0x1c61518: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c61518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c6151c: 0xa1e00069  sb          $zero, 0x69($t7)
    ctx->pc = 0x1c6151cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c61520: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c61520u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1c61524:
    // 0x1c61524: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c61524u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c61528:
    // 0x1c61528: 0x1af782a  slt         $t7, $t5, $t7
    ctx->pc = 0x1c61528u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c6152c: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C6152Cu;
    {
        const bool branch_taken_0x1c6152c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6152c) {
            ctx->pc = 0x1C61530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6152Cu;
            // 0x1c61530: 0x8d6e001c  lw          $t6, 0x1C($t3) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C614FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c614fc;
        }
    }
    ctx->pc = 0x1C61534u;
label_1c61534:
    // 0x1c61534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61538: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6153c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6153Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6153Cu;
        // 0x1c61540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6153Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61544u;
    // 0x1c61544: 0x0  nop
    ctx->pc = 0x1c61544u;
    // NOP
    ctx->pc = 0x1c61548u;
}
