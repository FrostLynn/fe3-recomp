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

// Function: sub_01C6122C
// Address: 0x1c6122c - 0x1c61268
void sub_01C6122C_0x1c6122c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6122C_0x1c6122c");
#endif

    switch (ctx->pc) {
        case 0x1c6123cu: goto label_1c6123c;
        default: break;
    }

    ctx->pc = 0x1c6122cu;

    // 0x1c6122c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61234: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C61234u;
    {
        const bool branch_taken_0x1c61234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61234u;
        // 0x1c61238: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61234) {
            ctx->pc = 0x1C611C0u;
            return;
        }
    }
    ctx->pc = 0x1C6123Cu;
label_1c6123c:
    // 0x1c6123c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61244: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C61244u;
    {
        const bool branch_taken_0x1c61244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61244u;
        // 0x1c61248: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61244) {
            ctx->pc = 0x1C611C0u;
            return;
        }
    }
    ctx->pc = 0x1C6124Cu;
    // 0x1c6124c: 0x0  nop
    ctx->pc = 0x1c6124cu;
    // NOP
    // 0x1c61250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6125c: 0x8717d60  j           func_1C5F580
    ctx->pc = 0x1C6125Cu;
    ctx->pc = 0x1C61260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6125Cu;
    // 0x1c61260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F580u;
    sub_01C5F580_0x1c5f580(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61264u;
    // 0x1c61264: 0x0  nop
    ctx->pc = 0x1c61264u;
    // NOP
    ctx->pc = 0x1c61268u;
}
