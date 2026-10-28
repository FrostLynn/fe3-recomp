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

// Function: sub_01C21918
// Address: 0x1c21918 - 0x1c21968
void sub_01C21918_0x1c21918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21918_0x1c21918");
#endif

    switch (ctx->pc) {
        case 0x1c2192cu: goto label_1c2192c;
        case 0x1c21954u: goto label_1c21954;
        default: break;
    }

    ctx->pc = 0x1c21918u;

    // 0x1c21918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2191c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21920: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21924: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21924u;
    SET_GPR_U32(ctx, 31, 0x1C2192Cu);
    ctx->pc = 0x1C21928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21924u;
    // 0x1c21928: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21924u, 0x1C2192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2192Cu;
label_1c2192c:
    // 0x1c2192c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c2192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c21930: 0x8c4f00b0  lw          $t7, 0xB0($v0)
    ctx->pc = 0x1c21930u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c21934: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c21934u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c21938: 0x8ded00c4  lw          $t5, 0xC4($t7)
    ctx->pc = 0x1c21938u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 196)));
    // 0x1c2193c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c2193cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c21940: 0x25ef00d4  addiu       $t7, $t7, 0xD4
    ctx->pc = 0x1c21940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 212));
    // 0x1c21944: 0xd780a  movz        $t7, $zero, $t5
    ctx->pc = 0x1c21944u;
    if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 0));
    // 0x1c21948: 0x24a55d80  addiu       $a1, $a1, 0x5D80
    ctx->pc = 0x1c21948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23936));
    // 0x1c2194c: 0xc707c4c  jal         func_1C1F130
    ctx->pc = 0x1C2194Cu;
    SET_GPR_U32(ctx, 31, 0x1C21954u);
    ctx->pc = 0x1C21950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2194Cu;
    // 0x1c21950: 0x8de4001c  lw          $a0, 0x1C($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F130u, 0x1C2194Cu, 0x1C21954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21954u;
label_1c21954:
    // 0x1c21954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21958: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c21958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2195c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2195Cu;
        // 0x1c21960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21964u;
    // 0x1c21964: 0x0  nop
    ctx->pc = 0x1c21964u;
    // NOP
    ctx->pc = 0x1c21968u;
}
