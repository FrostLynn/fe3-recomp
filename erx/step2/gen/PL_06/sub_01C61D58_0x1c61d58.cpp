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

// Function: sub_01C61D58
// Address: 0x1c61d58 - 0x1c61db8
void sub_01C61D58_0x1c61d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61D58_0x1c61d58");
#endif

    switch (ctx->pc) {
        case 0x1c61d88u: goto label_1c61d88;
        case 0x1c61d8cu: goto label_1c61d8c;
        case 0x1c61dacu: goto label_1c61dac;
        default: break;
    }

    ctx->pc = 0x1c61d58u;

    // 0x1c61d58: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c61d58u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61d60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c61d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61d68: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c61d68u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61d6c: 0x24060324  addiu       $a2, $zero, 0x324
    ctx->pc = 0x1c61d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 804));
    // 0x1c61d70: 0x240f0103  addiu       $t7, $zero, 0x103
    ctx->pc = 0x1c61d70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x1c61d74: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C61D74u;
    {
        const bool branch_taken_0x1c61d74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C61D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D74u;
        // 0x1c61d78: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61d74) {
            ctx->pc = 0x1C61D98u;
            goto label_1c61d98;
        }
    }
    ctx->pc = 0x1C61D7Cu;
    // 0x1c61d7c: 0x3c0601c6  lui         $a2, 0x1C6
    ctx->pc = 0x1c61d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)454 << 16));
    // 0x1c61d80: 0xc7181dc  jal         func_1C60770
    ctx->pc = 0x1C61D80u;
    SET_GPR_U32(ctx, 31, 0x1C61D88u);
    ctx->pc = 0x1C61D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61D80u;
    // 0x1c61d84: 0x24c664a0  addiu       $a2, $a2, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60770u, 0x1C61D80u, 0x1C61D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61D88u;
label_1c61d88:
    // 0x1c61d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c61d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c61d8c:
    // 0x1c61d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61d90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D90u;
        // 0x1c61d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61D98u;
label_1c61d98:
    // 0x1c61d98: 0x3c0501c6  lui         $a1, 0x1C6
    ctx->pc = 0x1c61d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)454 << 16));
    // 0x1c61d9c: 0x3c0401c6  lui         $a0, 0x1C6
    ctx->pc = 0x1c61d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)454 << 16));
    // 0x1c61da0: 0x24a52918  addiu       $a1, $a1, 0x2918
    ctx->pc = 0x1c61da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10520));
    // 0x1c61da4: 0xc717d70  jal         func_1C5F5C0
    ctx->pc = 0x1C61DA4u;
    SET_GPR_U32(ctx, 31, 0x1C61DACu);
    ctx->pc = 0x1C61DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61DA4u;
    // 0x1c61da8: 0x2484f5b8  addiu       $a0, $a0, -0xA48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F5C0u, 0x1C61DA4u, 0x1C61DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61DACu;
label_1c61dac:
    // 0x1c61dac: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C61DACu;
    {
        const bool branch_taken_0x1c61dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61DACu;
        // 0x1c61db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61dac) {
            ctx->pc = 0x1C61D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61d8c;
        }
    }
    ctx->pc = 0x1C61DB4u;
    // 0x1c61db4: 0x0  nop
    ctx->pc = 0x1c61db4u;
    // NOP
    ctx->pc = 0x1c61db8u;
}
