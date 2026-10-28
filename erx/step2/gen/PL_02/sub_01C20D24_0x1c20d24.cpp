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

// Function: sub_01C20D24
// Address: 0x1c20d24 - 0x1c20de0
void sub_01C20D24_0x1c20d24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20D24_0x1c20d24");
#endif

    switch (ctx->pc) {
        case 0x1c20d34u: goto label_1c20d34;
        case 0x1c20d44u: goto label_1c20d44;
        case 0x1c20d54u: goto label_1c20d54;
        case 0x1c20d64u: goto label_1c20d64;
        case 0x1c20d74u: goto label_1c20d74;
        case 0x1c20d84u: goto label_1c20d84;
        case 0x1c20d94u: goto label_1c20d94;
        case 0x1c20da4u: goto label_1c20da4;
        case 0x1c20db4u: goto label_1c20db4;
        default: break;
    }

    ctx->pc = 0x1c20d24u;

    // 0x1c20d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d2c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C20D2Cu;
    {
        const bool branch_taken_0x1c20d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D2Cu;
        // 0x1c20d30: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d2c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D34u;
label_1c20d34:
    // 0x1c20d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d3c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C20D3Cu;
    {
        const bool branch_taken_0x1c20d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D3Cu;
        // 0x1c20d40: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d3c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D44u;
label_1c20d44:
    // 0x1c20d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d4c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C20D4Cu;
    {
        const bool branch_taken_0x1c20d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D4Cu;
        // 0x1c20d50: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d4c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D54u;
label_1c20d54:
    // 0x1c20d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d5c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C20D5Cu;
    {
        const bool branch_taken_0x1c20d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D5Cu;
        // 0x1c20d60: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d5c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D64u;
label_1c20d64:
    // 0x1c20d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d6c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C20D6Cu;
    {
        const bool branch_taken_0x1c20d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D6Cu;
        // 0x1c20d70: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d6c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D74u;
label_1c20d74:
    // 0x1c20d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d7c: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C20D7Cu;
    {
        const bool branch_taken_0x1c20d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D7Cu;
        // 0x1c20d80: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d7c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D84u;
label_1c20d84:
    // 0x1c20d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d8c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1C20D8Cu;
    {
        const bool branch_taken_0x1c20d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D8Cu;
        // 0x1c20d90: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d8c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20D94u;
label_1c20d94:
    // 0x1c20d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20d9c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C20D9Cu;
    {
        const bool branch_taken_0x1c20d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20D9Cu;
        // 0x1c20da0: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20d9c) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20DA4u;
label_1c20da4:
    // 0x1c20da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20dac: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x1C20DACu;
    {
        const bool branch_taken_0x1c20dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20DACu;
        // 0x1c20db0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20dac) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20DB4u;
label_1c20db4:
    // 0x1c20db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20dbc: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C20DBCu;
    {
        const bool branch_taken_0x1c20dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20DBCu;
        // 0x1c20dc0: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20dbc) {
            ctx->pc = 0x1C20CB8u;
            return;
        }
    }
    ctx->pc = 0x1C20DC4u;
    // 0x1c20dc4: 0x0  nop
    ctx->pc = 0x1c20dc4u;
    // NOP
    // 0x1c20dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20dd4: 0x8707c64  j           func_1C1F190
    ctx->pc = 0x1C20DD4u;
    ctx->pc = 0x1C20DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20DD4u;
    // 0x1c20dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    sub_01C1F190_0x1c1f190(rdram, ctx, runtime); return;
    ctx->pc = 0x1C20DDCu;
    // 0x1c20ddc: 0x0  nop
    ctx->pc = 0x1c20ddcu;
    // NOP
    ctx->pc = 0x1c20de0u;
}
