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

// Function: sub_01CDD258
// Address: 0x1cdd258 - 0x1cdd2c0
void sub_01CDD258_0x1cdd258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD258_0x1cdd258");
#endif

    switch (ctx->pc) {
        case 0x1cdd270u: goto label_1cdd270;
        default: break;
    }

    ctx->pc = 0x1cdd258u;

    // 0x1cdd258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd25c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1cdd25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1cdd260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd264: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdd264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdd268: 0xc736b40  jal         func_1CDAD00
    ctx->pc = 0x1CDD268u;
    SET_GPR_U32(ctx, 31, 0x1CDD270u);
    ctx->pc = 0x1CDD26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD268u;
    // 0x1cdd26c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD00u, 0x1CDD268u, 0x1CDD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD270u;
label_1cdd270:
    // 0x1cdd270: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cdd270u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdd274: 0x144f000c  bne         $v0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDD274u;
    {
        const bool branch_taken_0x1cdd274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD274u;
        // 0x1cdd278: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd274) {
            ctx->pc = 0x1CDD2A8u;
            goto label_1cdd2a8;
        }
    }
    ctx->pc = 0x1CDD27Cu;
    // 0x1cdd27c: 0x8f8f8080  lw          $t7, -0x7F80($gp)
    ctx->pc = 0x1cdd27cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934656)));
    // 0x1cdd280: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CDD280u;
    {
        const bool branch_taken_0x1cdd280 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD280u;
        // 0x1cdd284: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd280) {
            ctx->pc = 0x1CDD2A8u;
            goto label_1cdd2a8;
        }
    }
    ctx->pc = 0x1CDD288u;
    // 0x1cdd288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdd288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd28c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd294: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd298: 0xaf8f8080  sw          $t7, -0x7F80($gp)
    ctx->pc = 0x1cdd298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934656), GPR_U32(ctx, 15));
    // 0x1cdd29c: 0x24a53e80  addiu       $a1, $a1, 0x3E80
    ctx->pc = 0x1cdd29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16000));
    // 0x1cdd2a0: 0x8736c88  j           func_1CDB220
    ctx->pc = 0x1CDD2A0u;
    ctx->pc = 0x1CDD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD2A0u;
    // 0x1cdd2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB220u;
    sub_01CDB220_0x1cdb220(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD2A8u;
label_1cdd2a8:
    // 0x1cdd2a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd2ac: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1cdd2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
    // 0x1cdd2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD2B4u;
        // 0x1cdd2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD2BCu;
    // 0x1cdd2bc: 0x0  nop
    ctx->pc = 0x1cdd2bcu;
    // NOP
    ctx->pc = 0x1cdd2c0u;
}
