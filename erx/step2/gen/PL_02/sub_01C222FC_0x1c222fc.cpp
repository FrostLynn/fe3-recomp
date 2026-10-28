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

// Function: sub_01C222FC
// Address: 0x1c222fc - 0x1c223a8
void sub_01C222FC_0x1c222fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C222FC_0x1c222fc");
#endif

    switch (ctx->pc) {
        case 0x1c2230cu: goto label_1c2230c;
        case 0x1c2231cu: goto label_1c2231c;
        case 0x1c2232cu: goto label_1c2232c;
        case 0x1c2233cu: goto label_1c2233c;
        case 0x1c2234cu: goto label_1c2234c;
        case 0x1c22374u: goto label_1c22374;
        case 0x1c22380u: goto label_1c22380;
        default: break;
    }

    ctx->pc = 0x1c222fcu;

    // 0x1c222fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c222fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22304: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C22304u;
    {
        const bool branch_taken_0x1c22304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22304u;
        // 0x1c22308: 0x240601dc  addiu       $a2, $zero, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22304) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2230Cu;
label_1c2230c:
    // 0x1c2230c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2230cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22314: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x1C22314u;
    {
        const bool branch_taken_0x1c22314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22314u;
        // 0x1c22318: 0x240601dd  addiu       $a2, $zero, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22314) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2231Cu;
label_1c2231c:
    // 0x1c2231c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22324: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1C22324u;
    {
        const bool branch_taken_0x1c22324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22324u;
        // 0x1c22328: 0x240601de  addiu       $a2, $zero, 0x1DE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 478));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22324) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2232Cu;
label_1c2232c:
    // 0x1c2232c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22334: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x1C22334u;
    {
        const bool branch_taken_0x1c22334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22334u;
        // 0x1c22338: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22334) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2233Cu;
label_1c2233c:
    // 0x1c2233c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22344: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x1C22344u;
    {
        const bool branch_taken_0x1c22344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22344u;
        // 0x1c22348: 0x240601df  addiu       $a2, $zero, 0x1DF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 479));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22344) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2234Cu;
label_1c2234c:
    // 0x1c2234c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c22350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22354: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x1C22354u;
    {
        const bool branch_taken_0x1c22354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C22358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22354u;
        // 0x1c22358: 0x240601e0  addiu       $a2, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c22354) {
            ctx->pc = 0x1C22248u;
            return;
        }
    }
    ctx->pc = 0x1C2235Cu;
    // 0x1c2235c: 0x0  nop
    ctx->pc = 0x1c2235cu;
    // NOP
    // 0x1c22360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c22360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c22364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c22364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c22368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c22368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c2236c: 0xc707c64  jal         func_1C1F190
    ctx->pc = 0x1C2236Cu;
    SET_GPR_U32(ctx, 31, 0x1C22374u);
    ctx->pc = 0x1C22370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2236Cu;
    // 0x1c22370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F190u, 0x1C2236Cu, 0x1C22374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22374u;
label_1c22374:
    // 0x1c22374: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c22374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c22378: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C22378u;
    SET_GPR_U32(ctx, 31, 0x1C22380u);
    ctx->pc = 0x1C2237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22378u;
    // 0x1c2237c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C22378u, 0x1C22380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C22380u;
label_1c22380:
    // 0x1c22380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c22380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c22384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c22384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c22388: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c22388u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2238c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2238cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c22390: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c22390u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c22394: 0x8707f12  j           func_1C1FC48
    ctx->pc = 0x1C22394u;
    ctx->pc = 0x1C22398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C22394u;
    // 0x1c22398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC48u;
    sub_01C1FC48_0x1c1fc48(rdram, ctx, runtime); return;
    ctx->pc = 0x1C2239Cu;
    // 0x1c2239c: 0x0  nop
    ctx->pc = 0x1c2239cu;
    // NOP
    // 0x1c223a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C223A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C223A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C223A8u;
}
