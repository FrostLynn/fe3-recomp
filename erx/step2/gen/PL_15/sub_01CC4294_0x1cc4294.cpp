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

// Function: sub_01CC4294
// Address: 0x1cc4294 - 0x1cc4300
void sub_01CC4294_0x1cc4294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4294_0x1cc4294");
#endif

    switch (ctx->pc) {
        case 0x1cc42a4u: goto label_1cc42a4;
        case 0x1cc42b4u: goto label_1cc42b4;
        case 0x1cc42c4u: goto label_1cc42c4;
        case 0x1cc42d4u: goto label_1cc42d4;
        case 0x1cc42e4u: goto label_1cc42e4;
        default: break;
    }

    ctx->pc = 0x1cc4294u;

    // 0x1cc4294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc429c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1CC429Cu;
    {
        const bool branch_taken_0x1cc429c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC429Cu;
        // 0x1cc42a0: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc429c) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42A4u;
label_1cc42a4:
    // 0x1cc42a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc42a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42ac: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1CC42ACu;
    {
        const bool branch_taken_0x1cc42ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42ACu;
        // 0x1cc42b0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc42ac) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42B4u;
label_1cc42b4:
    // 0x1cc42b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc42b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc42b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42bc: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1CC42BCu;
    {
        const bool branch_taken_0x1cc42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42BCu;
        // 0x1cc42c0: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc42bc) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42C4u;
label_1cc42c4:
    // 0x1cc42c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc42c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc42c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42cc: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CC42CCu;
    {
        const bool branch_taken_0x1cc42cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42CCu;
        // 0x1cc42d0: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc42cc) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42D4u;
label_1cc42d4:
    // 0x1cc42d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc42d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc42d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42dc: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CC42DCu;
    {
        const bool branch_taken_0x1cc42dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42DCu;
        // 0x1cc42e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc42dc) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42E4u;
label_1cc42e4:
    // 0x1cc42e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc42e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc42e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc42ec: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x1CC42ECu;
    {
        const bool branch_taken_0x1cc42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC42ECu;
        // 0x1cc42f0: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc42ec) {
            ctx->pc = 0x1CC4220u;
            return;
        }
    }
    ctx->pc = 0x1CC42F4u;
    // 0x1cc42f4: 0x0  nop
    ctx->pc = 0x1cc42f4u;
    // NOP
    // 0x1cc42f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC42F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC42F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4300u;
}
