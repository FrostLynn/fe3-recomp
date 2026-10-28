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

// Function: sub_01CB84AC
// Address: 0x1cb84ac - 0x1cb8548
void sub_01CB84AC_0x1cb84ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB84AC_0x1cb84ac");
#endif

    switch (ctx->pc) {
        case 0x1cb84bcu: goto label_1cb84bc;
        case 0x1cb84ccu: goto label_1cb84cc;
        case 0x1cb84dcu: goto label_1cb84dc;
        case 0x1cb84ecu: goto label_1cb84ec;
        case 0x1cb84fcu: goto label_1cb84fc;
        case 0x1cb850cu: goto label_1cb850c;
        case 0x1cb851cu: goto label_1cb851c;
        default: break;
    }

    ctx->pc = 0x1cb84acu;

    // 0x1cb84ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb84b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84b4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CB84B4u;
    {
        const bool branch_taken_0x1cb84b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB84B4u;
        // 0x1cb84b8: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb84b4) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB84BCu;
label_1cb84bc:
    // 0x1cb84bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb84c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84c4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1CB84C4u;
    {
        const bool branch_taken_0x1cb84c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB84C4u;
        // 0x1cb84c8: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb84c4) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB84CCu;
label_1cb84cc:
    // 0x1cb84cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb84d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84d4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CB84D4u;
    {
        const bool branch_taken_0x1cb84d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB84D4u;
        // 0x1cb84d8: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb84d4) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB84DCu;
label_1cb84dc:
    // 0x1cb84dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb84e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84e4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CB84E4u;
    {
        const bool branch_taken_0x1cb84e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB84E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB84E4u;
        // 0x1cb84e8: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb84e4) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB84ECu;
label_1cb84ec:
    // 0x1cb84ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb84f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb84f4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1CB84F4u;
    {
        const bool branch_taken_0x1cb84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB84F4u;
        // 0x1cb84f8: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb84f4) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB84FCu;
label_1cb84fc:
    // 0x1cb84fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb84fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8504: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1CB8504u;
    {
        const bool branch_taken_0x1cb8504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8504u;
        // 0x1cb8508: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8504) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB850Cu;
label_1cb850c:
    // 0x1cb850c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8514: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1CB8514u;
    {
        const bool branch_taken_0x1cb8514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8514u;
        // 0x1cb8518: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8514) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB851Cu;
label_1cb851c:
    // 0x1cb851c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb851cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8524: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CB8524u;
    {
        const bool branch_taken_0x1cb8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8524u;
        // 0x1cb8528: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8524) {
            ctx->pc = 0x1CB8440u;
            return;
        }
    }
    ctx->pc = 0x1CB852Cu;
    // 0x1cb852c: 0x0  nop
    ctx->pc = 0x1cb852cu;
    // NOP
    // 0x1cb8530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb853c: 0x872d9e0  j           func_1CB6780
    ctx->pc = 0x1CB853Cu;
    ctx->pc = 0x1CB8540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB853Cu;
    // 0x1cb8540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6780u;
    sub_01CB6780_0x1cb6780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8544u;
    // 0x1cb8544: 0x0  nop
    ctx->pc = 0x1cb8544u;
    // NOP
    ctx->pc = 0x1cb8548u;
}
