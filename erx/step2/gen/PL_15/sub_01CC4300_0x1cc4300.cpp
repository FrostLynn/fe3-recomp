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

// Function: sub_01CC4300
// Address: 0x1cc4300 - 0x1cc4380
void sub_01CC4300_0x1cc4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4300_0x1cc4300");
#endif

    switch (ctx->pc) {
        case 0x1cc4314u: goto label_1cc4314;
        case 0x1cc4328u: goto label_1cc4328;
        case 0x1cc4330u: goto label_1cc4330;
        case 0x1cc4334u: goto label_1cc4334;
        default: break;
    }

    ctx->pc = 0x1cc4300u;

    // 0x1cc4300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc430c: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC430Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4314u);
    ctx->pc = 0x1CC4310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC430Cu;
    // 0x1cc4310: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC430Cu, 0x1CC4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4314u;
label_1cc4314:
    // 0x1cc4314: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4314u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4318: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC4318u;
    {
        const bool branch_taken_0x1cc4318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4318u;
        // 0x1cc431c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4318) {
            ctx->pc = 0x1CC4344u;
            goto label_1cc4344;
        }
    }
    ctx->pc = 0x1CC4320u;
    // 0x1cc4320: 0xc73092e  jal         func_1CC24B8
    ctx->pc = 0x1CC4320u;
    SET_GPR_U32(ctx, 31, 0x1CC4328u);
    ctx->pc = 0x1CC24B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24B8u, 0x1CC4320u, 0x1CC4328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4328u;
label_1cc4328:
    // 0x1cc4328: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4328u;
    SET_GPR_U32(ctx, 31, 0x1CC4330u);
    ctx->pc = 0x1CC432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4328u;
    // 0x1cc432c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4328u, 0x1CC4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4330u;
label_1cc4330:
    // 0x1cc4330: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc4330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc4334:
    // 0x1cc4334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4338: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc433c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC433Cu;
        // 0x1cc4340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4344u;
label_1cc4344:
    // 0x1cc4344: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC4344u;
    {
        const bool branch_taken_0x1cc4344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4344u;
        // 0x1cc4348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4344) {
            ctx->pc = 0x1CC4334u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4334;
        }
    }
    ctx->pc = 0x1CC434Cu;
    // 0x1cc434c: 0x0  nop
    ctx->pc = 0x1cc434cu;
    // NOP
    // 0x1cc4350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc435c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc435cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc4360: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc4360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc436c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc436cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4370: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1cc4370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4374: 0x8730924  j           func_1CC2490
    ctx->pc = 0x1CC4374u;
    ctx->pc = 0x1CC4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4374u;
    // 0x1cc4378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    sub_01CC2490_0x1cc2490(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC437Cu;
    // 0x1cc437c: 0x0  nop
    ctx->pc = 0x1cc437cu;
    // NOP
    ctx->pc = 0x1cc4380u;
}
