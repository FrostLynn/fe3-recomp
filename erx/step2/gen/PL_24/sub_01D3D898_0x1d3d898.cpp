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

// Function: sub_01D3D898
// Address: 0x1d3d898 - 0x1d3d9a8
void sub_01D3D898_0x1d3d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3D898_0x1d3d898");
#endif

    switch (ctx->pc) {
        case 0x1d3d8b4u: goto label_1d3d8b4;
        case 0x1d3d8bcu: goto label_1d3d8bc;
        case 0x1d3d8d0u: goto label_1d3d8d0;
        case 0x1d3d8d8u: goto label_1d3d8d8;
        case 0x1d3d8dcu: goto label_1d3d8dc;
        case 0x1d3d91cu: goto label_1d3d91c;
        case 0x1d3d92cu: goto label_1d3d92c;
        case 0x1d3d940u: goto label_1d3d940;
        case 0x1d3d968u: goto label_1d3d968;
        case 0x1d3d974u: goto label_1d3d974;
        case 0x1d3d984u: goto label_1d3d984;
        default: break;
    }

    ctx->pc = 0x1d3d898u;

    // 0x1d3d898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3d898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3d89c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d89cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d8a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3d8ac: 0xc74ef10  jal         func_1D3BC40
    ctx->pc = 0x1D3D8ACu;
    SET_GPR_U32(ctx, 31, 0x1D3D8B4u);
    ctx->pc = 0x1D3D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D8ACu;
    // 0x1d3d8b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC40u, 0x1D3D8ACu, 0x1D3D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D8B4u;
label_1d3d8b4:
    // 0x1d3d8b4: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3D8B4u;
    SET_GPR_U32(ctx, 31, 0x1D3D8BCu);
    ctx->pc = 0x1D3D8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D8B4u;
    // 0x1d3d8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3D8B4u, 0x1D3D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D8BCu;
label_1d3d8bc:
    // 0x1d3d8bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3d8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d8c0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3D8C0u;
    {
        const bool branch_taken_0x1d3d8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D8C0u;
        // 0x1d3d8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d8c0) {
            ctx->pc = 0x1D3D8ECu;
            goto label_1d3d8ec;
        }
    }
    ctx->pc = 0x1D3D8C8u;
    // 0x1d3d8c8: 0xc74ef2c  jal         func_1D3BCB0
    ctx->pc = 0x1D3D8C8u;
    SET_GPR_U32(ctx, 31, 0x1D3D8D0u);
    ctx->pc = 0x1D3BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BCB0u, 0x1D3D8C8u, 0x1D3D8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D8D0u;
label_1d3d8d0:
    // 0x1d3d8d0: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3D8D0u;
    SET_GPR_U32(ctx, 31, 0x1D3D8D8u);
    ctx->pc = 0x1D3D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D8D0u;
    // 0x1d3d8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3D8D0u, 0x1D3D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D8D8u;
label_1d3d8d8:
    // 0x1d3d8d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3d8dc:
    // 0x1d3d8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d8e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3d8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D8E4u;
        // 0x1d3d8e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3D8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3D8ECu;
label_1d3d8ec:
    // 0x1d3d8ec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3D8ECu;
    {
        const bool branch_taken_0x1d3d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3D8ECu;
        // 0x1d3d8f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3d8ec) {
            ctx->pc = 0x1D3D8DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3d8dc;
        }
    }
    ctx->pc = 0x1D3D8F4u;
    // 0x1d3d8f4: 0x0  nop
    ctx->pc = 0x1d3d8f4u;
    // NOP
    // 0x1d3d8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3d8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3d8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3d900: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d3d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d3d904: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3d908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3d908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d90c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3d910: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3d910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3d914: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3D914u;
    SET_GPR_U32(ctx, 31, 0x1D3D91Cu);
    ctx->pc = 0x1D3D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D914u;
    // 0x1d3d918: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3D914u, 0x1D3D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D91Cu;
label_1d3d91c:
    // 0x1d3d91c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3d91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3d920: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3d920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d924: 0xc74ef18  jal         func_1D3BC60
    ctx->pc = 0x1D3D924u;
    SET_GPR_U32(ctx, 31, 0x1D3D92Cu);
    ctx->pc = 0x1D3D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D924u;
    // 0x1d3d928: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC60u, 0x1D3D924u, 0x1D3D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D92Cu;
label_1d3d92c:
    // 0x1d3d92c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3d92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d934: 0x2405008d  addiu       $a1, $zero, 0x8D
    ctx->pc = 0x1d3d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
    // 0x1d3d938: 0xc74ef1e  jal         func_1D3BC78
    ctx->pc = 0x1D3D938u;
    SET_GPR_U32(ctx, 31, 0x1D3D940u);
    ctx->pc = 0x1D3D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D938u;
    // 0x1d3d93c: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC78u, 0x1D3D938u, 0x1D3D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D940u;
label_1d3d940:
    // 0x1d3d940: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d3d940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d3d944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3d944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3d948: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d3d948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d3d94c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3d94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d950: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3d950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3d954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3d954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d958: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3d958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3d95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d960: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3D960u;
    SET_GPR_U32(ctx, 31, 0x1D3D968u);
    ctx->pc = 0x1D3D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D960u;
    // 0x1d3d964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3D960u, 0x1D3D968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D968u;
label_1d3d968:
    // 0x1d3d968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d96c: 0xc74ef1a  jal         func_1D3BC68
    ctx->pc = 0x1D3D96Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D974u);
    ctx->pc = 0x1D3D970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D96Cu;
    // 0x1d3d970: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC68u, 0x1D3D96Cu, 0x1D3D974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D974u;
label_1d3d974:
    // 0x1d3d974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d978: 0x240500ef  addiu       $a1, $zero, 0xEF
    ctx->pc = 0x1d3d978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
    // 0x1d3d97c: 0xc74ef1c  jal         func_1D3BC70
    ctx->pc = 0x1D3D97Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D984u);
    ctx->pc = 0x1D3D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D97Cu;
    // 0x1d3d980: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC70u, 0x1D3D97Cu, 0x1D3D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3D984u;
label_1d3d984:
    // 0x1d3d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d3d988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d3d98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3d98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3d990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3d994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3d994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3d998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3d998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3d99c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d3d99cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3d9a0: 0x874ef10  j           func_1D3BC40
    ctx->pc = 0x1D3D9A0u;
    ctx->pc = 0x1D3D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3D9A0u;
    // 0x1d3d9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC40u;
    sub_01D3BC40_0x1d3bc40(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3D9A8u;
}
