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

// Function: sub_01C83D0C
// Address: 0x1c83d0c - 0x1c83e50
void sub_01C83D0C_0x1c83d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83D0C_0x1c83d0c");
#endif

    switch (ctx->pc) {
        case 0x1c83d1cu: goto label_1c83d1c;
        case 0x1c83d24u: goto label_1c83d24;
        case 0x1c83d2cu: goto label_1c83d2c;
        case 0x1c83d40u: goto label_1c83d40;
        case 0x1c83d54u: goto label_1c83d54;
        case 0x1c83d6cu: goto label_1c83d6c;
        case 0x1c83d74u: goto label_1c83d74;
        case 0x1c83d88u: goto label_1c83d88;
        case 0x1c83d90u: goto label_1c83d90;
        case 0x1c83da0u: goto label_1c83da0;
        case 0x1c83da8u: goto label_1c83da8;
        case 0x1c83db0u: goto label_1c83db0;
        case 0x1c83dc4u: goto label_1c83dc4;
        case 0x1c83dd8u: goto label_1c83dd8;
        case 0x1c83decu: goto label_1c83dec;
        case 0x1c83e00u: goto label_1c83e00;
        case 0x1c83e14u: goto label_1c83e14;
        case 0x1c83e28u: goto label_1c83e28;
        case 0x1c83e3cu: goto label_1c83e3c;
        default: break;
    }

    ctx->pc = 0x1c83d0cu;

    // 0x1c83d0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d14: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c83d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c83d18: 0x24c67bd0  addiu       $a2, $a2, 0x7BD0
    ctx->pc = 0x1c83d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31696));
label_1c83d1c:
    // 0x1c83d1c: 0xc720ec6  jal         func_1C83B18
    ctx->pc = 0x1C83D1Cu;
    SET_GPR_U32(ctx, 31, 0x1C83D24u);
    ctx->pc = 0x1C83B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C83B18u, 0x1C83D1Cu, 0x1C83D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83D24u;
label_1c83d24:
    // 0x1c83d24: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1C83D24u;
    {
        const bool branch_taken_0x1c83d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D24u;
        // 0x1c83d28: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d24) {
            ctx->pc = 0x1C83D00u;
            return;
        }
    }
    ctx->pc = 0x1C83D2Cu;
label_1c83d2c:
    // 0x1c83d2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d34: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c83d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c83d38: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C83D38u;
    {
        const bool branch_taken_0x1c83d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D38u;
        // 0x1c83d3c: 0x24c67f00  addiu       $a2, $a2, 0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d38) {
            ctx->pc = 0x1C83D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83d1c;
        }
    }
    ctx->pc = 0x1C83D40u;
label_1c83d40:
    // 0x1c83d40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d48: 0x3c0601c9  lui         $a2, 0x1C9
    ctx->pc = 0x1c83d48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)457 << 16));
    // 0x1c83d4c: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C83D4Cu;
    {
        const bool branch_taken_0x1c83d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D4Cu;
        // 0x1c83d50: 0x24c68230  addiu       $a2, $a2, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d4c) {
            ctx->pc = 0x1C83D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83d1c;
        }
    }
    ctx->pc = 0x1C83D54u;
label_1c83d54:
    // 0x1c83d54: 0x3c0401c8  lui         $a0, 0x1C8
    ctx->pc = 0x1c83d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)456 << 16));
    // 0x1c83d58: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c83d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c83d5c: 0x24840fb8  addiu       $a0, $a0, 0xFB8
    ctx->pc = 0x1c83d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4024));
    // 0x1c83d60: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x1c83d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
    // 0x1c83d64: 0xc7203f0  jal         func_1C80FC0
    ctx->pc = 0x1C83D64u;
    SET_GPR_U32(ctx, 31, 0x1C83D6Cu);
    ctx->pc = 0x1C83D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83D64u;
    // 0x1c83d68: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80FC0u, 0x1C83D64u, 0x1C83D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83D6Cu;
label_1c83d6c:
    // 0x1c83d6c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C83D6Cu;
    {
        const bool branch_taken_0x1c83d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D6Cu;
        // 0x1c83d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d6c) {
            ctx->pc = 0x1C83D00u;
            return;
        }
    }
    ctx->pc = 0x1C83D74u;
label_1c83d74:
    // 0x1c83d74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d7c: 0x3c0601c8  lui         $a2, 0x1C8
    ctx->pc = 0x1c83d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)456 << 16));
    // 0x1c83d80: 0xc7209cc  jal         func_1C82730
    ctx->pc = 0x1C83D80u;
    SET_GPR_U32(ctx, 31, 0x1C83D88u);
    ctx->pc = 0x1C83D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83D80u;
    // 0x1c83d84: 0x24c67bc0  addiu       $a2, $a2, 0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C82730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C82730u, 0x1C83D80u, 0x1C83D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83D88u;
label_1c83d88:
    // 0x1c83d88: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C83D88u;
    {
        const bool branch_taken_0x1c83d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83D88u;
        // 0x1c83d8c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83d88) {
            ctx->pc = 0x1C83D00u;
            return;
        }
    }
    ctx->pc = 0x1C83D90u;
label_1c83d90:
    // 0x1c83d90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c83d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c83d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c83da0:
    // 0x1c83da0: 0xc720ef6  jal         func_1C83BD8
    ctx->pc = 0x1C83DA0u;
    SET_GPR_U32(ctx, 31, 0x1C83DA8u);
    ctx->pc = 0x1C83BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C83BD8u, 0x1C83DA0u, 0x1C83DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83DA8u;
label_1c83da8:
    // 0x1c83da8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C83DA8u;
    {
        const bool branch_taken_0x1c83da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83DA8u;
        // 0x1c83dac: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83da8) {
            ctx->pc = 0x1C83D00u;
            return;
        }
    }
    ctx->pc = 0x1C83DB0u;
label_1c83db0:
    // 0x1c83db0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83db4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1c83db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c83db8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83dbc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C83DBCu;
    {
        const bool branch_taken_0x1c83dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83DBCu;
        // 0x1c83dc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83dbc) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83DC4u;
label_1c83dc4:
    // 0x1c83dc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83dc8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c83dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c83dcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83dd0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C83DD0u;
    {
        const bool branch_taken_0x1c83dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83DD0u;
        // 0x1c83dd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83dd0) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83DD8u;
label_1c83dd8:
    // 0x1c83dd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83ddc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c83ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c83de0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83de4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C83DE4u;
    {
        const bool branch_taken_0x1c83de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83DE4u;
        // 0x1c83de8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83de4) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83DECu;
label_1c83dec:
    // 0x1c83dec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83df0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1c83df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c83df4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83df8: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C83DF8u;
    {
        const bool branch_taken_0x1c83df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83DF8u;
        // 0x1c83dfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83df8) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83E00u;
label_1c83e00:
    // 0x1c83e00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e04: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1c83e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c83e08: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e0c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C83E0Cu;
    {
        const bool branch_taken_0x1c83e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83E0Cu;
        // 0x1c83e10: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83e0c) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83E14u;
label_1c83e14:
    // 0x1c83e14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e18: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1c83e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c83e1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e20: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C83E20u;
    {
        const bool branch_taken_0x1c83e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83E20u;
        // 0x1c83e24: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83e20) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83E28u;
label_1c83e28:
    // 0x1c83e28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e2c: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x1c83e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c83e30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e34: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C83E34u;
    {
        const bool branch_taken_0x1c83e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83E34u;
        // 0x1c83e38: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83e34) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83E3Cu;
label_1c83e3c:
    // 0x1c83e3c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c83e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e40: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1c83e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c83e44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c83e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83e48: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C83E48u;
    {
        const bool branch_taken_0x1c83e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C83E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83E48u;
        // 0x1c83e4c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83e48) {
            ctx->pc = 0x1C83DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83da0;
        }
    }
    ctx->pc = 0x1C83E50u;
}
