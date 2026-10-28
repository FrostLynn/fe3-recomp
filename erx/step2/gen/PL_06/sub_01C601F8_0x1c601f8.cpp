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

// Function: sub_01C601F8
// Address: 0x1c601f8 - 0x1c602d8
void sub_01C601F8_0x1c601f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C601F8_0x1c601f8");
#endif

    switch (ctx->pc) {
        case 0x1c6020cu: goto label_1c6020c;
        case 0x1c60220u: goto label_1c60220;
        case 0x1c60224u: goto label_1c60224;
        case 0x1c60240u: goto label_1c60240;
        case 0x1c6024cu: goto label_1c6024c;
        case 0x1c6027cu: goto label_1c6027c;
        case 0x1c602a8u: goto label_1c602a8;
        case 0x1c602b4u: goto label_1c602b4;
        default: break;
    }

    ctx->pc = 0x1c601f8u;

    // 0x1c601f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c601f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c601fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c601fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c60200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c60204: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C60204u;
    SET_GPR_U32(ctx, 31, 0x1C6020Cu);
    ctx->pc = 0x1C60208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60204u;
    // 0x1c60208: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C60204u, 0x1C6020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6020Cu;
label_1c6020c:
    // 0x1c6020c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6020cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60210: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60210u;
    {
        const bool branch_taken_0x1c60210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C60214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60210u;
        // 0x1c60214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60210) {
            ctx->pc = 0x1C60234u;
            goto label_1c60234;
        }
    }
    ctx->pc = 0x1C60218u;
    // 0x1c60218: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C60218u;
    SET_GPR_U32(ctx, 31, 0x1C60220u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C60218u, 0x1C60220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60220u;
label_1c60220:
    // 0x1c60220: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c60220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c60224:
    // 0x1c60224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60228: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c60228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6022c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6022Cu;
        // 0x1c60230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60234u;
label_1c60234:
    // 0x1c60234: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c60234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c60238: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60238u;
    SET_GPR_U32(ctx, 31, 0x1C60240u);
    ctx->pc = 0x1C6023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60238u;
    // 0x1c6023c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60238u, 0x1C60240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60240u;
label_1c60240:
    // 0x1c60240: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c60240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c60244: 0xc717d64  jal         func_1C5F590
    ctx->pc = 0x1C60244u;
    SET_GPR_U32(ctx, 31, 0x1C6024Cu);
    ctx->pc = 0x1C60248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60244u;
    // 0x1c60248: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F590u, 0x1C60244u, 0x1C6024Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6024Cu;
label_1c6024c:
    // 0x1c6024c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C6024Cu;
    {
        const bool branch_taken_0x1c6024c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6024Cu;
        // 0x1c60250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6024c) {
            ctx->pc = 0x1C60224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60224;
        }
    }
    ctx->pc = 0x1C60254u;
    // 0x1c60254: 0x0  nop
    ctx->pc = 0x1c60254u;
    // NOP
    // 0x1c60258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c60258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6025c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6025cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c60260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c60264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c60268: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c60268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6026c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6026cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60270: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c60270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c60274: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60274u;
    SET_GPR_U32(ctx, 31, 0x1C6027Cu);
    ctx->pc = 0x1C60278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60274u;
    // 0x1c60278: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60274u, 0x1C6027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6027Cu;
label_1c6027c:
    // 0x1c6027c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c6027cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c60280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c60280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60284: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c60284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60288: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c60288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6028c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6028cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c60290: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c60290u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60294: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c60294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c60298: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c60298u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6029c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6029cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c602a0: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C602A0u;
    SET_GPR_U32(ctx, 31, 0x1C602A8u);
    ctx->pc = 0x1C602A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C602A0u;
    // 0x1c602a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C602A0u, 0x1C602A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C602A8u;
label_1c602a8:
    // 0x1c602a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c602a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c602ac: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C602ACu;
    SET_GPR_U32(ctx, 31, 0x1C602B4u);
    ctx->pc = 0x1C602B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C602ACu;
    // 0x1c602b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C602ACu, 0x1C602B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C602B4u;
label_1c602b4:
    // 0x1c602b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c602b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c602b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c602b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c602bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c602bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c602c0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c602c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c602c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c602c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c602c8: 0x8717d66  j           func_1C5F598
    ctx->pc = 0x1C602C8u;
    ctx->pc = 0x1C602CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C602C8u;
    // 0x1c602cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F598u;
    sub_01C5F598_0x1c5f598(rdram, ctx, runtime); return;
    ctx->pc = 0x1C602D0u;
    // 0x1c602d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C602D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C602D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C602D8u;
}
