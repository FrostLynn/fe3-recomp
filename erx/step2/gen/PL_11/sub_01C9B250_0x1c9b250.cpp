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

// Function: sub_01C9B250
// Address: 0x1c9b250 - 0x1c9b288
void sub_01C9B250_0x1c9b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B250_0x1c9b250");
#endif

    switch (ctx->pc) {
        case 0x1c9b274u: goto label_1c9b274;
        default: break;
    }

    ctx->pc = 0x1c9b250u;

    // 0x1c9b250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9b258: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x1c9b258u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c9b25c: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B25Cu;
    {
        const bool branch_taken_0x1c9b25c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B25Cu;
        // 0x1c9b260: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b25c) {
            ctx->pc = 0x1C9B26Cu;
            goto label_1c9b26c;
        }
    }
    ctx->pc = 0x1C9B264u;
    // 0x1c9b264: 0x8726c08  j           func_1C9B020
    ctx->pc = 0x1C9B264u;
    ctx->pc = 0x1C9B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B264u;
    // 0x1c9b268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B020u;
    sub_01C9B020_0x1c9b020(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B26Cu;
label_1c9b26c:
    // 0x1c9b26c: 0xc726690  jal         func_1C99A40
    ctx->pc = 0x1C9B26Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B274u);
    ctx->pc = 0x1C99A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99A40u, 0x1C9B26Cu, 0x1C9B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B274u;
label_1c9b274:
    // 0x1c9b274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9b274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9b278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b27c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B27Cu;
        // 0x1c9b280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B284u;
    // 0x1c9b284: 0x0  nop
    ctx->pc = 0x1c9b284u;
    // NOP
    ctx->pc = 0x1c9b288u;
}
