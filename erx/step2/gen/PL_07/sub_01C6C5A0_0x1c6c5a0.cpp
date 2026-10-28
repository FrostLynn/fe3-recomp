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

// Function: sub_01C6C5A0
// Address: 0x1c6c5a0 - 0x1c6c618
void sub_01C6C5A0_0x1c6c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C5A0_0x1c6c5a0");
#endif

    switch (ctx->pc) {
        case 0x1c6c5e0u: goto label_1c6c5e0;
        case 0x1c6c5e4u: goto label_1c6c5e4;
        case 0x1c6c5fcu: goto label_1c6c5fc;
        case 0x1c6c604u: goto label_1c6c604;
        default: break;
    }

    ctx->pc = 0x1c6c5a0u;

    // 0x1c6c5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c5a4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c6c5a4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5a8: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c6c5a8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c5b0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c6c5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5b4: 0x240f0123  addiu       $t7, $zero, 0x123
    ctx->pc = 0x1c6c5b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1c6c5b8: 0x11cf0014  beq         $t6, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C6C5B8u;
    {
        const bool branch_taken_0x1c6c5b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C6C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C5B8u;
        // 0x1c6c5bc: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c5b8) {
            ctx->pc = 0x1C6C60Cu;
            goto label_1c6c60c;
        }
    }
    ctx->pc = 0x1C6C5C0u;
    // 0x1c6c5c0: 0x240f0124  addiu       $t7, $zero, 0x124
    ctx->pc = 0x1c6c5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x1c6c5c4: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6C5C4u;
    {
        const bool branch_taken_0x1c6c5c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C6C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C5C4u;
        // 0x1c6c5c8: 0x3c0401c7  lui         $a0, 0x1C7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)455 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c5c4) {
            ctx->pc = 0x1C6C5F0u;
            goto label_1c6c5f0;
        }
    }
    ctx->pc = 0x1C6C5CCu;
    // 0x1c6c5cc: 0x3c0501c7  lui         $a1, 0x1C7
    ctx->pc = 0x1c6c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c5d0: 0x24849ec0  addiu       $a0, $a0, -0x6140
    ctx->pc = 0x1c6c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942400));
    // 0x1c6c5d4: 0x24a5d090  addiu       $a1, $a1, -0x2F70
    ctx->pc = 0x1c6c5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955152));
    // 0x1c6c5d8: 0xc71a7b2  jal         func_1C69EC8
    ctx->pc = 0x1C6C5D8u;
    SET_GPR_U32(ctx, 31, 0x1C6C5E0u);
    ctx->pc = 0x1C6C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C5D8u;
    // 0x1c6c5dc: 0x24060314  addiu       $a2, $zero, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EC8u, 0x1C6C5D8u, 0x1C6C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C5E0u;
label_1c6c5e0:
    // 0x1c6c5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6c5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c5e4:
    // 0x1c6c5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C5E8u;
        // 0x1c6c5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C5F0u;
label_1c6c5f0:
    // 0x1c6c5f0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1c6c5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5f4: 0x3c0601c7  lui         $a2, 0x1C7
    ctx->pc = 0x1c6c5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c5f8: 0x24c61380  addiu       $a2, $a2, 0x1380
    ctx->pc = 0x1c6c5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4992));
label_1c6c5fc:
    // 0x1c6c5fc: 0xc71abe4  jal         func_1C6AF90
    ctx->pc = 0x1C6C5FCu;
    SET_GPR_U32(ctx, 31, 0x1C6C604u);
    ctx->pc = 0x1C6AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AF90u, 0x1C6C5FCu, 0x1C6C604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C604u;
label_1c6c604:
    // 0x1c6c604: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C6C604u;
    {
        const bool branch_taken_0x1c6c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C604u;
        // 0x1c6c608: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c604) {
            ctx->pc = 0x1C6C5E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c5e4;
        }
    }
    ctx->pc = 0x1C6C60Cu;
label_1c6c60c:
    // 0x1c6c60c: 0x3c0601c7  lui         $a2, 0x1C7
    ctx->pc = 0x1c6c60cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c610: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6C610u;
    {
        const bool branch_taken_0x1c6c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C610u;
        // 0x1c6c614: 0x24c61330  addiu       $a2, $a2, 0x1330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c610) {
            ctx->pc = 0x1C6C5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c5fc;
        }
    }
    ctx->pc = 0x1C6C618u;
}
