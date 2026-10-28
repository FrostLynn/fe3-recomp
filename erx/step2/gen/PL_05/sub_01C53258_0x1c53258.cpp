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

// Function: sub_01C53258
// Address: 0x1c53258 - 0x1c532d8
void sub_01C53258_0x1c53258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C53258_0x1c53258");
#endif

    switch (ctx->pc) {
        case 0x1c53298u: goto label_1c53298;
        case 0x1c5329cu: goto label_1c5329c;
        case 0x1c532b8u: goto label_1c532b8;
        case 0x1c532ccu: goto label_1c532cc;
        default: break;
    }

    ctx->pc = 0x1c53258u;

    // 0x1c53258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c53258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5325c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c5325cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53260: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c53260u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c53264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c53268: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c53268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5326c: 0x240f0100  addiu       $t7, $zero, 0x100
    ctx->pc = 0x1c5326cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c53270: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C53270u;
    {
        const bool branch_taken_0x1c53270 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C53274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53270u;
        // 0x1c53274: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53270) {
            ctx->pc = 0x1C532C0u;
            goto label_1c532c0;
        }
    }
    ctx->pc = 0x1C53278u;
    // 0x1c53278: 0x240f0101  addiu       $t7, $zero, 0x101
    ctx->pc = 0x1c53278u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1c5327c: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C5327Cu;
    {
        const bool branch_taken_0x1c5327c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C53280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5327Cu;
        // 0x1c53280: 0x3c0401c5  lui         $a0, 0x1C5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)453 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5327c) {
            ctx->pc = 0x1C532A8u;
            goto label_1c532a8;
        }
    }
    ctx->pc = 0x1C53284u;
    // 0x1c53284: 0x3c0501c5  lui         $a1, 0x1C5
    ctx->pc = 0x1c53284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)453 << 16));
    // 0x1c53288: 0x2484f9e8  addiu       $a0, $a0, -0x618
    ctx->pc = 0x1c53288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965736));
    // 0x1c5328c: 0x24a54290  addiu       $a1, $a1, 0x4290
    ctx->pc = 0x1c5328cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17040));
    // 0x1c53290: 0xc713e7c  jal         func_1C4F9F0
    ctx->pc = 0x1C53290u;
    SET_GPR_U32(ctx, 31, 0x1C53298u);
    ctx->pc = 0x1C53294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53290u;
    // 0x1c53294: 0x240605cb  addiu       $a2, $zero, 0x5CB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1483));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9F0u, 0x1C53290u, 0x1C53298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53298u;
label_1c53298:
    // 0x1c53298: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c53298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5329c:
    // 0x1c5329c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5329cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c532a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C532A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C532A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C532A0u;
        // 0x1c532a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C532A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C532A8u;
label_1c532a8:
    // 0x1c532a8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1c532a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c532ac: 0x3c0601c6  lui         $a2, 0x1C6
    ctx->pc = 0x1c532acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)454 << 16));
    // 0x1c532b0: 0xc71427e  jal         func_1C509F8
    ctx->pc = 0x1C532B0u;
    SET_GPR_U32(ctx, 31, 0x1C532B8u);
    ctx->pc = 0x1C532B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C532B0u;
    // 0x1c532b4: 0x24c6bb30  addiu       $a2, $a2, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C509F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C509F8u, 0x1C532B0u, 0x1C532B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C532B8u;
label_1c532b8:
    // 0x1c532b8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C532B8u;
    {
        const bool branch_taken_0x1c532b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C532BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C532B8u;
        // 0x1c532bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c532b8) {
            ctx->pc = 0x1C5329Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5329c;
        }
    }
    ctx->pc = 0x1C532C0u;
label_1c532c0:
    // 0x1c532c0: 0x3c0601c6  lui         $a2, 0x1C6
    ctx->pc = 0x1c532c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)454 << 16));
    // 0x1c532c4: 0xc714c4e  jal         func_1C53138
    ctx->pc = 0x1C532C4u;
    SET_GPR_U32(ctx, 31, 0x1C532CCu);
    ctx->pc = 0x1C532C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C532C4u;
    // 0x1c532c8: 0x24c6bb00  addiu       $a2, $a2, -0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C53138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C53138u, 0x1C532C4u, 0x1C532CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C532CCu;
label_1c532cc:
    // 0x1c532cc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C532CCu;
    {
        const bool branch_taken_0x1c532cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C532D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C532CCu;
        // 0x1c532d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c532cc) {
            ctx->pc = 0x1C5329Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5329c;
        }
    }
    ctx->pc = 0x1C532D4u;
    // 0x1c532d4: 0x0  nop
    ctx->pc = 0x1c532d4u;
    // NOP
    ctx->pc = 0x1c532d8u;
}
