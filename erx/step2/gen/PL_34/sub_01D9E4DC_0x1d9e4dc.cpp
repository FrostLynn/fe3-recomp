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

// Function: sub_01D9E4DC
// Address: 0x1d9e4dc - 0x1d9e578
void sub_01D9E4DC_0x1d9e4dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E4DC_0x1d9e4dc");
#endif

    switch (ctx->pc) {
        case 0x1d9e4ecu: goto label_1d9e4ec;
        case 0x1d9e4fcu: goto label_1d9e4fc;
        case 0x1d9e50cu: goto label_1d9e50c;
        case 0x1d9e51cu: goto label_1d9e51c;
        case 0x1d9e52cu: goto label_1d9e52c;
        case 0x1d9e53cu: goto label_1d9e53c;
        case 0x1d9e54cu: goto label_1d9e54c;
        default: break;
    }

    ctx->pc = 0x1d9e4dcu;

    // 0x1d9e4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4e4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D9E4E4u;
    {
        const bool branch_taken_0x1d9e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E4E4u;
        // 0x1d9e4e8: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e4e4) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E4ECu;
label_1d9e4ec:
    // 0x1d9e4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4f4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D9E4F4u;
    {
        const bool branch_taken_0x1d9e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E4F4u;
        // 0x1d9e4f8: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e4f4) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E4FCu;
label_1d9e4fc:
    // 0x1d9e4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e504: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D9E504u;
    {
        const bool branch_taken_0x1d9e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E504u;
        // 0x1d9e508: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e504) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E50Cu;
label_1d9e50c:
    // 0x1d9e50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e514: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D9E514u;
    {
        const bool branch_taken_0x1d9e514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E514u;
        // 0x1d9e518: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e514) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E51Cu;
label_1d9e51c:
    // 0x1d9e51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e520: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e524: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D9E524u;
    {
        const bool branch_taken_0x1d9e524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E524u;
        // 0x1d9e528: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e524) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E52Cu;
label_1d9e52c:
    // 0x1d9e52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e534: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D9E534u;
    {
        const bool branch_taken_0x1d9e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E534u;
        // 0x1d9e538: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e534) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E53Cu;
label_1d9e53c:
    // 0x1d9e53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e544: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1D9E544u;
    {
        const bool branch_taken_0x1d9e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E544u;
        // 0x1d9e548: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e544) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E54Cu;
label_1d9e54c:
    // 0x1d9e54c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e554: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D9E554u;
    {
        const bool branch_taken_0x1d9e554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E554u;
        // 0x1d9e558: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e554) {
            ctx->pc = 0x1D9E470u;
            return;
        }
    }
    ctx->pc = 0x1D9E55Cu;
    // 0x1d9e55c: 0x0  nop
    ctx->pc = 0x1d9e55cu;
    // NOP
    // 0x1d9e560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9e568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9e568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e56c: 0x8767260  j           func_1D9C980
    ctx->pc = 0x1D9E56Cu;
    ctx->pc = 0x1D9E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E56Cu;
    // 0x1d9e570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C980u;
    sub_01D9C980_0x1d9c980(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E574u;
    // 0x1d9e574: 0x0  nop
    ctx->pc = 0x1d9e574u;
    // NOP
    ctx->pc = 0x1d9e578u;
}
