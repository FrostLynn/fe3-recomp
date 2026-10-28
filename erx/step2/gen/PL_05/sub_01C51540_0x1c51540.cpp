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

// Function: sub_01C51540
// Address: 0x1c51540 - 0x1c51640
void sub_01C51540_0x1c51540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51540_0x1c51540");
#endif

    switch (ctx->pc) {
        case 0x1c5155cu: goto label_1c5155c;
        case 0x1c51564u: goto label_1c51564;
        case 0x1c51578u: goto label_1c51578;
        case 0x1c5157cu: goto label_1c5157c;
        case 0x1c515b8u: goto label_1c515b8;
        case 0x1c515e4u: goto label_1c515e4;
        case 0x1c515f0u: goto label_1c515f0;
        case 0x1c515fcu: goto label_1c515fc;
        case 0x1c51610u: goto label_1c51610;
        case 0x1c51620u: goto label_1c51620;
        default: break;
    }

    ctx->pc = 0x1c51540u;

    // 0x1c51540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51544: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c51544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c51548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c5154c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5154cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51554: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C51554u;
    SET_GPR_U32(ctx, 31, 0x1C5155Cu);
    ctx->pc = 0x1C51558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51554u;
    // 0x1c51558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C51554u, 0x1C5155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5155Cu;
label_1c5155c:
    // 0x1c5155c: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C5155Cu;
    SET_GPR_U32(ctx, 31, 0x1C51564u);
    ctx->pc = 0x1C51560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5155Cu;
    // 0x1c51560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C5155Cu, 0x1C51564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51564u;
label_1c51564:
    // 0x1c51564: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51568: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51568u;
    {
        const bool branch_taken_0x1c51568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C5156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51568u;
        // 0x1c5156c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51568) {
            ctx->pc = 0x1C5158Cu;
            goto label_1c5158c;
        }
    }
    ctx->pc = 0x1C51570u;
    // 0x1c51570: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51570u;
    SET_GPR_U32(ctx, 31, 0x1C51578u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51570u, 0x1C51578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51578u;
label_1c51578:
    // 0x1c51578: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c51578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c5157c:
    // 0x1c5157c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5157cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51584: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51584u;
        // 0x1c51588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5158Cu;
label_1c5158c:
    // 0x1c5158c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C5158Cu;
    {
        const bool branch_taken_0x1c5158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5158Cu;
        // 0x1c51590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5158c) {
            ctx->pc = 0x1C5157Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5157c;
        }
    }
    ctx->pc = 0x1C51594u;
    // 0x1c51594: 0x0  nop
    ctx->pc = 0x1c51594u;
    // NOP
    // 0x1c51598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5159c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c515a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c515a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c515a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c515a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c515a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c515a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c515acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c515b0: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C515B0u;
    SET_GPR_U32(ctx, 31, 0x1C515B8u);
    ctx->pc = 0x1C515B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515B0u;
    // 0x1c515b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C515B0u, 0x1C515B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C515B8u;
label_1c515b8:
    // 0x1c515b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c515b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c515bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c515bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c515c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c515c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515c4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c515c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c515c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c515c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c515ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c515d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c515d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c515d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c515d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515dc: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C515DCu;
    SET_GPR_U32(ctx, 31, 0x1C515E4u);
    ctx->pc = 0x1C515E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515DCu;
    // 0x1c515e0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C515DCu, 0x1C515E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C515E4u;
label_1c515e4:
    // 0x1c515e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c515e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c515e8: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C515E8u;
    SET_GPR_U32(ctx, 31, 0x1C515F0u);
    ctx->pc = 0x1C515ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515E8u;
    // 0x1c515ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C515E8u, 0x1C515F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C515F0u;
label_1c515f0:
    // 0x1c515f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c515f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c515f4: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C515F4u;
    SET_GPR_U32(ctx, 31, 0x1C515FCu);
    ctx->pc = 0x1C515F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C515F4u;
    // 0x1c515f8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C515F4u, 0x1C515FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C515FCu;
label_1c515fc:
    // 0x1c515fc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c515fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c51600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c51600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51604: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c51604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c51608: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C51608u;
    SET_GPR_U32(ctx, 31, 0x1C51610u);
    ctx->pc = 0x1C5160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51608u;
    // 0x1c5160c: 0x240500b1  addiu       $a1, $zero, 0xB1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C51608u, 0x1C51610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51610u;
label_1c51610:
    // 0x1c51610: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c51610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c51614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51618: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C51618u;
    SET_GPR_U32(ctx, 31, 0x1C51620u);
    ctx->pc = 0x1C5161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51618u;
    // 0x1c5161c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C51618u, 0x1C51620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51620u;
label_1c51620:
    // 0x1c51620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5162c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1c5162cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c51630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c51630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51634: 0x8713e6a  j           func_1C4F9A8
    ctx->pc = 0x1C51634u;
    ctx->pc = 0x1C51638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51634u;
    // 0x1c51638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A8u;
    sub_01C4F9A8_0x1c4f9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5163Cu;
    // 0x1c5163c: 0x0  nop
    ctx->pc = 0x1c5163cu;
    // NOP
    ctx->pc = 0x1c51640u;
}
