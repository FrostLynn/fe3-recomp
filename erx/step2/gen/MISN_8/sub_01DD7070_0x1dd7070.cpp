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

// Function: sub_01DD7070
// Address: 0x1dd7070 - 0x1dd70b0
void sub_01DD7070_0x1dd7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7070_0x1dd7070");
#endif

    switch (ctx->pc) {
        case 0x1dd7088u: goto label_1dd7088;
        default: break;
    }

    ctx->pc = 0x1dd7070u;

    // 0x1dd7070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd7074: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd7074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd7078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd7078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd707c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd7080: 0xc775b06  jal         func_1DD6C18
    ctx->pc = 0x1DD7080u;
    SET_GPR_U32(ctx, 31, 0x1DD7088u);
    ctx->pc = 0x1DD7084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7080u;
    // 0x1dd7084: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C18u, 0x1DD7080u, 0x1DD7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7088u;
label_1dd7088:
    // 0x1dd7088: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dd7088u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dd708c: 0x240f014e  addiu       $t7, $zero, 0x14E
    ctx->pc = 0x1dd708cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dd7090: 0x15cf0005  bne         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD7090u;
    {
        const bool branch_taken_0x1dd7090 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7090u;
        // 0x1dd7094: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7090) {
            ctx->pc = 0x1DD70A8u;
            goto label_1dd70a8;
        }
    }
    ctx->pc = 0x1DD7098u;
    // 0x1dd7098: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd7098u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd709c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd709cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd70a0: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dd70a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dd70a4: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd70a4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd70a8:
    // 0x1dd70a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD70A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD70A8u;
        // 0x1dd70ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD70A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD70B0u;
}
