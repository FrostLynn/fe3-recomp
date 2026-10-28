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

// Function: sub_01C61268
// Address: 0x1c61268 - 0x1c61300
void sub_01C61268_0x1c61268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61268_0x1c61268");
#endif

    switch (ctx->pc) {
        case 0x1c6127cu: goto label_1c6127c;
        case 0x1c61290u: goto label_1c61290;
        case 0x1c61298u: goto label_1c61298;
        case 0x1c6129cu: goto label_1c6129c;
        case 0x1c612e4u: goto label_1c612e4;
        default: break;
    }

    ctx->pc = 0x1c61268u;

    // 0x1c61268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6126c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61270: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61274: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C61274u;
    SET_GPR_U32(ctx, 31, 0x1C6127Cu);
    ctx->pc = 0x1C61278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61274u;
    // 0x1c61278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C61274u, 0x1C6127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6127Cu;
label_1c6127c:
    // 0x1c6127c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6127cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61280: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C61280u;
    {
        const bool branch_taken_0x1c61280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C61284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61280u;
        // 0x1c61284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61280) {
            ctx->pc = 0x1C612ACu;
            goto label_1c612ac;
        }
    }
    ctx->pc = 0x1C61288u;
    // 0x1c61288: 0xc717d6c  jal         func_1C5F5B0
    ctx->pc = 0x1C61288u;
    SET_GPR_U32(ctx, 31, 0x1C61290u);
    ctx->pc = 0x1C5F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F5B0u, 0x1C61288u, 0x1C61290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61290u;
label_1c61290:
    // 0x1c61290: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C61290u;
    SET_GPR_U32(ctx, 31, 0x1C61298u);
    ctx->pc = 0x1C61294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61290u;
    // 0x1c61294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C61290u, 0x1C61298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61298u;
label_1c61298:
    // 0x1c61298: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c61298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6129c:
    // 0x1c6129c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6129cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c612a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c612a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c612a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C612A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C612A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612A4u;
        // 0x1c612a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C612A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C612ACu;
label_1c612ac:
    // 0x1c612ac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C612ACu;
    {
        const bool branch_taken_0x1c612ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C612ACu;
        // 0x1c612b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c612ac) {
            ctx->pc = 0x1C6129Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6129c;
        }
    }
    ctx->pc = 0x1C612B4u;
    // 0x1c612b4: 0x0  nop
    ctx->pc = 0x1c612b4u;
    // NOP
    // 0x1c612b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c612b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c612bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c612bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c612c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c612c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c612c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c612c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c612c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c612c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c612cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c612ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c612d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c612d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c612d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c612d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c612d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c612d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c612dc: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C612DCu;
    SET_GPR_U32(ctx, 31, 0x1C612E4u);
    ctx->pc = 0x1C612E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C612DCu;
    // 0x1c612e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C612DCu, 0x1C612E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C612E4u;
label_1c612e4:
    // 0x1c612e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c612e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c612e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c612e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c612ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c612ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c612f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c612f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c612f4: 0x8717d5a  j           func_1C5F568
    ctx->pc = 0x1C612F4u;
    ctx->pc = 0x1C612F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C612F4u;
    // 0x1c612f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    sub_01C5F568_0x1c5f568(rdram, ctx, runtime); return;
    ctx->pc = 0x1C612FCu;
    // 0x1c612fc: 0x0  nop
    ctx->pc = 0x1c612fcu;
    // NOP
    ctx->pc = 0x1c61300u;
}
