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

// Function: sub_01C02440
// Address: 0x1c02440 - 0x1c024a0
void sub_01C02440_0x1c02440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02440_0x1c02440");
#endif

    switch (ctx->pc) {
        case 0x1c0245cu: goto label_1c0245c;
        default: break;
    }

    ctx->pc = 0x1c02440u;

    // 0x1c02440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c02444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c02448: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c02448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c0244c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0244cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02450: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c02450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c02454: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C02454u;
    SET_GPR_U32(ctx, 31, 0x1C0245Cu);
    ctx->pc = 0x1C02458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02454u;
    // 0x1c02458: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C02454u, 0x1C0245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0245Cu;
label_1c0245c:
    // 0x1c0245c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c0245cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c02460: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1c02460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1c02464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c02464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02468: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c02468u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c0246c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1c0246cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c02470: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c02470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c02474: 0x91cf0b56  lbu         $t7, 0xB56($t6)
    ctx->pc = 0x1c02474u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 2902)));
    // 0x1c02478: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C02478u;
    {
        const bool branch_taken_0x1c02478 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02478u;
        // 0x1c0247c: 0x24a537c0  addiu       $a1, $a1, 0x37C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02478) {
            ctx->pc = 0x1C0248Cu;
            goto label_1c0248c;
        }
    }
    ctx->pc = 0x1C02480u;
    // 0x1c02480: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c02480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c02484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c02484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c02488: 0x24a59800  addiu       $a1, $a1, -0x6800
    ctx->pc = 0x1c02488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940672));
label_1c0248c:
    // 0x1c0248c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0248cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c02490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c02494: 0x8700406  j           func_1C01018
    ctx->pc = 0x1C02494u;
    ctx->pc = 0x1C02498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02494u;
    // 0x1c02498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01018u;
    sub_01C01018_0x1c01018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0249Cu;
    // 0x1c0249c: 0x0  nop
    ctx->pc = 0x1c0249cu;
    // NOP
    ctx->pc = 0x1c024a0u;
}
