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

// Function: sub_01C51418
// Address: 0x1c51418 - 0x1c51518
void sub_01C51418_0x1c51418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51418_0x1c51418");
#endif

    switch (ctx->pc) {
        case 0x1c51434u: goto label_1c51434;
        case 0x1c5143cu: goto label_1c5143c;
        case 0x1c51450u: goto label_1c51450;
        case 0x1c51454u: goto label_1c51454;
        case 0x1c51490u: goto label_1c51490;
        case 0x1c514bcu: goto label_1c514bc;
        case 0x1c514c8u: goto label_1c514c8;
        case 0x1c514d4u: goto label_1c514d4;
        case 0x1c514e8u: goto label_1c514e8;
        case 0x1c514f8u: goto label_1c514f8;
        default: break;
    }

    ctx->pc = 0x1c51418u;

    // 0x1c51418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5141c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5141cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c51420: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c51424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51428: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5142c: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C5142Cu;
    SET_GPR_U32(ctx, 31, 0x1C51434u);
    ctx->pc = 0x1C51430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5142Cu;
    // 0x1c51430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C5142Cu, 0x1C51434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51434u;
label_1c51434:
    // 0x1c51434: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51434u;
    SET_GPR_U32(ctx, 31, 0x1C5143Cu);
    ctx->pc = 0x1C51438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51434u;
    // 0x1c51438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51434u, 0x1C5143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5143Cu;
label_1c5143c:
    // 0x1c5143c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c5143cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51440: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51440u;
    {
        const bool branch_taken_0x1c51440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C51444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51440u;
        // 0x1c51444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51440) {
            ctx->pc = 0x1C51464u;
            goto label_1c51464;
        }
    }
    ctx->pc = 0x1C51448u;
    // 0x1c51448: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51448u;
    SET_GPR_U32(ctx, 31, 0x1C51450u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51448u, 0x1C51450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51450u;
label_1c51450:
    // 0x1c51450: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c51450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c51454:
    // 0x1c51454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5145c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5145Cu;
        // 0x1c51460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51464u;
label_1c51464:
    // 0x1c51464: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C51464u;
    {
        const bool branch_taken_0x1c51464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51464u;
        // 0x1c51468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51464) {
            ctx->pc = 0x1C51454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51454;
        }
    }
    ctx->pc = 0x1C5146Cu;
    // 0x1c5146c: 0x0  nop
    ctx->pc = 0x1c5146cu;
    // NOP
    // 0x1c51470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51474: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c51478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5147c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5147cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c51480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51484: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c51484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51488: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C51488u;
    SET_GPR_U32(ctx, 31, 0x1C51490u);
    ctx->pc = 0x1C5148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51488u;
    // 0x1c5148c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C51488u, 0x1C51490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51490u;
label_1c51490:
    // 0x1c51490: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c51490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c51494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51498: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51498u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5149c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c5149cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c514a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c514a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c514a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c514a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c514ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c514acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c514b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514b4: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C514B4u;
    SET_GPR_U32(ctx, 31, 0x1C514BCu);
    ctx->pc = 0x1C514B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C514B4u;
    // 0x1c514b8: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C514B4u, 0x1C514BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C514BCu;
label_1c514bc:
    // 0x1c514bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c514bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514c0: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C514C0u;
    SET_GPR_U32(ctx, 31, 0x1C514C8u);
    ctx->pc = 0x1C514C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C514C0u;
    // 0x1c514c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C514C0u, 0x1C514C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C514C8u;
label_1c514c8:
    // 0x1c514c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c514c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c514cc: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C514CCu;
    SET_GPR_U32(ctx, 31, 0x1C514D4u);
    ctx->pc = 0x1C514D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C514CCu;
    // 0x1c514d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C514CCu, 0x1C514D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C514D4u;
label_1c514d4:
    // 0x1c514d4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c514d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c514d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c514d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c514dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c514e0: 0xc713e68  jal         func_1C4F9A0
    ctx->pc = 0x1C514E0u;
    SET_GPR_U32(ctx, 31, 0x1C514E8u);
    ctx->pc = 0x1C514E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C514E0u;
    // 0x1c514e4: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9A0u, 0x1C514E0u, 0x1C514E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C514E8u;
label_1c514e8:
    // 0x1c514e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c514e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c514ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c514ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514f0: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C514F0u;
    SET_GPR_U32(ctx, 31, 0x1C514F8u);
    ctx->pc = 0x1C514F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C514F0u;
    // 0x1c514f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C514F0u, 0x1C514F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C514F8u;
label_1c514f8:
    // 0x1c514f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c514f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c514fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c514fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51504: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1c51504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1c51508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c51508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5150c: 0x8713e6a  j           func_1C4F9A8
    ctx->pc = 0x1C5150Cu;
    ctx->pc = 0x1C51510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5150Cu;
    // 0x1c51510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9A8u;
    sub_01C4F9A8_0x1c4f9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C51514u;
    // 0x1c51514: 0x0  nop
    ctx->pc = 0x1c51514u;
    // NOP
    ctx->pc = 0x1c51518u;
}
