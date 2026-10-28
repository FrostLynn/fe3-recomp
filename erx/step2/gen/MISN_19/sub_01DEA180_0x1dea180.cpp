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

// Function: sub_01DEA180
// Address: 0x1dea180 - 0x1dea25c
void sub_01DEA180_0x1dea180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA180_0x1dea180");
#endif

    switch (ctx->pc) {
        case 0x1dea1a0u: goto label_1dea1a0;
        case 0x1dea1b0u: goto label_1dea1b0;
        case 0x1dea1f0u: goto label_1dea1f0;
        case 0x1dea24cu: goto label_1dea24c;
        default: break;
    }

    ctx->pc = 0x1dea180u;

    // 0x1dea180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dea180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dea184: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea184u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea188: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dea188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dea18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dea18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dea190: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dea190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dea194: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dea194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dea198: 0xc77a808  jal         func_1DEA020
    ctx->pc = 0x1DEA198u;
    SET_GPR_U32(ctx, 31, 0x1DEA1A0u);
    ctx->pc = 0x1DEA19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA198u;
    // 0x1dea19c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA020u, 0x1DEA198u, 0x1DEA1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA1A0u;
label_1dea1a0:
    // 0x1dea1a0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea1a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dea1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dea1a8: 0xc77a80c  jal         func_1DEA030
    ctx->pc = 0x1DEA1A8u;
    SET_GPR_U32(ctx, 31, 0x1DEA1B0u);
    ctx->pc = 0x1DEA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA1A8u;
    // 0x1dea1ac: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA030u, 0x1DEA1A8u, 0x1DEA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA1B0u;
label_1dea1b0:
    // 0x1dea1b0: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dea1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea1b4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1dea1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dea1b8: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1dea1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dea1bc: 0x3c0701df  lui         $a3, 0x1DF
    ctx->pc = 0x1dea1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)479 << 16));
    // 0x1dea1c0: 0x8c8e00f0  lw          $t6, 0xF0($a0)
    ctx->pc = 0x1dea1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1dea1c4: 0x24e7a6c8  addiu       $a3, $a3, -0x5938
    ctx->pc = 0x1dea1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944456));
    // 0x1dea1c8: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dea1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dea1cc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dea1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dea1d0: 0x8dcd002c  lw          $t5, 0x2C($t6)
    ctx->pc = 0x1dea1d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    // 0x1dea1d4: 0x8c4f0048  lw          $t7, 0x48($v0)
    ctx->pc = 0x1dea1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dea1d8: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1dea1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1dea1dc: 0x8dae001c  lw          $t6, 0x1C($t5)
    ctx->pc = 0x1dea1dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x1dea1e0: 0x8df04864  lw          $s0, 0x4864($t7)
    ctx->pc = 0x1dea1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dea1e4: 0x8dc60048  lw          $a2, 0x48($t6)
    ctx->pc = 0x1dea1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1dea1e8: 0xc77a816  jal         func_1DEA058
    ctx->pc = 0x1DEA1E8u;
    SET_GPR_U32(ctx, 31, 0x1DEA1F0u);
    ctx->pc = 0x1DEA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA1E8u;
    // 0x1dea1ec: 0x24c632f0  addiu       $a2, $a2, 0x32F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA058u, 0x1DEA1E8u, 0x1DEA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA1F0u;
label_1dea1f0:
    // 0x1dea1f0: 0x2c4f0005  sltiu       $t7, $v0, 0x5
    ctx->pc = 0x1dea1f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dea1f4: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DEA1F4u;
    {
        const bool branch_taken_0x1dea1f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA1F4u;
        // 0x1dea1f8: 0x3c0e01df  lui         $t6, 0x1DF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea1f4) {
            ctx->pc = 0x1DEA24Cu;
            goto label_1dea24c;
        }
    }
    ctx->pc = 0x1DEA1FCu;
    // 0x1dea1fc: 0x27880  sll         $t7, $v0, 2
    ctx->pc = 0x1dea1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dea200: 0x25cea6ac  addiu       $t6, $t6, -0x5954
    ctx->pc = 0x1dea200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944428));
    // 0x1dea204: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1dea204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1dea208: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1dea208u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dea20c: 0x1a00008  jr          $t5
    ctx->pc = 0x1DEA20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEA214u: goto label_1dea214;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA20Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DEA214u;
label_1dea214:
    // 0x1dea214: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dea214u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea218: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1dea218u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dea21c: 0x240e0200  addiu       $t6, $zero, 0x200
    ctx->pc = 0x1dea21cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1dea220: 0xadaf0290  sw          $t7, 0x290($t5)
    ctx->pc = 0x1dea220u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 656), GPR_U32(ctx, 15));
    // 0x1dea224: 0xadae029c  sw          $t6, 0x29C($t5)
    ctx->pc = 0x1dea224u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 668), GPR_U32(ctx, 14));
    // 0x1dea228: 0x8daf00dc  lw          $t7, 0xDC($t5)
    ctx->pc = 0x1dea228u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dea22c: 0xade00cd8  sw          $zero, 0xCD8($t7)
    ctx->pc = 0x1dea22cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 3288), GPR_U32(ctx, 0));
    // 0x1dea230: 0x8e0e0480  lw          $t6, 0x480($s0)
    ctx->pc = 0x1dea230u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1152)));
    // 0x1dea234: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dea234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dea238: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEA238u;
    {
        const bool branch_taken_0x1dea238 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA238u;
        // 0x1dea23c: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea238) {
            ctx->pc = 0x1DEA24Cu;
            goto label_1dea24c;
        }
    }
    ctx->pc = 0x1DEA240u;
    // 0x1dea240: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DEA240u;
    {
        const bool branch_taken_0x1dea240 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA240u;
        // 0x1dea244: 0x240f0006  addiu       $t7, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea240) {
            ctx->pc = 0x1DEA24Cu;
            goto label_1dea24c;
        }
    }
    ctx->pc = 0x1DEA248u;
    // 0x1dea248: 0xae0f0480  sw          $t7, 0x480($s0)
    ctx->pc = 0x1dea248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 15));
label_1dea24c:
    // 0x1dea24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dea24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dea250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dea254: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA254u;
        // 0x1dea258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA25Cu;
}
