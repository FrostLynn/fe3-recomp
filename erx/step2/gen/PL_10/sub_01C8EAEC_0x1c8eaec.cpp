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

// Function: sub_01C8EAEC
// Address: 0x1c8eaec - 0x1c8eb48
void sub_01C8EAEC_0x1c8eaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EAEC_0x1c8eaec");
#endif

    switch (ctx->pc) {
        case 0x1c8eafcu: goto label_1c8eafc;
        case 0x1c8eb0cu: goto label_1c8eb0c;
        case 0x1c8eb1cu: goto label_1c8eb1c;
        default: break;
    }

    ctx->pc = 0x1c8eaecu;

    // 0x1c8eaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eaf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eaf4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C8EAF4u;
    {
        const bool branch_taken_0x1c8eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EAF4u;
        // 0x1c8eaf8: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eaf4) {
            ctx->pc = 0x1C8EA80u;
            return;
        }
    }
    ctx->pc = 0x1C8EAFCu;
label_1c8eafc:
    // 0x1c8eafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb04: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C8EB04u;
    {
        const bool branch_taken_0x1c8eb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB04u;
        // 0x1c8eb08: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb04) {
            ctx->pc = 0x1C8EA80u;
            return;
        }
    }
    ctx->pc = 0x1C8EB0Cu;
label_1c8eb0c:
    // 0x1c8eb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb14: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C8EB14u;
    {
        const bool branch_taken_0x1c8eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB14u;
        // 0x1c8eb18: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb14) {
            ctx->pc = 0x1C8EA80u;
            return;
        }
    }
    ctx->pc = 0x1C8EB1Cu;
label_1c8eb1c:
    // 0x1c8eb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb24: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C8EB24u;
    {
        const bool branch_taken_0x1c8eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB24u;
        // 0x1c8eb28: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb24) {
            ctx->pc = 0x1C8EA80u;
            return;
        }
    }
    ctx->pc = 0x1C8EB2Cu;
    // 0x1c8eb2c: 0x0  nop
    ctx->pc = 0x1c8eb2cu;
    // NOP
    // 0x1c8eb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8eb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8eb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8eb3c: 0x87233e0  j           func_1C8CF80
    ctx->pc = 0x1C8EB3Cu;
    ctx->pc = 0x1C8EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB3Cu;
    // 0x1c8eb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF80u;
    sub_01C8CF80_0x1c8cf80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EB44u;
    // 0x1c8eb44: 0x0  nop
    ctx->pc = 0x1c8eb44u;
    // NOP
    ctx->pc = 0x1c8eb48u;
}
