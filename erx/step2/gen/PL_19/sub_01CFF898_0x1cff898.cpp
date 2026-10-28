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

// Function: sub_01CFF898
// Address: 0x1cff898 - 0x1cff958
void sub_01CFF898_0x1cff898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF898_0x1cff898");
#endif

    switch (ctx->pc) {
        case 0x1cff8acu: goto label_1cff8ac;
        case 0x1cff8c0u: goto label_1cff8c0;
        case 0x1cff8c4u: goto label_1cff8c4;
        case 0x1cff900u: goto label_1cff900;
        case 0x1cff90cu: goto label_1cff90c;
        case 0x1cff918u: goto label_1cff918;
        case 0x1cff938u: goto label_1cff938;
        default: break;
    }

    ctx->pc = 0x1cff898u;

    // 0x1cff898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff8a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff8a4: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF8A4u;
    SET_GPR_U32(ctx, 31, 0x1CFF8ACu);
    ctx->pc = 0x1CFF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF8A4u;
    // 0x1cff8a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF8A4u, 0x1CFF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF8ACu;
label_1cff8ac:
    // 0x1cff8ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff8acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff8b0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFF8B0u;
    {
        const bool branch_taken_0x1cff8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF8B0u;
        // 0x1cff8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff8b0) {
            ctx->pc = 0x1CFF8D4u;
            goto label_1cff8d4;
        }
    }
    ctx->pc = 0x1CFF8B8u;
    // 0x1cff8b8: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF8B8u;
    SET_GPR_U32(ctx, 31, 0x1CFF8C0u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF8B8u, 0x1CFF8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF8C0u;
label_1cff8c0:
    // 0x1cff8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cff8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cff8c4:
    // 0x1cff8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff8c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF8CCu;
        // 0x1cff8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF8D4u;
label_1cff8d4:
    // 0x1cff8d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CFF8D4u;
    {
        const bool branch_taken_0x1cff8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF8D4u;
        // 0x1cff8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff8d4) {
            ctx->pc = 0x1CFF8C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff8c4;
        }
    }
    ctx->pc = 0x1CFF8DCu;
    // 0x1cff8dc: 0x0  nop
    ctx->pc = 0x1cff8dcu;
    // NOP
    // 0x1cff8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff8e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cff8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cff8e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff8ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff8f0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cff8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cff8f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cff8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff8f8: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF8F8u;
    SET_GPR_U32(ctx, 31, 0x1CFF900u);
    ctx->pc = 0x1CFF8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF8F8u;
    // 0x1cff8fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF8F8u, 0x1CFF900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF900u;
label_1cff900:
    // 0x1cff900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cff900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff904: 0xc74009e  jal         func_1D00278
    ctx->pc = 0x1CFF904u;
    SET_GPR_U32(ctx, 31, 0x1CFF90Cu);
    ctx->pc = 0x1CFF908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF904u;
    // 0x1cff908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00278u, 0x1CFF904u, 0x1CFF90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF90Cu;
label_1cff90c:
    // 0x1cff90c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cff90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff910: 0xc73f736  jal         func_1CFDCD8
    ctx->pc = 0x1CFF910u;
    SET_GPR_U32(ctx, 31, 0x1CFF918u);
    ctx->pc = 0x1CFF914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF910u;
    // 0x1cff914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDCD8u, 0x1CFF910u, 0x1CFF918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF918u;
label_1cff918:
    // 0x1cff918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cff918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff91c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cff91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff920: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cff920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff92c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff92cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff930: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF930u;
    SET_GPR_U32(ctx, 31, 0x1CFF938u);
    ctx->pc = 0x1CFF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF930u;
    // 0x1cff934: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF930u, 0x1CFF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF938u;
label_1cff938:
    // 0x1cff938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cff938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff940: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cff944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff94c: 0x873f49e  j           func_1CFD278
    ctx->pc = 0x1CFF94Cu;
    ctx->pc = 0x1CFF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF94Cu;
    // 0x1cff950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    sub_01CFD278_0x1cfd278(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF954u;
    // 0x1cff954: 0x0  nop
    ctx->pc = 0x1cff954u;
    // NOP
    ctx->pc = 0x1cff958u;
}
