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

// Function: sub_01C32220
// Address: 0x1c32220 - 0x1c32274
void sub_01C32220_0x1c32220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32220_0x1c32220");
#endif

    switch (ctx->pc) {
        case 0x1c32264u: goto label_1c32264;
        case 0x1c32268u: goto label_1c32268;
        default: break;
    }

    ctx->pc = 0x1c32220u;

    // 0x1c32220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c32220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c32224: 0x2484ff0e  addiu       $a0, $a0, -0xF2
    ctx->pc = 0x1c32224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967054));
    // 0x1c32228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c32228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3222c: 0x2c8f0005  sltiu       $t7, $a0, 0x5
    ctx->pc = 0x1c3222cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c32230: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C32230u;
    {
        const bool branch_taken_0x1c32230 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32230u;
        // 0x1c32234: 0x3c0e01c3  lui         $t6, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c32230) {
            ctx->pc = 0x1C322E4u;
            return;
        }
    }
    ctx->pc = 0x1C32238u;
    // 0x1c32238: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c32238u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c3223c: 0x25ce320c  addiu       $t6, $t6, 0x320C
    ctx->pc = 0x1c3223cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12812));
    // 0x1c32240: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c32240u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c32244: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c32244u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c32248: 0x1a00008  jr          $t5
    ctx->pc = 0x1C32248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C32250u: goto label_1c32250;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32248u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C32250u;
label_1c32250:
    // 0x1c32250: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c32250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32254: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c32254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c32258: 0x3c0601c4  lui         $a2, 0x1C4
    ctx->pc = 0x1c32258u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)452 << 16));
    // 0x1c3225c: 0xc70c222  jal         func_1C30888
    ctx->pc = 0x1C3225Cu;
    SET_GPR_U32(ctx, 31, 0x1C32264u);
    ctx->pc = 0x1C32260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3225Cu;
    // 0x1c32260: 0x24c6e660  addiu       $a2, $a2, -0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30888u, 0x1C3225Cu, 0x1C32264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C32264u;
label_1c32264:
    // 0x1c32264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c32264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c32268:
    // 0x1c32268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c32268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3226c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3226Cu;
        // 0x1c32270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32274u;
}
