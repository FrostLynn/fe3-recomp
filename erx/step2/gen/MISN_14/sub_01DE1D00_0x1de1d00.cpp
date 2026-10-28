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

// Function: sub_01DE1D00
// Address: 0x1de1d00 - 0x1de1de8
void sub_01DE1D00_0x1de1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1D00_0x1de1d00");
#endif

    switch (ctx->pc) {
        case 0x1de1d20u: goto label_1de1d20;
        case 0x1de1d30u: goto label_1de1d30;
        case 0x1de1d38u: goto label_1de1d38;
        case 0x1de1d40u: goto label_1de1d40;
        case 0x1de1d64u: goto label_1de1d64;
        case 0x1de1dbcu: goto label_1de1dbc;
        case 0x1de1dc8u: goto label_1de1dc8;
        default: break;
    }

    ctx->pc = 0x1de1d00u;

    // 0x1de1d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1d04: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1d04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1d08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de1d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de1d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1d10: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1d14: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de1d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de1d18: 0xc77864a  jal         func_1DE1928
    ctx->pc = 0x1DE1D18u;
    SET_GPR_U32(ctx, 31, 0x1DE1D20u);
    ctx->pc = 0x1DE1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D18u;
    // 0x1de1d1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1928u, 0x1DE1D18u, 0x1DE1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1D20u;
label_1de1d20:
    // 0x1de1d20: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1d20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1d24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1de1d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1d28: 0xc778646  jal         func_1DE1918
    ctx->pc = 0x1DE1D28u;
    SET_GPR_U32(ctx, 31, 0x1DE1D30u);
    ctx->pc = 0x1DE1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D28u;
    // 0x1de1d2c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1918u, 0x1DE1D28u, 0x1DE1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1D30u;
label_1de1d30:
    // 0x1de1d30: 0xc7786a6  jal         func_1DE1A98
    ctx->pc = 0x1DE1D30u;
    SET_GPR_U32(ctx, 31, 0x1DE1D38u);
    ctx->pc = 0x1DE1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D30u;
    // 0x1de1d34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1A98u, 0x1DE1D30u, 0x1DE1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1D38u;
label_1de1d38:
    // 0x1de1d38: 0xc7786b4  jal         func_1DE1AD0
    ctx->pc = 0x1DE1D38u;
    SET_GPR_U32(ctx, 31, 0x1DE1D40u);
    ctx->pc = 0x1DE1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1AD0u, 0x1DE1D38u, 0x1DE1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1D40u;
label_1de1d40:
    // 0x1de1d40: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de1d40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1d44: 0x91cf042b  lbu         $t7, 0x42B($t6)
    ctx->pc = 0x1de1d44u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1067)));
    // 0x1de1d48: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DE1D48u;
    {
        const bool branch_taken_0x1de1d48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D48u;
        // 0x1de1d4c: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d48) {
            ctx->pc = 0x1DE1D6Cu;
            goto label_1de1d6c;
        }
    }
    ctx->pc = 0x1DE1D50u;
    // 0x1de1d50: 0x8e0f081c  lw          $t7, 0x81C($s0)
    ctx->pc = 0x1de1d50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1de1d54: 0x29ef00e0  slti        $t7, $t7, 0xE0
    ctx->pc = 0x1de1d54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x1de1d58: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE1D58u;
    {
        const bool branch_taken_0x1de1d58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D58u;
        // 0x1de1d5c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d58) {
            ctx->pc = 0x1DE1D8Cu;
            goto label_1de1d8c;
        }
    }
    ctx->pc = 0x1DE1D60u;
    // 0x1de1d60: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1de1d60u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1de1d64:
    // 0x1de1d64: 0xa1c0042b  sb          $zero, 0x42B($t6)
    ctx->pc = 0x1de1d64u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1067), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de1d68: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1de1d6c:
    // 0x1de1d6c: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1de1d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de1d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1d74: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de1d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de1d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de1d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1d7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de1d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de1d80: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de1d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de1d84: 0x877865a  j           func_1DE1968
    ctx->pc = 0x1DE1D84u;
    ctx->pc = 0x1DE1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1D84u;
    // 0x1de1d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1968u;
    sub_01DE1968_0x1de1968(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1D8Cu;
label_1de1d8c:
    // 0x1de1d8c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DE1D8Cu;
    {
        const bool branch_taken_0x1de1d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1D8Cu;
        // 0x1de1d90: 0xa1cf042a  sb          $t7, 0x42A($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 1066), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d8c) {
            ctx->pc = 0x1DE1D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de1d64;
        }
    }
    ctx->pc = 0x1DE1D94u;
    // 0x1de1d94: 0x0  nop
    ctx->pc = 0x1de1d94u;
    // NOP
    // 0x1de1d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1d9c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1d9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de1da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1da8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de1dac: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de1dacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1db0: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de1db0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de1db4: 0xc778658  jal         func_1DE1960
    ctx->pc = 0x1DE1DB4u;
    SET_GPR_U32(ctx, 31, 0x1DE1DBCu);
    ctx->pc = 0x1DE1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1DB4u;
    // 0x1de1db8: 0x8da4002c  lw          $a0, 0x2C($t5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1960u, 0x1DE1DB4u, 0x1DE1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1DBCu;
label_1de1dbc:
    // 0x1de1dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1de1dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1dc0: 0xc77865c  jal         func_1DE1970
    ctx->pc = 0x1DE1DC0u;
    SET_GPR_U32(ctx, 31, 0x1DE1DC8u);
    ctx->pc = 0x1DE1DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1DC0u;
    // 0x1de1dc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1970u, 0x1DE1DC0u, 0x1DE1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1DC8u;
label_1de1dc8:
    // 0x1de1dc8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1dcc: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1de1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1de1dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1dd4: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de1dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1dd8: 0x248408c8  addiu       $a0, $a0, 0x8C8
    ctx->pc = 0x1de1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2248));
    // 0x1de1ddc: 0x877865e  j           func_1DE1978
    ctx->pc = 0x1DE1DDCu;
    ctx->pc = 0x1DE1DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1DDCu;
    // 0x1de1de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1978u;
    sub_01DE1978_0x1de1978(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1DE4u;
    // 0x1de1de4: 0x0  nop
    ctx->pc = 0x1de1de4u;
    // NOP
    ctx->pc = 0x1de1de8u;
}
