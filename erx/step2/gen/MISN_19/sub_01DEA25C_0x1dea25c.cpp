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

// Function: sub_01DEA25C
// Address: 0x1dea25c - 0x1dea300
void sub_01DEA25C_0x1dea25c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA25C_0x1dea25c");
#endif

    switch (ctx->pc) {
        case 0x1dea29cu: goto label_1dea29c;
        case 0x1dea2b8u: goto label_1dea2b8;
        case 0x1dea2c0u: goto label_1dea2c0;
        case 0x1dea2f4u: goto label_1dea2f4;
        default: break;
    }

    ctx->pc = 0x1dea25cu;

    // 0x1dea25c: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dea25cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea260: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1dea260u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dea264: 0x240e0800  addiu       $t6, $zero, 0x800
    ctx->pc = 0x1dea264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1dea268: 0xadaf0290  sw          $t7, 0x290($t5)
    ctx->pc = 0x1dea268u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 656), GPR_U32(ctx, 15));
    // 0x1dea26c: 0xadae029c  sw          $t6, 0x29C($t5)
    ctx->pc = 0x1dea26cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 668), GPR_U32(ctx, 14));
    // 0x1dea270: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1dea270u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dea274: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dea274u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea278: 0xad8f0cd8  sw          $t7, 0xCD8($t4)
    ctx->pc = 0x1dea278u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3288), GPR_U32(ctx, 15));
    // 0x1dea27c: 0x8e0e0480  lw          $t6, 0x480($s0)
    ctx->pc = 0x1dea27cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1152)));
    // 0x1dea280: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dea280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dea284: 0x11cffff1  beq         $t6, $t7, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DEA284u;
    {
        const bool branch_taken_0x1dea284 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA284u;
        // 0x1dea288: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea284) {
            ctx->pc = 0x1DEA24Cu;
            return;
        }
    }
    ctx->pc = 0x1DEA28Cu;
    // 0x1dea28c: 0x11cfffef  beq         $t6, $t7, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1DEA28Cu;
    {
        const bool branch_taken_0x1dea28c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA28Cu;
        // 0x1dea290: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea28c) {
            ctx->pc = 0x1DEA24Cu;
            return;
        }
    }
    ctx->pc = 0x1DEA294u;
    // 0x1dea294: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DEA294u;
    {
        const bool branch_taken_0x1dea294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA294u;
        // 0x1dea298: 0xae0f0480  sw          $t7, 0x480($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea294) {
            ctx->pc = 0x1DEA24Cu;
            return;
        }
    }
    ctx->pc = 0x1DEA29Cu;
label_1dea29c:
    // 0x1dea29c: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dea29cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea2a0: 0x240f4000  addiu       $t7, $zero, 0x4000
    ctx->pc = 0x1dea2a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1dea2a4: 0x240e0c00  addiu       $t6, $zero, 0xC00
    ctx->pc = 0x1dea2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1dea2a8: 0xadaf0290  sw          $t7, 0x290($t5)
    ctx->pc = 0x1dea2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 656), GPR_U32(ctx, 15));
    // 0x1dea2ac: 0xadae029c  sw          $t6, 0x29C($t5)
    ctx->pc = 0x1dea2acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 668), GPR_U32(ctx, 14));
    // 0x1dea2b0: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1dea2b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dea2b4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dea2b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dea2b8:
    // 0x1dea2b8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DEA2B8u;
    {
        const bool branch_taken_0x1dea2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA2B8u;
        // 0x1dea2bc: 0xad8f0cd8  sw          $t7, 0xCD8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 3288), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea2b8) {
            ctx->pc = 0x1DEA24Cu;
            return;
        }
    }
    ctx->pc = 0x1DEA2C0u;
label_1dea2c0:
    // 0x1dea2c0: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dea2c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea2c4: 0x240f2000  addiu       $t7, $zero, 0x2000
    ctx->pc = 0x1dea2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1dea2c8: 0x240e0c00  addiu       $t6, $zero, 0xC00
    ctx->pc = 0x1dea2c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1dea2cc: 0xadaf0290  sw          $t7, 0x290($t5)
    ctx->pc = 0x1dea2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 656), GPR_U32(ctx, 15));
    // 0x1dea2d0: 0xadae029c  sw          $t6, 0x29C($t5)
    ctx->pc = 0x1dea2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 668), GPR_U32(ctx, 14));
    // 0x1dea2d4: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1dea2d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dea2d8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DEA2D8u;
    {
        const bool branch_taken_0x1dea2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA2D8u;
        // 0x1dea2dc: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea2d8) {
            ctx->pc = 0x1DEA2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dea2b8;
        }
    }
    ctx->pc = 0x1DEA2E0u;
    // 0x1dea2e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dea2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dea2e4: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x1dea2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x1dea2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dea2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dea2ec: 0xc77a822  jal         func_1DEA088
    ctx->pc = 0x1DEA2ECu;
    SET_GPR_U32(ctx, 31, 0x1DEA2F4u);
    ctx->pc = 0x1DEA2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA2ECu;
    // 0x1dea2f0: 0x2484a6d8  addiu       $a0, $a0, -0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA088u, 0x1DEA2ECu, 0x1DEA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA2F4u;
label_1dea2f4:
    // 0x1dea2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dea2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA2F8u;
        // 0x1dea2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA300u;
}
