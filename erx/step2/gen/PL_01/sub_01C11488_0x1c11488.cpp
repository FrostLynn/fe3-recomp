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

// Function: sub_01C11488
// Address: 0x1c11488 - 0x1c115a8
void sub_01C11488_0x1c11488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11488_0x1c11488");
#endif

    switch (ctx->pc) {
        case 0x1c114a4u: goto label_1c114a4;
        case 0x1c114acu: goto label_1c114ac;
        case 0x1c114c0u: goto label_1c114c0;
        case 0x1c114c4u: goto label_1c114c4;
        case 0x1c11500u: goto label_1c11500;
        case 0x1c11548u: goto label_1c11548;
        case 0x1c11554u: goto label_1c11554;
        case 0x1c11560u: goto label_1c11560;
        case 0x1c11574u: goto label_1c11574;
        case 0x1c1158cu: goto label_1c1158c;
        default: break;
    }

    ctx->pc = 0x1c11488u;

    // 0x1c11488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1148c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1148cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c11490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1149c: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C1149Cu;
    SET_GPR_U32(ctx, 31, 0x1C114A4u);
    ctx->pc = 0x1C114A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1149Cu;
    // 0x1c114a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C1149Cu, 0x1C114A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C114A4u;
label_1c114a4:
    // 0x1c114a4: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C114A4u;
    SET_GPR_U32(ctx, 31, 0x1C114ACu);
    ctx->pc = 0x1C114A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C114A4u;
    // 0x1c114a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C114A4u, 0x1C114ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C114ACu;
label_1c114ac:
    // 0x1c114ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c114acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c114b0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C114B0u;
    {
        const bool branch_taken_0x1c114b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C114B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114B0u;
        // 0x1c114b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c114b0) {
            ctx->pc = 0x1C114D4u;
            goto label_1c114d4;
        }
    }
    ctx->pc = 0x1C114B8u;
    // 0x1c114b8: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C114B8u;
    SET_GPR_U32(ctx, 31, 0x1C114C0u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C114B8u, 0x1C114C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C114C0u;
label_1c114c0:
    // 0x1c114c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c114c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c114c4:
    // 0x1c114c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c114c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c114c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c114c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c114cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C114CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C114D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114CCu;
        // 0x1c114d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C114CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C114D4u;
label_1c114d4:
    // 0x1c114d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C114D4u;
    {
        const bool branch_taken_0x1c114d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C114D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114D4u;
        // 0x1c114d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c114d4) {
            ctx->pc = 0x1C114C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c114c4;
        }
    }
    ctx->pc = 0x1C114DCu;
    // 0x1c114dc: 0x0  nop
    ctx->pc = 0x1c114dcu;
    // NOP
    // 0x1c114e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c114e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c114e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c114e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c114e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c114e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c114ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c114ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c114f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c114f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c114f4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c114f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c114f8: 0xc703dd8  jal         func_1C0F760
    ctx->pc = 0x1C114F8u;
    SET_GPR_U32(ctx, 31, 0x1C11500u);
    ctx->pc = 0x1C114FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C114F8u;
    // 0x1c114fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F760u, 0x1C114F8u, 0x1C11500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11500u;
label_1c11500:
    // 0x1c11500: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c11500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c11504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c11504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11508: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c11508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c1150c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11514: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1c11514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1c11518: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1151c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1151cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11520: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c11520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11524: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c11524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c11528: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C11528u;
    {
        const bool branch_taken_0x1c11528 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C1152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11528u;
        // 0x1c1152c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11528) {
            ctx->pc = 0x1C11540u;
            goto label_1c11540;
        }
    }
    ctx->pc = 0x1C11530u;
    // 0x1c11530: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1c11530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c11534: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C11534u;
    {
        const bool branch_taken_0x1c11534 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c11534) {
            ctx->pc = 0x1C11540u;
            goto label_1c11540;
        }
    }
    ctx->pc = 0x1C1153Cu;
    // 0x1c1153c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c1153cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c11540:
    // 0x1c11540: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11540u;
    SET_GPR_U32(ctx, 31, 0x1C11548u);
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11540u, 0x1C11548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11548u;
label_1c11548:
    // 0x1c11548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1154c: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C1154Cu;
    SET_GPR_U32(ctx, 31, 0x1C11554u);
    ctx->pc = 0x1C11550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1154Cu;
    // 0x1c11550: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C1154Cu, 0x1C11554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11554u;
label_1c11554:
    // 0x1c11554: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11558: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11558u;
    SET_GPR_U32(ctx, 31, 0x1C11560u);
    ctx->pc = 0x1C1155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11558u;
    // 0x1c1155c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11558u, 0x1C11560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11560u;
label_1c11560:
    // 0x1c11560: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c11560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c11564: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c11564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c11568: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c11568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1156c: 0xc703ddc  jal         func_1C0F770
    ctx->pc = 0x1C1156Cu;
    SET_GPR_U32(ctx, 31, 0x1C11574u);
    ctx->pc = 0x1C11570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1156Cu;
    // 0x1c11570: 0x240500a6  addiu       $a1, $zero, 0xA6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F770u, 0x1C1156Cu, 0x1C11574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11574u;
label_1c11574:
    // 0x1c11574: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c11578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1157c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c1157cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c11580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11584: 0xc703dd0  jal         func_1C0F740
    ctx->pc = 0x1C11584u;
    SET_GPR_U32(ctx, 31, 0x1C1158Cu);
    ctx->pc = 0x1C11588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11584u;
    // 0x1c11588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F740u, 0x1C11584u, 0x1C1158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1158Cu;
label_1c1158c:
    // 0x1c1158c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1158cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11598: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1c11598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c1159c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1159cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c115a0: 0x8703dde  j           func_1C0F778
    ctx->pc = 0x1C115A0u;
    ctx->pc = 0x1C115A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C115A0u;
    // 0x1c115a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F778u;
    sub_01C0F778_0x1c0f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C115A8u;
}
