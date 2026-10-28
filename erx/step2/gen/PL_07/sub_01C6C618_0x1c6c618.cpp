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

// Function: sub_01C6C618
// Address: 0x1c6c618 - 0x1c6c648
void sub_01C6C618_0x1c6c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C618_0x1c6c618");
#endif

    ctx->pc = 0x1c6c618u;

    // 0x1c6c618: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c6c618u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c6c61c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C6C61Cu;
    {
        const bool branch_taken_0x1c6c61c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C61Cu;
        // 0x1c6c620: 0x3c0e01c7  lui         $t6, 0x1C7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)455 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c61c) {
            ctx->pc = 0x1C6C690u;
            return;
        }
    }
    ctx->pc = 0x1C6C624u;
    // 0x1c6c624: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c6c624u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c6c628: 0x25ced09c  addiu       $t6, $t6, -0x2F64
    ctx->pc = 0x1c6c628u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955164));
    // 0x1c6c62c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6c62cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6c630: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c6c630u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6c634: 0x1a00008  jr          $t5
    ctx->pc = 0x1C6C634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6C63Cu: goto label_1c6c63c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C634u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C6C63Cu;
label_1c6c63c:
    // 0x1c6c63c: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6c63cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c640: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C640u;
        // 0x1c6c644: 0x25e213d0  addiu       $v0, $t7, 0x13D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 5072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C648u;
}
