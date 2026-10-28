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

// Function: sub_01DD86F8
// Address: 0x1dd86f8 - 0x1dd8778
void sub_01DD86F8_0x1dd86f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD86F8_0x1dd86f8");
#endif

    switch (ctx->pc) {
        case 0x1dd8718u: goto label_1dd8718;
        case 0x1dd8728u: goto label_1dd8728;
        case 0x1dd8754u: goto label_1dd8754;
        default: break;
    }

    ctx->pc = 0x1dd86f8u;

    // 0x1dd86f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd86f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd86fc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd86fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd8700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd8704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd8708: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd8708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd870c: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd870cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd8710: 0xc7760ca  jal         func_1DD8328
    ctx->pc = 0x1DD8710u;
    SET_GPR_U32(ctx, 31, 0x1DD8718u);
    ctx->pc = 0x1DD8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8710u;
    // 0x1dd8714: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8328u, 0x1DD8710u, 0x1DD8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8718u;
label_1dd8718:
    // 0x1dd8718: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd8718u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd871c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd871cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8720: 0xc7760c6  jal         func_1DD8318
    ctx->pc = 0x1DD8720u;
    SET_GPR_U32(ctx, 31, 0x1DD8728u);
    ctx->pc = 0x1DD8724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8720u;
    // 0x1dd8724: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8318u, 0x1DD8720u, 0x1DD8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8728u;
label_1dd8728:
    // 0x1dd8728: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1dd8728u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1dd872c: 0x29ef0009  slti        $t7, $t7, 0x9
    ctx->pc = 0x1dd872cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1dd8730: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD8730u;
    {
        const bool branch_taken_0x1dd8730 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8730u;
        // 0x1dd8734: 0x24440390  addiu       $a0, $v0, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8730) {
            ctx->pc = 0x1DD8754u;
            goto label_1dd8754;
        }
    }
    ctx->pc = 0x1DD8738u;
    // 0x1dd8738: 0x8c8e0014  lw          $t6, 0x14($a0)
    ctx->pc = 0x1dd8738u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1dd873c: 0x240f009d  addiu       $t7, $zero, 0x9D
    ctx->pc = 0x1dd873cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1dd8740: 0x55cf0005  bnel        $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD8740u;
    {
        const bool branch_taken_0x1dd8740 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd8740) {
            ctx->pc = 0x1DD8744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD8740u;
            // 0x1dd8744: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD8758u;
            goto label_1dd8758;
        }
    }
    ctx->pc = 0x1DD8748u;
    // 0x1dd8748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd8748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd874c: 0xc7760c8  jal         func_1DD8320
    ctx->pc = 0x1DD874Cu;
    SET_GPR_U32(ctx, 31, 0x1DD8754u);
    ctx->pc = 0x1DD8750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD874Cu;
    // 0x1dd8750: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8320u, 0x1DD874Cu, 0x1DD8754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8754u;
label_1dd8754:
    // 0x1dd8754: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd8754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dd8758:
    // 0x1dd8758: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd8758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd875c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd875cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8760: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd8760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd8764: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd8764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd8768: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd8768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd876c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd876cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd8770: 0x87760dc  j           func_1DD8370
    ctx->pc = 0x1DD8770u;
    ctx->pc = 0x1DD8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8770u;
    // 0x1dd8774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8370u;
    sub_01DD8370_0x1dd8370(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD8778u;
}
