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

// Function: sub_01DE67C8
// Address: 0x1de67c8 - 0x1de6858
void sub_01DE67C8_0x1de67c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE67C8_0x1de67c8");
#endif

    switch (ctx->pc) {
        case 0x1de67e4u: goto label_1de67e4;
        case 0x1de67ecu: goto label_1de67ec;
        case 0x1de67f8u: goto label_1de67f8;
        case 0x1de6800u: goto label_1de6800;
        case 0x1de680cu: goto label_1de680c;
        case 0x1de6818u: goto label_1de6818;
        case 0x1de6824u: goto label_1de6824;
        default: break;
    }

    ctx->pc = 0x1de67c8u;

    // 0x1de67c8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de67c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de67cc: 0x240e1400  addiu       $t6, $zero, 0x1400
    ctx->pc = 0x1de67ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1de67d0: 0xa18f042b  sb          $t7, 0x42B($t4)
    ctx->pc = 0x1de67d0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1067), (uint8_t)GPR_U32(ctx, 15));
    // 0x1de67d4: 0xad8e0290  sw          $t6, 0x290($t4)
    ctx->pc = 0x1de67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 656), GPR_U32(ctx, 14));
    // 0x1de67d8: 0x240f1000  addiu       $t7, $zero, 0x1000
    ctx->pc = 0x1de67d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de67dc: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1DE67DCu;
    {
        const bool branch_taken_0x1de67dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE67DCu;
        // 0x1de67e0: 0xad8f029c  sw          $t7, 0x29C($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 668), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de67dc) {
            ctx->pc = 0x1DE67A8u;
            return;
        }
    }
    ctx->pc = 0x1DE67E4u;
label_1de67e4:
    // 0x1de67e4: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DE67E4u;
    {
        const bool branch_taken_0x1de67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE67E4u;
        // 0x1de67e8: 0x240f1000  addiu       $t7, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de67e4) {
            ctx->pc = 0x1DE679Cu;
            return;
        }
    }
    ctx->pc = 0x1DE67ECu;
label_1de67ec:
    // 0x1de67ec: 0x240f1400  addiu       $t7, $zero, 0x1400
    ctx->pc = 0x1de67ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x1de67f0: 0x240e1000  addiu       $t6, $zero, 0x1000
    ctx->pc = 0x1de67f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de67f4: 0x0  nop
    ctx->pc = 0x1de67f4u;
    // NOP
label_1de67f8:
    // 0x1de67f8: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DE67F8u;
    {
        const bool branch_taken_0x1de67f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE67F8u;
        // 0x1de67fc: 0xad8f0290  sw          $t7, 0x290($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 656), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de67f8) {
            ctx->pc = 0x1DE67A4u;
            return;
        }
    }
    ctx->pc = 0x1DE6800u;
label_1de6800:
    // 0x1de6800: 0x240f1000  addiu       $t7, $zero, 0x1000
    ctx->pc = 0x1de6800u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de6804: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1DE6804u;
    {
        const bool branch_taken_0x1de6804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6804u;
        // 0x1de6808: 0x240e1c00  addiu       $t6, $zero, 0x1C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6804) {
            ctx->pc = 0x1DE67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de67f8;
        }
    }
    ctx->pc = 0x1DE680Cu;
label_1de680c:
    // 0x1de680c: 0x240f1000  addiu       $t7, $zero, 0x1000
    ctx->pc = 0x1de680cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de6810: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DE6810u;
    {
        const bool branch_taken_0x1de6810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6810u;
        // 0x1de6814: 0x240e1400  addiu       $t6, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6810) {
            ctx->pc = 0x1DE67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de67f8;
        }
    }
    ctx->pc = 0x1DE6818u;
label_1de6818:
    // 0x1de6818: 0x240f1000  addiu       $t7, $zero, 0x1000
    ctx->pc = 0x1de6818u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de681c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1DE681Cu;
    {
        const bool branch_taken_0x1de681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE681Cu;
        // 0x1de6820: 0x240e4000  addiu       $t6, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de681c) {
            ctx->pc = 0x1DE67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de67f8;
        }
    }
    ctx->pc = 0x1DE6824u;
label_1de6824:
    // 0x1de6824: 0x240f1000  addiu       $t7, $zero, 0x1000
    ctx->pc = 0x1de6824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1de6828: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DE6828u;
    {
        const bool branch_taken_0x1de6828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6828u;
        // 0x1de682c: 0x240e2400  addiu       $t6, $zero, 0x2400 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6828) {
            ctx->pc = 0x1DE67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de67f8;
        }
    }
    ctx->pc = 0x1DE6830u;
    // 0x1de6830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de6830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de6834: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de6834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de6838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de683c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de6840: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de6840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de6844: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de6844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de6848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de6848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de684c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de684cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de6850: 0x87799c8  j           func_1DE6720
    ctx->pc = 0x1DE6850u;
    ctx->pc = 0x1DE6854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE6850u;
    // 0x1de6854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE6720u;
    sub_01DE6720_0x1de6720(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE6858u;
}
