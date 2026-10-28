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

// Function: sub_01D350F8
// Address: 0x1d350f8 - 0x1d35270
void sub_01D350F8_0x1d350f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D350F8_0x1d350f8");
#endif

    switch (ctx->pc) {
        case 0x1d35114u: goto label_1d35114;
        case 0x1d3511cu: goto label_1d3511c;
        case 0x1d35130u: goto label_1d35130;
        case 0x1d35134u: goto label_1d35134;
        case 0x1d35170u: goto label_1d35170;
        case 0x1d351b8u: goto label_1d351b8;
        case 0x1d351ccu: goto label_1d351cc;
        case 0x1d351d8u: goto label_1d351d8;
        case 0x1d351e4u: goto label_1d351e4;
        case 0x1d351f8u: goto label_1d351f8;
        case 0x1d35208u: goto label_1d35208;
        default: break;
    }

    ctx->pc = 0x1d350f8u;

    // 0x1d350f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d350f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d350fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d350fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d35100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d35100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d35108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3510c: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D3510Cu;
    SET_GPR_U32(ctx, 31, 0x1D35114u);
    ctx->pc = 0x1D35110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3510Cu;
    // 0x1d35110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D3510Cu, 0x1D35114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35114u;
label_1d35114:
    // 0x1d35114: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D35114u;
    SET_GPR_U32(ctx, 31, 0x1D3511Cu);
    ctx->pc = 0x1D35118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35114u;
    // 0x1d35118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D35114u, 0x1D3511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3511Cu;
label_1d3511c:
    // 0x1d3511c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3511cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d35120: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D35120u;
    {
        const bool branch_taken_0x1d35120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D35124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35120u;
        // 0x1d35124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35120) {
            ctx->pc = 0x1D35144u;
            goto label_1d35144;
        }
    }
    ctx->pc = 0x1D35128u;
    // 0x1d35128: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D35128u;
    SET_GPR_U32(ctx, 31, 0x1D35130u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D35128u, 0x1D35130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35130u;
label_1d35130:
    // 0x1d35130: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d35130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d35134:
    // 0x1d35134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d35134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35138: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d35138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3513c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3513Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3513Cu;
        // 0x1d35140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3513Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35144u;
label_1d35144:
    // 0x1d35144: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D35144u;
    {
        const bool branch_taken_0x1d35144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35144u;
        // 0x1d35148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35144) {
            ctx->pc = 0x1D35134u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d35134;
        }
    }
    ctx->pc = 0x1D3514Cu;
    // 0x1d3514c: 0x0  nop
    ctx->pc = 0x1d3514cu;
    // NOP
    // 0x1d35150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d35150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d35154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d35154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d35158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3515c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d35160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d35160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35164: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d35164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d35168: 0xc74cd58  jal         func_1D33560
    ctx->pc = 0x1D35168u;
    SET_GPR_U32(ctx, 31, 0x1D35170u);
    ctx->pc = 0x1D3516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35168u;
    // 0x1d3516c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33560u, 0x1D35168u, 0x1D35170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35170u;
label_1d35170:
    // 0x1d35170: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d35170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d35174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d35174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35178: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d35178u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3517c: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1d3517cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d35180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35188: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D35188u;
    {
        const bool branch_taken_0x1d35188 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D3518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35188u;
        // 0x1d3518c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35188) {
            ctx->pc = 0x1D351B8u;
            goto label_1d351b8;
        }
    }
    ctx->pc = 0x1D35190u;
    // 0x1d35190: 0x29cf001a  slti        $t7, $t6, 0x1A
    ctx->pc = 0x1d35190u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1d35194: 0x11e00023  beqz        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D35194u;
    {
        const bool branch_taken_0x1d35194 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35194u;
        // 0x1d35198: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35194) {
            ctx->pc = 0x1D35224u;
            goto label_1d35224;
        }
    }
    ctx->pc = 0x1D3519Cu;
    // 0x1d3519c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3519cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d351a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351a4: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D351A4u;
    {
        const bool branch_taken_0x1d351a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D351A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D351A4u;
        // 0x1d351a8: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d351a4) {
            ctx->pc = 0x1D351B8u;
            goto label_1d351b8;
        }
    }
    ctx->pc = 0x1D351ACu;
    // 0x1d351ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d351acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d351b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d351b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d351b8:
    // 0x1d351b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d351b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d351bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d351bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d351c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d351c4: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D351C4u;
    SET_GPR_U32(ctx, 31, 0x1D351CCu);
    ctx->pc = 0x1D351C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D351C4u;
    // 0x1d351c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D351C4u, 0x1D351CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D351CCu;
label_1d351cc:
    // 0x1d351cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d351ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351d0: 0xc74cd5a  jal         func_1D33568
    ctx->pc = 0x1D351D0u;
    SET_GPR_U32(ctx, 31, 0x1D351D8u);
    ctx->pc = 0x1D351D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D351D0u;
    // 0x1d351d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33568u, 0x1D351D0u, 0x1D351D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D351D8u;
label_1d351d8:
    // 0x1d351d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d351d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d351dc: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D351DCu;
    SET_GPR_U32(ctx, 31, 0x1D351E4u);
    ctx->pc = 0x1D351E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D351DCu;
    // 0x1d351e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D351DCu, 0x1D351E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D351E4u;
label_1d351e4:
    // 0x1d351e4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d351e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d351e8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d351e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d351ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d351ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d351f0: 0xc74cd5c  jal         func_1D33570
    ctx->pc = 0x1D351F0u;
    SET_GPR_U32(ctx, 31, 0x1D351F8u);
    ctx->pc = 0x1D351F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D351F0u;
    // 0x1d351f4: 0x240500ec  addiu       $a1, $zero, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33570u, 0x1D351F0u, 0x1D351F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D351F8u;
label_1d351f8:
    // 0x1d351f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d351f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d351fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d351fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35200: 0xc74cd50  jal         func_1D33540
    ctx->pc = 0x1D35200u;
    SET_GPR_U32(ctx, 31, 0x1D35208u);
    ctx->pc = 0x1D35204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35200u;
    // 0x1d35204: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33540u, 0x1D35200u, 0x1D35208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35208u;
label_1d35208:
    // 0x1d35208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3520c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3520cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d35210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d35210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35214: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x1d35214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1d35218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d35218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3521c: 0x874cd5e  j           func_1D33578
    ctx->pc = 0x1D3521Cu;
    ctx->pc = 0x1D35220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3521Cu;
    // 0x1d35220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33578u;
    sub_01D33578_0x1d33578(rdram, ctx, runtime); return;
    ctx->pc = 0x1D35224u;
label_1d35224:
    // 0x1d35224: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1d35224u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d35228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3522c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35230: 0x11cfffe1  beq         $t6, $t7, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D35230u;
    {
        const bool branch_taken_0x1d35230 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D35234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35230u;
        // 0x1d35234: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35230) {
            ctx->pc = 0x1D351B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d351b8;
        }
    }
    ctx->pc = 0x1D35238u;
    // 0x1d35238: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1d35238u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d3523c: 0x55cfffde  bnel        $t6, $t7, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D3523Cu;
    {
        const bool branch_taken_0x1d3523c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d3523c) {
            ctx->pc = 0x1D35240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3523Cu;
            // 0x1d35240: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D351B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d351b8;
        }
    }
    ctx->pc = 0x1D35244u;
    // 0x1d35244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d35244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3524c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D3524Cu;
    {
        const bool branch_taken_0x1d3524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3524Cu;
        // 0x1d35250: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3524c) {
            ctx->pc = 0x1D351B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d351b8;
        }
    }
    ctx->pc = 0x1D35254u;
    // 0x1d35254: 0x0  nop
    ctx->pc = 0x1d35254u;
    // NOP
    // 0x1d35258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3525c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35264: 0x874cd60  j           func_1D33580
    ctx->pc = 0x1D35264u;
    ctx->pc = 0x1D35268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35264u;
    // 0x1d35268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33580u;
    sub_01D33580_0x1d33580(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3526Cu;
    // 0x1d3526c: 0x0  nop
    ctx->pc = 0x1d3526cu;
    // NOP
    ctx->pc = 0x1d35270u;
}
