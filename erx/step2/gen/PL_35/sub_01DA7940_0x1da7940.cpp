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

// Function: sub_01DA7940
// Address: 0x1da7940 - 0x1da7998
void sub_01DA7940_0x1da7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7940_0x1da7940");
#endif

    switch (ctx->pc) {
        case 0x1da795cu: goto label_1da795c;
        case 0x1da7964u: goto label_1da7964;
        case 0x1da7978u: goto label_1da7978;
        case 0x1da797cu: goto label_1da797c;
        default: break;
    }

    ctx->pc = 0x1da7940u;

    // 0x1da7940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7944: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da7944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da7948: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da794c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da794cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7950: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7954: 0xc769b92  jal         func_1DA6E48
    ctx->pc = 0x1DA7954u;
    SET_GPR_U32(ctx, 31, 0x1DA795Cu);
    ctx->pc = 0x1DA7958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7954u;
    // 0x1da7958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E48u, 0x1DA7954u, 0x1DA795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA795Cu;
label_1da795c:
    // 0x1da795c: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA795Cu;
    SET_GPR_U32(ctx, 31, 0x1DA7964u);
    ctx->pc = 0x1DA7960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA795Cu;
    // 0x1da7960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA795Cu, 0x1DA7964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7964u;
label_1da7964:
    // 0x1da7964: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7964u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7968: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA7968u;
    {
        const bool branch_taken_0x1da7968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7968u;
        // 0x1da796c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7968) {
            ctx->pc = 0x1DA798Cu;
            goto label_1da798c;
        }
    }
    ctx->pc = 0x1DA7970u;
    // 0x1da7970: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA7970u;
    SET_GPR_U32(ctx, 31, 0x1DA7978u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA7970u, 0x1DA7978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7978u;
label_1da7978:
    // 0x1da7978: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1da797c:
    // 0x1da797c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da797cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7984: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7984u;
        // 0x1da7988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA798Cu;
label_1da798c:
    // 0x1da798c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DA798Cu;
    {
        const bool branch_taken_0x1da798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA798Cu;
        // 0x1da7990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da798c) {
            ctx->pc = 0x1DA797Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da797c;
        }
    }
    ctx->pc = 0x1DA7994u;
    // 0x1da7994: 0x0  nop
    ctx->pc = 0x1da7994u;
    // NOP
    ctx->pc = 0x1da7998u;
}
