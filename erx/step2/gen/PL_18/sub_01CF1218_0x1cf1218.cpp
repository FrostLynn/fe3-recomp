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

// Function: sub_01CF1218
// Address: 0x1cf1218 - 0x1cf1260
void sub_01CF1218_0x1cf1218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1218_0x1cf1218");
#endif

    switch (ctx->pc) {
        case 0x1cf1228u: goto label_1cf1228;
        case 0x1cf1238u: goto label_1cf1238;
        default: break;
    }

    ctx->pc = 0x1cf1218u;

    // 0x1cf1218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf121c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1220: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF1220u;
    {
        const bool branch_taken_0x1cf1220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1220u;
        // 0x1cf1224: 0x24060166  addiu       $a2, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1220) {
            ctx->pc = 0x1CF11E4u;
            return;
        }
    }
    ctx->pc = 0x1CF1228u;
label_1cf1228:
    // 0x1cf1228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf122c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1230: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CF1230u;
    {
        const bool branch_taken_0x1cf1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1230u;
        // 0x1cf1234: 0x24060170  addiu       $a2, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1230) {
            ctx->pc = 0x1CF11E4u;
            return;
        }
    }
    ctx->pc = 0x1CF1238u;
label_1cf1238:
    // 0x1cf1238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf123c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf123cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1240: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CF1240u;
    {
        const bool branch_taken_0x1cf1240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1240u;
        // 0x1cf1244: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1240) {
            ctx->pc = 0x1CF11E4u;
            return;
        }
    }
    ctx->pc = 0x1CF1248u;
    // 0x1cf1248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf124c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1254: 0x873c05a  j           func_1CF0168
    ctx->pc = 0x1CF1254u;
    ctx->pc = 0x1CF1258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1254u;
    // 0x1cf1258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0168u;
    sub_01CF0168_0x1cf0168(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF125Cu;
    // 0x1cf125c: 0x0  nop
    ctx->pc = 0x1cf125cu;
    // NOP
    ctx->pc = 0x1cf1260u;
}
