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

// Function: sub_01C432C0
// Address: 0x1c432c0 - 0x1c43338
void sub_01C432C0_0x1c432c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C432C0_0x1c432c0");
#endif

    switch (ctx->pc) {
        case 0x1c432ecu: goto label_1c432ec;
        case 0x1c432f8u: goto label_1c432f8;
        case 0x1c43308u: goto label_1c43308;
        case 0x1c43320u: goto label_1c43320;
        default: break;
    }

    ctx->pc = 0x1c432c0u;

    // 0x1c432c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c432c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c432c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c432c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c432c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c432c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c432cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c432ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c432d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c432d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c432d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c432d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c432dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c432e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c432e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432e4: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C432E4u;
    SET_GPR_U32(ctx, 31, 0x1C432ECu);
    ctx->pc = 0x1C432E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C432E4u;
    // 0x1c432e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C432E4u, 0x1C432ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C432ECu;
label_1c432ec:
    // 0x1c432ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c432ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c432f0: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C432F0u;
    SET_GPR_U32(ctx, 31, 0x1C432F8u);
    ctx->pc = 0x1C432F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C432F0u;
    // 0x1c432f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C432F0u, 0x1C432F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C432F8u;
label_1c432f8:
    // 0x1c432f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c432f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c432fc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c432fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c43300: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43300u;
    SET_GPR_U32(ctx, 31, 0x1C43308u);
    ctx->pc = 0x1C43304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43300u;
    // 0x1c43304: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43300u, 0x1C43308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43308u;
label_1c43308:
    // 0x1c43308: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c43308u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4330c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c4330cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c43310: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c43310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c43314: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c43314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c43318: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43318u;
    SET_GPR_U32(ctx, 31, 0x1C43320u);
    ctx->pc = 0x1C4331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43318u;
    // 0x1c4331c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43318u, 0x1C43320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43320u;
label_1c43320:
    // 0x1c43320: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c43320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c43324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43328: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4332c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4332Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4332Cu;
        // 0x1c43330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4332Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43334u;
    // 0x1c43334: 0x0  nop
    ctx->pc = 0x1c43334u;
    // NOP
    ctx->pc = 0x1c43338u;
}
