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

// Function: sub_01D945C8
// Address: 0x1d945c8 - 0x1d946c8
void sub_01D945C8_0x1d945c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D945C8_0x1d945c8");
#endif

    switch (ctx->pc) {
        case 0x1d945e4u: goto label_1d945e4;
        case 0x1d945ecu: goto label_1d945ec;
        case 0x1d94600u: goto label_1d94600;
        case 0x1d94604u: goto label_1d94604;
        case 0x1d94640u: goto label_1d94640;
        case 0x1d94668u: goto label_1d94668;
        case 0x1d94674u: goto label_1d94674;
        case 0x1d94680u: goto label_1d94680;
        case 0x1d94694u: goto label_1d94694;
        case 0x1d946acu: goto label_1d946ac;
        default: break;
    }

    ctx->pc = 0x1d945c8u;

    // 0x1d945c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d945c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d945cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d945ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d945d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d945d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d945d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d945d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d945d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d945d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d945dc: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D945DCu;
    SET_GPR_U32(ctx, 31, 0x1D945E4u);
    ctx->pc = 0x1D945E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D945DCu;
    // 0x1d945e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D945DCu, 0x1D945E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D945E4u;
label_1d945e4:
    // 0x1d945e4: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D945E4u;
    SET_GPR_U32(ctx, 31, 0x1D945ECu);
    ctx->pc = 0x1D945E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D945E4u;
    // 0x1d945e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D945E4u, 0x1D945ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D945ECu;
label_1d945ec:
    // 0x1d945ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d945ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d945f0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D945F0u;
    {
        const bool branch_taken_0x1d945f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D945F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945F0u;
        // 0x1d945f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d945f0) {
            ctx->pc = 0x1D94614u;
            goto label_1d94614;
        }
    }
    ctx->pc = 0x1D945F8u;
    // 0x1d945f8: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D945F8u;
    SET_GPR_U32(ctx, 31, 0x1D94600u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D945F8u, 0x1D94600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94600u;
label_1d94600:
    // 0x1d94600: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d94600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d94604:
    // 0x1d94604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9460c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9460Cu;
        // 0x1d94610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94614u;
label_1d94614:
    // 0x1d94614: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D94614u;
    {
        const bool branch_taken_0x1d94614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94614u;
        // 0x1d94618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94614) {
            ctx->pc = 0x1D94604u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d94604;
        }
    }
    ctx->pc = 0x1D9461Cu;
    // 0x1d9461c: 0x0  nop
    ctx->pc = 0x1d9461cu;
    // NOP
    // 0x1d94620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9462c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94634: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d94634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94638: 0xc764a18  jal         func_1D92860
    ctx->pc = 0x1D94638u;
    SET_GPR_U32(ctx, 31, 0x1D94640u);
    ctx->pc = 0x1D9463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94638u;
    // 0x1d9463c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92860u, 0x1D94638u, 0x1D94640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94640u;
label_1d94640:
    // 0x1d94640: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d94640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d94644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d94644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94648: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9464c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9464cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94650: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94654: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94658: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d94658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9465c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94660: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94660u;
    SET_GPR_U32(ctx, 31, 0x1D94668u);
    ctx->pc = 0x1D94664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94660u;
    // 0x1d94664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94660u, 0x1D94668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94668u;
label_1d94668:
    // 0x1d94668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9466c: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D9466Cu;
    SET_GPR_U32(ctx, 31, 0x1D94674u);
    ctx->pc = 0x1D94670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9466Cu;
    // 0x1d94670: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D9466Cu, 0x1D94674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94674u;
label_1d94674:
    // 0x1d94674: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d94674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94678: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94678u;
    SET_GPR_U32(ctx, 31, 0x1D94680u);
    ctx->pc = 0x1D9467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94678u;
    // 0x1d9467c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94678u, 0x1D94680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94680u;
label_1d94680:
    // 0x1d94680: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d94680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d94684: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d94684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d94688: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d94688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9468c: 0xc764a1c  jal         func_1D92870
    ctx->pc = 0x1D9468Cu;
    SET_GPR_U32(ctx, 31, 0x1D94694u);
    ctx->pc = 0x1D94690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9468Cu;
    // 0x1d94690: 0x2405010b  addiu       $a1, $zero, 0x10B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92870u, 0x1D9468Cu, 0x1D94694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94694u;
label_1d94694:
    // 0x1d94694: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d94694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d94698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9469c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d9469cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d946a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d946a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d946a4: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D946A4u;
    SET_GPR_U32(ctx, 31, 0x1D946ACu);
    ctx->pc = 0x1D946A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D946A4u;
    // 0x1d946a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D946A4u, 0x1D946ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D946ACu;
label_1d946ac:
    // 0x1d946ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d946acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d946b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d946b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d946b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d946b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d946b8: 0x240500a9  addiu       $a1, $zero, 0xA9
    ctx->pc = 0x1d946b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x1d946bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d946bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d946c0: 0x8764a1e  j           func_1D92878
    ctx->pc = 0x1D946C0u;
    ctx->pc = 0x1D946C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D946C0u;
    // 0x1d946c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92878u;
    sub_01D92878_0x1d92878(rdram, ctx, runtime); return;
    ctx->pc = 0x1D946C8u;
}
