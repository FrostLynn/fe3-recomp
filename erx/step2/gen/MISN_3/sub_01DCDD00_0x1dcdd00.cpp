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

// Function: sub_01DCDD00
// Address: 0x1dcdd00 - 0x1dcdd98
void sub_01DCDD00_0x1dcdd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDD00_0x1dcdd00");
#endif

    switch (ctx->pc) {
        case 0x1dcdd20u: goto label_1dcdd20;
        case 0x1dcdd30u: goto label_1dcdd30;
        case 0x1dcdd54u: goto label_1dcdd54;
        case 0x1dcdd60u: goto label_1dcdd60;
        case 0x1dcdd78u: goto label_1dcdd78;
        default: break;
    }

    ctx->pc = 0x1dcdd00u;

    // 0x1dcdd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcdd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcdd04: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdd04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcdd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcdd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcdd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcdd10: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcdd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcdd14: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcdd14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcdd18: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCDD18u;
    SET_GPR_U32(ctx, 31, 0x1DCDD20u);
    ctx->pc = 0x1DCDD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD18u;
    // 0x1dcdd1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCDD18u, 0x1DCDD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDD20u;
label_1dcdd20:
    // 0x1dcdd20: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdd20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdd24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd28: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDD28u;
    SET_GPR_U32(ctx, 31, 0x1DCDD30u);
    ctx->pc = 0x1DCDD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD28u;
    // 0x1dcdd2c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDD28u, 0x1DCDD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDD30u;
label_1dcdd30:
    // 0x1dcdd30: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdd30u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdd34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcdd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd38: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dcdd38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dcdd3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcdd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd40: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dcdd40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcdd44: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dcdd44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dcdd48: 0x8dcf0460  lw          $t7, 0x460($t6)
    ctx->pc = 0x1dcdd48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1dcdd4c: 0xc773616  jal         func_1DCD858
    ctx->pc = 0x1DCDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDD54u);
    ctx->pc = 0x1DCDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD4Cu;
    // 0x1dcdd50: 0x8de4002c  lw          $a0, 0x2C($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD858u, 0x1DCDD4Cu, 0x1DCDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDD54u;
label_1dcdd54:
    // 0x1dcdd54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dcdd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd58: 0xc77361c  jal         func_1DCD870
    ctx->pc = 0x1DCDD58u;
    SET_GPR_U32(ctx, 31, 0x1DCDD60u);
    ctx->pc = 0x1DCDD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD58u;
    // 0x1dcdd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD870u, 0x1DCDD58u, 0x1DCDD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDD60u;
label_1dcdd60:
    // 0x1dcdd60: 0x8e0e0008  lw          $t6, 0x8($s0)
    ctx->pc = 0x1dcdd60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dcdd64: 0x240f001d  addiu       $t7, $zero, 0x1D
    ctx->pc = 0x1dcdd64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1dcdd68: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCDD68u;
    {
        const bool branch_taken_0x1dcdd68 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD68u;
        // 0x1dcdd6c: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdd68) {
            ctx->pc = 0x1DCDD7Cu;
            goto label_1dcdd7c;
        }
    }
    ctx->pc = 0x1DCDD70u;
    // 0x1dcdd70: 0xc77361a  jal         func_1DCD868
    ctx->pc = 0x1DCDD70u;
    SET_GPR_U32(ctx, 31, 0x1DCDD78u);
    ctx->pc = 0x1DCDD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDD70u;
    // 0x1dcdd74: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD868u, 0x1DCDD70u, 0x1DCDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDD78u;
label_1dcdd78:
    // 0x1dcdd78: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdd78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dcdd7c:
    // 0x1dcdd7c: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1dcdd7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcdd80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdd80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcdd84: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1dcdd84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcdd88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcdd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcdd8c: 0xadae0cd8  sw          $t6, 0xCD8($t5)
    ctx->pc = 0x1dcdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 14));
    // 0x1dcdd90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDD90u;
        // 0x1dcdd94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDD98u;
}
