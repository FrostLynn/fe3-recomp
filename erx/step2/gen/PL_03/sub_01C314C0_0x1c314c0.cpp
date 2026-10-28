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

// Function: sub_01C314C0
// Address: 0x1c314c0 - 0x1c315c0
void sub_01C314C0_0x1c314c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C314C0_0x1c314c0");
#endif

    switch (ctx->pc) {
        case 0x1c314dcu: goto label_1c314dc;
        case 0x1c314e4u: goto label_1c314e4;
        case 0x1c314f8u: goto label_1c314f8;
        case 0x1c314fcu: goto label_1c314fc;
        case 0x1c31538u: goto label_1c31538;
        case 0x1c31560u: goto label_1c31560;
        case 0x1c3156cu: goto label_1c3156c;
        case 0x1c31578u: goto label_1c31578;
        case 0x1c3158cu: goto label_1c3158c;
        case 0x1c315a4u: goto label_1c315a4;
        default: break;
    }

    ctx->pc = 0x1c314c0u;

    // 0x1c314c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c314c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c314c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c314c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c314c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c314c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c314cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c314ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c314d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c314d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c314d4: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C314D4u;
    SET_GPR_U32(ctx, 31, 0x1C314DCu);
    ctx->pc = 0x1C314D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C314D4u;
    // 0x1c314d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C314D4u, 0x1C314DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C314DCu;
label_1c314dc:
    // 0x1c314dc: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C314DCu;
    SET_GPR_U32(ctx, 31, 0x1C314E4u);
    ctx->pc = 0x1C314E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C314DCu;
    // 0x1c314e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C314DCu, 0x1C314E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C314E4u;
label_1c314e4:
    // 0x1c314e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c314e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c314e8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C314E8u;
    {
        const bool branch_taken_0x1c314e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C314ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C314E8u;
        // 0x1c314ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c314e8) {
            ctx->pc = 0x1C3150Cu;
            goto label_1c3150c;
        }
    }
    ctx->pc = 0x1C314F0u;
    // 0x1c314f0: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C314F0u;
    SET_GPR_U32(ctx, 31, 0x1C314F8u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C314F0u, 0x1C314F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C314F8u;
label_1c314f8:
    // 0x1c314f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c314f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c314fc:
    // 0x1c314fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c314fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31504: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31504u;
        // 0x1c31508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3150Cu;
label_1c3150c:
    // 0x1c3150c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3150Cu;
    {
        const bool branch_taken_0x1c3150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3150Cu;
        // 0x1c31510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3150c) {
            ctx->pc = 0x1C314FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c314fc;
        }
    }
    ctx->pc = 0x1C31514u;
    // 0x1c31514: 0x0  nop
    ctx->pc = 0x1c31514u;
    // NOP
    // 0x1c31518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3151c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c31520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c31524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c31524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c31528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3152c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c3152cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c31530: 0xc70bdd8  jal         func_1C2F760
    ctx->pc = 0x1C31530u;
    SET_GPR_U32(ctx, 31, 0x1C31538u);
    ctx->pc = 0x1C31534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31530u;
    // 0x1c31534: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F760u, 0x1C31530u, 0x1C31538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31538u;
label_1c31538:
    // 0x1c31538: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c31538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c3153c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3153cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31540: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c31540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31548: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c31548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3154c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c3154cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31550: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c31550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c31554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31558: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31558u;
    SET_GPR_U32(ctx, 31, 0x1C31560u);
    ctx->pc = 0x1C3155Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31558u;
    // 0x1c3155c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31558u, 0x1C31560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31560u;
label_1c31560:
    // 0x1c31560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31564: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31564u;
    SET_GPR_U32(ctx, 31, 0x1C3156Cu);
    ctx->pc = 0x1C31568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31564u;
    // 0x1c31568: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31564u, 0x1C3156Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3156Cu;
label_1c3156c:
    // 0x1c3156c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c3156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31570: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31570u;
    SET_GPR_U32(ctx, 31, 0x1C31578u);
    ctx->pc = 0x1C31574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31570u;
    // 0x1c31574: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31570u, 0x1C31578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31578u;
label_1c31578:
    // 0x1c31578: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c31578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c3157c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c3157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c31580: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c31580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c31584: 0xc70bddc  jal         func_1C2F770
    ctx->pc = 0x1C31584u;
    SET_GPR_U32(ctx, 31, 0x1C3158Cu);
    ctx->pc = 0x1C31588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31584u;
    // 0x1c31588: 0x240500ac  addiu       $a1, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F770u, 0x1C31584u, 0x1C3158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3158Cu;
label_1c3158c:
    // 0x1c3158c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c3158cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c31590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c31594: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c31594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c31598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3159c: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C3159Cu;
    SET_GPR_U32(ctx, 31, 0x1C315A4u);
    ctx->pc = 0x1C315A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3159Cu;
    // 0x1c315a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C3159Cu, 0x1C315A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C315A4u;
label_1c315a4:
    // 0x1c315a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c315a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c315a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c315a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c315ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c315acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c315b0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1c315b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1c315b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c315b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c315b8: 0x870bdde  j           func_1C2F778
    ctx->pc = 0x1C315B8u;
    ctx->pc = 0x1C315BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C315B8u;
    // 0x1c315bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F778u;
    sub_01C2F778_0x1c2f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C315C0u;
}
