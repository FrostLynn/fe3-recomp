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

// Function: sub_01C4429C
// Address: 0x1c4429c - 0x1c44330
void sub_01C4429C_0x1c4429c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4429C_0x1c4429c");
#endif

    switch (ctx->pc) {
        case 0x1c442c4u: goto label_1c442c4;
        case 0x1c442e4u: goto label_1c442e4;
        default: break;
    }

    ctx->pc = 0x1c4429cu;

    // 0x1c4429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c442a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c442a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c442a4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1C442A4u;
    {
        const bool branch_taken_0x1c442a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C442A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C442A4u;
        // 0x1c442a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c442a4) {
            ctx->pc = 0x1C441D0u;
            return;
        }
    }
    ctx->pc = 0x1C442ACu;
    // 0x1c442ac: 0x0  nop
    ctx->pc = 0x1c442acu;
    // NOP
    // 0x1c442b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c442b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c442b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c442b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c442b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c442b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c442bc: 0xc710920  jal         func_1C42480
    ctx->pc = 0x1C442BCu;
    SET_GPR_U32(ctx, 31, 0x1C442C4u);
    ctx->pc = 0x1C442C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C442BCu;
    // 0x1c442c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42480u, 0x1C442BCu, 0x1C442C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C442C4u;
label_1c442c4:
    // 0x1c442c4: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c442c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c442c8: 0x8deb002c  lw          $t3, 0x2C($t7)
    ctx->pc = 0x1c442c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c442cc: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c442ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c442d0: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c442d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c442d4: 0x19e00011  blez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C442D4u;
    {
        const bool branch_taken_0x1c442d4 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C442D4u;
        // 0x1c442d8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c442d4) {
            ctx->pc = 0x1C4431Cu;
            goto label_1c4431c;
        }
    }
    ctx->pc = 0x1C442DCu;
    // 0x1c442dc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c442dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c442e0: 0x8d6e001c  lw          $t6, 0x1C($t3)
    ctx->pc = 0x1c442e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_1c442e4:
    // 0x1c442e4: 0xd7a00  sll         $t7, $t5, 8
    ctx->pc = 0x1c442e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1c442e8: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c442e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c442ec: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C442ECu;
    {
        const bool branch_taken_0x1c442ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C442F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C442ECu;
        // 0x1c442f0: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c442ec) {
            ctx->pc = 0x1C4430Cu;
            goto label_1c4430c;
        }
    }
    ctx->pc = 0x1C442F4u;
    // 0x1c442f4: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1c442f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c442f8: 0x55ea0005  bnel        $t7, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C442F8u;
    {
        const bool branch_taken_0x1c442f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 10));
        if (branch_taken_0x1c442f8) {
            ctx->pc = 0x1C442FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C442F8u;
            // 0x1c442fc: 0x8d8f0000  lw          $t7, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C44310u;
            goto label_1c44310;
        }
    }
    ctx->pc = 0x1C44300u;
    // 0x1c44300: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c44300u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c44304: 0xa1e00069  sb          $zero, 0x69($t7)
    ctx->pc = 0x1c44304u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c44308: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c44308u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1c4430c:
    // 0x1c4430c: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c4430cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c44310:
    // 0x1c44310: 0x1af782a  slt         $t7, $t5, $t7
    ctx->pc = 0x1c44310u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c44314: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C44314u;
    {
        const bool branch_taken_0x1c44314 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c44314) {
            ctx->pc = 0x1C44318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C44314u;
            // 0x1c44318: 0x8d6e001c  lw          $t6, 0x1C($t3) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C442E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c442e4;
        }
    }
    ctx->pc = 0x1C4431Cu;
label_1c4431c:
    // 0x1c4431c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4431cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44324: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44324u;
        // 0x1c44328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4432Cu;
    // 0x1c4432c: 0x0  nop
    ctx->pc = 0x1c4432cu;
    // NOP
    ctx->pc = 0x1c44330u;
}
