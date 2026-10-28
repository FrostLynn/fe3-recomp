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

// Function: sub_01D47CDC
// Address: 0x1d47cdc - 0x1d47d58
void sub_01D47CDC_0x1d47cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47CDC_0x1d47cdc");
#endif

    switch (ctx->pc) {
        case 0x1d47cecu: goto label_1d47cec;
        case 0x1d47cfcu: goto label_1d47cfc;
        case 0x1d47d0cu: goto label_1d47d0c;
        case 0x1d47d1cu: goto label_1d47d1c;
        case 0x1d47d44u: goto label_1d47d44;
        default: break;
    }

    ctx->pc = 0x1d47cdcu;

    // 0x1d47cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ce4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D47CE4u;
    {
        const bool branch_taken_0x1d47ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47CE4u;
        // 0x1d47ce8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ce4) {
            ctx->pc = 0x1D47C68u;
            return;
        }
    }
    ctx->pc = 0x1D47CECu;
label_1d47cec:
    // 0x1d47cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47cf4: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D47CF4u;
    {
        const bool branch_taken_0x1d47cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47CF4u;
        // 0x1d47cf8: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47cf4) {
            ctx->pc = 0x1D47C68u;
            return;
        }
    }
    ctx->pc = 0x1D47CFCu;
label_1d47cfc:
    // 0x1d47cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d04: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1D47D04u;
    {
        const bool branch_taken_0x1d47d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D04u;
        // 0x1d47d08: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d04) {
            ctx->pc = 0x1D47C68u;
            return;
        }
    }
    ctx->pc = 0x1D47D0Cu;
label_1d47d0c:
    // 0x1d47d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d14: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D47D14u;
    {
        const bool branch_taken_0x1d47d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D14u;
        // 0x1d47d18: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d14) {
            ctx->pc = 0x1D47C68u;
            return;
        }
    }
    ctx->pc = 0x1D47D1Cu;
label_1d47d1c:
    // 0x1d47d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d24: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1D47D24u;
    {
        const bool branch_taken_0x1d47d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D24u;
        // 0x1d47d28: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d24) {
            ctx->pc = 0x1D47C68u;
            return;
        }
    }
    ctx->pc = 0x1D47D2Cu;
    // 0x1d47d2c: 0x0  nop
    ctx->pc = 0x1d47d2cu;
    // NOP
    // 0x1d47d30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47d38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d47d3c: 0xc751760  jal         func_1D45D80
    ctx->pc = 0x1D47D3Cu;
    SET_GPR_U32(ctx, 31, 0x1D47D44u);
    ctx->pc = 0x1D47D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47D3Cu;
    // 0x1d47d40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D80u, 0x1D47D3Cu, 0x1D47D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47D44u;
label_1d47d44:
    // 0x1d47d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47d48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47d50: 0x87519f0  j           func_1D467C0
    ctx->pc = 0x1D47D50u;
    ctx->pc = 0x1D47D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47D50u;
    // 0x1d47d54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D467C0u;
    sub_01D467C0_0x1d467c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47D58u;
}
