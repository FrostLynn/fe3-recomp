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

// Function: sub_01D1B4E8
// Address: 0x1d1b4e8 - 0x1d1b5e0
void sub_01D1B4E8_0x1d1b4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B4E8_0x1d1b4e8");
#endif

    switch (ctx->pc) {
        case 0x1d1b504u: goto label_1d1b504;
        case 0x1d1b530u: goto label_1d1b530;
        case 0x1d1b534u: goto label_1d1b534;
        case 0x1d1b53cu: goto label_1d1b53c;
        case 0x1d1b55cu: goto label_1d1b55c;
        case 0x1d1b590u: goto label_1d1b590;
        case 0x1d1b5a0u: goto label_1d1b5a0;
        case 0x1d1b5bcu: goto label_1d1b5bc;
        default: break;
    }

    ctx->pc = 0x1d1b4e8u;

    // 0x1d1b4e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b4ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1b4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d1b4f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1b4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b4f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1b4fc: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B4FCu;
    SET_GPR_U32(ctx, 31, 0x1D1B504u);
    ctx->pc = 0x1D1B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B4FCu;
    // 0x1d1b500: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B4FCu, 0x1D1B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B504u;
label_1d1b504:
    // 0x1d1b504: 0x8c4f0010  lw          $t7, 0x10($v0)
    ctx->pc = 0x1d1b504u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d1b508: 0x240601da  addiu       $a2, $zero, 0x1DA
    ctx->pc = 0x1d1b508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 474));
    // 0x1d1b50c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1b50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b510: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b510u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b514: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d1b514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1b518: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b520: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1B520u;
    {
        const bool branch_taken_0x1d1b520 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B520u;
        // 0x1d1b524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b520) {
            ctx->pc = 0x1D1B554u;
            goto label_1d1b554;
        }
    }
    ctx->pc = 0x1D1B528u;
    // 0x1d1b528: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B528u;
    SET_GPR_U32(ctx, 31, 0x1D1B530u);
    ctx->pc = 0x1D1B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B528u;
    // 0x1d1b52c: 0x240601d8  addiu       $a2, $zero, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B528u, 0x1D1B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B530u;
label_1d1b530:
    // 0x1d1b530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b534:
    // 0x1d1b534: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1B534u;
    SET_GPR_U32(ctx, 31, 0x1D1B53Cu);
    ctx->pc = 0x1D1B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B534u;
    // 0x1d1b538: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1B534u, 0x1D1B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B53Cu;
label_1d1b53c:
    // 0x1d1b53c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d1b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d1b540: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1b540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1b544: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1b544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1b548: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d1b548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b54c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B54Cu;
        // 0x1d1b550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B554u;
label_1d1b554:
    // 0x1d1b554: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B554u;
    SET_GPR_U32(ctx, 31, 0x1D1B55Cu);
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B554u, 0x1D1B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B55Cu;
label_1d1b55c:
    // 0x1d1b55c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1b55cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b560: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b564: 0x25ef6af8  addiu       $t7, $t7, 0x6AF8
    ctx->pc = 0x1d1b564u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27384));
    // 0x1d1b568: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1b568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1b56c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d1b56cu;
    { uint32_t bits = FAST_READ32(0x1D26AF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1b570: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d1b570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d1b574: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1b574u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b578: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d1b578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d1b57c: 0x25ef6afc  addiu       $t7, $t7, 0x6AFC
    ctx->pc = 0x1d1b57cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27388));
    // 0x1d1b580: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d1b580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d1b584: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1d1b584u;
    { uint32_t bits = FAST_READ32(0x1D26AFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1b588: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B588u;
    SET_GPR_U32(ctx, 31, 0x1D1B590u);
    ctx->pc = 0x1D1B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B588u;
    // 0x1d1b58c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B588u, 0x1D1B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B590u;
label_1d1b590:
    // 0x1d1b590: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1d1b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1d1b594: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d1b594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b598: 0xc74640a  jal         func_1D19028
    ctx->pc = 0x1D1B598u;
    SET_GPR_U32(ctx, 31, 0x1D1B5A0u);
    ctx->pc = 0x1D1B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B598u;
    // 0x1d1b59c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19028u, 0x1D1B598u, 0x1D1B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B5A0u;
label_1d1b5a0:
    // 0x1d1b5a0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D1B5A0u;
    {
        const bool branch_taken_0x1d1b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B5A0u;
        // 0x1d1b5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b5a0) {
            ctx->pc = 0x1D1B534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b534;
        }
    }
    ctx->pc = 0x1D1B5A8u;
    // 0x1d1b5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b5ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b5b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1b5b4: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B5B4u;
    SET_GPR_U32(ctx, 31, 0x1D1B5BCu);
    ctx->pc = 0x1D1B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B5B4u;
    // 0x1d1b5b8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B5B4u, 0x1D1B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B5BCu;
label_1d1b5bc:
    // 0x1d1b5bc: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1d1b5bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1d1b5c0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1B5C0u;
    {
        const bool branch_taken_0x1d1b5c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B5C0u;
        // 0x1d1b5c4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b5c0) {
            ctx->pc = 0x1D1B5D4u;
            goto label_1d1b5d4;
        }
    }
    ctx->pc = 0x1D1B5C8u;
    // 0x1d1b5c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b5cc: 0x8746432  j           func_1D190C8
    ctx->pc = 0x1D1B5CCu;
    ctx->pc = 0x1D1B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B5CCu;
    // 0x1d1b5d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190C8u;
    sub_01D190C8_0x1d190c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B5D4u;
label_1d1b5d4:
    // 0x1d1b5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B5D8u;
        // 0x1d1b5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B5E0u;
}
