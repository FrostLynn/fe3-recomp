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

// Function: sub_01CB867C
// Address: 0x1cb867c - 0x1cb8718
void sub_01CB867C_0x1cb867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB867C_0x1cb867c");
#endif

    switch (ctx->pc) {
        case 0x1cb868cu: goto label_1cb868c;
        case 0x1cb869cu: goto label_1cb869c;
        case 0x1cb86acu: goto label_1cb86ac;
        case 0x1cb86bcu: goto label_1cb86bc;
        case 0x1cb86ccu: goto label_1cb86cc;
        case 0x1cb86dcu: goto label_1cb86dc;
        case 0x1cb86ecu: goto label_1cb86ec;
        default: break;
    }

    ctx->pc = 0x1cb867cu;

    // 0x1cb867c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb867cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8680: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8684: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1CB8684u;
    {
        const bool branch_taken_0x1cb8684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8684u;
        // 0x1cb8688: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8684) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB868Cu;
label_1cb868c:
    // 0x1cb868c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8694: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1CB8694u;
    {
        const bool branch_taken_0x1cb8694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8694u;
        // 0x1cb8698: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8694) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB869Cu;
label_1cb869c:
    // 0x1cb869c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86a4: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1CB86A4u;
    {
        const bool branch_taken_0x1cb86a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86A4u;
        // 0x1cb86a8: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86a4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86ACu;
label_1cb86ac:
    // 0x1cb86ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb86acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86b4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CB86B4u;
    {
        const bool branch_taken_0x1cb86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86B4u;
        // 0x1cb86b8: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86b4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86BCu;
label_1cb86bc:
    // 0x1cb86bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb86bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86c4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CB86C4u;
    {
        const bool branch_taken_0x1cb86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86C4u;
        // 0x1cb86c8: 0x24060055  addiu       $a2, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86c4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86CCu;
label_1cb86cc:
    // 0x1cb86cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86d4: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x1CB86D4u;
    {
        const bool branch_taken_0x1cb86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86D4u;
        // 0x1cb86d8: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86d4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86DCu;
label_1cb86dc:
    // 0x1cb86dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86e4: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1CB86E4u;
    {
        const bool branch_taken_0x1cb86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86E4u;
        // 0x1cb86e8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86e4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86ECu;
label_1cb86ec:
    // 0x1cb86ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb86ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb86f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb86f4: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x1CB86F4u;
    {
        const bool branch_taken_0x1cb86f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB86F4u;
        // 0x1cb86f8: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb86f4) {
            ctx->pc = 0x1CB8608u;
            return;
        }
    }
    ctx->pc = 0x1CB86FCu;
    // 0x1cb86fc: 0x0  nop
    ctx->pc = 0x1cb86fcu;
    // NOP
    // 0x1cb8700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb870c: 0x872d9e0  j           func_1CB6780
    ctx->pc = 0x1CB870Cu;
    ctx->pc = 0x1CB8710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB870Cu;
    // 0x1cb8710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6780u;
    sub_01CB6780_0x1cb6780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8714u;
    // 0x1cb8714: 0x0  nop
    ctx->pc = 0x1cb8714u;
    // NOP
    ctx->pc = 0x1cb8718u;
}
