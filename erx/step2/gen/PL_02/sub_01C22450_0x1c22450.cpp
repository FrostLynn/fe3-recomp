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

// Function: sub_01C22450
// Address: 0x1c22450 - 0x1c224d0
void sub_01C22450_0x1c22450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C22450_0x1c22450");
#endif

    switch (ctx->pc) {
        case 0x1c22490u: goto label_1c22490;
        case 0x1c22494u: goto label_1c22494;
        case 0x1c224b0u: goto label_1c224b0;
        case 0x1c224c4u: goto label_1c224c4;
        default: break;
    }

    ctx->pc = 0x1c22450u;

    // 0x1c22450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c22450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c22454: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c22454u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22458: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c22458u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2245c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c22460: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c22460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22464: 0x240f00ee  addiu       $t7, $zero, 0xEE
    ctx->pc = 0x1c22464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x1c22468: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C22468u;
    {
        const bool branch_taken_0x1c22468 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C2246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22468u;
        // 0x1c2246c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22468) {
            ctx->pc = 0x1C224B8u;
            goto label_1c224b8;
        }
    }
    ctx->pc = 0x1C22470u;
    // 0x1c22470: 0x240f00ef  addiu       $t7, $zero, 0xEF
    ctx->pc = 0x1c22470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1c22474: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C22474u;
    {
        const bool branch_taken_0x1c22474 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C22478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22474u;
        // 0x1c22478: 0x3c0401c2  lui         $a0, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)450 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22474) {
            ctx->pc = 0x1C224A0u;
            goto label_1c224a0;
        }
    }
    ctx->pc = 0x1C2247Cu;
    // 0x1c2247c: 0x3c0501c2  lui         $a1, 0x1C2
    ctx->pc = 0x1c2247cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)450 << 16));
    // 0x1c22480: 0x2484f1c8  addiu       $a0, $a0, -0xE38
    ctx->pc = 0x1c22480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963656));
    // 0x1c22484: 0x24a53398  addiu       $a1, $a1, 0x3398
    ctx->pc = 0x1c22484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13208));
    // 0x1c22488: 0xc707c74  jal         func_1C1F1D0
    ctx->pc = 0x1C22488u;
    SET_GPR_U32(ctx, 31, 0x1C22490u);
    ctx->pc = 0x1C2248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22488u;
    // 0x1c2248c: 0x240604ab  addiu       $a2, $zero, 0x4AB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1D0u, 0x1C22488u, 0x1C22490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22490u;
label_1c22490:
    // 0x1c22490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c22490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c22494:
    // 0x1c22494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c22494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22498: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22498u;
        // 0x1c2249c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C224A0u;
label_1c224a0:
    // 0x1c224a0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1c224a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c224a4: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x1c224a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x1c224a8: 0xc70821e  jal         func_1C20878
    ctx->pc = 0x1C224A8u;
    SET_GPR_U32(ctx, 31, 0x1C224B0u);
    ctx->pc = 0x1C224ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C224A8u;
    // 0x1c224ac: 0x24c6b3e0  addiu       $a2, $a2, -0x4C20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20878u, 0x1C224A8u, 0x1C224B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C224B0u;
label_1c224b0:
    // 0x1c224b0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C224B0u;
    {
        const bool branch_taken_0x1c224b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C224B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C224B0u;
        // 0x1c224b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c224b0) {
            ctx->pc = 0x1C22494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c22494;
        }
    }
    ctx->pc = 0x1C224B8u;
label_1c224b8:
    // 0x1c224b8: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x1c224b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x1c224bc: 0xc7080b0  jal         func_1C202C0
    ctx->pc = 0x1C224BCu;
    SET_GPR_U32(ctx, 31, 0x1C224C4u);
    ctx->pc = 0x1C224C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C224BCu;
    // 0x1c224c0: 0x24c6b450  addiu       $a2, $a2, -0x4BB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C202C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C202C0u, 0x1C224BCu, 0x1C224C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C224C4u;
label_1c224c4:
    // 0x1c224c4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C224C4u;
    {
        const bool branch_taken_0x1c224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C224C4u;
        // 0x1c224c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c224c4) {
            ctx->pc = 0x1C22494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c22494;
        }
    }
    ctx->pc = 0x1C224CCu;
    // 0x1c224cc: 0x0  nop
    ctx->pc = 0x1c224ccu;
    // NOP
    ctx->pc = 0x1c224d0u;
}
