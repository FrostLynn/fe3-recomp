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

// Function: sub_01C32178
// Address: 0x1c32178 - 0x1c321b8
void sub_01C32178_0x1c32178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32178_0x1c32178");
#endif

    switch (ctx->pc) {
        case 0x1c3219cu: goto label_1c3219c;
        default: break;
    }

    ctx->pc = 0x1c32178u;

    // 0x1c32178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3217c: 0x938f803c  lbu         $t7, -0x7FC4($gp)
    ctx->pc = 0x1c3217cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x1c32180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c32180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c32184: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C32184u;
    {
        const bool branch_taken_0x1c32184 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32184u;
        // 0x1c32188: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32184) {
            ctx->pc = 0x1C32194u;
            goto label_1c32194;
        }
    }
    ctx->pc = 0x1C3218Cu;
    // 0x1c3218c: 0x870c1de  j           func_1C30778
    ctx->pc = 0x1C3218Cu;
    ctx->pc = 0x1C32190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3218Cu;
    // 0x1c32190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30778u;
    sub_01C30778_0x1c30778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C32194u;
label_1c32194:
    // 0x1c32194: 0xc70c1de  jal         func_1C30778
    ctx->pc = 0x1C32194u;
    SET_GPR_U32(ctx, 31, 0x1C3219Cu);
    ctx->pc = 0x1C30778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30778u, 0x1C32194u, 0x1C3219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3219Cu;
label_1c3219c:
    // 0x1c3219c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c3219cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c321a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c321a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c321a4: 0xa38f803c  sb          $t7, -0x7FC4($gp)
    ctx->pc = 0x1c321a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934588), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c321a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C321A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C321A8u;
        // 0x1c321ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C321A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C321B0u;
    // 0x1c321b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C321B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C321B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C321B8u;
}
