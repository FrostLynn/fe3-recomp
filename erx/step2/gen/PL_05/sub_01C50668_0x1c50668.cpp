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

// Function: sub_01C50668
// Address: 0x1c50668 - 0x1c50748
void sub_01C50668_0x1c50668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50668_0x1c50668");
#endif

    switch (ctx->pc) {
        case 0x1c5067cu: goto label_1c5067c;
        case 0x1c50690u: goto label_1c50690;
        case 0x1c50694u: goto label_1c50694;
        case 0x1c506b0u: goto label_1c506b0;
        case 0x1c506bcu: goto label_1c506bc;
        case 0x1c506ecu: goto label_1c506ec;
        case 0x1c50718u: goto label_1c50718;
        case 0x1c50724u: goto label_1c50724;
        default: break;
    }

    ctx->pc = 0x1c50668u;

    // 0x1c50668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c50668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5066c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50670: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c50670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c50674: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C50674u;
    SET_GPR_U32(ctx, 31, 0x1C5067Cu);
    ctx->pc = 0x1C50678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50674u;
    // 0x1c50678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C50674u, 0x1C5067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5067Cu;
label_1c5067c:
    // 0x1c5067c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c5067cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50680: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C50680u;
    {
        const bool branch_taken_0x1c50680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C50684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50680u;
        // 0x1c50684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50680) {
            ctx->pc = 0x1C506A4u;
            goto label_1c506a4;
        }
    }
    ctx->pc = 0x1C50688u;
    // 0x1c50688: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C50688u;
    SET_GPR_U32(ctx, 31, 0x1C50690u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C50688u, 0x1C50690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50690u;
label_1c50690:
    // 0x1c50690: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c50690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c50694:
    // 0x1c50694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c50698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5069c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5069Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C506A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5069Cu;
        // 0x1c506a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5069Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C506A4u;
label_1c506a4:
    // 0x1c506a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c506a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c506a8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C506A8u;
    SET_GPR_U32(ctx, 31, 0x1C506B0u);
    ctx->pc = 0x1C506ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C506A8u;
    // 0x1c506ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C506A8u, 0x1C506B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C506B0u;
label_1c506b0:
    // 0x1c506b0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c506b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c506b4: 0xc713e70  jal         func_1C4F9C0
    ctx->pc = 0x1C506B4u;
    SET_GPR_U32(ctx, 31, 0x1C506BCu);
    ctx->pc = 0x1C506B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C506B4u;
    // 0x1c506b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9C0u, 0x1C506B4u, 0x1C506BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C506BCu;
label_1c506bc:
    // 0x1c506bc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C506BCu;
    {
        const bool branch_taken_0x1c506bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C506C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C506BCu;
        // 0x1c506c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c506bc) {
            ctx->pc = 0x1C50694u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50694;
        }
    }
    ctx->pc = 0x1C506C4u;
    // 0x1c506c4: 0x0  nop
    ctx->pc = 0x1c506c4u;
    // NOP
    // 0x1c506c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c506c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c506cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c506ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c506d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c506d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c506d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c506d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c506d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c506d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c506dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c506dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c506e0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c506e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c506e4: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C506E4u;
    SET_GPR_U32(ctx, 31, 0x1C506ECu);
    ctx->pc = 0x1C506E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C506E4u;
    // 0x1c506e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C506E4u, 0x1C506ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C506ECu;
label_1c506ec:
    // 0x1c506ec: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c506ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c506f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c506f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c506f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c506f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c506f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c506f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c506fc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c506fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c50700: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c50700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50704: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c50704u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c50708: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c50708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5070c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c5070cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c50710: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C50710u;
    SET_GPR_U32(ctx, 31, 0x1C50718u);
    ctx->pc = 0x1C50714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50710u;
    // 0x1c50714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C50710u, 0x1C50718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50718u;
label_1c50718:
    // 0x1c50718: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c50718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c5071c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5071Cu;
    SET_GPR_U32(ctx, 31, 0x1C50724u);
    ctx->pc = 0x1C50720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5071Cu;
    // 0x1c50720: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5071Cu, 0x1C50724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50724u;
label_1c50724:
    // 0x1c50724: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c50724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5072c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5072cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50730: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c50730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c50734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c50734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50738: 0x8713e72  j           func_1C4F9C8
    ctx->pc = 0x1C50738u;
    ctx->pc = 0x1C5073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50738u;
    // 0x1c5073c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C8u;
    sub_01C4F9C8_0x1c4f9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C50740u;
    // 0x1c50740: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50748u;
}
