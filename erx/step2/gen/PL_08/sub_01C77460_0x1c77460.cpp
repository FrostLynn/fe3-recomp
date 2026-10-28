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

// Function: sub_01C77460
// Address: 0x1c77460 - 0x1c77510
void sub_01C77460_0x1c77460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77460_0x1c77460");
#endif

    switch (ctx->pc) {
        case 0x1c77474u: goto label_1c77474;
        case 0x1c77488u: goto label_1c77488;
        case 0x1c7748cu: goto label_1c7748c;
        case 0x1c774b8u: goto label_1c774b8;
        case 0x1c774ecu: goto label_1c774ec;
        case 0x1c774f8u: goto label_1c774f8;
        default: break;
    }

    ctx->pc = 0x1c77460u;

    // 0x1c77460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7746c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7746Cu;
    SET_GPR_U32(ctx, 31, 0x1C77474u);
    ctx->pc = 0x1C77470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7746Cu;
    // 0x1c77470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7746Cu, 0x1C77474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77474u;
label_1c77474:
    // 0x1c77474: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77478: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C77478u;
    {
        const bool branch_taken_0x1c77478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77478u;
        // 0x1c7747c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77478) {
            ctx->pc = 0x1C7749Cu;
            goto label_1c7749c;
        }
    }
    ctx->pc = 0x1C77480u;
    // 0x1c77480: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77480u;
    SET_GPR_U32(ctx, 31, 0x1C77488u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77480u, 0x1C77488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77488u;
label_1c77488:
    // 0x1c77488: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c77488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7748c:
    // 0x1c7748c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7748cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77494: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77494u;
        // 0x1c77498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7749Cu;
label_1c7749c:
    // 0x1c7749c: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c7749cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c774a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1c774a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1c774a4: 0x31ee0003  andi        $t6, $t7, 0x3
    ctx->pc = 0x1c774a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x1c774a8: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C774A8u;
    {
        const bool branch_taken_0x1c774a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C774ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774A8u;
        // 0x1c774ac: 0xae0f0018  sw          $t7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c774a8) {
            ctx->pc = 0x1C774B8u;
            goto label_1c774b8;
        }
    }
    ctx->pc = 0x1C774B0u;
    // 0x1c774b0: 0xc71d8fe  jal         func_1C763F8
    ctx->pc = 0x1C774B0u;
    SET_GPR_U32(ctx, 31, 0x1C774B8u);
    ctx->pc = 0x1C774B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C774B0u;
    // 0x1c774b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F8u, 0x1C774B0u, 0x1C774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C774B8u;
label_1c774b8:
    // 0x1c774b8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C774B8u;
    {
        const bool branch_taken_0x1c774b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C774BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C774B8u;
        // 0x1c774bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c774b8) {
            ctx->pc = 0x1C7748Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7748c;
        }
    }
    ctx->pc = 0x1C774C0u;
    // 0x1c774c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c774c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c774c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c774c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c774c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c774c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c774cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c774ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c774d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c774d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c774d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c774d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c774d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c774d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c774dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c774dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c774e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c774e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c774e4: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C774E4u;
    SET_GPR_U32(ctx, 31, 0x1C774ECu);
    ctx->pc = 0x1C774E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C774E4u;
    // 0x1c774e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C774E4u, 0x1C774ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C774ECu;
label_1c774ec:
    // 0x1c774ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c774ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c774f0: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C774F0u;
    SET_GPR_U32(ctx, 31, 0x1C774F8u);
    ctx->pc = 0x1C774F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C774F0u;
    // 0x1c774f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C774F0u, 0x1C774F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C774F8u;
label_1c774f8:
    // 0x1c774f8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c774f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c774fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c774fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77504: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77504u;
        // 0x1c77508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7750Cu;
    // 0x1c7750c: 0x0  nop
    ctx->pc = 0x1c7750cu;
    // NOP
    ctx->pc = 0x1c77510u;
}
