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

// Function: sub_01D00150
// Address: 0x1d00150 - 0x1d001e0
void sub_01D00150_0x1d00150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00150_0x1d00150");
#endif

    switch (ctx->pc) {
        case 0x1d00164u: goto label_1d00164;
        case 0x1d00190u: goto label_1d00190;
        case 0x1d001a0u: goto label_1d001a0;
        case 0x1d001a8u: goto label_1d001a8;
        default: break;
    }

    ctx->pc = 0x1d00150u;

    // 0x1d00150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d00150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d00154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d00154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d00158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d00158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0015c: 0xc73f50c  jal         func_1CFD430
    ctx->pc = 0x1D0015Cu;
    SET_GPR_U32(ctx, 31, 0x1D00164u);
    ctx->pc = 0x1D00160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0015Cu;
    // 0x1d00160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD430u, 0x1D0015Cu, 0x1D00164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00164u;
label_1d00164:
    // 0x1d00164: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d00164u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d00168: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d00168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0016c: 0x25efbc88  addiu       $t7, $t7, -0x4378
    ctx->pc = 0x1d0016cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950024));
    // 0x1d00170: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d00170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d00174: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d00174u;
    { uint32_t bits = FAST_READ32(0x1D0BC88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d00178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d00178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0017c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0017cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d00180: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d00180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d00184: 0x24840500  addiu       $a0, $a0, 0x500
    ctx->pc = 0x1d00184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    // 0x1d00188: 0xc73f74a  jal         func_1CFDD28
    ctx->pc = 0x1D00188u;
    SET_GPR_U32(ctx, 31, 0x1D00190u);
    ctx->pc = 0x1D0018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00188u;
    // 0x1d0018c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD28u, 0x1D00188u, 0x1D00190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00190u;
label_1d00190:
    // 0x1d00190: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d00190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d00194: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d00194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d00198: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1D00198u;
    SET_GPR_U32(ctx, 31, 0x1D001A0u);
    ctx->pc = 0x1D0019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00198u;
    // 0x1d0019c: 0xaf8080ac  sw          $zero, -0x7F54($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1D00198u, 0x1D001A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D001A0u;
label_1d001a0:
    // 0x1d001a0: 0xc73f750  jal         func_1CFDD40
    ctx->pc = 0x1D001A0u;
    SET_GPR_U32(ctx, 31, 0x1D001A8u);
    ctx->pc = 0x1D001A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D001A0u;
    // 0x1d001a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD40u, 0x1D001A0u, 0x1D001A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D001A8u;
label_1d001a8:
    // 0x1d001a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D001A8u;
    {
        const bool branch_taken_0x1d001a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d001a8) {
            ctx->pc = 0x1D001ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D001A8u;
            // 0x1d001ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D001D0u;
            goto label_1d001d0;
        }
    }
    ctx->pc = 0x1D001B0u;
    // 0x1d001b0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d001b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d001b4: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D001B4u;
    {
        const bool branch_taken_0x1d001b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d001b4) {
            ctx->pc = 0x1D001B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D001B4u;
            // 0x1d001b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D001D0u;
            goto label_1d001d0;
        }
    }
    ctx->pc = 0x1D001BCu;
    // 0x1d001bc: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1d001bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1d001c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d001c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d001c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d001c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d001c8: 0x873f754  j           func_1CFDD50
    ctx->pc = 0x1D001C8u;
    ctx->pc = 0x1D001CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D001C8u;
    // 0x1d001cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD50u;
    sub_01CFDD50_0x1cfdd50(rdram, ctx, runtime); return;
    ctx->pc = 0x1D001D0u;
label_1d001d0:
    // 0x1d001d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d001d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d001d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D001D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D001D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D001D4u;
        // 0x1d001d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D001D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D001DCu;
    // 0x1d001dc: 0x0  nop
    ctx->pc = 0x1d001dcu;
    // NOP
    ctx->pc = 0x1d001e0u;
}
